/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/component-registry/ComponentRegistry.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/query-protocol/model/PutWithContentEncodingRequest.h>
#include <smithy/client/schema/ClientProtocol.h>
#include <smithy/client/schema/DocumentConversion.h>
#include <smithy/client/schema/HttpTraits.h>
#include <smithy/client/schema/MapSerializer.h>
#include <smithy/client/schema/Schema.h>
#include <smithy/client/schema/SchemaBuilder.h>
#include <smithy/client/schema/SerdeTraits.h>
#include <smithy/client/schema/SerializableStruct.h>
#include <smithy/client/schema/ShapeSerializer.h>
#include <smithy/client/schema/XmlTraits.h>

#include <atomic>
#include <mutex>
#include <numeric>

using namespace Aws::QueryProtocol::Model;
using namespace Aws::Utils;

namespace Aws {
namespace QueryProtocol {
namespace Model {
namespace {
template <typename Adapter>
class PutWithContentEncodingRequestSchemaCache {
 public:
  static std::shared_ptr<const smithy::schema::Schema> Get() {
    if (std::shared_ptr<const smithy::schema::Schema>* cached = s_schema.load(std::memory_order_acquire)) {
      return *cached;
    }
    std::lock_guard<std::mutex> lock(s_mutex);
    if (std::shared_ptr<const smithy::schema::Schema>* cached = s_schema.load(std::memory_order_relaxed)) {
      return *cached;
    }
    std::shared_ptr<const smithy::schema::Schema>* built =
        Aws::New<std::shared_ptr<const smithy::schema::Schema>>("PutWithContentEncodingRequestSchemaCache", Adapter::BuildSchema());
    Aws::Utils::ComponentRegistry::RegisterComponent("PutWithContentEncodingRequestSchemaCache", built, &Release);
    s_schema.store(built, std::memory_order_release);
    return *built;
  }

 private:
  static void Release(void* schema, int64_t) {
    s_schema.store(nullptr, std::memory_order_release);
    Aws::Delete(static_cast<std::shared_ptr<const smithy::schema::Schema>*>(schema));
  }

  static std::atomic<std::shared_ptr<const smithy::schema::Schema>*> s_schema;
  static std::mutex s_mutex;
};
template <typename Adapter>
std::atomic<std::shared_ptr<const smithy::schema::Schema>*> PutWithContentEncodingRequestSchemaCache<Adapter>::s_schema{nullptr};
template <typename Adapter>
std::mutex PutWithContentEncodingRequestSchemaCache<Adapter>::s_mutex;

class PutWithContentEncodingRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit PutWithContentEncodingRequestSerializable(const PutWithContentEncodingRequest& obj)
      : m_obj(obj), m_schema(PutWithContentEncodingRequestSchemaCache<PutWithContentEncodingRequestSerializable>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const PutWithContentEncodingRequest& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void PutWithContentEncodingRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.EncodingHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("encoding").value();
    serializer.WriteString(memberSchema, m_obj.GetEncoding());
  }
  if (m_obj.DataHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("data").value();
    serializer.WriteString(memberSchema, m_obj.GetData());
  }
}

std::shared_ptr<const smithy::schema::Schema> PutWithContentEncodingRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("PutWithContentEncodingRequest")
      .PutMember("encoding", smithy::schema::Schema::CreateString("encoding"),
                 {{smithy::schema::HttpHeaderTrait::KEY(),
                   Aws::MakeShared<smithy::schema::HttpHeaderTrait>("SchemaSerdeTrait", "Content-Encoding")}})
      .PutMember("data", smithy::schema::Schema::CreateString("data"))
      .Build();
}

}  // namespace
}  // namespace Model
}  // namespace QueryProtocol
}  // namespace Aws

Aws::UniquePtr<smithy::schema::SerializableStruct> PutWithContentEncodingRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<PutWithContentEncodingRequestSerializable>("PutWithContentEncodingRequestSerializable", *this);
}

Aws::String PutWithContentEncodingRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext PutWithContentEncodingRequest::GetSchemaSerdeContext() const {
  return {"PutWithContentEncoding", "2020-01-08"};
}

void PutWithContentEncodingRequest::DumpBodyToUrl(Aws::Http::URI& uri) const { uri.SetQueryString(SerializePayload()); }
#ifdef ENABLED_ZLIB_REQUEST_COMPRESSION
Aws::Client::CompressionAlgorithm PutWithContentEncodingRequest::GetSelectedCompressionAlgorithm(
    Aws::Client::RequestCompressionConfig config) const {
  if (config.useRequestCompression == Aws::Client::UseRequestCompression::DISABLE) {
    return Aws::Client::CompressionAlgorithm::NONE;
  }

  const auto& body = AmazonSerializableWebServiceRequest::GetBody();
  size_t bodySize = 0;
  if (body) {
    body->seekg(0, body->end);
    bodySize = body->tellg();
    body->seekg(0, body->beg);
  }
  if (bodySize < config.requestMinCompressionSizeBytes) {
    return Aws::Client::CompressionAlgorithm::NONE;
  } else {
    return Aws::Client::CompressionAlgorithm::GZIP;
  }
}
#endif
