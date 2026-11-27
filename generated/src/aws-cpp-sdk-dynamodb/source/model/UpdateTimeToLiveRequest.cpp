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
#include <aws/dynamodb/model/UpdateTimeToLiveRequest.h>
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

using namespace Aws::DynamoDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DynamoDB {
namespace Model {
namespace {
template <typename Adapter>
class UpdateTimeToLiveRequestSchemaCache {
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
        Aws::New<std::shared_ptr<const smithy::schema::Schema>>("UpdateTimeToLiveRequestSchemaCache", Adapter::BuildSchema());
    Aws::Utils::ComponentRegistry::RegisterComponent("UpdateTimeToLiveRequestSchemaCache", built, &Release);
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
std::atomic<std::shared_ptr<const smithy::schema::Schema>*> UpdateTimeToLiveRequestSchemaCache<Adapter>::s_schema{nullptr};
template <typename Adapter>
std::mutex UpdateTimeToLiveRequestSchemaCache<Adapter>::s_mutex;

class UpdateTimeToLiveRequest_TimeToLiveSpecificationSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit UpdateTimeToLiveRequest_TimeToLiveSpecificationSchemaSerdeSer(const TimeToLiveSpecification& obj)
      : m_obj(obj), m_schema(UpdateTimeToLiveRequestSchemaCache<UpdateTimeToLiveRequest_TimeToLiveSpecificationSchemaSerdeSer>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const TimeToLiveSpecification& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class UpdateTimeToLiveRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit UpdateTimeToLiveRequestSerializable(const UpdateTimeToLiveRequest& obj)
      : m_obj(obj), m_schema(UpdateTimeToLiveRequestSchemaCache<UpdateTimeToLiveRequestSerializable>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const UpdateTimeToLiveRequest& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void UpdateTimeToLiveRequest_TimeToLiveSpecificationSchemaSerdeSer::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.EnabledHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("Enabled").value();
    serializer.WriteBoolean(memberSchema, m_obj.GetEnabled());
  }
  if (m_obj.AttributeNameHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("AttributeName").value();
    serializer.WriteString(memberSchema, m_obj.GetAttributeName());
  }
}

std::shared_ptr<const smithy::schema::Schema> UpdateTimeToLiveRequest_TimeToLiveSpecificationSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("TimeToLiveSpecification")
      .PutMember("Enabled", smithy::schema::Schema::CreateBoolean("Enabled"))
      .PutMember("AttributeName", smithy::schema::Schema::CreateString("AttributeName"))
      .Build();
}

void UpdateTimeToLiveRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.TableNameHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("TableName").value();
    serializer.WriteString(memberSchema, m_obj.GetTableName());
  }
  if (m_obj.TimeToLiveSpecificationHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("TimeToLiveSpecification").value();
    UpdateTimeToLiveRequest_TimeToLiveSpecificationSchemaSerdeSer nested0(m_obj.GetTimeToLiveSpecification());
    serializer.WriteStruct(memberSchema, nested0);
  }
}

std::shared_ptr<const smithy::schema::Schema> UpdateTimeToLiveRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("UpdateTimeToLiveRequest")
      .PutMember("TableName", smithy::schema::Schema::CreateString("TableName"))
      .PutMember("TimeToLiveSpecification",
                 UpdateTimeToLiveRequestSchemaCache<UpdateTimeToLiveRequest_TimeToLiveSpecificationSchemaSerdeSer>::Get())
      .Build();
}

}  // namespace
}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws

Aws::UniquePtr<smithy::schema::SerializableStruct> UpdateTimeToLiveRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<UpdateTimeToLiveRequestSerializable>("UpdateTimeToLiveRequestSerializable", *this);
}

Aws::String UpdateTimeToLiveRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext UpdateTimeToLiveRequest::GetSchemaSerdeContext() const {
  return {"UpdateTimeToLive", "2012-08-10"};
}

Aws::Http::HeaderValueCollection UpdateTimeToLiveRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DynamoDB_20120810.UpdateTimeToLive"));
  return headers;
}

UpdateTimeToLiveRequest::EndpointParameters UpdateTimeToLiveRequest::GetEndpointContextParams() const {
  EndpointParameters parameters;
  // Operation context parameters
  if (TableNameHasBeenSet()) {
    parameters.emplace_back(Aws::String("ResourceArn"), this->GetTableName(),
                            Aws::Endpoint::EndpointParameter::ParameterOrigin::OPERATION_CONTEXT);
  }
  return parameters;
}
