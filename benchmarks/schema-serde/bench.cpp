// Temporary C2J vs schema-serde benchmark for DynamoDB (not part of the repo).
// Build twice: against the C2J install, and against the schema-serde install with -DSCHEMA_SERDE.
#include <aws/core/Aws.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/http/standard/StandardHttpRequest.h>
#include <aws/core/http/standard/StandardHttpResponse.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/dynamodb/DynamoDBClient.h>
#include <aws/dynamodb/model/GetItemRequest.h>
#include <aws/dynamodb/model/GetItemResult.h>
#include <aws/dynamodb/model/PutItemRequest.h>
#include <aws/dynamodb/model/QueryRequest.h>
#include <aws/dynamodb/model/QueryResult.h>
#ifdef SCHEMA_SERDE
#include <smithy/client/schema/ClientProtocol.h>
#endif

#include <sys/resource.h>
#include <algorithm>
#include <chrono>
#include <cstdio>
#include <fstream>
#include <functional>
#include <iostream>
#include <vector>

using namespace Aws::DynamoDB::Model;
using AttrMap = Aws::Map<Aws::String, AttributeValue>;

#ifdef SCHEMA_SERDE
static const char* MODE = "schema-serde";
#else
static const char* MODE = "c2j";
#endif

// ---------------- payloads (identical for both builds) ----------------
static std::shared_ptr<AttributeValue> P(const AttributeValue& v) { return Aws::MakeShared<AttributeValue>("b", v); }

static AttrMap ItemSmall() {
  AttrMap m;
  m["id"] = AttributeValue("user#0001");
  m["name"] = AttributeValue("Ada Lovelace");
  m["age"] = AttributeValue().SetN("36");
  m["active"] = AttributeValue().SetBool(true);
  m["tags"] = AttributeValue(Aws::Vector<Aws::String>{"admin", "beta", "eu"});
  return m;
}

static AttrMap ItemMedium() {  // 50 mixed attributes with nesting
  AttrMap m = ItemSmall();
  for (int i = 0; i < 20; ++i) m["s" + std::to_string(i)] = AttributeValue("value-" + std::to_string(i * 7919));
  for (int i = 0; i < 15; ++i) m["n" + std::to_string(i)] = AttributeValue().SetN(std::to_string(i * 3.25));
  AttributeValue addr;
  for (int i = 0; i < 10; ++i) addr.AddMEntry("k" + std::to_string(i), P(AttributeValue("v" + std::to_string(i))));
  m["address"] = addr;
  AttributeValue hist;
  for (int i = 0; i < 10; ++i) hist.AddLItem(P(AttributeValue().SetN(std::to_string(1000 + i))));
  m["history"] = hist;
  for (int i = 0; i < 8; ++i) m["b" + std::to_string(i)] = AttributeValue().SetBool(i % 2 == 0);
  return m;
}

static AttrMap ItemShallowMapL() {  // 1,000 string attributes (like the cross-SDK ShallowMap_L case)
  AttrMap m;
  m["id"] = AttributeValue("big#1");
  for (int i = 0; i < 1000; ++i) m["attr" + std::to_string(i)] = AttributeValue("v" + std::to_string(i * 31));
  return m;
}

static AttrMap ItemBinaryL() {  // 10 x 10 KiB blobs
  AttrMap m;
  m["id"] = AttributeValue("bin#1");
  Aws::Utils::ByteBuffer blob(10 * 1024);
  for (size_t i = 0; i < blob.GetLength(); ++i) blob[i] = static_cast<unsigned char>((i * 131) & 0xff);
  for (int i = 0; i < 10; ++i) m["blob" + std::to_string(i)] = AttributeValue().SetB(blob);
  return m;
}

// The wire JSON for an item, built with the legacy serializer once at startup (same bytes for both builds'
// deserialize benchmarks once dumped and reloaded; see main()).
static Aws::String ItemJson(const AttrMap& item) {
  Aws::Utils::Json::JsonValue obj;
  for (const auto& kv : item) obj.WithObject(kv.first, kv.second.Jsonize());
  return obj.View().WriteCompact();
}

// ---------------- timing ----------------
struct Stats { double meanNs, p50Ns, p99Ns; size_t n; };

static Stats Time(const std::function<void()>& fn, double seconds = 1.0, size_t maxIters = 200000) {
  for (int i = 0; i < 200; ++i) fn();  // warm-up
  std::vector<double> samples;
  samples.reserve(maxIters);
  const auto start = std::chrono::steady_clock::now();
  while (samples.size() < maxIters &&
         std::chrono::duration<double>(std::chrono::steady_clock::now() - start).count() < seconds) {
    const auto t0 = std::chrono::steady_clock::now();
    fn();
    const auto t1 = std::chrono::steady_clock::now();
    samples.push_back(std::chrono::duration<double, std::nano>(t1 - t0).count());
  }
  std::sort(samples.begin(), samples.end());
  double sum = 0;
  for (double s : samples) sum += s;
  return {sum / samples.size(), samples[samples.size() / 2], samples[std::min(samples.size() - 1, samples.size() * 99 / 100)],
          samples.size()};
}

static void Report(const char* group, const Aws::String& name, const Stats& s) {
  std::printf("%s\t%s\t%s\t%.0f\t%.0f\t%.0f\t%zu\n", MODE, group, name.c_str(), s.meanNs, s.p50Ns, s.p99Ns, s.n);
  std::fflush(stdout);
}

static volatile size_t g_sink = 0;

// ---------------- fake HTTP layer for end-to-end client calls ----------------
static Aws::String g_responseBody = "{}";

class CannedHttpClient : public Aws::Http::HttpClient {
 public:
  std::shared_ptr<Aws::Http::HttpResponse> MakeRequest(const std::shared_ptr<Aws::Http::HttpRequest>& request,
                                                       Aws::Utils::RateLimits::RateLimiterInterface*,
                                                       Aws::Utils::RateLimits::RateLimiterInterface*) const override {
    auto response = Aws::MakeShared<Aws::Http::Standard::StandardHttpResponse>("b", request);
    response->SetResponseCode(Aws::Http::HttpResponseCode::OK);
    response->AddHeader("x-amzn-requestid", "BENCHMARKREQUESTID");
    response->AddHeader("content-type", "application/x-amz-json-1.0");
    response->GetResponseBody() << g_responseBody;
    return response;
  }
};

class CannedHttpClientFactory : public Aws::Http::HttpClientFactory {
 public:
  std::shared_ptr<Aws::Http::HttpClient> CreateHttpClient(const Aws::Client::ClientConfiguration&) const override {
    return Aws::MakeShared<CannedHttpClient>("b");
  }
  std::shared_ptr<Aws::Http::HttpRequest> CreateHttpRequest(const Aws::String& uri, Aws::Http::HttpMethod method,
                                                            const Aws::IOStreamFactory& streamFactory) const override {
    return CreateHttpRequest(Aws::Http::URI(uri), method, streamFactory);
  }
  std::shared_ptr<Aws::Http::HttpRequest> CreateHttpRequest(const Aws::Http::URI& uri, Aws::Http::HttpMethod method,
                                                            const Aws::IOStreamFactory& streamFactory) const override {
    auto request = Aws::MakeShared<Aws::Http::Standard::StandardHttpRequest>("b", uri, method);
    request->SetResponseStreamFactory(streamFactory);
    return request;
  }
};

static double CpuSeconds() {
  rusage u{};
  getrusage(RUSAGE_SELF, &u);
  return u.ru_utime.tv_sec + u.ru_utime.tv_usec / 1e6 + u.ru_stime.tv_sec + u.ru_stime.tv_usec / 1e6;
}

int main(int argc, char** argv) {
  const Aws::String outDir = argc > 1 ? argv[1] : "/tmp/serde-bench-out";
  Aws::SDKOptions options;
  options.loggingOptions.logLevel = Aws::Utils::Logging::LogLevel::Off;
  Aws::InitAPI(options);
  {
    struct Case { Aws::String name; AttrMap item; };
    std::vector<Case> cases = {{"Item_S", ItemSmall()}, {"Item_M", ItemMedium()},
                               {"Item_ShallowMap_L", ItemShallowMapL()}, {"Item_Binary_L", ItemBinaryL()}};
    const Aws::Http::HeaderValueCollection headers{{"x-amzn-requestid", "BENCHMARKREQUESTID"},
                                                    {"content-type", "application/x-amz-json-1.0"}};
#ifdef SCHEMA_SERDE
    smithy::schema::AwsJson10Protocol protocol;
#endif
    const double cpu0 = CpuSeconds();

    for (const auto& c : cases) {
      PutItemRequest put;
      put.SetTableName("bench-table");
      put.SetItem(c.item);

      // Correctness sample: the request body each build sends, compared across builds afterwards.
#ifdef SCHEMA_SERDE
      auto parts = protocol.SerializeHttpRequest(put.GetSchemaSerdeContext(), *put.GetSchemaSerdeInput());
      const Aws::String sentBody = parts.IsSuccess() && parts.GetResult().body ? *parts.GetResult().body : "<error>";
#else
      const Aws::String sentBody = put.SerializePayload();
#endif
      std::ofstream(outDir + "/" + MODE + "-" + c.name + "-request.json") << sentBody;

      Report("serialize", "PutItem/" + c.name, Time([&] {
#ifdef SCHEMA_SERDE
        auto input = put.GetSchemaSerdeInput();
        auto out = protocol.SerializeHttpRequest(put.GetSchemaSerdeContext(), *input);
        g_sink += out.GetResult().body->size();
#else
        auto body = put.SerializePayload();
        g_sink += body.size();
#endif
        auto h = put.GetHeaders();
        g_sink += h.size();
      }));

      // Deserialize: GetItem response {"Item": {...}} and Query response with 100 copies.
      const Aws::String getBody = "{\"Item\":" + ItemJson(c.item) + "}";
      GetItemRequest getReq;
      getReq.SetTableName("bench-table");
      Report("deserialize", "GetItem/" + c.name, Time([&] {
#ifdef SCHEMA_SERDE
        Aws::AmazonWebServiceResult<Aws::String> wrap(getBody, headers, Aws::Http::HttpResponseCode::OK);
        GetItemResult r(wrap);
        protocol.DeserializeHttpResponse(getReq.GetSchemaSerdeContext(), 200, headers,
                                         Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(getBody.data()), getBody.size()),
                                         *r.GetSchemaSerdeOutput());
#else
        Aws::Utils::Json::JsonValue jv(getBody);
        Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue> wrap(std::move(jv), headers, Aws::Http::HttpResponseCode::OK);
        GetItemResult r(wrap);
#endif
        g_sink += r.GetItem().size();
      }));
      {  // correctness sample: attribute count after parsing
#ifdef SCHEMA_SERDE
        Aws::AmazonWebServiceResult<Aws::String> wrap(getBody, headers, Aws::Http::HttpResponseCode::OK);
        GetItemResult r(wrap);
        protocol.DeserializeHttpResponse(getReq.GetSchemaSerdeContext(), 200, headers,
                                         Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(getBody.data()), getBody.size()),
                                         *r.GetSchemaSerdeOutput());
#else
        GetItemResult r(Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>(Aws::Utils::Json::JsonValue(getBody), headers,
                                                                                    Aws::Http::HttpResponseCode::OK));
#endif
        std::ofstream(outDir + "/" + MODE + "-" + c.name + "-getitem-attrs.txt") << r.GetItem().size() << "\n";
      }
    }

    // Query with 100 medium items.
    {
      Aws::String body = "{\"Count\":100,\"ScannedCount\":100,\"Items\":[";
      const Aws::String one = ItemJson(ItemMedium());
      for (int i = 0; i < 100; ++i) body += (i ? "," : "") + one;
      body += "]}";
      QueryRequest q;
      q.SetTableName("bench-table");
      Report("deserialize", "Query/100xItem_M", Time([&] {
#ifdef SCHEMA_SERDE
        Aws::AmazonWebServiceResult<Aws::String> wrap(body, headers, Aws::Http::HttpResponseCode::OK);
        QueryResult r(wrap);
        protocol.DeserializeHttpResponse(q.GetSchemaSerdeContext(), 200, headers,
                                         Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(body.data()), body.size()),
                                         *r.GetSchemaSerdeOutput());
#else
        QueryResult r(Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>(Aws::Utils::Json::JsonValue(body), headers,
                                                                                 Aws::Http::HttpResponseCode::OK));
#endif
        g_sink += r.GetItems().size();
      }, 2.0));
    }
    const double serdeCpu = CpuSeconds() - cpu0;

    // End-to-end client calls (endpoint resolution, signing, serialize, canned "HTTP", deserialize).
    Aws::Http::SetHttpClientFactory(Aws::MakeShared<CannedHttpClientFactory>("b"));
    {
      Aws::DynamoDB::DynamoDBClientConfiguration cfg;
      cfg.region = "us-east-1";
      Aws::DynamoDB::DynamoDBClient client(Aws::Auth::AWSCredentials("AKIDEXAMPLE", "SECRET"), cfg);
      for (const auto& c : cases) {
        PutItemRequest put;
        put.SetTableName("bench-table");
        put.SetItem(c.item);
        g_responseBody = "{}";
        Report("e2e", "PutItem/" + c.name, Time([&] { g_sink += client.PutItem(put).IsSuccess(); }));
        g_responseBody = "{\"Item\":" + ItemJson(c.item) + "}";
        GetItemRequest get;
        get.SetTableName("bench-table");
        get.AddKey("id", AttributeValue("x"));
        Report("e2e", "GetItem/" + c.name, Time([&] {
          auto o = client.GetItem(get);
          g_sink += o.IsSuccess() ? o.GetResult().GetItem().size() : 0;
        }));
      }
    }
    std::printf("%s\tcpu\tserde-section-cpu-seconds\t%.2f\t\t\t\n", MODE, serdeCpu);
  }
  Aws::ShutdownAPI(options);
  return g_sink == 42 ? 1 : 0;
}
