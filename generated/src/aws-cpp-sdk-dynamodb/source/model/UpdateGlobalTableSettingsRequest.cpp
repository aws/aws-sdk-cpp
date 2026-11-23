/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/dynamodb/model/UpdateGlobalTableSettingsRequest.h>
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

#include <numeric>
#include <utility>

using namespace Aws::DynamoDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DynamoDB {
namespace Model {
namespace {
class UpdateGlobalTableSettingsRequest_AutoScalingSettingsUpdateSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit UpdateGlobalTableSettingsRequest_AutoScalingSettingsUpdateSchemaSerdeSer(const AutoScalingSettingsUpdate& obj)
      : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const AutoScalingSettingsUpdate& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class UpdateGlobalTableSettingsRequest_AutoScalingPolicyUpdateSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit UpdateGlobalTableSettingsRequest_AutoScalingPolicyUpdateSchemaSerdeSer(const AutoScalingPolicyUpdate& obj)
      : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const AutoScalingPolicyUpdate& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class UpdateGlobalTableSettingsRequest_AutoScalingTargetTrackingScalingPolicyConfigurationUpdateSchemaSerdeSer final
    : public smithy::schema::SerializableStruct {
 public:
  explicit UpdateGlobalTableSettingsRequest_AutoScalingTargetTrackingScalingPolicyConfigurationUpdateSchemaSerdeSer(
      const AutoScalingTargetTrackingScalingPolicyConfigurationUpdate& obj)
      : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const AutoScalingTargetTrackingScalingPolicyConfigurationUpdate& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class UpdateGlobalTableSettingsRequest_GlobalTableGlobalSecondaryIndexSettingsUpdateSchemaSerdeSer final
    : public smithy::schema::SerializableStruct {
 public:
  explicit UpdateGlobalTableSettingsRequest_GlobalTableGlobalSecondaryIndexSettingsUpdateSchemaSerdeSer(
      const GlobalTableGlobalSecondaryIndexSettingsUpdate& obj)
      : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const GlobalTableGlobalSecondaryIndexSettingsUpdate& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class UpdateGlobalTableSettingsRequest_ReplicaSettingsUpdateSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit UpdateGlobalTableSettingsRequest_ReplicaSettingsUpdateSchemaSerdeSer(const ReplicaSettingsUpdate& obj)
      : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const ReplicaSettingsUpdate& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class UpdateGlobalTableSettingsRequest_ReplicaGlobalSecondaryIndexSettingsUpdateSchemaSerdeSer final
    : public smithy::schema::SerializableStruct {
 public:
  explicit UpdateGlobalTableSettingsRequest_ReplicaGlobalSecondaryIndexSettingsUpdateSchemaSerdeSer(
      const ReplicaGlobalSecondaryIndexSettingsUpdate& obj)
      : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const ReplicaGlobalSecondaryIndexSettingsUpdate& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class UpdateGlobalTableSettingsRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit UpdateGlobalTableSettingsRequestSerializable(const UpdateGlobalTableSettingsRequest& obj)
      : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const UpdateGlobalTableSettingsRequest& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void UpdateGlobalTableSettingsRequest_AutoScalingSettingsUpdateSchemaSerdeSer::SerializeMembers(
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
    UpdateGlobalTableSettingsRequest_AutoScalingPolicyUpdateSchemaSerdeSer nested0(m_obj.GetScalingPolicyUpdate());
    serializer.WriteStruct(memberSchema, nested0);
  }
}

std::shared_ptr<const smithy::schema::Schema> UpdateGlobalTableSettingsRequest_AutoScalingSettingsUpdateSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("AutoScalingSettingsUpdate")
      .PutMember("MinimumUnits", smithy::schema::Schema::CreateLong("MinimumUnits"))
      .PutMember("MaximumUnits", smithy::schema::Schema::CreateLong("MaximumUnits"))
      .PutMember("AutoScalingDisabled", smithy::schema::Schema::CreateBoolean("AutoScalingDisabled"))
      .PutMember("AutoScalingRoleArn", smithy::schema::Schema::CreateString("AutoScalingRoleArn"))
      .PutMember("ScalingPolicyUpdate", UpdateGlobalTableSettingsRequest_AutoScalingPolicyUpdateSchemaSerdeSer::BuildSchema())
      .Build();
}

void UpdateGlobalTableSettingsRequest_AutoScalingPolicyUpdateSchemaSerdeSer::SerializeMembers(
    smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.PolicyNameHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("PolicyName").value();
    serializer.WriteString(memberSchema, m_obj.GetPolicyName());
  }
  if (m_obj.TargetTrackingScalingPolicyConfigurationHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("TargetTrackingScalingPolicyConfiguration").value();
    UpdateGlobalTableSettingsRequest_AutoScalingTargetTrackingScalingPolicyConfigurationUpdateSchemaSerdeSer nested0(
        m_obj.GetTargetTrackingScalingPolicyConfiguration());
    serializer.WriteStruct(memberSchema, nested0);
  }
}

std::shared_ptr<const smithy::schema::Schema> UpdateGlobalTableSettingsRequest_AutoScalingPolicyUpdateSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("AutoScalingPolicyUpdate")
      .PutMember("PolicyName", smithy::schema::Schema::CreateString("PolicyName"))
      .PutMember("TargetTrackingScalingPolicyConfiguration",
                 UpdateGlobalTableSettingsRequest_AutoScalingTargetTrackingScalingPolicyConfigurationUpdateSchemaSerdeSer::BuildSchema())
      .Build();
}

void UpdateGlobalTableSettingsRequest_AutoScalingTargetTrackingScalingPolicyConfigurationUpdateSchemaSerdeSer::SerializeMembers(
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
UpdateGlobalTableSettingsRequest_AutoScalingTargetTrackingScalingPolicyConfigurationUpdateSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("AutoScalingTargetTrackingScalingPolicyConfigurationUpdate")
      .PutMember("DisableScaleIn", smithy::schema::Schema::CreateBoolean("DisableScaleIn"))
      .PutMember("ScaleInCooldown", smithy::schema::Schema::CreateInteger("ScaleInCooldown"))
      .PutMember("ScaleOutCooldown", smithy::schema::Schema::CreateInteger("ScaleOutCooldown"))
      .PutMember("TargetValue", smithy::schema::Schema::CreateDouble("TargetValue"))
      .Build();
}

void UpdateGlobalTableSettingsRequest_GlobalTableGlobalSecondaryIndexSettingsUpdateSchemaSerdeSer::SerializeMembers(
    smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.IndexNameHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("IndexName").value();
    serializer.WriteString(memberSchema, m_obj.GetIndexName());
  }
  if (m_obj.ProvisionedWriteCapacityUnitsHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ProvisionedWriteCapacityUnits").value();
    serializer.WriteLong(memberSchema, m_obj.GetProvisionedWriteCapacityUnits());
  }
  if (m_obj.ProvisionedWriteCapacityAutoScalingSettingsUpdateHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ProvisionedWriteCapacityAutoScalingSettingsUpdate").value();
    UpdateGlobalTableSettingsRequest_AutoScalingSettingsUpdateSchemaSerdeSer nested0(
        m_obj.GetProvisionedWriteCapacityAutoScalingSettingsUpdate());
    serializer.WriteStruct(memberSchema, nested0);
  }
}

std::shared_ptr<const smithy::schema::Schema>
UpdateGlobalTableSettingsRequest_GlobalTableGlobalSecondaryIndexSettingsUpdateSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("GlobalTableGlobalSecondaryIndexSettingsUpdate")
      .PutMember("IndexName", smithy::schema::Schema::CreateString("IndexName"))
      .PutMember("ProvisionedWriteCapacityUnits", smithy::schema::Schema::CreateLong("ProvisionedWriteCapacityUnits"))
      .PutMember("ProvisionedWriteCapacityAutoScalingSettingsUpdate",
                 UpdateGlobalTableSettingsRequest_AutoScalingSettingsUpdateSchemaSerdeSer::BuildSchema())
      .Build();
}

void UpdateGlobalTableSettingsRequest_ReplicaSettingsUpdateSchemaSerdeSer::SerializeMembers(
    smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.RegionNameHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("RegionName").value();
    serializer.WriteString(memberSchema, m_obj.GetRegionName());
  }
  if (m_obj.ReplicaProvisionedReadCapacityUnitsHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ReplicaProvisionedReadCapacityUnits").value();
    serializer.WriteLong(memberSchema, m_obj.GetReplicaProvisionedReadCapacityUnits());
  }
  if (m_obj.ReplicaProvisionedReadCapacityAutoScalingSettingsUpdateHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ReplicaProvisionedReadCapacityAutoScalingSettingsUpdate").value();
    UpdateGlobalTableSettingsRequest_AutoScalingSettingsUpdateSchemaSerdeSer nested0(
        m_obj.GetReplicaProvisionedReadCapacityAutoScalingSettingsUpdate());
    serializer.WriteStruct(memberSchema, nested0);
  }
  if (m_obj.ReplicaGlobalSecondaryIndexSettingsUpdateHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ReplicaGlobalSecondaryIndexSettingsUpdate").value();
    serializer.WriteList(memberSchema, m_obj.GetReplicaGlobalSecondaryIndexSettingsUpdate().size(),
                         [&](smithy::schema::ShapeSerializer& listSerializer0) {
                           const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
                           for (const auto& item0 : m_obj.GetReplicaGlobalSecondaryIndexSettingsUpdate()) {
                             UpdateGlobalTableSettingsRequest_ReplicaGlobalSecondaryIndexSettingsUpdateSchemaSerdeSer nested1(item0);
                             listSerializer0.WriteStruct(itemSchema0, nested1);
                           }
                         });
  }
  if (m_obj.ReplicaTableClassHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ReplicaTableClass").value();
    serializer.WriteString(memberSchema, TableClassMapper::GetNameForTableClass(m_obj.GetReplicaTableClass()));
  }
}

std::shared_ptr<const smithy::schema::Schema> UpdateGlobalTableSettingsRequest_ReplicaSettingsUpdateSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("ReplicaSettingsUpdate")
      .PutMember("RegionName", smithy::schema::Schema::CreateString("RegionName"))
      .PutMember("ReplicaProvisionedReadCapacityUnits", smithy::schema::Schema::CreateLong("ReplicaProvisionedReadCapacityUnits"))
      .PutMember("ReplicaProvisionedReadCapacityAutoScalingSettingsUpdate",
                 UpdateGlobalTableSettingsRequest_AutoScalingSettingsUpdateSchemaSerdeSer::BuildSchema())
      .PutMember(
          "ReplicaGlobalSecondaryIndexSettingsUpdate",
          smithy::schema::Schema::ListBuilder("ReplicaGlobalSecondaryIndexSettingsUpdateList")
              .PutMember("member", UpdateGlobalTableSettingsRequest_ReplicaGlobalSecondaryIndexSettingsUpdateSchemaSerdeSer::BuildSchema())
              .Build())
      .PutMember("ReplicaTableClass", smithy::schema::Schema::CreateEnum("ReplicaTableClass"))
      .Build();
}

void UpdateGlobalTableSettingsRequest_ReplicaGlobalSecondaryIndexSettingsUpdateSchemaSerdeSer::SerializeMembers(
    smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.IndexNameHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("IndexName").value();
    serializer.WriteString(memberSchema, m_obj.GetIndexName());
  }
  if (m_obj.ProvisionedReadCapacityUnitsHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ProvisionedReadCapacityUnits").value();
    serializer.WriteLong(memberSchema, m_obj.GetProvisionedReadCapacityUnits());
  }
  if (m_obj.ProvisionedReadCapacityAutoScalingSettingsUpdateHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ProvisionedReadCapacityAutoScalingSettingsUpdate").value();
    UpdateGlobalTableSettingsRequest_AutoScalingSettingsUpdateSchemaSerdeSer nested0(
        m_obj.GetProvisionedReadCapacityAutoScalingSettingsUpdate());
    serializer.WriteStruct(memberSchema, nested0);
  }
}

std::shared_ptr<const smithy::schema::Schema>
UpdateGlobalTableSettingsRequest_ReplicaGlobalSecondaryIndexSettingsUpdateSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("ReplicaGlobalSecondaryIndexSettingsUpdate")
      .PutMember("IndexName", smithy::schema::Schema::CreateString("IndexName"))
      .PutMember("ProvisionedReadCapacityUnits", smithy::schema::Schema::CreateLong("ProvisionedReadCapacityUnits"))
      .PutMember("ProvisionedReadCapacityAutoScalingSettingsUpdate",
                 UpdateGlobalTableSettingsRequest_AutoScalingSettingsUpdateSchemaSerdeSer::BuildSchema())
      .Build();
}

void UpdateGlobalTableSettingsRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.GlobalTableNameHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("GlobalTableName").value();
    serializer.WriteString(memberSchema, m_obj.GetGlobalTableName());
  }
  if (m_obj.GlobalTableBillingModeHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("GlobalTableBillingMode").value();
    serializer.WriteString(memberSchema, BillingModeMapper::GetNameForBillingMode(m_obj.GetGlobalTableBillingMode()));
  }
  if (m_obj.GlobalTableProvisionedWriteCapacityUnitsHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("GlobalTableProvisionedWriteCapacityUnits").value();
    serializer.WriteLong(memberSchema, m_obj.GetGlobalTableProvisionedWriteCapacityUnits());
  }
  if (m_obj.GlobalTableProvisionedWriteCapacityAutoScalingSettingsUpdateHasBeenSet()) {
    const smithy::schema::Schema& memberSchema =
        *m_schema->GetMember("GlobalTableProvisionedWriteCapacityAutoScalingSettingsUpdate").value();
    UpdateGlobalTableSettingsRequest_AutoScalingSettingsUpdateSchemaSerdeSer nested0(
        m_obj.GetGlobalTableProvisionedWriteCapacityAutoScalingSettingsUpdate());
    serializer.WriteStruct(memberSchema, nested0);
  }
  if (m_obj.GlobalTableGlobalSecondaryIndexSettingsUpdateHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("GlobalTableGlobalSecondaryIndexSettingsUpdate").value();
    serializer.WriteList(memberSchema, m_obj.GetGlobalTableGlobalSecondaryIndexSettingsUpdate().size(),
                         [&](smithy::schema::ShapeSerializer& listSerializer0) {
                           const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
                           for (const auto& item0 : m_obj.GetGlobalTableGlobalSecondaryIndexSettingsUpdate()) {
                             UpdateGlobalTableSettingsRequest_GlobalTableGlobalSecondaryIndexSettingsUpdateSchemaSerdeSer nested1(item0);
                             listSerializer0.WriteStruct(itemSchema0, nested1);
                           }
                         });
  }
  if (m_obj.ReplicaSettingsUpdateHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ReplicaSettingsUpdate").value();
    serializer.WriteList(memberSchema, m_obj.GetReplicaSettingsUpdate().size(), [&](smithy::schema::ShapeSerializer& listSerializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      for (const auto& item0 : m_obj.GetReplicaSettingsUpdate()) {
        UpdateGlobalTableSettingsRequest_ReplicaSettingsUpdateSchemaSerdeSer nested1(item0);
        listSerializer0.WriteStruct(itemSchema0, nested1);
      }
    });
  }
}

std::shared_ptr<const smithy::schema::Schema> UpdateGlobalTableSettingsRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("UpdateGlobalTableSettingsRequest")
      .PutMember("GlobalTableName", smithy::schema::Schema::CreateString("GlobalTableName"))
      .PutMember("GlobalTableBillingMode", smithy::schema::Schema::CreateEnum("GlobalTableBillingMode"))
      .PutMember("GlobalTableProvisionedWriteCapacityUnits", smithy::schema::Schema::CreateLong("GlobalTableProvisionedWriteCapacityUnits"))
      .PutMember("GlobalTableProvisionedWriteCapacityAutoScalingSettingsUpdate",
                 UpdateGlobalTableSettingsRequest_AutoScalingSettingsUpdateSchemaSerdeSer::BuildSchema())
      .PutMember("GlobalTableGlobalSecondaryIndexSettingsUpdate",
                 smithy::schema::Schema::ListBuilder("GlobalTableGlobalSecondaryIndexSettingsUpdateList")
                     .PutMember("member",
                                UpdateGlobalTableSettingsRequest_GlobalTableGlobalSecondaryIndexSettingsUpdateSchemaSerdeSer::BuildSchema())
                     .Build())
      .PutMember("ReplicaSettingsUpdate",
                 smithy::schema::Schema::ListBuilder("ReplicaSettingsUpdateList")
                     .PutMember("member", UpdateGlobalTableSettingsRequest_ReplicaSettingsUpdateSchemaSerdeSer::BuildSchema())
                     .Build())
      .Build();
}

}  // namespace
}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws

Aws::UniquePtr<smithy::schema::SerializableStruct> UpdateGlobalTableSettingsRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<UpdateGlobalTableSettingsRequestSerializable>("UpdateGlobalTableSettingsRequestSerializable", *this);
}

Aws::String UpdateGlobalTableSettingsRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext UpdateGlobalTableSettingsRequest::GetSchemaSerdeContext() const {
  return {"UpdateGlobalTableSettings", "2012-08-10"};
}

Aws::Http::HeaderValueCollection UpdateGlobalTableSettingsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DynamoDB_20120810.UpdateGlobalTableSettings"));
  return headers;
}

UpdateGlobalTableSettingsRequest::EndpointParameters UpdateGlobalTableSettingsRequest::GetEndpointContextParams() const {
  EndpointParameters parameters;
  // Operation context parameters
  if (GlobalTableNameHasBeenSet()) {
    parameters.emplace_back(Aws::String("ResourceArn"), this->GetGlobalTableName(),
                            Aws::Endpoint::EndpointParameter::ParameterOrigin::OPERATION_CONTEXT);
  }
  return parameters;
}
