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
#include <aws/dynamodb/model/UpdateContinuousBackupsRequest.h>
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
class UpdateContinuousBackupsRequestSchemaCache {
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
        Aws::New<std::shared_ptr<const smithy::schema::Schema>>("UpdateContinuousBackupsRequestSchemaCache", Adapter::BuildSchema());
    Aws::Utils::ComponentRegistry::RegisterComponent("UpdateContinuousBackupsRequestSchemaCache", built, &Release);
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
std::atomic<std::shared_ptr<const smithy::schema::Schema>*> UpdateContinuousBackupsRequestSchemaCache<Adapter>::s_schema{nullptr};
template <typename Adapter>
std::mutex UpdateContinuousBackupsRequestSchemaCache<Adapter>::s_mutex;

class UpdateContinuousBackupsRequest_PointInTimeRecoverySpecificationSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit UpdateContinuousBackupsRequest_PointInTimeRecoverySpecificationSchemaSerdeSer(const PointInTimeRecoverySpecification& obj)
      : m_obj(obj),
        m_schema(UpdateContinuousBackupsRequestSchemaCache<
                 UpdateContinuousBackupsRequest_PointInTimeRecoverySpecificationSchemaSerdeSer>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const PointInTimeRecoverySpecification& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class UpdateContinuousBackupsRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit UpdateContinuousBackupsRequestSerializable(const UpdateContinuousBackupsRequest& obj)
      : m_obj(obj), m_schema(UpdateContinuousBackupsRequestSchemaCache<UpdateContinuousBackupsRequestSerializable>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const UpdateContinuousBackupsRequest& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void UpdateContinuousBackupsRequest_PointInTimeRecoverySpecificationSchemaSerdeSer::SerializeMembers(
    smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.PointInTimeRecoveryEnabledHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("PointInTimeRecoveryEnabled").value();
    serializer.WriteBoolean(memberSchema, m_obj.GetPointInTimeRecoveryEnabled());
  }
  if (m_obj.RecoveryPeriodInDaysHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("RecoveryPeriodInDays").value();
    serializer.WriteInteger(memberSchema, m_obj.GetRecoveryPeriodInDays());
  }
}

std::shared_ptr<const smithy::schema::Schema> UpdateContinuousBackupsRequest_PointInTimeRecoverySpecificationSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("PointInTimeRecoverySpecification")
      .PutMember("PointInTimeRecoveryEnabled", smithy::schema::Schema::CreateBoolean("PointInTimeRecoveryEnabled"))
      .PutMember("RecoveryPeriodInDays", smithy::schema::Schema::CreateInteger("RecoveryPeriodInDays"))
      .Build();
}

void UpdateContinuousBackupsRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.TableNameHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("TableName").value();
    serializer.WriteString(memberSchema, m_obj.GetTableName());
  }
  if (m_obj.PointInTimeRecoverySpecificationHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("PointInTimeRecoverySpecification").value();
    UpdateContinuousBackupsRequest_PointInTimeRecoverySpecificationSchemaSerdeSer nested0(m_obj.GetPointInTimeRecoverySpecification());
    serializer.WriteStruct(memberSchema, nested0);
  }
}

std::shared_ptr<const smithy::schema::Schema> UpdateContinuousBackupsRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("UpdateContinuousBackupsRequest")
      .PutMember("TableName", smithy::schema::Schema::CreateString("TableName"))
      .PutMember(
          "PointInTimeRecoverySpecification",
          UpdateContinuousBackupsRequestSchemaCache<UpdateContinuousBackupsRequest_PointInTimeRecoverySpecificationSchemaSerdeSer>::Get())
      .Build();
}

}  // namespace
}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws

Aws::UniquePtr<smithy::schema::SerializableStruct> UpdateContinuousBackupsRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<UpdateContinuousBackupsRequestSerializable>("UpdateContinuousBackupsRequestSerializable", *this);
}

Aws::String UpdateContinuousBackupsRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext UpdateContinuousBackupsRequest::GetSchemaSerdeContext() const {
  return {"UpdateContinuousBackups", "2012-08-10"};
}

Aws::Http::HeaderValueCollection UpdateContinuousBackupsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DynamoDB_20120810.UpdateContinuousBackups"));
  return headers;
}

UpdateContinuousBackupsRequest::EndpointParameters UpdateContinuousBackupsRequest::GetEndpointContextParams() const {
  EndpointParameters parameters;
  // Operation context parameters
  if (TableNameHasBeenSet()) {
    parameters.emplace_back(Aws::String("ResourceArn"), this->GetTableName(),
                            Aws::Endpoint::EndpointParameter::ParameterOrigin::OPERATION_CONTEXT);
  }
  return parameters;
}
