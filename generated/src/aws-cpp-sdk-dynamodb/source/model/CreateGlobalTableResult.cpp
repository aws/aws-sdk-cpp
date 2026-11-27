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
#include <aws/dynamodb/model/CreateGlobalTableResult.h>
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

CreateGlobalTableResult::CreateGlobalTableResult(const Aws::AmazonWebServiceResult<Aws::String>& result) { *this = result; }

CreateGlobalTableResult& CreateGlobalTableResult::operator=(const Aws::AmazonWebServiceResult<Aws::String>& result) {
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
class CreateGlobalTableResultSchemaCache {
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
        Aws::New<std::shared_ptr<const smithy::schema::Schema>>("CreateGlobalTableResultSchemaCache", Adapter::BuildSchema());
    Aws::Utils::ComponentRegistry::RegisterComponent("CreateGlobalTableResultSchemaCache", built, &Release);
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
std::atomic<std::shared_ptr<const smithy::schema::Schema>*> CreateGlobalTableResultSchemaCache<Adapter>::s_schema{nullptr};
template <typename Adapter>
std::mutex CreateGlobalTableResultSchemaCache<Adapter>::s_mutex;

class CreateGlobalTableResult_GlobalTableDescriptionSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit CreateGlobalTableResult_GlobalTableDescriptionSchemaSerdeDeser(GlobalTableDescription& obj)
      : m_obj(obj), m_schema(CreateGlobalTableResultSchemaCache<CreateGlobalTableResult_GlobalTableDescriptionSchemaSerdeDeser>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  GlobalTableDescription& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class CreateGlobalTableResult_ReplicaDescriptionSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit CreateGlobalTableResult_ReplicaDescriptionSchemaSerdeDeser(ReplicaDescription& obj)
      : m_obj(obj), m_schema(CreateGlobalTableResultSchemaCache<CreateGlobalTableResult_ReplicaDescriptionSchemaSerdeDeser>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  ReplicaDescription& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class CreateGlobalTableResult_ProvisionedThroughputOverrideSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit CreateGlobalTableResult_ProvisionedThroughputOverrideSchemaSerdeDeser(ProvisionedThroughputOverride& obj)
      : m_obj(obj),
        m_schema(CreateGlobalTableResultSchemaCache<CreateGlobalTableResult_ProvisionedThroughputOverrideSchemaSerdeDeser>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  ProvisionedThroughputOverride& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class CreateGlobalTableResult_OnDemandThroughputOverrideSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit CreateGlobalTableResult_OnDemandThroughputOverrideSchemaSerdeDeser(OnDemandThroughputOverride& obj)
      : m_obj(obj),
        m_schema(CreateGlobalTableResultSchemaCache<CreateGlobalTableResult_OnDemandThroughputOverrideSchemaSerdeDeser>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  OnDemandThroughputOverride& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class CreateGlobalTableResult_TableWarmThroughputDescriptionSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit CreateGlobalTableResult_TableWarmThroughputDescriptionSchemaSerdeDeser(TableWarmThroughputDescription& obj)
      : m_obj(obj),
        m_schema(CreateGlobalTableResultSchemaCache<CreateGlobalTableResult_TableWarmThroughputDescriptionSchemaSerdeDeser>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  TableWarmThroughputDescription& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class CreateGlobalTableResult_ReplicaGlobalSecondaryIndexDescriptionSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit CreateGlobalTableResult_ReplicaGlobalSecondaryIndexDescriptionSchemaSerdeDeser(ReplicaGlobalSecondaryIndexDescription& obj)
      : m_obj(obj),
        m_schema(
            CreateGlobalTableResultSchemaCache<CreateGlobalTableResult_ReplicaGlobalSecondaryIndexDescriptionSchemaSerdeDeser>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  ReplicaGlobalSecondaryIndexDescription& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class CreateGlobalTableResult_GlobalSecondaryIndexWarmThroughputDescriptionSchemaSerdeDeser final
    : public smithy::schema::SerializableStruct {
 public:
  explicit CreateGlobalTableResult_GlobalSecondaryIndexWarmThroughputDescriptionSchemaSerdeDeser(
      GlobalSecondaryIndexWarmThroughputDescription& obj)
      : m_obj(obj),
        m_schema(CreateGlobalTableResultSchemaCache<
                 CreateGlobalTableResult_GlobalSecondaryIndexWarmThroughputDescriptionSchemaSerdeDeser>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  GlobalSecondaryIndexWarmThroughputDescription& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class CreateGlobalTableResult_TableClassSummarySchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit CreateGlobalTableResult_TableClassSummarySchemaSerdeDeser(TableClassSummary& obj)
      : m_obj(obj), m_schema(CreateGlobalTableResultSchemaCache<CreateGlobalTableResult_TableClassSummarySchemaSerdeDeser>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  TableClassSummary& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class CreateGlobalTableResultDeserializable final : public smithy::schema::SerializableStruct {
 public:
  explicit CreateGlobalTableResultDeserializable(CreateGlobalTableResult& obj)
      : m_obj(obj), m_schema(CreateGlobalTableResultSchemaCache<CreateGlobalTableResultDeserializable>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  CreateGlobalTableResult& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void CreateGlobalTableResult_GlobalTableDescriptionSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
                                                                          smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "ReplicationGroup") {
    Aws::Vector<ReplicaDescription> list0;
    deserializer.ReadList(memberSchema, [&](smithy::schema::ShapeDeserializer& itemDeserializer0) {
      ReplicaDescription nested1;
      CreateGlobalTableResult_ReplicaDescriptionSchemaSerdeDeser{nested1}.Deserialize(itemDeserializer0);
      list0.push_back(std::move(nested1));
    });
    m_obj.SetReplicationGroup(std::move(list0));
    return;
  }
  if (memberName == "GlobalTableArn") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetGlobalTableArn(*value0);
    }
    return;
  }
  if (memberName == "CreationDateTime") {
    auto value0 = deserializer.ReadTimestamp(memberSchema);
    if (value0.has_value()) {
      m_obj.SetCreationDateTime(*value0);
    }
    return;
  }
  if (memberName == "GlobalTableStatus") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetGlobalTableStatus(GlobalTableStatusMapper::GetGlobalTableStatusForName(*value0));
    }
    return;
  }
  if (memberName == "GlobalTableName") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetGlobalTableName(*value0);
    }
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> CreateGlobalTableResult_GlobalTableDescriptionSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("GlobalTableDescription")
      .PutMember(
          "ReplicationGroup",
          smithy::schema::Schema::ListBuilder("ReplicaDescriptionList")
              .PutMember("member", CreateGlobalTableResultSchemaCache<CreateGlobalTableResult_ReplicaDescriptionSchemaSerdeDeser>::Get())
              .Build())
      .PutMember("GlobalTableArn", smithy::schema::Schema::CreateString("GlobalTableArn"))
      .PutMember("CreationDateTime", smithy::schema::Schema::CreateTimestamp("CreationDateTime"))
      .PutMember("GlobalTableStatus", smithy::schema::Schema::CreateEnum("GlobalTableStatus"))
      .PutMember("GlobalTableName", smithy::schema::Schema::CreateString("GlobalTableName"))
      .Build();
}

void CreateGlobalTableResult_ReplicaDescriptionSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
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
  if (memberName == "ReplicaArn") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetReplicaArn(*value0);
    }
    return;
  }
  if (memberName == "ReplicaStatusDescription") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetReplicaStatusDescription(*value0);
    }
    return;
  }
  if (memberName == "ReplicaStatusPercentProgress") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetReplicaStatusPercentProgress(*value0);
    }
    return;
  }
  if (memberName == "KMSMasterKeyId") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetKMSMasterKeyId(*value0);
    }
    return;
  }
  if (memberName == "ProvisionedThroughputOverride") {
    ProvisionedThroughputOverride nested0;
    CreateGlobalTableResult_ProvisionedThroughputOverrideSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetProvisionedThroughputOverride(std::move(nested0));
    return;
  }
  if (memberName == "OnDemandThroughputOverride") {
    OnDemandThroughputOverride nested0;
    CreateGlobalTableResult_OnDemandThroughputOverrideSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetOnDemandThroughputOverride(std::move(nested0));
    return;
  }
  if (memberName == "WarmThroughput") {
    TableWarmThroughputDescription nested0;
    CreateGlobalTableResult_TableWarmThroughputDescriptionSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetWarmThroughput(std::move(nested0));
    return;
  }
  if (memberName == "GlobalSecondaryIndexes") {
    Aws::Vector<ReplicaGlobalSecondaryIndexDescription> list0;
    deserializer.ReadList(memberSchema, [&](smithy::schema::ShapeDeserializer& itemDeserializer0) {
      ReplicaGlobalSecondaryIndexDescription nested1;
      CreateGlobalTableResult_ReplicaGlobalSecondaryIndexDescriptionSchemaSerdeDeser{nested1}.Deserialize(itemDeserializer0);
      list0.push_back(std::move(nested1));
    });
    m_obj.SetGlobalSecondaryIndexes(std::move(list0));
    return;
  }
  if (memberName == "ReplicaInaccessibleDateTime") {
    auto value0 = deserializer.ReadTimestamp(memberSchema);
    if (value0.has_value()) {
      m_obj.SetReplicaInaccessibleDateTime(*value0);
    }
    return;
  }
  if (memberName == "ReplicaTableClassSummary") {
    TableClassSummary nested0;
    CreateGlobalTableResult_TableClassSummarySchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetReplicaTableClassSummary(std::move(nested0));
    return;
  }
  if (memberName == "GlobalTableSettingsReplicationMode") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetGlobalTableSettingsReplicationMode(
          GlobalTableSettingsReplicationModeMapper::GetGlobalTableSettingsReplicationModeForName(*value0));
    }
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> CreateGlobalTableResult_ReplicaDescriptionSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("ReplicaDescription")
      .PutMember("RegionName", smithy::schema::Schema::CreateString("RegionName"))
      .PutMember("ReplicaStatus", smithy::schema::Schema::CreateEnum("ReplicaStatus"))
      .PutMember("ReplicaArn", smithy::schema::Schema::CreateString("ReplicaArn"))
      .PutMember("ReplicaStatusDescription", smithy::schema::Schema::CreateString("ReplicaStatusDescription"))
      .PutMember("ReplicaStatusPercentProgress", smithy::schema::Schema::CreateString("ReplicaStatusPercentProgress"))
      .PutMember("KMSMasterKeyId", smithy::schema::Schema::CreateString("KMSMasterKeyId"))
      .PutMember("ProvisionedThroughputOverride",
                 CreateGlobalTableResultSchemaCache<CreateGlobalTableResult_ProvisionedThroughputOverrideSchemaSerdeDeser>::Get())
      .PutMember("OnDemandThroughputOverride",
                 CreateGlobalTableResultSchemaCache<CreateGlobalTableResult_OnDemandThroughputOverrideSchemaSerdeDeser>::Get())
      .PutMember("WarmThroughput",
                 CreateGlobalTableResultSchemaCache<CreateGlobalTableResult_TableWarmThroughputDescriptionSchemaSerdeDeser>::Get())
      .PutMember(
          "GlobalSecondaryIndexes",
          smithy::schema::Schema::ListBuilder("ReplicaGlobalSecondaryIndexDescriptionList")
              .PutMember(
                  "member",
                  CreateGlobalTableResultSchemaCache<CreateGlobalTableResult_ReplicaGlobalSecondaryIndexDescriptionSchemaSerdeDeser>::Get())
              .Build())
      .PutMember("ReplicaInaccessibleDateTime", smithy::schema::Schema::CreateTimestamp("ReplicaInaccessibleDateTime"))
      .PutMember("ReplicaTableClassSummary",
                 CreateGlobalTableResultSchemaCache<CreateGlobalTableResult_TableClassSummarySchemaSerdeDeser>::Get())
      .PutMember("GlobalTableSettingsReplicationMode", smithy::schema::Schema::CreateEnum("GlobalTableSettingsReplicationMode"))
      .Build();
}

void CreateGlobalTableResult_ProvisionedThroughputOverrideSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
                                                                                 smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "ReadCapacityUnits") {
    auto value0 = deserializer.ReadLong(memberSchema);
    if (value0.has_value()) {
      m_obj.SetReadCapacityUnits(*value0);
    }
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> CreateGlobalTableResult_ProvisionedThroughputOverrideSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("ProvisionedThroughputOverride")
      .PutMember("ReadCapacityUnits", smithy::schema::Schema::CreateLong("ReadCapacityUnits"))
      .Build();
}

void CreateGlobalTableResult_OnDemandThroughputOverrideSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
                                                                              smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "MaxReadRequestUnits") {
    auto value0 = deserializer.ReadLong(memberSchema);
    if (value0.has_value()) {
      m_obj.SetMaxReadRequestUnits(*value0);
    }
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> CreateGlobalTableResult_OnDemandThroughputOverrideSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("OnDemandThroughputOverride")
      .PutMember("MaxReadRequestUnits", smithy::schema::Schema::CreateLong("MaxReadRequestUnits"))
      .Build();
}

void CreateGlobalTableResult_TableWarmThroughputDescriptionSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
                                                                                  smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "ReadUnitsPerSecond") {
    auto value0 = deserializer.ReadLong(memberSchema);
    if (value0.has_value()) {
      m_obj.SetReadUnitsPerSecond(*value0);
    }
    return;
  }
  if (memberName == "WriteUnitsPerSecond") {
    auto value0 = deserializer.ReadLong(memberSchema);
    if (value0.has_value()) {
      m_obj.SetWriteUnitsPerSecond(*value0);
    }
    return;
  }
  if (memberName == "Status") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetStatus(TableStatusMapper::GetTableStatusForName(*value0));
    }
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> CreateGlobalTableResult_TableWarmThroughputDescriptionSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("TableWarmThroughputDescription")
      .PutMember("ReadUnitsPerSecond", smithy::schema::Schema::CreateLong("ReadUnitsPerSecond"))
      .PutMember("WriteUnitsPerSecond", smithy::schema::Schema::CreateLong("WriteUnitsPerSecond"))
      .PutMember("Status", smithy::schema::Schema::CreateEnum("Status"))
      .Build();
}

void CreateGlobalTableResult_ReplicaGlobalSecondaryIndexDescriptionSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
                                                                                          smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "IndexName") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetIndexName(*value0);
    }
    return;
  }
  if (memberName == "ProvisionedThroughputOverride") {
    ProvisionedThroughputOverride nested0;
    CreateGlobalTableResult_ProvisionedThroughputOverrideSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetProvisionedThroughputOverride(std::move(nested0));
    return;
  }
  if (memberName == "OnDemandThroughputOverride") {
    OnDemandThroughputOverride nested0;
    CreateGlobalTableResult_OnDemandThroughputOverrideSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetOnDemandThroughputOverride(std::move(nested0));
    return;
  }
  if (memberName == "WarmThroughput") {
    GlobalSecondaryIndexWarmThroughputDescription nested0;
    CreateGlobalTableResult_GlobalSecondaryIndexWarmThroughputDescriptionSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetWarmThroughput(std::move(nested0));
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema>
CreateGlobalTableResult_ReplicaGlobalSecondaryIndexDescriptionSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("ReplicaGlobalSecondaryIndexDescription")
      .PutMember("IndexName", smithy::schema::Schema::CreateString("IndexName"))
      .PutMember("ProvisionedThroughputOverride",
                 CreateGlobalTableResultSchemaCache<CreateGlobalTableResult_ProvisionedThroughputOverrideSchemaSerdeDeser>::Get())
      .PutMember("OnDemandThroughputOverride",
                 CreateGlobalTableResultSchemaCache<CreateGlobalTableResult_OnDemandThroughputOverrideSchemaSerdeDeser>::Get())
      .PutMember(
          "WarmThroughput",
          CreateGlobalTableResultSchemaCache<CreateGlobalTableResult_GlobalSecondaryIndexWarmThroughputDescriptionSchemaSerdeDeser>::Get())
      .Build();
}

void CreateGlobalTableResult_GlobalSecondaryIndexWarmThroughputDescriptionSchemaSerdeDeser::From(
    const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "ReadUnitsPerSecond") {
    auto value0 = deserializer.ReadLong(memberSchema);
    if (value0.has_value()) {
      m_obj.SetReadUnitsPerSecond(*value0);
    }
    return;
  }
  if (memberName == "WriteUnitsPerSecond") {
    auto value0 = deserializer.ReadLong(memberSchema);
    if (value0.has_value()) {
      m_obj.SetWriteUnitsPerSecond(*value0);
    }
    return;
  }
  if (memberName == "Status") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetStatus(IndexStatusMapper::GetIndexStatusForName(*value0));
    }
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema>
CreateGlobalTableResult_GlobalSecondaryIndexWarmThroughputDescriptionSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("GlobalSecondaryIndexWarmThroughputDescription")
      .PutMember("ReadUnitsPerSecond", smithy::schema::Schema::CreateLong("ReadUnitsPerSecond"))
      .PutMember("WriteUnitsPerSecond", smithy::schema::Schema::CreateLong("WriteUnitsPerSecond"))
      .PutMember("Status", smithy::schema::Schema::CreateEnum("Status"))
      .Build();
}

void CreateGlobalTableResult_TableClassSummarySchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
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

std::shared_ptr<const smithy::schema::Schema> CreateGlobalTableResult_TableClassSummarySchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("TableClassSummary")
      .PutMember("TableClass", smithy::schema::Schema::CreateEnum("TableClass"))
      .PutMember("LastUpdateDateTime", smithy::schema::Schema::CreateTimestamp("LastUpdateDateTime"))
      .Build();
}

void CreateGlobalTableResultDeserializable::From(const smithy::schema::Schema& memberSchema,
                                                 smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "GlobalTableDescription") {
    GlobalTableDescription nested0;
    CreateGlobalTableResult_GlobalTableDescriptionSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetGlobalTableDescription(std::move(nested0));
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> CreateGlobalTableResultDeserializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("CreateGlobalTableResult")
      .PutMember("GlobalTableDescription",
                 CreateGlobalTableResultSchemaCache<CreateGlobalTableResult_GlobalTableDescriptionSchemaSerdeDeser>::Get())
      .Build();
}

}  // namespace
}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws

Aws::UniquePtr<smithy::schema::SerializableStruct> CreateGlobalTableResult::GetSchemaSerdeOutput() {
  return Aws::MakeUnique<CreateGlobalTableResultDeserializable>("CreateGlobalTableResultDeserializable", *this);
}
