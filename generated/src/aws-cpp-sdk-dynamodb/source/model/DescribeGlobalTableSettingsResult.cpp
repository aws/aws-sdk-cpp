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
#include <aws/dynamodb/model/DescribeGlobalTableSettingsResult.h>
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

DescribeGlobalTableSettingsResult::DescribeGlobalTableSettingsResult(const Aws::AmazonWebServiceResult<Aws::String>& result) {
  *this = result;
}

DescribeGlobalTableSettingsResult& DescribeGlobalTableSettingsResult::operator=(const Aws::AmazonWebServiceResult<Aws::String>& result) {
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
class DescribeGlobalTableSettingsResult_ReplicaSettingsDescriptionSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit DescribeGlobalTableSettingsResult_ReplicaSettingsDescriptionSchemaSerdeDeser(ReplicaSettingsDescription& obj)
      : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  ReplicaSettingsDescription& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class DescribeGlobalTableSettingsResult_BillingModeSummarySchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit DescribeGlobalTableSettingsResult_BillingModeSummarySchemaSerdeDeser(BillingModeSummary& obj)
      : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  BillingModeSummary& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class DescribeGlobalTableSettingsResult_AutoScalingSettingsDescriptionSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit DescribeGlobalTableSettingsResult_AutoScalingSettingsDescriptionSchemaSerdeDeser(AutoScalingSettingsDescription& obj)
      : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  AutoScalingSettingsDescription& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class DescribeGlobalTableSettingsResult_AutoScalingPolicyDescriptionSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit DescribeGlobalTableSettingsResult_AutoScalingPolicyDescriptionSchemaSerdeDeser(AutoScalingPolicyDescription& obj)
      : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  AutoScalingPolicyDescription& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class DescribeGlobalTableSettingsResult_AutoScalingTargetTrackingScalingPolicyConfigurationDescriptionSchemaSerdeDeser final
    : public smithy::schema::SerializableStruct {
 public:
  explicit DescribeGlobalTableSettingsResult_AutoScalingTargetTrackingScalingPolicyConfigurationDescriptionSchemaSerdeDeser(
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

class DescribeGlobalTableSettingsResult_ReplicaGlobalSecondaryIndexSettingsDescriptionSchemaSerdeDeser final
    : public smithy::schema::SerializableStruct {
 public:
  explicit DescribeGlobalTableSettingsResult_ReplicaGlobalSecondaryIndexSettingsDescriptionSchemaSerdeDeser(
      ReplicaGlobalSecondaryIndexSettingsDescription& obj)
      : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  ReplicaGlobalSecondaryIndexSettingsDescription& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class DescribeGlobalTableSettingsResult_TableClassSummarySchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit DescribeGlobalTableSettingsResult_TableClassSummarySchemaSerdeDeser(TableClassSummary& obj)
      : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  TableClassSummary& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class DescribeGlobalTableSettingsResultDeserializable final : public smithy::schema::SerializableStruct {
 public:
  explicit DescribeGlobalTableSettingsResultDeserializable(DescribeGlobalTableSettingsResult& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  DescribeGlobalTableSettingsResult& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void DescribeGlobalTableSettingsResult_ReplicaSettingsDescriptionSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
                                                                                        smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "RegionName") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetRegionName(*value0);
    }
    return;
  }
  if (memberName == "ReplicaStatus") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetReplicaStatus(ReplicaStatusMapper::GetReplicaStatusForName(*value0));
    }
    return;
  }
  if (memberName == "ReplicaBillingModeSummary") {
    BillingModeSummary nested0;
    DescribeGlobalTableSettingsResult_BillingModeSummarySchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetReplicaBillingModeSummary(std::move(nested0));
    return;
  }
  if (memberName == "ReplicaProvisionedReadCapacityUnits") {
    auto value0 = deserializer.ReadLong(memberSchema);
    if (value0.has_value()) {
      m_obj.SetReplicaProvisionedReadCapacityUnits(*value0);
    }
    return;
  }
  if (memberName == "ReplicaProvisionedReadCapacityAutoScalingSettings") {
    AutoScalingSettingsDescription nested0;
    DescribeGlobalTableSettingsResult_AutoScalingSettingsDescriptionSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetReplicaProvisionedReadCapacityAutoScalingSettings(std::move(nested0));
    return;
  }
  if (memberName == "ReplicaProvisionedWriteCapacityUnits") {
    auto value0 = deserializer.ReadLong(memberSchema);
    if (value0.has_value()) {
      m_obj.SetReplicaProvisionedWriteCapacityUnits(*value0);
    }
    return;
  }
  if (memberName == "ReplicaProvisionedWriteCapacityAutoScalingSettings") {
    AutoScalingSettingsDescription nested0;
    DescribeGlobalTableSettingsResult_AutoScalingSettingsDescriptionSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetReplicaProvisionedWriteCapacityAutoScalingSettings(std::move(nested0));
    return;
  }
  if (memberName == "ReplicaGlobalSecondaryIndexSettings") {
    Aws::Vector<ReplicaGlobalSecondaryIndexSettingsDescription> list0;
    deserializer.ReadList(memberSchema, [&](smithy::schema::ShapeDeserializer& itemDeserializer0) {
      ReplicaGlobalSecondaryIndexSettingsDescription nested1;
      DescribeGlobalTableSettingsResult_ReplicaGlobalSecondaryIndexSettingsDescriptionSchemaSerdeDeser{nested1}.Deserialize(
          itemDeserializer0);
      list0.push_back(std::move(nested1));
    });
    m_obj.SetReplicaGlobalSecondaryIndexSettings(std::move(list0));
    return;
  }
  if (memberName == "ReplicaTableClassSummary") {
    TableClassSummary nested0;
    DescribeGlobalTableSettingsResult_TableClassSummarySchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetReplicaTableClassSummary(std::move(nested0));
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> DescribeGlobalTableSettingsResult_ReplicaSettingsDescriptionSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("ReplicaSettingsDescription")
      .PutMember("RegionName", smithy::schema::Schema::CreateString("RegionName"))
      .PutMember("ReplicaStatus", smithy::schema::Schema::CreateEnum("ReplicaStatus"))
      .PutMember("ReplicaBillingModeSummary", DescribeGlobalTableSettingsResult_BillingModeSummarySchemaSerdeDeser::BuildSchema())
      .PutMember("ReplicaProvisionedReadCapacityUnits", smithy::schema::Schema::CreateLong("ReplicaProvisionedReadCapacityUnits"))
      .PutMember("ReplicaProvisionedReadCapacityAutoScalingSettings",
                 DescribeGlobalTableSettingsResult_AutoScalingSettingsDescriptionSchemaSerdeDeser::BuildSchema())
      .PutMember("ReplicaProvisionedWriteCapacityUnits", smithy::schema::Schema::CreateLong("ReplicaProvisionedWriteCapacityUnits"))
      .PutMember("ReplicaProvisionedWriteCapacityAutoScalingSettings",
                 DescribeGlobalTableSettingsResult_AutoScalingSettingsDescriptionSchemaSerdeDeser::BuildSchema())
      .PutMember(
          "ReplicaGlobalSecondaryIndexSettings",
          smithy::schema::Schema::ListBuilder("ReplicaGlobalSecondaryIndexSettingsDescriptionList")
              .PutMember("member",
                         DescribeGlobalTableSettingsResult_ReplicaGlobalSecondaryIndexSettingsDescriptionSchemaSerdeDeser::BuildSchema())
              .Build())
      .PutMember("ReplicaTableClassSummary", DescribeGlobalTableSettingsResult_TableClassSummarySchemaSerdeDeser::BuildSchema())
      .Build();
}

void DescribeGlobalTableSettingsResult_BillingModeSummarySchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
                                                                                smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "BillingMode") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetBillingMode(BillingModeMapper::GetBillingModeForName(*value0));
    }
    return;
  }
  if (memberName == "LastUpdateToPayPerRequestDateTime") {
    auto value0 = deserializer.ReadTimestamp(memberSchema);
    if (value0.has_value()) {
      m_obj.SetLastUpdateToPayPerRequestDateTime(*value0);
    }
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> DescribeGlobalTableSettingsResult_BillingModeSummarySchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("BillingModeSummary")
      .PutMember("BillingMode", smithy::schema::Schema::CreateEnum("BillingMode"))
      .PutMember("LastUpdateToPayPerRequestDateTime", smithy::schema::Schema::CreateTimestamp("LastUpdateToPayPerRequestDateTime"))
      .Build();
}

void DescribeGlobalTableSettingsResult_AutoScalingSettingsDescriptionSchemaSerdeDeser::From(
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
      DescribeGlobalTableSettingsResult_AutoScalingPolicyDescriptionSchemaSerdeDeser{nested1}.Deserialize(itemDeserializer0);
      list0.push_back(std::move(nested1));
    });
    m_obj.SetScalingPolicies(std::move(list0));
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema>
DescribeGlobalTableSettingsResult_AutoScalingSettingsDescriptionSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("AutoScalingSettingsDescription")
      .PutMember("MinimumUnits", smithy::schema::Schema::CreateLong("MinimumUnits"))
      .PutMember("MaximumUnits", smithy::schema::Schema::CreateLong("MaximumUnits"))
      .PutMember("AutoScalingDisabled", smithy::schema::Schema::CreateBoolean("AutoScalingDisabled"))
      .PutMember("AutoScalingRoleArn", smithy::schema::Schema::CreateString("AutoScalingRoleArn"))
      .PutMember("ScalingPolicies",
                 smithy::schema::Schema::ListBuilder("AutoScalingPolicyDescriptionList")
                     .PutMember("member", DescribeGlobalTableSettingsResult_AutoScalingPolicyDescriptionSchemaSerdeDeser::BuildSchema())
                     .Build())
      .Build();
}

void DescribeGlobalTableSettingsResult_AutoScalingPolicyDescriptionSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
                                                                                          smithy::schema::ShapeDeserializer& deserializer) {
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
    DescribeGlobalTableSettingsResult_AutoScalingTargetTrackingScalingPolicyConfigurationDescriptionSchemaSerdeDeser{nested0}.Deserialize(
        deserializer);
    m_obj.SetTargetTrackingScalingPolicyConfiguration(std::move(nested0));
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema>
DescribeGlobalTableSettingsResult_AutoScalingPolicyDescriptionSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("AutoScalingPolicyDescription")
      .PutMember("PolicyName", smithy::schema::Schema::CreateString("PolicyName"))
      .PutMember(
          "TargetTrackingScalingPolicyConfiguration",
          DescribeGlobalTableSettingsResult_AutoScalingTargetTrackingScalingPolicyConfigurationDescriptionSchemaSerdeDeser::BuildSchema())
      .Build();
}

void DescribeGlobalTableSettingsResult_AutoScalingTargetTrackingScalingPolicyConfigurationDescriptionSchemaSerdeDeser::From(
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
DescribeGlobalTableSettingsResult_AutoScalingTargetTrackingScalingPolicyConfigurationDescriptionSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("AutoScalingTargetTrackingScalingPolicyConfigurationDescription")
      .PutMember("DisableScaleIn", smithy::schema::Schema::CreateBoolean("DisableScaleIn"))
      .PutMember("ScaleInCooldown", smithy::schema::Schema::CreateInteger("ScaleInCooldown"))
      .PutMember("ScaleOutCooldown", smithy::schema::Schema::CreateInteger("ScaleOutCooldown"))
      .PutMember("TargetValue", smithy::schema::Schema::CreateDouble("TargetValue"))
      .Build();
}

void DescribeGlobalTableSettingsResult_ReplicaGlobalSecondaryIndexSettingsDescriptionSchemaSerdeDeser::From(
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
  if (memberName == "ProvisionedReadCapacityUnits") {
    auto value0 = deserializer.ReadLong(memberSchema);
    if (value0.has_value()) {
      m_obj.SetProvisionedReadCapacityUnits(*value0);
    }
    return;
  }
  if (memberName == "ProvisionedReadCapacityAutoScalingSettings") {
    AutoScalingSettingsDescription nested0;
    DescribeGlobalTableSettingsResult_AutoScalingSettingsDescriptionSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetProvisionedReadCapacityAutoScalingSettings(std::move(nested0));
    return;
  }
  if (memberName == "ProvisionedWriteCapacityUnits") {
    auto value0 = deserializer.ReadLong(memberSchema);
    if (value0.has_value()) {
      m_obj.SetProvisionedWriteCapacityUnits(*value0);
    }
    return;
  }
  if (memberName == "ProvisionedWriteCapacityAutoScalingSettings") {
    AutoScalingSettingsDescription nested0;
    DescribeGlobalTableSettingsResult_AutoScalingSettingsDescriptionSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetProvisionedWriteCapacityAutoScalingSettings(std::move(nested0));
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema>
DescribeGlobalTableSettingsResult_ReplicaGlobalSecondaryIndexSettingsDescriptionSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("ReplicaGlobalSecondaryIndexSettingsDescription")
      .PutMember("IndexName", smithy::schema::Schema::CreateString("IndexName"))
      .PutMember("IndexStatus", smithy::schema::Schema::CreateEnum("IndexStatus"))
      .PutMember("ProvisionedReadCapacityUnits", smithy::schema::Schema::CreateLong("ProvisionedReadCapacityUnits"))
      .PutMember("ProvisionedReadCapacityAutoScalingSettings",
                 DescribeGlobalTableSettingsResult_AutoScalingSettingsDescriptionSchemaSerdeDeser::BuildSchema())
      .PutMember("ProvisionedWriteCapacityUnits", smithy::schema::Schema::CreateLong("ProvisionedWriteCapacityUnits"))
      .PutMember("ProvisionedWriteCapacityAutoScalingSettings",
                 DescribeGlobalTableSettingsResult_AutoScalingSettingsDescriptionSchemaSerdeDeser::BuildSchema())
      .Build();
}

void DescribeGlobalTableSettingsResult_TableClassSummarySchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
                                                                               smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "TableClass") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetTableClass(TableClassMapper::GetTableClassForName(*value0));
    }
    return;
  }
  if (memberName == "LastUpdateDateTime") {
    auto value0 = deserializer.ReadTimestamp(memberSchema);
    if (value0.has_value()) {
      m_obj.SetLastUpdateDateTime(*value0);
    }
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> DescribeGlobalTableSettingsResult_TableClassSummarySchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("TableClassSummary")
      .PutMember("TableClass", smithy::schema::Schema::CreateEnum("TableClass"))
      .PutMember("LastUpdateDateTime", smithy::schema::Schema::CreateTimestamp("LastUpdateDateTime"))
      .Build();
}

void DescribeGlobalTableSettingsResultDeserializable::From(const smithy::schema::Schema& memberSchema,
                                                           smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "GlobalTableName") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetGlobalTableName(*value0);
    }
    return;
  }
  if (memberName == "ReplicaSettings") {
    Aws::Vector<ReplicaSettingsDescription> list0;
    deserializer.ReadList(memberSchema, [&](smithy::schema::ShapeDeserializer& itemDeserializer0) {
      ReplicaSettingsDescription nested1;
      DescribeGlobalTableSettingsResult_ReplicaSettingsDescriptionSchemaSerdeDeser{nested1}.Deserialize(itemDeserializer0);
      list0.push_back(std::move(nested1));
    });
    m_obj.SetReplicaSettings(std::move(list0));
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> DescribeGlobalTableSettingsResultDeserializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("DescribeGlobalTableSettingsResult")
      .PutMember("GlobalTableName", smithy::schema::Schema::CreateString("GlobalTableName"))
      .PutMember("ReplicaSettings",
                 smithy::schema::Schema::ListBuilder("ReplicaSettingsDescriptionList")
                     .PutMember("member", DescribeGlobalTableSettingsResult_ReplicaSettingsDescriptionSchemaSerdeDeser::BuildSchema())
                     .Build())
      .Build();
}

}  // namespace
}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws

Aws::UniquePtr<smithy::schema::SerializableStruct> DescribeGlobalTableSettingsResult::GetSchemaSerdeOutput() {
  return Aws::MakeUnique<DescribeGlobalTableSettingsResultDeserializable>("DescribeGlobalTableSettingsResultDeserializable", *this);
}
