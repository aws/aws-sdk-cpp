/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/component-registry/ComponentRegistry.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/rest-json-protocol/model/HttpRequestWithLabelsRequest.h>
#include <smithy/client/schema/ClientProtocol.h>
#include <smithy/client/schema/DocumentConversion.h>
#include <smithy/client/schema/HttpTraits.h>
#include <smithy/client/schema/JsonTraits.h>
#include <smithy/client/schema/MapSerializer.h>
#include <smithy/client/schema/Schema.h>
#include <smithy/client/schema/SchemaBuilder.h>
#include <smithy/client/schema/SerdeTraits.h>
#include <smithy/client/schema/SerializableStruct.h>
#include <smithy/client/schema/ShapeSerializer.h>

#include <atomic>
#include <mutex>
#include <numeric>
#include <utility>

using namespace Aws::RestJsonProtocol::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace RestJsonProtocol {
namespace Model {
namespace {
template <typename Adapter>
class HttpRequestWithLabelsRequestSchemaCache {
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
        Aws::New<std::shared_ptr<const smithy::schema::Schema>>("HttpRequestWithLabelsRequestSchemaCache", Adapter::BuildSchema());
    Aws::Utils::ComponentRegistry::RegisterComponent("HttpRequestWithLabelsRequestSchemaCache", built, &Release);
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
std::atomic<std::shared_ptr<const smithy::schema::Schema>*> HttpRequestWithLabelsRequestSchemaCache<Adapter>::s_schema{nullptr};
template <typename Adapter>
std::mutex HttpRequestWithLabelsRequestSchemaCache<Adapter>::s_mutex;

class HttpRequestWithLabelsRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit HttpRequestWithLabelsRequestSerializable(const HttpRequestWithLabelsRequest& obj)
      : m_obj(obj), m_schema(HttpRequestWithLabelsRequestSchemaCache<HttpRequestWithLabelsRequestSerializable>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const HttpRequestWithLabelsRequest& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void HttpRequestWithLabelsRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.StringHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("string").value();
    serializer.WriteString(memberSchema, m_obj.GetString());
  }
  if (m_obj.ShortHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("short").value();
    serializer.WriteInteger(memberSchema, m_obj.GetShort());
  }
  if (m_obj.IntegerHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("integer").value();
    serializer.WriteInteger(memberSchema, m_obj.GetInteger());
  }
  if (m_obj.LongHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("long").value();
    serializer.WriteLong(memberSchema, m_obj.GetLong());
  }
  if (m_obj.FloatHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("float").value();
    serializer.WriteDouble(memberSchema, m_obj.GetFloat());
  }
  if (m_obj.DoubleHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("double").value();
    serializer.WriteDouble(memberSchema, m_obj.GetDouble());
  }
  if (m_obj.BooleanHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("boolean").value();
    serializer.WriteBoolean(memberSchema, m_obj.GetBoolean());
  }
  if (m_obj.TimestampHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("timestamp").value();
    serializer.WriteTimestamp(memberSchema, m_obj.GetTimestamp());
  }
}

std::shared_ptr<const smithy::schema::Schema> HttpRequestWithLabelsRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("HttpRequestWithLabelsRequest")
      .PutMember("string", smithy::schema::Schema::CreateString("string"),
                 {{smithy::schema::HttpLabelTrait::KEY(), Aws::MakeShared<smithy::schema::HttpLabelTrait>("SchemaSerdeTrait")}})
      .PutMember("short", smithy::schema::Schema::CreateInteger("short"),
                 {{smithy::schema::HttpLabelTrait::KEY(), Aws::MakeShared<smithy::schema::HttpLabelTrait>("SchemaSerdeTrait")}})
      .PutMember("integer", smithy::schema::Schema::CreateInteger("integer"),
                 {{smithy::schema::HttpLabelTrait::KEY(), Aws::MakeShared<smithy::schema::HttpLabelTrait>("SchemaSerdeTrait")}})
      .PutMember("long", smithy::schema::Schema::CreateLong("long"),
                 {{smithy::schema::HttpLabelTrait::KEY(), Aws::MakeShared<smithy::schema::HttpLabelTrait>("SchemaSerdeTrait")}})
      .PutMember("float", smithy::schema::Schema::CreateDouble("float"),
                 {{smithy::schema::HttpLabelTrait::KEY(), Aws::MakeShared<smithy::schema::HttpLabelTrait>("SchemaSerdeTrait")}})
      .PutMember("double", smithy::schema::Schema::CreateDouble("double"),
                 {{smithy::schema::HttpLabelTrait::KEY(), Aws::MakeShared<smithy::schema::HttpLabelTrait>("SchemaSerdeTrait")}})
      .PutMember("boolean", smithy::schema::Schema::CreateBoolean("boolean"),
                 {{smithy::schema::HttpLabelTrait::KEY(), Aws::MakeShared<smithy::schema::HttpLabelTrait>("SchemaSerdeTrait")}})
      .PutMember("timestamp", smithy::schema::Schema::CreateTimestamp("timestamp"),
                 {{smithy::schema::HttpLabelTrait::KEY(), Aws::MakeShared<smithy::schema::HttpLabelTrait>("SchemaSerdeTrait")}})
      .Build();
}

}  // namespace
}  // namespace Model
}  // namespace RestJsonProtocol
}  // namespace Aws

Aws::UniquePtr<smithy::schema::SerializableStruct> HttpRequestWithLabelsRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<HttpRequestWithLabelsRequestSerializable>("HttpRequestWithLabelsRequestSerializable", *this);
}

Aws::String HttpRequestWithLabelsRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext HttpRequestWithLabelsRequest::GetSchemaSerdeContext() const {
  return {"HttpRequestWithLabels", "2019-12-16",
          "/HttpRequestWithLabels/{string}/{short}/{integer}/{long}/{float}/{double}/{boolean}/{timestamp}", ""};
}
