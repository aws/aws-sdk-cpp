/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/component-registry/ComponentRegistry.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/dynamodb/model/UpdateGlobalTableSettingsResult.h>
#include <smithy/client/schema/DocumentConversion.h>
#include <smithy/client/schema/HttpTraits.h>
#include <smithy/client/schema/JsonTraits.h>
#include <smithy/client/schema/Schema.h>
#include <smithy/client/schema/SchemaBuilder.h>
#include <smithy/client/schema/SerdeTraits.h>
#include <smithy/client/schema/SerializableStruct.h>
#include <smithy/client/schema/ShapeDeserializer.h>

#include <atomic>
#include <mutex>
#include <utility>

using namespace Aws::DynamoDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateGlobalTableSettingsResult::UpdateGlobalTableSettingsResult(const Aws::AmazonWebServiceResult<Aws::String>& result) { *this = result; }

UpdateGlobalTableSettingsResult& UpdateGlobalTableSettingsResult::operator=(const Aws::AmazonWebServiceResult<Aws::String>& result) {
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
template <typename Adapter>
class UpdateGlobalTableSettingsResultSchemaCache {
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
        Aws::New<std::shared_ptr<const smithy::schema::Schema>>("UpdateGlobalTableSettingsResultSchemaCache", Adapter::BuildSchema());
    Aws::Utils::ComponentRegistry::RegisterComponent("UpdateGlobalTableSettingsResultSchemaCache", built, &Release);
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
std::atomic<std::shared_ptr<const smithy::schema::Schema>*> UpdateGlobalTableSettingsResultSchemaCache<Adapter>::s_schema{nullptr};
template <typename Adapter>
std::mutex UpdateGlobalTableSettingsResultSchemaCache<Adapter>::s_mutex;

class UpdateGlobalTableSettingsResult_ReplicaSettingsDescriptionSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit UpdateGlobalTableSettingsResult_ReplicaSettingsDescriptionSchemaSerdeDeser(ReplicaSettingsDescription& obj)
      : m_obj(obj),
        m_schema(
            UpdateGlobalTableSettingsResultSchemaCache<UpdateGlobalTableSettingsResult_ReplicaSettingsDescriptionSchemaSerdeDeser>::Get()) {
  }
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  ReplicaSettingsDescription& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class UpdateGlobalTableSettingsResult_BillingModeSummarySchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit UpdateGlobalTableSettingsResult_BillingModeSummarySchemaSerdeDeser(BillingModeSummary& obj)
      : m_obj(obj),
        m_schema(UpdateGlobalTableSettingsResultSchemaCache<UpdateGlobalTableSettingsResult_BillingModeSummarySchemaSerdeDeser>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  BillingModeSummary& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class UpdateGlobalTableSettingsResult_AutoScalingSettingsDescriptionSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit UpdateGlobalTableSettingsResult_AutoScalingSettingsDescriptionSchemaSerdeDeser(AutoScalingSettingsDescription& obj)
      : m_obj(obj),
        m_schema(UpdateGlobalTableSettingsResultSchemaCache<
                 UpdateGlobalTableSettingsResult_AutoScalingSettingsDescriptionSchemaSerdeDeser>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  AutoScalingSettingsDescription& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class UpdateGlobalTableSettingsResult_AutoScalingPolicyDescriptionSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit UpdateGlobalTableSettingsResult_AutoScalingPolicyDescriptionSchemaSerdeDeser(AutoScalingPolicyDescription& obj)
      : m_obj(obj),
        m_schema(UpdateGlobalTableSettingsResultSchemaCache<
                 UpdateGlobalTableSettingsResult_AutoScalingPolicyDescriptionSchemaSerdeDeser>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  AutoScalingPolicyDescription& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class UpdateGlobalTableSettingsResult_AutoScalingTargetTrackingScalingPolicyConfigurationDescriptionSchemaSerdeDeser final
    : public smithy::schema::SerializableStruct {
 public:
  explicit UpdateGlobalTableSettingsResult_AutoScalingTargetTrackingScalingPolicyConfigurationDescriptionSchemaSerdeDeser(
      AutoScalingTargetTrackingScalingPolicyConfigurationDescription& obj)
      : m_obj(obj),
        m_schema(UpdateGlobalTableSettingsResultSchemaCache<
                 UpdateGlobalTableSettingsResult_AutoScalingTargetTrackingScalingPolicyConfigurationDescriptionSchemaSerdeDeser>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  AutoScalingTargetTrackingScalingPolicyConfigurationDescription& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class UpdateGlobalTableSettingsResult_ReplicaGlobalSecondaryIndexSettingsDescriptionSchemaSerdeDeser final
    : public smithy::schema::SerializableStruct {
 public:
  explicit UpdateGlobalTableSettingsResult_ReplicaGlobalSecondaryIndexSettingsDescriptionSchemaSerdeDeser(
      ReplicaGlobalSecondaryIndexSettingsDescription& obj)
      : m_obj(obj),
        m_schema(UpdateGlobalTableSettingsResultSchemaCache<
                 UpdateGlobalTableSettingsResult_ReplicaGlobalSecondaryIndexSettingsDescriptionSchemaSerdeDeser>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  ReplicaGlobalSecondaryIndexSettingsDescription& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class UpdateGlobalTableSettingsResult_TableClassSummarySchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit UpdateGlobalTableSettingsResult_TableClassSummarySchemaSerdeDeser(TableClassSummary& obj)
      : m_obj(obj),
        m_schema(UpdateGlobalTableSettingsResultSchemaCache<UpdateGlobalTableSettingsResult_TableClassSummarySchemaSerdeDeser>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  TableClassSummary& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class UpdateGlobalTableSettingsResultDeserializable final : public smithy::schema::SerializableStruct {
 public:
  explicit UpdateGlobalTableSettingsResultDeserializable(UpdateGlobalTableSettingsResult& obj)
      : m_obj(obj), m_schema(UpdateGlobalTableSettingsResultSchemaCache<UpdateGlobalTableSettingsResultDeserializable>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  UpdateGlobalTableSettingsResult& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void UpdateGlobalTableSettingsResult_ReplicaSettingsDescriptionSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
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
    UpdateGlobalTableSettingsResult_BillingModeSummarySchemaSerdeDeser{nested0}.Deserialize(deserializer);
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
    UpdateGlobalTableSettingsResult_AutoScalingSettingsDescriptionSchemaSerdeDeser{nested0}.Deserialize(deserializer);
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
    UpdateGlobalTableSettingsResult_AutoScalingSettingsDescriptionSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetReplicaProvisionedWriteCapacityAutoScalingSettings(std::move(nested0));
    return;
  }
  if (memberName == "ReplicaGlobalSecondaryIndexSettings") {
    Aws::Vector<ReplicaGlobalSecondaryIndexSettingsDescription> list0;
    deserializer.ReadList(memberSchema, [&](smithy::schema::ShapeDeserializer& itemDeserializer0) {
      ReplicaGlobalSecondaryIndexSettingsDescription nested1;
      UpdateGlobalTableSettingsResult_ReplicaGlobalSecondaryIndexSettingsDescriptionSchemaSerdeDeser{nested1}.Deserialize(
          itemDeserializer0);
      list0.push_back(std::move(nested1));
    });
    m_obj.SetReplicaGlobalSecondaryIndexSettings(std::move(list0));
    return;
  }
  if (memberName == "ReplicaTableClassSummary") {
    TableClassSummary nested0;
    UpdateGlobalTableSettingsResult_TableClassSummarySchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetReplicaTableClassSummary(std::move(nested0));
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> UpdateGlobalTableSettingsResult_ReplicaSettingsDescriptionSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("ReplicaSettingsDescription")
      .PutMember("RegionName", smithy::schema::Schema::CreateString("RegionName"))
      .PutMember("ReplicaStatus", smithy::schema::Schema::CreateEnum("ReplicaStatus"))
      .PutMember("ReplicaBillingModeSummary",
                 UpdateGlobalTableSettingsResultSchemaCache<UpdateGlobalTableSettingsResult_BillingModeSummarySchemaSerdeDeser>::Get())
      .PutMember("ReplicaProvisionedReadCapacityUnits", smithy::schema::Schema::CreateLong("ReplicaProvisionedReadCapacityUnits"))
      .PutMember(
          "ReplicaProvisionedReadCapacityAutoScalingSettings",
          UpdateGlobalTableSettingsResultSchemaCache<UpdateGlobalTableSettingsResult_AutoScalingSettingsDescriptionSchemaSerdeDeser>::Get())
      .PutMember("ReplicaProvisionedWriteCapacityUnits", smithy::schema::Schema::CreateLong("ReplicaProvisionedWriteCapacityUnits"))
      .PutMember(
          "ReplicaProvisionedWriteCapacityAutoScalingSettings",
          UpdateGlobalTableSettingsResultSchemaCache<UpdateGlobalTableSettingsResult_AutoScalingSettingsDescriptionSchemaSerdeDeser>::Get())
      .PutMember("ReplicaGlobalSecondaryIndexSettings",
                 smithy::schema::Schema::ListBuilder("ReplicaGlobalSecondaryIndexSettingsDescriptionList")
                     .PutMember("member",
                                UpdateGlobalTableSettingsResultSchemaCache<
                                    UpdateGlobalTableSettingsResult_ReplicaGlobalSecondaryIndexSettingsDescriptionSchemaSerdeDeser>::Get())
                     .Build())
      .PutMember("ReplicaTableClassSummary",
                 UpdateGlobalTableSettingsResultSchemaCache<UpdateGlobalTableSettingsResult_TableClassSummarySchemaSerdeDeser>::Get())
      .Build();
}

void UpdateGlobalTableSettingsResult_BillingModeSummarySchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
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

std::shared_ptr<const smithy::schema::Schema> UpdateGlobalTableSettingsResult_BillingModeSummarySchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("BillingModeSummary")
      .PutMember("BillingMode", smithy::schema::Schema::CreateEnum("BillingMode"))
      .PutMember("LastUpdateToPayPerRequestDateTime", smithy::schema::Schema::CreateTimestamp("LastUpdateToPayPerRequestDateTime"))
      .Build();
}

void UpdateGlobalTableSettingsResult_AutoScalingSettingsDescriptionSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
                                                                                          smithy::schema::ShapeDeserializer& deserializer) {
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
      UpdateGlobalTableSettingsResult_AutoScalingPolicyDescriptionSchemaSerdeDeser{nested1}.Deserialize(itemDeserializer0);
      list0.push_back(std::move(nested1));
    });
    m_obj.SetScalingPolicies(std::move(list0));
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema>
UpdateGlobalTableSettingsResult_AutoScalingSettingsDescriptionSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("AutoScalingSettingsDescription")
      .PutMember("MinimumUnits", smithy::schema::Schema::CreateLong("MinimumUnits"))
      .PutMember("MaximumUnits", smithy::schema::Schema::CreateLong("MaximumUnits"))
      .PutMember("AutoScalingDisabled", smithy::schema::Schema::CreateBoolean("AutoScalingDisabled"))
      .PutMember("AutoScalingRoleArn", smithy::schema::Schema::CreateString("AutoScalingRoleArn"))
      .PutMember("ScalingPolicies",
                 smithy::schema::Schema::ListBuilder("AutoScalingPolicyDescriptionList")
                     .PutMember("member", UpdateGlobalTableSettingsResultSchemaCache<
                                              UpdateGlobalTableSettingsResult_AutoScalingPolicyDescriptionSchemaSerdeDeser>::Get())
                     .Build())
      .Build();
}

void UpdateGlobalTableSettingsResult_AutoScalingPolicyDescriptionSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
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
    UpdateGlobalTableSettingsResult_AutoScalingTargetTrackingScalingPolicyConfigurationDescriptionSchemaSerdeDeser{nested0}.Deserialize(
        deserializer);
    m_obj.SetTargetTrackingScalingPolicyConfiguration(std::move(nested0));
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> UpdateGlobalTableSettingsResult_AutoScalingPolicyDescriptionSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("AutoScalingPolicyDescription")
      .PutMember("PolicyName", smithy::schema::Schema::CreateString("PolicyName"))
      .PutMember("TargetTrackingScalingPolicyConfiguration",
                 UpdateGlobalTableSettingsResultSchemaCache<
                     UpdateGlobalTableSettingsResult_AutoScalingTargetTrackingScalingPolicyConfigurationDescriptionSchemaSerdeDeser>::Get())
      .Build();
}

void UpdateGlobalTableSettingsResult_AutoScalingTargetTrackingScalingPolicyConfigurationDescriptionSchemaSerdeDeser::From(
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
UpdateGlobalTableSettingsResult_AutoScalingTargetTrackingScalingPolicyConfigurationDescriptionSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("AutoScalingTargetTrackingScalingPolicyConfigurationDescription")
      .PutMember("DisableScaleIn", smithy::schema::Schema::CreateBoolean("DisableScaleIn"))
      .PutMember("ScaleInCooldown", smithy::schema::Schema::CreateInteger("ScaleInCooldown"))
      .PutMember("ScaleOutCooldown", smithy::schema::Schema::CreateInteger("ScaleOutCooldown"))
      .PutMember("TargetValue", smithy::schema::Schema::CreateDouble("TargetValue"))
      .Build();
}

void UpdateGlobalTableSettingsResult_ReplicaGlobalSecondaryIndexSettingsDescriptionSchemaSerdeDeser::From(
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
    UpdateGlobalTableSettingsResult_AutoScalingSettingsDescriptionSchemaSerdeDeser{nested0}.Deserialize(deserializer);
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
    UpdateGlobalTableSettingsResult_AutoScalingSettingsDescriptionSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetProvisionedWriteCapacityAutoScalingSettings(std::move(nested0));
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema>
UpdateGlobalTableSettingsResult_ReplicaGlobalSecondaryIndexSettingsDescriptionSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("ReplicaGlobalSecondaryIndexSettingsDescription")
      .PutMember("IndexName", smithy::schema::Schema::CreateString("IndexName"))
      .PutMember("IndexStatus", smithy::schema::Schema::CreateEnum("IndexStatus"))
      .PutMember("ProvisionedReadCapacityUnits", smithy::schema::Schema::CreateLong("ProvisionedReadCapacityUnits"))
      .PutMember(
          "ProvisionedReadCapacityAutoScalingSettings",
          UpdateGlobalTableSettingsResultSchemaCache<UpdateGlobalTableSettingsResult_AutoScalingSettingsDescriptionSchemaSerdeDeser>::Get())
      .PutMember("ProvisionedWriteCapacityUnits", smithy::schema::Schema::CreateLong("ProvisionedWriteCapacityUnits"))
      .PutMember(
          "ProvisionedWriteCapacityAutoScalingSettings",
          UpdateGlobalTableSettingsResultSchemaCache<UpdateGlobalTableSettingsResult_AutoScalingSettingsDescriptionSchemaSerdeDeser>::Get())
      .Build();
}

void UpdateGlobalTableSettingsResult_TableClassSummarySchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
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

std::shared_ptr<const smithy::schema::Schema> UpdateGlobalTableSettingsResult_TableClassSummarySchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("TableClassSummary")
      .PutMember("TableClass", smithy::schema::Schema::CreateEnum("TableClass"))
      .PutMember("LastUpdateDateTime", smithy::schema::Schema::CreateTimestamp("LastUpdateDateTime"))
      .Build();
}

void UpdateGlobalTableSettingsResultDeserializable::From(const smithy::schema::Schema& memberSchema,
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
      UpdateGlobalTableSettingsResult_ReplicaSettingsDescriptionSchemaSerdeDeser{nested1}.Deserialize(itemDeserializer0);
      list0.push_back(std::move(nested1));
    });
    m_obj.SetReplicaSettings(std::move(list0));
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> UpdateGlobalTableSettingsResultDeserializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("UpdateGlobalTableSettingsResult")
      .PutMember("GlobalTableName", smithy::schema::Schema::CreateString("GlobalTableName"))
      .PutMember("ReplicaSettings",
                 smithy::schema::Schema::ListBuilder("ReplicaSettingsDescriptionList")
                     .PutMember("member", UpdateGlobalTableSettingsResultSchemaCache<
                                              UpdateGlobalTableSettingsResult_ReplicaSettingsDescriptionSchemaSerdeDeser>::Get())
                     .Build())
      .Build();
}

}  // namespace
}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws

Aws::UniquePtr<smithy::schema::SerializableStruct> UpdateGlobalTableSettingsResult::GetSchemaSerdeOutput() {
  return Aws::MakeUnique<UpdateGlobalTableSettingsResultDeserializable>("UpdateGlobalTableSettingsResultDeserializable", *this);
}
