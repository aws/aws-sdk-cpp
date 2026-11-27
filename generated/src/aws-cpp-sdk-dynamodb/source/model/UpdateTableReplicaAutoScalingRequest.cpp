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
#include <aws/dynamodb/model/UpdateTableReplicaAutoScalingRequest.h>
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
class UpdateTableReplicaAutoScalingRequestSchemaCache {
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
        Aws::New<std::shared_ptr<const smithy::schema::Schema>>("UpdateTableReplicaAutoScalingRequestSchemaCache", Adapter::BuildSchema());
    Aws::Utils::ComponentRegistry::RegisterComponent("UpdateTableReplicaAutoScalingRequestSchemaCache", built, &Release);
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
std::atomic<std::shared_ptr<const smithy::schema::Schema>*> UpdateTableReplicaAutoScalingRequestSchemaCache<Adapter>::s_schema{nullptr};
template <typename Adapter>
std::mutex UpdateTableReplicaAutoScalingRequestSchemaCache<Adapter>::s_mutex;

class UpdateTableReplicaAutoScalingRequest_GlobalSecondaryIndexAutoScalingUpdateSchemaSerdeSer final
    : public smithy::schema::SerializableStruct {
 public:
  explicit UpdateTableReplicaAutoScalingRequest_GlobalSecondaryIndexAutoScalingUpdateSchemaSerdeSer(
      const GlobalSecondaryIndexAutoScalingUpdate& obj)
      : m_obj(obj),
        m_schema(UpdateTableReplicaAutoScalingRequestSchemaCache<
                 UpdateTableReplicaAutoScalingRequest_GlobalSecondaryIndexAutoScalingUpdateSchemaSerdeSer>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const GlobalSecondaryIndexAutoScalingUpdate& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class UpdateTableReplicaAutoScalingRequest_AutoScalingSettingsUpdateSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit UpdateTableReplicaAutoScalingRequest_AutoScalingSettingsUpdateSchemaSerdeSer(const AutoScalingSettingsUpdate& obj)
      : m_obj(obj),
        m_schema(UpdateTableReplicaAutoScalingRequestSchemaCache<
                 UpdateTableReplicaAutoScalingRequest_AutoScalingSettingsUpdateSchemaSerdeSer>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const AutoScalingSettingsUpdate& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class UpdateTableReplicaAutoScalingRequest_AutoScalingPolicyUpdateSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit UpdateTableReplicaAutoScalingRequest_AutoScalingPolicyUpdateSchemaSerdeSer(const AutoScalingPolicyUpdate& obj)
      : m_obj(obj),
        m_schema(UpdateTableReplicaAutoScalingRequestSchemaCache<
                 UpdateTableReplicaAutoScalingRequest_AutoScalingPolicyUpdateSchemaSerdeSer>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const AutoScalingPolicyUpdate& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class UpdateTableReplicaAutoScalingRequest_AutoScalingTargetTrackingScalingPolicyConfigurationUpdateSchemaSerdeSer final
    : public smithy::schema::SerializableStruct {
 public:
  explicit UpdateTableReplicaAutoScalingRequest_AutoScalingTargetTrackingScalingPolicyConfigurationUpdateSchemaSerdeSer(
      const AutoScalingTargetTrackingScalingPolicyConfigurationUpdate& obj)
      : m_obj(obj),
        m_schema(UpdateTableReplicaAutoScalingRequestSchemaCache<
                 UpdateTableReplicaAutoScalingRequest_AutoScalingTargetTrackingScalingPolicyConfigurationUpdateSchemaSerdeSer>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const AutoScalingTargetTrackingScalingPolicyConfigurationUpdate& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class UpdateTableReplicaAutoScalingRequest_ReplicaAutoScalingUpdateSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit UpdateTableReplicaAutoScalingRequest_ReplicaAutoScalingUpdateSchemaSerdeSer(const ReplicaAutoScalingUpdate& obj)
      : m_obj(obj),
        m_schema(UpdateTableReplicaAutoScalingRequestSchemaCache<
                 UpdateTableReplicaAutoScalingRequest_ReplicaAutoScalingUpdateSchemaSerdeSer>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const ReplicaAutoScalingUpdate& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class UpdateTableReplicaAutoScalingRequest_ReplicaGlobalSecondaryIndexAutoScalingUpdateSchemaSerdeSer final
    : public smithy::schema::SerializableStruct {
 public:
  explicit UpdateTableReplicaAutoScalingRequest_ReplicaGlobalSecondaryIndexAutoScalingUpdateSchemaSerdeSer(
      const ReplicaGlobalSecondaryIndexAutoScalingUpdate& obj)
      : m_obj(obj),
        m_schema(UpdateTableReplicaAutoScalingRequestSchemaCache<
                 UpdateTableReplicaAutoScalingRequest_ReplicaGlobalSecondaryIndexAutoScalingUpdateSchemaSerdeSer>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const ReplicaGlobalSecondaryIndexAutoScalingUpdate& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class UpdateTableReplicaAutoScalingRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit UpdateTableReplicaAutoScalingRequestSerializable(const UpdateTableReplicaAutoScalingRequest& obj)
      : m_obj(obj), m_schema(UpdateTableReplicaAutoScalingRequestSchemaCache<UpdateTableReplicaAutoScalingRequestSerializable>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const UpdateTableReplicaAutoScalingRequest& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void UpdateTableReplicaAutoScalingRequest_GlobalSecondaryIndexAutoScalingUpdateSchemaSerdeSer::SerializeMembers(
    smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.IndexNameHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("IndexName").value();
    serializer.WriteString(memberSchema, m_obj.GetIndexName());
  }
  if (m_obj.ProvisionedWriteCapacityAutoScalingUpdateHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ProvisionedWriteCapacityAutoScalingUpdate").value();
    UpdateTableReplicaAutoScalingRequest_AutoScalingSettingsUpdateSchemaSerdeSer nested0(
        m_obj.GetProvisionedWriteCapacityAutoScalingUpdate());
    serializer.WriteStruct(memberSchema, nested0);
  }
}

std::shared_ptr<const smithy::schema::Schema>
UpdateTableReplicaAutoScalingRequest_GlobalSecondaryIndexAutoScalingUpdateSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("GlobalSecondaryIndexAutoScalingUpdate")
      .PutMember("IndexName", smithy::schema::Schema::CreateString("IndexName"))
      .PutMember("ProvisionedWriteCapacityAutoScalingUpdate",
                 UpdateTableReplicaAutoScalingRequestSchemaCache<
                     UpdateTableReplicaAutoScalingRequest_AutoScalingSettingsUpdateSchemaSerdeSer>::Get())
      .Build();
}

void UpdateTableReplicaAutoScalingRequest_AutoScalingSettingsUpdateSchemaSerdeSer::SerializeMembers(
    smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.MinimumUnitsHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("MinimumUnits").value();
    serializer.WriteLong(memberSchema, m_obj.GetMinimumUnits());
  }
  if (m_obj.MaximumUnitsHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("MaximumUnits").value();
    serializer.WriteLong(memberSchema, m_obj.GetMaximumUnits());
  }
  if (m_obj.AutoScalingDisabledHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("AutoScalingDisabled").value();
    serializer.WriteBoolean(memberSchema, m_obj.GetAutoScalingDisabled());
  }
  if (m_obj.AutoScalingRoleArnHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("AutoScalingRoleArn").value();
    serializer.WriteString(memberSchema, m_obj.GetAutoScalingRoleArn());
  }
  if (m_obj.ScalingPolicyUpdateHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ScalingPolicyUpdate").value();
    UpdateTableReplicaAutoScalingRequest_AutoScalingPolicyUpdateSchemaSerdeSer nested0(m_obj.GetScalingPolicyUpdate());
    serializer.WriteStruct(memberSchema, nested0);
  }
}

std::shared_ptr<const smithy::schema::Schema> UpdateTableReplicaAutoScalingRequest_AutoScalingSettingsUpdateSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("AutoScalingSettingsUpdate")
      .PutMember("MinimumUnits", smithy::schema::Schema::CreateLong("MinimumUnits"))
      .PutMember("MaximumUnits", smithy::schema::Schema::CreateLong("MaximumUnits"))
      .PutMember("AutoScalingDisabled", smithy::schema::Schema::CreateBoolean("AutoScalingDisabled"))
      .PutMember("AutoScalingRoleArn", smithy::schema::Schema::CreateString("AutoScalingRoleArn"))
      .PutMember("ScalingPolicyUpdate", UpdateTableReplicaAutoScalingRequestSchemaCache<
                                            UpdateTableReplicaAutoScalingRequest_AutoScalingPolicyUpdateSchemaSerdeSer>::Get())
      .Build();
}

void UpdateTableReplicaAutoScalingRequest_AutoScalingPolicyUpdateSchemaSerdeSer::SerializeMembers(
    smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.PolicyNameHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("PolicyName").value();
    serializer.WriteString(memberSchema, m_obj.GetPolicyName());
  }
  if (m_obj.TargetTrackingScalingPolicyConfigurationHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("TargetTrackingScalingPolicyConfiguration").value();
    UpdateTableReplicaAutoScalingRequest_AutoScalingTargetTrackingScalingPolicyConfigurationUpdateSchemaSerdeSer nested0(
        m_obj.GetTargetTrackingScalingPolicyConfiguration());
    serializer.WriteStruct(memberSchema, nested0);
  }
}

std::shared_ptr<const smithy::schema::Schema> UpdateTableReplicaAutoScalingRequest_AutoScalingPolicyUpdateSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("AutoScalingPolicyUpdate")
      .PutMember("PolicyName", smithy::schema::Schema::CreateString("PolicyName"))
      .PutMember("TargetTrackingScalingPolicyConfiguration",
                 UpdateTableReplicaAutoScalingRequestSchemaCache<
                     UpdateTableReplicaAutoScalingRequest_AutoScalingTargetTrackingScalingPolicyConfigurationUpdateSchemaSerdeSer>::Get())
      .Build();
}

void UpdateTableReplicaAutoScalingRequest_AutoScalingTargetTrackingScalingPolicyConfigurationUpdateSchemaSerdeSer::SerializeMembers(
    smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.DisableScaleInHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("DisableScaleIn").value();
    serializer.WriteBoolean(memberSchema, m_obj.GetDisableScaleIn());
  }
  if (m_obj.ScaleInCooldownHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ScaleInCooldown").value();
    serializer.WriteInteger(memberSchema, m_obj.GetScaleInCooldown());
  }
  if (m_obj.ScaleOutCooldownHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ScaleOutCooldown").value();
    serializer.WriteInteger(memberSchema, m_obj.GetScaleOutCooldown());
  }
  if (m_obj.TargetValueHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("TargetValue").value();
    serializer.WriteDouble(memberSchema, m_obj.GetTargetValue());
  }
}

std::shared_ptr<const smithy::schema::Schema>
UpdateTableReplicaAutoScalingRequest_AutoScalingTargetTrackingScalingPolicyConfigurationUpdateSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("AutoScalingTargetTrackingScalingPolicyConfigurationUpdate")
      .PutMember("DisableScaleIn", smithy::schema::Schema::CreateBoolean("DisableScaleIn"))
      .PutMember("ScaleInCooldown", smithy::schema::Schema::CreateInteger("ScaleInCooldown"))
      .PutMember("ScaleOutCooldown", smithy::schema::Schema::CreateInteger("ScaleOutCooldown"))
      .PutMember("TargetValue", smithy::schema::Schema::CreateDouble("TargetValue"))
      .Build();
}

void UpdateTableReplicaAutoScalingRequest_ReplicaAutoScalingUpdateSchemaSerdeSer::SerializeMembers(
    smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.RegionNameHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("RegionName").value();
    serializer.WriteString(memberSchema, m_obj.GetRegionName());
  }
  if (m_obj.ReplicaGlobalSecondaryIndexUpdatesHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ReplicaGlobalSecondaryIndexUpdates").value();
    serializer.WriteList(memberSchema, m_obj.GetReplicaGlobalSecondaryIndexUpdates().size(),
                         [&](smithy::schema::ShapeSerializer& listSerializer0) {
                           const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
                           for (const auto& item0 : m_obj.GetReplicaGlobalSecondaryIndexUpdates()) {
                             UpdateTableReplicaAutoScalingRequest_ReplicaGlobalSecondaryIndexAutoScalingUpdateSchemaSerdeSer nested1(item0);
                             listSerializer0.WriteStruct(itemSchema0, nested1);
                           }
                         });
  }
  if (m_obj.ReplicaProvisionedReadCapacityAutoScalingUpdateHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ReplicaProvisionedReadCapacityAutoScalingUpdate").value();
    UpdateTableReplicaAutoScalingRequest_AutoScalingSettingsUpdateSchemaSerdeSer nested0(
        m_obj.GetReplicaProvisionedReadCapacityAutoScalingUpdate());
    serializer.WriteStruct(memberSchema, nested0);
  }
}

std::shared_ptr<const smithy::schema::Schema> UpdateTableReplicaAutoScalingRequest_ReplicaAutoScalingUpdateSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("ReplicaAutoScalingUpdate")
      .PutMember("RegionName", smithy::schema::Schema::CreateString("RegionName"))
      .PutMember("ReplicaGlobalSecondaryIndexUpdates",
                 smithy::schema::Schema::ListBuilder("ReplicaGlobalSecondaryIndexAutoScalingUpdateList")
                     .PutMember("member",
                                UpdateTableReplicaAutoScalingRequestSchemaCache<
                                    UpdateTableReplicaAutoScalingRequest_ReplicaGlobalSecondaryIndexAutoScalingUpdateSchemaSerdeSer>::Get())
                     .Build())
      .PutMember("ReplicaProvisionedReadCapacityAutoScalingUpdate",
                 UpdateTableReplicaAutoScalingRequestSchemaCache<
                     UpdateTableReplicaAutoScalingRequest_AutoScalingSettingsUpdateSchemaSerdeSer>::Get())
      .Build();
}

void UpdateTableReplicaAutoScalingRequest_ReplicaGlobalSecondaryIndexAutoScalingUpdateSchemaSerdeSer::SerializeMembers(
    smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.IndexNameHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("IndexName").value();
    serializer.WriteString(memberSchema, m_obj.GetIndexName());
  }
  if (m_obj.ProvisionedReadCapacityAutoScalingUpdateHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ProvisionedReadCapacityAutoScalingUpdate").value();
    UpdateTableReplicaAutoScalingRequest_AutoScalingSettingsUpdateSchemaSerdeSer nested0(
        m_obj.GetProvisionedReadCapacityAutoScalingUpdate());
    serializer.WriteStruct(memberSchema, nested0);
  }
}

std::shared_ptr<const smithy::schema::Schema>
UpdateTableReplicaAutoScalingRequest_ReplicaGlobalSecondaryIndexAutoScalingUpdateSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("ReplicaGlobalSecondaryIndexAutoScalingUpdate")
      .PutMember("IndexName", smithy::schema::Schema::CreateString("IndexName"))
      .PutMember("ProvisionedReadCapacityAutoScalingUpdate",
                 UpdateTableReplicaAutoScalingRequestSchemaCache<
                     UpdateTableReplicaAutoScalingRequest_AutoScalingSettingsUpdateSchemaSerdeSer>::Get())
      .Build();
}

void UpdateTableReplicaAutoScalingRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.GlobalSecondaryIndexUpdatesHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("GlobalSecondaryIndexUpdates").value();
    serializer.WriteList(memberSchema, m_obj.GetGlobalSecondaryIndexUpdates().size(),
                         [&](smithy::schema::ShapeSerializer& listSerializer0) {
                           const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
                           for (const auto& item0 : m_obj.GetGlobalSecondaryIndexUpdates()) {
                             UpdateTableReplicaAutoScalingRequest_GlobalSecondaryIndexAutoScalingUpdateSchemaSerdeSer nested1(item0);
                             listSerializer0.WriteStruct(itemSchema0, nested1);
                           }
                         });
  }
  if (m_obj.TableNameHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("TableName").value();
    serializer.WriteString(memberSchema, m_obj.GetTableName());
  }
  if (m_obj.ProvisionedWriteCapacityAutoScalingUpdateHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ProvisionedWriteCapacityAutoScalingUpdate").value();
    UpdateTableReplicaAutoScalingRequest_AutoScalingSettingsUpdateSchemaSerdeSer nested0(
        m_obj.GetProvisionedWriteCapacityAutoScalingUpdate());
    serializer.WriteStruct(memberSchema, nested0);
  }
  if (m_obj.ReplicaUpdatesHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ReplicaUpdates").value();
    serializer.WriteList(memberSchema, m_obj.GetReplicaUpdates().size(), [&](smithy::schema::ShapeSerializer& listSerializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      for (const auto& item0 : m_obj.GetReplicaUpdates()) {
        UpdateTableReplicaAutoScalingRequest_ReplicaAutoScalingUpdateSchemaSerdeSer nested1(item0);
        listSerializer0.WriteStruct(itemSchema0, nested1);
      }
    });
  }
}

std::shared_ptr<const smithy::schema::Schema> UpdateTableReplicaAutoScalingRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("UpdateTableReplicaAutoScalingRequest")
      .PutMember(
          "GlobalSecondaryIndexUpdates",
          smithy::schema::Schema::ListBuilder("GlobalSecondaryIndexAutoScalingUpdateList")
              .PutMember("member", UpdateTableReplicaAutoScalingRequestSchemaCache<
                                       UpdateTableReplicaAutoScalingRequest_GlobalSecondaryIndexAutoScalingUpdateSchemaSerdeSer>::Get())
              .Build())
      .PutMember("TableName", smithy::schema::Schema::CreateString("TableName"))
      .PutMember("ProvisionedWriteCapacityAutoScalingUpdate",
                 UpdateTableReplicaAutoScalingRequestSchemaCache<
                     UpdateTableReplicaAutoScalingRequest_AutoScalingSettingsUpdateSchemaSerdeSer>::Get())
      .PutMember("ReplicaUpdates",
                 smithy::schema::Schema::ListBuilder("ReplicaAutoScalingUpdateList")
                     .PutMember("member", UpdateTableReplicaAutoScalingRequestSchemaCache<
                                              UpdateTableReplicaAutoScalingRequest_ReplicaAutoScalingUpdateSchemaSerdeSer>::Get())
                     .Build())
      .Build();
}

}  // namespace
}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws

Aws::UniquePtr<smithy::schema::SerializableStruct> UpdateTableReplicaAutoScalingRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<UpdateTableReplicaAutoScalingRequestSerializable>("UpdateTableReplicaAutoScalingRequestSerializable", *this);
}

Aws::String UpdateTableReplicaAutoScalingRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext UpdateTableReplicaAutoScalingRequest::GetSchemaSerdeContext() const {
  return {"UpdateTableReplicaAutoScaling", "2012-08-10"};
}

Aws::Http::HeaderValueCollection UpdateTableReplicaAutoScalingRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DynamoDB_20120810.UpdateTableReplicaAutoScaling"));
  return headers;
}

UpdateTableReplicaAutoScalingRequest::EndpointParameters UpdateTableReplicaAutoScalingRequest::GetEndpointContextParams() const {
  EndpointParameters parameters;
  // Operation context parameters
  if (TableNameHasBeenSet()) {
    parameters.emplace_back(Aws::String("ResourceArn"), this->GetTableName(),
                            Aws::Endpoint::EndpointParameter::ParameterOrigin::OPERATION_CONTEXT);
  }
  return parameters;
}
