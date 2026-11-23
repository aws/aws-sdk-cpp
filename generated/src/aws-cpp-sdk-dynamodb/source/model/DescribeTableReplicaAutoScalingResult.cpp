/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/dynamodb/model/DescribeTableReplicaAutoScalingResult.h>
#include <smithy/client/schema/DocumentConversion.h>
#include <smithy/client/schema/HttpTraits.h>
#include <smithy/client/schema/JsonTraits.h>
#include <smithy/client/schema/Schema.h>
#include <smithy/client/schema/SchemaBuilder.h>
#include <smithy/client/schema/SerdeTraits.h>
#include <smithy/client/schema/SerializableStruct.h>
#include <smithy/client/schema/ShapeDeserializer.h>

#include <utility>

using namespace Aws::DynamoDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeTableReplicaAutoScalingResult::DescribeTableReplicaAutoScalingResult(const Aws::AmazonWebServiceResult<Aws::String>& result) {
  *this = result;
}

DescribeTableReplicaAutoScalingResult& DescribeTableReplicaAutoScalingResult::operator=(
    const Aws::AmazonWebServiceResult<Aws::String>& result) {
  m_HttpResponseCode = result.GetResponseCode();

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}

namespace Aws {
namespace DynamoDB {
namespace Model {
namespace {
class DescribeTableReplicaAutoScalingResult_TableAutoScalingDescriptionSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit DescribeTableReplicaAutoScalingResult_TableAutoScalingDescriptionSchemaSerdeDeser(TableAutoScalingDescription& obj)
      : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  TableAutoScalingDescription& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class DescribeTableReplicaAutoScalingResult_ReplicaAutoScalingDescriptionSchemaSerdeDeser final
    : public smithy::schema::SerializableStruct {
 public:
  explicit DescribeTableReplicaAutoScalingResult_ReplicaAutoScalingDescriptionSchemaSerdeDeser(ReplicaAutoScalingDescription& obj)
      : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  ReplicaAutoScalingDescription& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class DescribeTableReplicaAutoScalingResult_ReplicaGlobalSecondaryIndexAutoScalingDescriptionSchemaSerdeDeser final
    : public smithy::schema::SerializableStruct {
 public:
  explicit DescribeTableReplicaAutoScalingResult_ReplicaGlobalSecondaryIndexAutoScalingDescriptionSchemaSerdeDeser(
      ReplicaGlobalSecondaryIndexAutoScalingDescription& obj)
      : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  ReplicaGlobalSecondaryIndexAutoScalingDescription& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class DescribeTableReplicaAutoScalingResult_AutoScalingSettingsDescriptionSchemaSerdeDeser final
    : public smithy::schema::SerializableStruct {
 public:
  explicit DescribeTableReplicaAutoScalingResult_AutoScalingSettingsDescriptionSchemaSerdeDeser(AutoScalingSettingsDescription& obj)
      : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  AutoScalingSettingsDescription& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class DescribeTableReplicaAutoScalingResult_AutoScalingPolicyDescriptionSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit DescribeTableReplicaAutoScalingResult_AutoScalingPolicyDescriptionSchemaSerdeDeser(AutoScalingPolicyDescription& obj)
      : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  AutoScalingPolicyDescription& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class DescribeTableReplicaAutoScalingResult_AutoScalingTargetTrackingScalingPolicyConfigurationDescriptionSchemaSerdeDeser final
    : public smithy::schema::SerializableStruct {
 public:
  explicit DescribeTableReplicaAutoScalingResult_AutoScalingTargetTrackingScalingPolicyConfigurationDescriptionSchemaSerdeDeser(
      AutoScalingTargetTrackingScalingPolicyConfigurationDescription& obj)
      : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  AutoScalingTargetTrackingScalingPolicyConfigurationDescription& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class DescribeTableReplicaAutoScalingResultDeserializable final : public smithy::schema::SerializableStruct {
 public:
  explicit DescribeTableReplicaAutoScalingResultDeserializable(DescribeTableReplicaAutoScalingResult& obj)
      : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  DescribeTableReplicaAutoScalingResult& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void DescribeTableReplicaAutoScalingResult_TableAutoScalingDescriptionSchemaSerdeDeser::From(
    const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "TableName") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetTableName(*value0);
    }
    return;
  }
  if (memberName == "TableStatus") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetTableStatus(TableStatusMapper::GetTableStatusForName(*value0));
    }
    return;
  }
  if (memberName == "Replicas") {
    Aws::Vector<ReplicaAutoScalingDescription> list0;
    deserializer.ReadList(memberSchema, [&](smithy::schema::ShapeDeserializer& itemDeserializer0) {
      ReplicaAutoScalingDescription nested1;
      DescribeTableReplicaAutoScalingResult_ReplicaAutoScalingDescriptionSchemaSerdeDeser{nested1}.Deserialize(itemDeserializer0);
      list0.push_back(std::move(nested1));
    });
    m_obj.SetReplicas(std::move(list0));
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema>
DescribeTableReplicaAutoScalingResult_TableAutoScalingDescriptionSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("TableAutoScalingDescription")
      .PutMember("TableName", smithy::schema::Schema::CreateString("TableName"))
      .PutMember("TableStatus", smithy::schema::Schema::CreateEnum("TableStatus"))
      .PutMember(
          "Replicas",
          smithy::schema::Schema::ListBuilder("ReplicaAutoScalingDescriptionList")
              .PutMember("member", DescribeTableReplicaAutoScalingResult_ReplicaAutoScalingDescriptionSchemaSerdeDeser::BuildSchema())
              .Build())
      .Build();
}

void DescribeTableReplicaAutoScalingResult_ReplicaAutoScalingDescriptionSchemaSerdeDeser::From(
    const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "RegionName") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetRegionName(*value0);
    }
    return;
  }
  if (memberName == "GlobalSecondaryIndexes") {
    Aws::Vector<ReplicaGlobalSecondaryIndexAutoScalingDescription> list0;
    deserializer.ReadList(memberSchema, [&](smithy::schema::ShapeDeserializer& itemDeserializer0) {
      ReplicaGlobalSecondaryIndexAutoScalingDescription nested1;
      DescribeTableReplicaAutoScalingResult_ReplicaGlobalSecondaryIndexAutoScalingDescriptionSchemaSerdeDeser{nested1}.Deserialize(
          itemDeserializer0);
      list0.push_back(std::move(nested1));
    });
    m_obj.SetGlobalSecondaryIndexes(std::move(list0));
    return;
  }
  if (memberName == "ReplicaProvisionedReadCapacityAutoScalingSettings") {
    AutoScalingSettingsDescription nested0;
    DescribeTableReplicaAutoScalingResult_AutoScalingSettingsDescriptionSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetReplicaProvisionedReadCapacityAutoScalingSettings(std::move(nested0));
    return;
  }
  if (memberName == "ReplicaProvisionedWriteCapacityAutoScalingSettings") {
    AutoScalingSettingsDescription nested0;
    DescribeTableReplicaAutoScalingResult_AutoScalingSettingsDescriptionSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetReplicaProvisionedWriteCapacityAutoScalingSettings(std::move(nested0));
    return;
  }
  if (memberName == "ReplicaStatus") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetReplicaStatus(ReplicaStatusMapper::GetReplicaStatusForName(*value0));
    }
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema>
DescribeTableReplicaAutoScalingResult_ReplicaAutoScalingDescriptionSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("ReplicaAutoScalingDescription")
      .PutMember("RegionName", smithy::schema::Schema::CreateString("RegionName"))
      .PutMember(
          "GlobalSecondaryIndexes",
          smithy::schema::Schema::ListBuilder("ReplicaGlobalSecondaryIndexAutoScalingDescriptionList")
              .PutMember(
                  "member",
                  DescribeTableReplicaAutoScalingResult_ReplicaGlobalSecondaryIndexAutoScalingDescriptionSchemaSerdeDeser::BuildSchema())
              .Build())
      .PutMember("ReplicaProvisionedReadCapacityAutoScalingSettings",
                 DescribeTableReplicaAutoScalingResult_AutoScalingSettingsDescriptionSchemaSerdeDeser::BuildSchema())
      .PutMember("ReplicaProvisionedWriteCapacityAutoScalingSettings",
                 DescribeTableReplicaAutoScalingResult_AutoScalingSettingsDescriptionSchemaSerdeDeser::BuildSchema())
      .PutMember("ReplicaStatus", smithy::schema::Schema::CreateEnum("ReplicaStatus"))
      .Build();
}

void DescribeTableReplicaAutoScalingResult_ReplicaGlobalSecondaryIndexAutoScalingDescriptionSchemaSerdeDeser::From(
    const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "IndexName") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetIndexName(*value0);
    }
    return;
  }
  if (memberName == "IndexStatus") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetIndexStatus(IndexStatusMapper::GetIndexStatusForName(*value0));
    }
    return;
  }
  if (memberName == "ProvisionedReadCapacityAutoScalingSettings") {
    AutoScalingSettingsDescription nested0;
    DescribeTableReplicaAutoScalingResult_AutoScalingSettingsDescriptionSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetProvisionedReadCapacityAutoScalingSettings(std::move(nested0));
    return;
  }
  if (memberName == "ProvisionedWriteCapacityAutoScalingSettings") {
    AutoScalingSettingsDescription nested0;
    DescribeTableReplicaAutoScalingResult_AutoScalingSettingsDescriptionSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetProvisionedWriteCapacityAutoScalingSettings(std::move(nested0));
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema>
DescribeTableReplicaAutoScalingResult_ReplicaGlobalSecondaryIndexAutoScalingDescriptionSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("ReplicaGlobalSecondaryIndexAutoScalingDescription")
      .PutMember("IndexName", smithy::schema::Schema::CreateString("IndexName"))
      .PutMember("IndexStatus", smithy::schema::Schema::CreateEnum("IndexStatus"))
      .PutMember("ProvisionedReadCapacityAutoScalingSettings",
                 DescribeTableReplicaAutoScalingResult_AutoScalingSettingsDescriptionSchemaSerdeDeser::BuildSchema())
      .PutMember("ProvisionedWriteCapacityAutoScalingSettings",
                 DescribeTableReplicaAutoScalingResult_AutoScalingSettingsDescriptionSchemaSerdeDeser::BuildSchema())
      .Build();
}

void DescribeTableReplicaAutoScalingResult_AutoScalingSettingsDescriptionSchemaSerdeDeser::From(
    const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "MinimumUnits") {
    auto value0 = deserializer.ReadLong(memberSchema);
    if (value0.has_value()) {
      m_obj.SetMinimumUnits(*value0);
    }
    return;
  }
  if (memberName == "MaximumUnits") {
    auto value0 = deserializer.ReadLong(memberSchema);
    if (value0.has_value()) {
      m_obj.SetMaximumUnits(*value0);
    }
    return;
  }
  if (memberName == "AutoScalingDisabled") {
    auto value0 = deserializer.ReadBoolean(memberSchema);
    if (value0.has_value()) {
      m_obj.SetAutoScalingDisabled(*value0);
    }
    return;
  }
  if (memberName == "AutoScalingRoleArn") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetAutoScalingRoleArn(*value0);
    }
    return;
  }
  if (memberName == "ScalingPolicies") {
    Aws::Vector<AutoScalingPolicyDescription> list0;
    deserializer.ReadList(memberSchema, [&](smithy::schema::ShapeDeserializer& itemDeserializer0) {
      AutoScalingPolicyDescription nested1;
      DescribeTableReplicaAutoScalingResult_AutoScalingPolicyDescriptionSchemaSerdeDeser{nested1}.Deserialize(itemDeserializer0);
      list0.push_back(std::move(nested1));
    });
    m_obj.SetScalingPolicies(std::move(list0));
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema>
DescribeTableReplicaAutoScalingResult_AutoScalingSettingsDescriptionSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("AutoScalingSettingsDescription")
      .PutMember("MinimumUnits", smithy::schema::Schema::CreateLong("MinimumUnits"))
      .PutMember("MaximumUnits", smithy::schema::Schema::CreateLong("MaximumUnits"))
      .PutMember("AutoScalingDisabled", smithy::schema::Schema::CreateBoolean("AutoScalingDisabled"))
      .PutMember("AutoScalingRoleArn", smithy::schema::Schema::CreateString("AutoScalingRoleArn"))
      .PutMember("ScalingPolicies",
                 smithy::schema::Schema::ListBuilder("AutoScalingPolicyDescriptionList")
                     .PutMember("member", DescribeTableReplicaAutoScalingResult_AutoScalingPolicyDescriptionSchemaSerdeDeser::BuildSchema())
                     .Build())
      .Build();
}

void DescribeTableReplicaAutoScalingResult_AutoScalingPolicyDescriptionSchemaSerdeDeser::From(
    const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "PolicyName") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetPolicyName(*value0);
    }
    return;
  }
  if (memberName == "TargetTrackingScalingPolicyConfiguration") {
    AutoScalingTargetTrackingScalingPolicyConfigurationDescription nested0;
    DescribeTableReplicaAutoScalingResult_AutoScalingTargetTrackingScalingPolicyConfigurationDescriptionSchemaSerdeDeser{nested0}
        .Deserialize(deserializer);
    m_obj.SetTargetTrackingScalingPolicyConfiguration(std::move(nested0));
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema>
DescribeTableReplicaAutoScalingResult_AutoScalingPolicyDescriptionSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("AutoScalingPolicyDescription")
      .PutMember("PolicyName", smithy::schema::Schema::CreateString("PolicyName"))
      .PutMember("TargetTrackingScalingPolicyConfiguration",
                 DescribeTableReplicaAutoScalingResult_AutoScalingTargetTrackingScalingPolicyConfigurationDescriptionSchemaSerdeDeser::
                     BuildSchema())
      .Build();
}

void DescribeTableReplicaAutoScalingResult_AutoScalingTargetTrackingScalingPolicyConfigurationDescriptionSchemaSerdeDeser::From(
    const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "DisableScaleIn") {
    auto value0 = deserializer.ReadBoolean(memberSchema);
    if (value0.has_value()) {
      m_obj.SetDisableScaleIn(*value0);
    }
    return;
  }
  if (memberName == "ScaleInCooldown") {
    auto value0 = deserializer.ReadInteger(memberSchema);
    if (value0.has_value()) {
      m_obj.SetScaleInCooldown(*value0);
    }
    return;
  }
  if (memberName == "ScaleOutCooldown") {
    auto value0 = deserializer.ReadInteger(memberSchema);
    if (value0.has_value()) {
      m_obj.SetScaleOutCooldown(*value0);
    }
    return;
  }
  if (memberName == "TargetValue") {
    auto value0 = deserializer.ReadDouble(memberSchema);
    if (value0.has_value()) {
      m_obj.SetTargetValue(*value0);
    }
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema>
DescribeTableReplicaAutoScalingResult_AutoScalingTargetTrackingScalingPolicyConfigurationDescriptionSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("AutoScalingTargetTrackingScalingPolicyConfigurationDescription")
      .PutMember("DisableScaleIn", smithy::schema::Schema::CreateBoolean("DisableScaleIn"))
      .PutMember("ScaleInCooldown", smithy::schema::Schema::CreateInteger("ScaleInCooldown"))
      .PutMember("ScaleOutCooldown", smithy::schema::Schema::CreateInteger("ScaleOutCooldown"))
      .PutMember("TargetValue", smithy::schema::Schema::CreateDouble("TargetValue"))
      .Build();
}

void DescribeTableReplicaAutoScalingResultDeserializable::From(const smithy::schema::Schema& memberSchema,
                                                               smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "TableAutoScalingDescription") {
    TableAutoScalingDescription nested0;
    DescribeTableReplicaAutoScalingResult_TableAutoScalingDescriptionSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetTableAutoScalingDescription(std::move(nested0));
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> DescribeTableReplicaAutoScalingResultDeserializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("DescribeTableReplicaAutoScalingResult")
      .PutMember("TableAutoScalingDescription",
                 DescribeTableReplicaAutoScalingResult_TableAutoScalingDescriptionSchemaSerdeDeser::BuildSchema())
      .Build();
}

}  // namespace
}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws

Aws::UniquePtr<smithy::schema::SerializableStruct> DescribeTableReplicaAutoScalingResult::GetSchemaSerdeOutput() {
  return Aws::MakeUnique<DescribeTableReplicaAutoScalingResultDeserializable>("DescribeTableReplicaAutoScalingResultDeserializable", *this);
}
