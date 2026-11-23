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
#include <aws/dynamodb/model/CreateTableResult.h>
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

CreateTableResult::CreateTableResult(const Aws::AmazonWebServiceResult<Aws::String>& result) { *this = result; }

CreateTableResult& CreateTableResult::operator=(const Aws::AmazonWebServiceResult<Aws::String>& result) {
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
class CreateTableResult_TableDescriptionSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit CreateTableResult_TableDescriptionSchemaSerdeDeser(TableDescription& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  TableDescription& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class CreateTableResult_AttributeDefinitionSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit CreateTableResult_AttributeDefinitionSchemaSerdeDeser(AttributeDefinition& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  AttributeDefinition& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class CreateTableResult_KeySchemaElementSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit CreateTableResult_KeySchemaElementSchemaSerdeDeser(KeySchemaElement& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  KeySchemaElement& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class CreateTableResult_ProvisionedThroughputDescriptionSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit CreateTableResult_ProvisionedThroughputDescriptionSchemaSerdeDeser(ProvisionedThroughputDescription& obj)
      : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  ProvisionedThroughputDescription& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class CreateTableResult_BillingModeSummarySchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit CreateTableResult_BillingModeSummarySchemaSerdeDeser(BillingModeSummary& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  BillingModeSummary& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class CreateTableResult_LocalSecondaryIndexDescriptionSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit CreateTableResult_LocalSecondaryIndexDescriptionSchemaSerdeDeser(LocalSecondaryIndexDescription& obj)
      : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  LocalSecondaryIndexDescription& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class CreateTableResult_ProjectionSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit CreateTableResult_ProjectionSchemaSerdeDeser(Projection& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  Projection& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class CreateTableResult_GlobalSecondaryIndexDescriptionSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit CreateTableResult_GlobalSecondaryIndexDescriptionSchemaSerdeDeser(GlobalSecondaryIndexDescription& obj)
      : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  GlobalSecondaryIndexDescription& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class CreateTableResult_OnDemandThroughputSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit CreateTableResult_OnDemandThroughputSchemaSerdeDeser(OnDemandThroughput& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  OnDemandThroughput& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class CreateTableResult_GlobalSecondaryIndexWarmThroughputDescriptionSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit CreateTableResult_GlobalSecondaryIndexWarmThroughputDescriptionSchemaSerdeDeser(
      GlobalSecondaryIndexWarmThroughputDescription& obj)
      : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  GlobalSecondaryIndexWarmThroughputDescription& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class CreateTableResult_StreamSpecificationSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit CreateTableResult_StreamSpecificationSchemaSerdeDeser(StreamSpecification& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  StreamSpecification& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class CreateTableResult_ReplicaDescriptionSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit CreateTableResult_ReplicaDescriptionSchemaSerdeDeser(ReplicaDescription& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  ReplicaDescription& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class CreateTableResult_ProvisionedThroughputOverrideSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit CreateTableResult_ProvisionedThroughputOverrideSchemaSerdeDeser(ProvisionedThroughputOverride& obj)
      : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  ProvisionedThroughputOverride& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class CreateTableResult_OnDemandThroughputOverrideSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit CreateTableResult_OnDemandThroughputOverrideSchemaSerdeDeser(OnDemandThroughputOverride& obj)
      : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  OnDemandThroughputOverride& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class CreateTableResult_TableWarmThroughputDescriptionSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit CreateTableResult_TableWarmThroughputDescriptionSchemaSerdeDeser(TableWarmThroughputDescription& obj)
      : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  TableWarmThroughputDescription& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class CreateTableResult_ReplicaGlobalSecondaryIndexDescriptionSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit CreateTableResult_ReplicaGlobalSecondaryIndexDescriptionSchemaSerdeDeser(ReplicaGlobalSecondaryIndexDescription& obj)
      : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  ReplicaGlobalSecondaryIndexDescription& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class CreateTableResult_TableClassSummarySchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit CreateTableResult_TableClassSummarySchemaSerdeDeser(TableClassSummary& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  TableClassSummary& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class CreateTableResult_GlobalTableWitnessDescriptionSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit CreateTableResult_GlobalTableWitnessDescriptionSchemaSerdeDeser(GlobalTableWitnessDescription& obj)
      : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  GlobalTableWitnessDescription& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class CreateTableResult_RestoreSummarySchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit CreateTableResult_RestoreSummarySchemaSerdeDeser(RestoreSummary& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  RestoreSummary& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class CreateTableResult_SSEDescriptionSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit CreateTableResult_SSEDescriptionSchemaSerdeDeser(SSEDescription& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  SSEDescription& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class CreateTableResult_ArchivalSummarySchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit CreateTableResult_ArchivalSummarySchemaSerdeDeser(ArchivalSummary& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  ArchivalSummary& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class CreateTableResult_VectorIndexDescriptionSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit CreateTableResult_VectorIndexDescriptionSchemaSerdeDeser(VectorIndexDescription& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  VectorIndexDescription& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class CreateTableResult_SearchSchemaElementSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit CreateTableResult_SearchSchemaElementSchemaSerdeDeser(SearchSchemaElement& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  SearchSchemaElement& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class CreateTableResult_VectorAttributeDefinitionSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit CreateTableResult_VectorAttributeDefinitionSchemaSerdeDeser(VectorAttributeDefinition& obj)
      : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  VectorAttributeDefinition& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class CreateTableResultDeserializable final : public smithy::schema::SerializableStruct {
 public:
  explicit CreateTableResultDeserializable(CreateTableResult& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  CreateTableResult& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void CreateTableResult_TableDescriptionSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
                                                              smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "AttributeDefinitions") {
    Aws::Vector<AttributeDefinition> list0;
    deserializer.ReadList(memberSchema, [&](smithy::schema::ShapeDeserializer& itemDeserializer0) {
      AttributeDefinition nested1;
      CreateTableResult_AttributeDefinitionSchemaSerdeDeser{nested1}.Deserialize(itemDeserializer0);
      list0.push_back(std::move(nested1));
    });
    m_obj.SetAttributeDefinitions(std::move(list0));
    return;
  }
  if (memberName == "TableName") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetTableName(*value0);
    }
    return;
  }
  if (memberName == "KeySchema") {
    Aws::Vector<KeySchemaElement> list0;
    deserializer.ReadList(memberSchema, [&](smithy::schema::ShapeDeserializer& itemDeserializer0) {
      KeySchemaElement nested1;
      CreateTableResult_KeySchemaElementSchemaSerdeDeser{nested1}.Deserialize(itemDeserializer0);
      list0.push_back(std::move(nested1));
    });
    m_obj.SetKeySchema(std::move(list0));
    return;
  }
  if (memberName == "TableStatus") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetTableStatus(TableStatusMapper::GetTableStatusForName(*value0));
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
  if (memberName == "ProvisionedThroughput") {
    ProvisionedThroughputDescription nested0;
    CreateTableResult_ProvisionedThroughputDescriptionSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetProvisionedThroughput(std::move(nested0));
    return;
  }
  if (memberName == "TableSizeBytes") {
    auto value0 = deserializer.ReadLong(memberSchema);
    if (value0.has_value()) {
      m_obj.SetTableSizeBytes(*value0);
    }
    return;
  }
  if (memberName == "ItemCount") {
    auto value0 = deserializer.ReadLong(memberSchema);
    if (value0.has_value()) {
      m_obj.SetItemCount(*value0);
    }
    return;
  }
  if (memberName == "TableArn") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetTableArn(*value0);
    }
    return;
  }
  if (memberName == "TableId") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetTableId(*value0);
    }
    return;
  }
  if (memberName == "BillingModeSummary") {
    BillingModeSummary nested0;
    CreateTableResult_BillingModeSummarySchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetBillingModeSummary(std::move(nested0));
    return;
  }
  if (memberName == "LocalSecondaryIndexes") {
    Aws::Vector<LocalSecondaryIndexDescription> list0;
    deserializer.ReadList(memberSchema, [&](smithy::schema::ShapeDeserializer& itemDeserializer0) {
      LocalSecondaryIndexDescription nested1;
      CreateTableResult_LocalSecondaryIndexDescriptionSchemaSerdeDeser{nested1}.Deserialize(itemDeserializer0);
      list0.push_back(std::move(nested1));
    });
    m_obj.SetLocalSecondaryIndexes(std::move(list0));
    return;
  }
  if (memberName == "GlobalSecondaryIndexes") {
    Aws::Vector<GlobalSecondaryIndexDescription> list0;
    deserializer.ReadList(memberSchema, [&](smithy::schema::ShapeDeserializer& itemDeserializer0) {
      GlobalSecondaryIndexDescription nested1;
      CreateTableResult_GlobalSecondaryIndexDescriptionSchemaSerdeDeser{nested1}.Deserialize(itemDeserializer0);
      list0.push_back(std::move(nested1));
    });
    m_obj.SetGlobalSecondaryIndexes(std::move(list0));
    return;
  }
  if (memberName == "StreamSpecification") {
    StreamSpecification nested0;
    CreateTableResult_StreamSpecificationSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetStreamSpecification(std::move(nested0));
    return;
  }
  if (memberName == "LatestStreamLabel") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetLatestStreamLabel(*value0);
    }
    return;
  }
  if (memberName == "LatestStreamArn") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetLatestStreamArn(*value0);
    }
    return;
  }
  if (memberName == "GlobalTableVersion") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetGlobalTableVersion(*value0);
    }
    return;
  }
  if (memberName == "Replicas") {
    Aws::Vector<ReplicaDescription> list0;
    deserializer.ReadList(memberSchema, [&](smithy::schema::ShapeDeserializer& itemDeserializer0) {
      ReplicaDescription nested1;
      CreateTableResult_ReplicaDescriptionSchemaSerdeDeser{nested1}.Deserialize(itemDeserializer0);
      list0.push_back(std::move(nested1));
    });
    m_obj.SetReplicas(std::move(list0));
    return;
  }
  if (memberName == "GlobalTableWitnesses") {
    Aws::Vector<GlobalTableWitnessDescription> list0;
    deserializer.ReadList(memberSchema, [&](smithy::schema::ShapeDeserializer& itemDeserializer0) {
      GlobalTableWitnessDescription nested1;
      CreateTableResult_GlobalTableWitnessDescriptionSchemaSerdeDeser{nested1}.Deserialize(itemDeserializer0);
      list0.push_back(std::move(nested1));
    });
    m_obj.SetGlobalTableWitnesses(std::move(list0));
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
  if (memberName == "RestoreSummary") {
    RestoreSummary nested0;
    CreateTableResult_RestoreSummarySchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetRestoreSummary(std::move(nested0));
    return;
  }
  if (memberName == "SSEDescription") {
    SSEDescription nested0;
    CreateTableResult_SSEDescriptionSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetSSEDescription(std::move(nested0));
    return;
  }
  if (memberName == "ArchivalSummary") {
    ArchivalSummary nested0;
    CreateTableResult_ArchivalSummarySchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetArchivalSummary(std::move(nested0));
    return;
  }
  if (memberName == "TableClassSummary") {
    TableClassSummary nested0;
    CreateTableResult_TableClassSummarySchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetTableClassSummary(std::move(nested0));
    return;
  }
  if (memberName == "DeletionProtectionEnabled") {
    auto value0 = deserializer.ReadBoolean(memberSchema);
    if (value0.has_value()) {
      m_obj.SetDeletionProtectionEnabled(*value0);
    }
    return;
  }
  if (memberName == "DisassociationProtectionEnabled") {
    auto value0 = deserializer.ReadBoolean(memberSchema);
    if (value0.has_value()) {
      m_obj.SetDisassociationProtectionEnabled(*value0);
    }
    return;
  }
  if (memberName == "OnDemandThroughput") {
    OnDemandThroughput nested0;
    CreateTableResult_OnDemandThroughputSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetOnDemandThroughput(std::move(nested0));
    return;
  }
  if (memberName == "WarmThroughput") {
    TableWarmThroughputDescription nested0;
    CreateTableResult_TableWarmThroughputDescriptionSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetWarmThroughput(std::move(nested0));
    return;
  }
  if (memberName == "MultiRegionConsistency") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetMultiRegionConsistency(MultiRegionConsistencyMapper::GetMultiRegionConsistencyForName(*value0));
    }
    return;
  }
  if (memberName == "VectorIndexes") {
    Aws::Vector<VectorIndexDescription> list0;
    deserializer.ReadList(memberSchema, [&](smithy::schema::ShapeDeserializer& itemDeserializer0) {
      VectorIndexDescription nested1;
      CreateTableResult_VectorIndexDescriptionSchemaSerdeDeser{nested1}.Deserialize(itemDeserializer0);
      list0.push_back(std::move(nested1));
    });
    m_obj.SetVectorIndexes(std::move(list0));
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> CreateTableResult_TableDescriptionSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("TableDescription")
      .PutMember("AttributeDefinitions", smithy::schema::Schema::ListBuilder("AttributeDefinitions")
                                             .PutMember("member", CreateTableResult_AttributeDefinitionSchemaSerdeDeser::BuildSchema())
                                             .Build())
      .PutMember("TableName", smithy::schema::Schema::CreateString("TableName"))
      .PutMember("KeySchema", smithy::schema::Schema::ListBuilder("KeySchema")
                                  .PutMember("member", CreateTableResult_KeySchemaElementSchemaSerdeDeser::BuildSchema())
                                  .Build())
      .PutMember("TableStatus", smithy::schema::Schema::CreateEnum("TableStatus"))
      .PutMember("CreationDateTime", smithy::schema::Schema::CreateTimestamp("CreationDateTime"))
      .PutMember("ProvisionedThroughput", CreateTableResult_ProvisionedThroughputDescriptionSchemaSerdeDeser::BuildSchema())
      .PutMember("TableSizeBytes", smithy::schema::Schema::CreateLong("TableSizeBytes"))
      .PutMember("ItemCount", smithy::schema::Schema::CreateLong("ItemCount"))
      .PutMember("TableArn", smithy::schema::Schema::CreateString("TableArn"))
      .PutMember("TableId", smithy::schema::Schema::CreateString("TableId"))
      .PutMember("BillingModeSummary", CreateTableResult_BillingModeSummarySchemaSerdeDeser::BuildSchema())
      .PutMember("LocalSecondaryIndexes",
                 smithy::schema::Schema::ListBuilder("LocalSecondaryIndexDescriptionList")
                     .PutMember("member", CreateTableResult_LocalSecondaryIndexDescriptionSchemaSerdeDeser::BuildSchema())
                     .Build())
      .PutMember("GlobalSecondaryIndexes",
                 smithy::schema::Schema::ListBuilder("GlobalSecondaryIndexDescriptionList")
                     .PutMember("member", CreateTableResult_GlobalSecondaryIndexDescriptionSchemaSerdeDeser::BuildSchema())
                     .Build())
      .PutMember("StreamSpecification", CreateTableResult_StreamSpecificationSchemaSerdeDeser::BuildSchema())
      .PutMember("LatestStreamLabel", smithy::schema::Schema::CreateString("LatestStreamLabel"))
      .PutMember("LatestStreamArn", smithy::schema::Schema::CreateString("LatestStreamArn"))
      .PutMember("GlobalTableVersion", smithy::schema::Schema::CreateString("GlobalTableVersion"))
      .PutMember("Replicas", smithy::schema::Schema::ListBuilder("ReplicaDescriptionList")
                                 .PutMember("member", CreateTableResult_ReplicaDescriptionSchemaSerdeDeser::BuildSchema())
                                 .Build())
      .PutMember("GlobalTableWitnesses",
                 smithy::schema::Schema::ListBuilder("GlobalTableWitnessDescriptionList")
                     .PutMember("member", CreateTableResult_GlobalTableWitnessDescriptionSchemaSerdeDeser::BuildSchema())
                     .Build())
      .PutMember("GlobalTableSettingsReplicationMode", smithy::schema::Schema::CreateEnum("GlobalTableSettingsReplicationMode"))
      .PutMember("RestoreSummary", CreateTableResult_RestoreSummarySchemaSerdeDeser::BuildSchema())
      .PutMember("SSEDescription", CreateTableResult_SSEDescriptionSchemaSerdeDeser::BuildSchema())
      .PutMember("ArchivalSummary", CreateTableResult_ArchivalSummarySchemaSerdeDeser::BuildSchema())
      .PutMember("TableClassSummary", CreateTableResult_TableClassSummarySchemaSerdeDeser::BuildSchema())
      .PutMember("DeletionProtectionEnabled", smithy::schema::Schema::CreateBoolean("DeletionProtectionEnabled"))
      .PutMember("DisassociationProtectionEnabled", smithy::schema::Schema::CreateBoolean("DisassociationProtectionEnabled"))
      .PutMember("OnDemandThroughput", CreateTableResult_OnDemandThroughputSchemaSerdeDeser::BuildSchema())
      .PutMember("WarmThroughput", CreateTableResult_TableWarmThroughputDescriptionSchemaSerdeDeser::BuildSchema())
      .PutMember("MultiRegionConsistency", smithy::schema::Schema::CreateEnum("MultiRegionConsistency"))
      .PutMember("VectorIndexes", smithy::schema::Schema::ListBuilder("VectorIndexDescriptionList")
                                      .PutMember("member", CreateTableResult_VectorIndexDescriptionSchemaSerdeDeser::BuildSchema())
                                      .Build())
      .Build();
}

void CreateTableResult_AttributeDefinitionSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
                                                                 smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "AttributeName") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetAttributeName(*value0);
    }
    return;
  }
  if (memberName == "AttributeType") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetAttributeType(ScalarAttributeTypeMapper::GetScalarAttributeTypeForName(*value0));
    }
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> CreateTableResult_AttributeDefinitionSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("AttributeDefinition")
      .PutMember("AttributeName", smithy::schema::Schema::CreateString("AttributeName"))
      .PutMember("AttributeType", smithy::schema::Schema::CreateEnum("AttributeType"))
      .Build();
}

void CreateTableResult_KeySchemaElementSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
                                                              smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "AttributeName") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetAttributeName(*value0);
    }
    return;
  }
  if (memberName == "KeyType") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetKeyType(KeyTypeMapper::GetKeyTypeForName(*value0));
    }
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> CreateTableResult_KeySchemaElementSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("KeySchemaElement")
      .PutMember("AttributeName", smithy::schema::Schema::CreateString("AttributeName"))
      .PutMember("KeyType", smithy::schema::Schema::CreateEnum("KeyType"))
      .Build();
}

void CreateTableResult_ProvisionedThroughputDescriptionSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
                                                                              smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "LastIncreaseDateTime") {
    auto value0 = deserializer.ReadTimestamp(memberSchema);
    if (value0.has_value()) {
      m_obj.SetLastIncreaseDateTime(*value0);
    }
    return;
  }
  if (memberName == "LastDecreaseDateTime") {
    auto value0 = deserializer.ReadTimestamp(memberSchema);
    if (value0.has_value()) {
      m_obj.SetLastDecreaseDateTime(*value0);
    }
    return;
  }
  if (memberName == "NumberOfDecreasesToday") {
    auto value0 = deserializer.ReadLong(memberSchema);
    if (value0.has_value()) {
      m_obj.SetNumberOfDecreasesToday(*value0);
    }
    return;
  }
  if (memberName == "ReadCapacityUnits") {
    auto value0 = deserializer.ReadLong(memberSchema);
    if (value0.has_value()) {
      m_obj.SetReadCapacityUnits(*value0);
    }
    return;
  }
  if (memberName == "WriteCapacityUnits") {
    auto value0 = deserializer.ReadLong(memberSchema);
    if (value0.has_value()) {
      m_obj.SetWriteCapacityUnits(*value0);
    }
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> CreateTableResult_ProvisionedThroughputDescriptionSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("ProvisionedThroughputDescription")
      .PutMember("LastIncreaseDateTime", smithy::schema::Schema::CreateTimestamp("LastIncreaseDateTime"))
      .PutMember("LastDecreaseDateTime", smithy::schema::Schema::CreateTimestamp("LastDecreaseDateTime"))
      .PutMember("NumberOfDecreasesToday", smithy::schema::Schema::CreateLong("NumberOfDecreasesToday"))
      .PutMember("ReadCapacityUnits", smithy::schema::Schema::CreateLong("ReadCapacityUnits"))
      .PutMember("WriteCapacityUnits", smithy::schema::Schema::CreateLong("WriteCapacityUnits"))
      .Build();
}

void CreateTableResult_BillingModeSummarySchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
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

std::shared_ptr<const smithy::schema::Schema> CreateTableResult_BillingModeSummarySchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("BillingModeSummary")
      .PutMember("BillingMode", smithy::schema::Schema::CreateEnum("BillingMode"))
      .PutMember("LastUpdateToPayPerRequestDateTime", smithy::schema::Schema::CreateTimestamp("LastUpdateToPayPerRequestDateTime"))
      .Build();
}

void CreateTableResult_LocalSecondaryIndexDescriptionSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
                                                                            smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "IndexName") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetIndexName(*value0);
    }
    return;
  }
  if (memberName == "KeySchema") {
    Aws::Vector<KeySchemaElement> list0;
    deserializer.ReadList(memberSchema, [&](smithy::schema::ShapeDeserializer& itemDeserializer0) {
      KeySchemaElement nested1;
      CreateTableResult_KeySchemaElementSchemaSerdeDeser{nested1}.Deserialize(itemDeserializer0);
      list0.push_back(std::move(nested1));
    });
    m_obj.SetKeySchema(std::move(list0));
    return;
  }
  if (memberName == "Projection") {
    Projection nested0;
    CreateTableResult_ProjectionSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetProjection(std::move(nested0));
    return;
  }
  if (memberName == "IndexSizeBytes") {
    auto value0 = deserializer.ReadLong(memberSchema);
    if (value0.has_value()) {
      m_obj.SetIndexSizeBytes(*value0);
    }
    return;
  }
  if (memberName == "ItemCount") {
    auto value0 = deserializer.ReadLong(memberSchema);
    if (value0.has_value()) {
      m_obj.SetItemCount(*value0);
    }
    return;
  }
  if (memberName == "IndexArn") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetIndexArn(*value0);
    }
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> CreateTableResult_LocalSecondaryIndexDescriptionSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("LocalSecondaryIndexDescription")
      .PutMember("IndexName", smithy::schema::Schema::CreateString("IndexName"))
      .PutMember("KeySchema", smithy::schema::Schema::ListBuilder("KeySchema")
                                  .PutMember("member", CreateTableResult_KeySchemaElementSchemaSerdeDeser::BuildSchema())
                                  .Build())
      .PutMember("Projection", CreateTableResult_ProjectionSchemaSerdeDeser::BuildSchema())
      .PutMember("IndexSizeBytes", smithy::schema::Schema::CreateLong("IndexSizeBytes"))
      .PutMember("ItemCount", smithy::schema::Schema::CreateLong("ItemCount"))
      .PutMember("IndexArn", smithy::schema::Schema::CreateString("IndexArn"))
      .Build();
}

void CreateTableResult_ProjectionSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
                                                        smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "ProjectionType") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetProjectionType(ProjectionTypeMapper::GetProjectionTypeForName(*value0));
    }
    return;
  }
  if (memberName == "NonKeyAttributes") {
    Aws::Vector<Aws::String> list0;
    deserializer.ReadList(memberSchema, [&](smithy::schema::ShapeDeserializer& itemDeserializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      auto value1 = itemDeserializer0.ReadString(itemSchema0);
      if (value1.has_value()) {
        list0.push_back(*value1);
      }
    });
    m_obj.SetNonKeyAttributes(std::move(list0));
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> CreateTableResult_ProjectionSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("Projection")
      .PutMember("ProjectionType", smithy::schema::Schema::CreateEnum("ProjectionType"))
      .PutMember("NonKeyAttributes", smithy::schema::Schema::ListBuilder("NonKeyAttributeNameList")
                                         .PutMember("member", smithy::schema::Schema::CreateString("member"))
                                         .Build())
      .Build();
}

void CreateTableResult_GlobalSecondaryIndexDescriptionSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
                                                                             smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "IndexName") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetIndexName(*value0);
    }
    return;
  }
  if (memberName == "KeySchema") {
    Aws::Vector<KeySchemaElement> list0;
    deserializer.ReadList(memberSchema, [&](smithy::schema::ShapeDeserializer& itemDeserializer0) {
      KeySchemaElement nested1;
      CreateTableResult_KeySchemaElementSchemaSerdeDeser{nested1}.Deserialize(itemDeserializer0);
      list0.push_back(std::move(nested1));
    });
    m_obj.SetKeySchema(std::move(list0));
    return;
  }
  if (memberName == "Projection") {
    Projection nested0;
    CreateTableResult_ProjectionSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetProjection(std::move(nested0));
    return;
  }
  if (memberName == "IndexStatus") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetIndexStatus(IndexStatusMapper::GetIndexStatusForName(*value0));
    }
    return;
  }
  if (memberName == "Backfilling") {
    auto value0 = deserializer.ReadBoolean(memberSchema);
    if (value0.has_value()) {
      m_obj.SetBackfilling(*value0);
    }
    return;
  }
  if (memberName == "ProvisionedThroughput") {
    ProvisionedThroughputDescription nested0;
    CreateTableResult_ProvisionedThroughputDescriptionSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetProvisionedThroughput(std::move(nested0));
    return;
  }
  if (memberName == "IndexSizeBytes") {
    auto value0 = deserializer.ReadLong(memberSchema);
    if (value0.has_value()) {
      m_obj.SetIndexSizeBytes(*value0);
    }
    return;
  }
  if (memberName == "ItemCount") {
    auto value0 = deserializer.ReadLong(memberSchema);
    if (value0.has_value()) {
      m_obj.SetItemCount(*value0);
    }
    return;
  }
  if (memberName == "IndexArn") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetIndexArn(*value0);
    }
    return;
  }
  if (memberName == "OnDemandThroughput") {
    OnDemandThroughput nested0;
    CreateTableResult_OnDemandThroughputSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetOnDemandThroughput(std::move(nested0));
    return;
  }
  if (memberName == "WarmThroughput") {
    GlobalSecondaryIndexWarmThroughputDescription nested0;
    CreateTableResult_GlobalSecondaryIndexWarmThroughputDescriptionSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetWarmThroughput(std::move(nested0));
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> CreateTableResult_GlobalSecondaryIndexDescriptionSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("GlobalSecondaryIndexDescription")
      .PutMember("IndexName", smithy::schema::Schema::CreateString("IndexName"))
      .PutMember("KeySchema", smithy::schema::Schema::ListBuilder("KeySchema")
                                  .PutMember("member", CreateTableResult_KeySchemaElementSchemaSerdeDeser::BuildSchema())
                                  .Build())
      .PutMember("Projection", CreateTableResult_ProjectionSchemaSerdeDeser::BuildSchema())
      .PutMember("IndexStatus", smithy::schema::Schema::CreateEnum("IndexStatus"))
      .PutMember("Backfilling", smithy::schema::Schema::CreateBoolean("Backfilling"))
      .PutMember("ProvisionedThroughput", CreateTableResult_ProvisionedThroughputDescriptionSchemaSerdeDeser::BuildSchema())
      .PutMember("IndexSizeBytes", smithy::schema::Schema::CreateLong("IndexSizeBytes"))
      .PutMember("ItemCount", smithy::schema::Schema::CreateLong("ItemCount"))
      .PutMember("IndexArn", smithy::schema::Schema::CreateString("IndexArn"))
      .PutMember("OnDemandThroughput", CreateTableResult_OnDemandThroughputSchemaSerdeDeser::BuildSchema())
      .PutMember("WarmThroughput", CreateTableResult_GlobalSecondaryIndexWarmThroughputDescriptionSchemaSerdeDeser::BuildSchema())
      .Build();
}

void CreateTableResult_OnDemandThroughputSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
                                                                smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "MaxReadRequestUnits") {
    auto value0 = deserializer.ReadLong(memberSchema);
    if (value0.has_value()) {
      m_obj.SetMaxReadRequestUnits(*value0);
    }
    return;
  }
  if (memberName == "MaxWriteRequestUnits") {
    auto value0 = deserializer.ReadLong(memberSchema);
    if (value0.has_value()) {
      m_obj.SetMaxWriteRequestUnits(*value0);
    }
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> CreateTableResult_OnDemandThroughputSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("OnDemandThroughput")
      .PutMember("MaxReadRequestUnits", smithy::schema::Schema::CreateLong("MaxReadRequestUnits"))
      .PutMember("MaxWriteRequestUnits", smithy::schema::Schema::CreateLong("MaxWriteRequestUnits"))
      .Build();
}

void CreateTableResult_GlobalSecondaryIndexWarmThroughputDescriptionSchemaSerdeDeser::From(
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
CreateTableResult_GlobalSecondaryIndexWarmThroughputDescriptionSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("GlobalSecondaryIndexWarmThroughputDescription")
      .PutMember("ReadUnitsPerSecond", smithy::schema::Schema::CreateLong("ReadUnitsPerSecond"))
      .PutMember("WriteUnitsPerSecond", smithy::schema::Schema::CreateLong("WriteUnitsPerSecond"))
      .PutMember("Status", smithy::schema::Schema::CreateEnum("Status"))
      .Build();
}

void CreateTableResult_StreamSpecificationSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
                                                                 smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "StreamEnabled") {
    auto value0 = deserializer.ReadBoolean(memberSchema);
    if (value0.has_value()) {
      m_obj.SetStreamEnabled(*value0);
    }
    return;
  }
  if (memberName == "StreamViewType") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetStreamViewType(StreamViewTypeMapper::GetStreamViewTypeForName(*value0));
    }
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> CreateTableResult_StreamSpecificationSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("StreamSpecification")
      .PutMember("StreamEnabled", smithy::schema::Schema::CreateBoolean("StreamEnabled"))
      .PutMember("StreamViewType", smithy::schema::Schema::CreateEnum("StreamViewType"))
      .Build();
}

void CreateTableResult_ReplicaDescriptionSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
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
    CreateTableResult_ProvisionedThroughputOverrideSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetProvisionedThroughputOverride(std::move(nested0));
    return;
  }
  if (memberName == "OnDemandThroughputOverride") {
    OnDemandThroughputOverride nested0;
    CreateTableResult_OnDemandThroughputOverrideSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetOnDemandThroughputOverride(std::move(nested0));
    return;
  }
  if (memberName == "WarmThroughput") {
    TableWarmThroughputDescription nested0;
    CreateTableResult_TableWarmThroughputDescriptionSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetWarmThroughput(std::move(nested0));
    return;
  }
  if (memberName == "GlobalSecondaryIndexes") {
    Aws::Vector<ReplicaGlobalSecondaryIndexDescription> list0;
    deserializer.ReadList(memberSchema, [&](smithy::schema::ShapeDeserializer& itemDeserializer0) {
      ReplicaGlobalSecondaryIndexDescription nested1;
      CreateTableResult_ReplicaGlobalSecondaryIndexDescriptionSchemaSerdeDeser{nested1}.Deserialize(itemDeserializer0);
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
    CreateTableResult_TableClassSummarySchemaSerdeDeser{nested0}.Deserialize(deserializer);
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

std::shared_ptr<const smithy::schema::Schema> CreateTableResult_ReplicaDescriptionSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("ReplicaDescription")
      .PutMember("RegionName", smithy::schema::Schema::CreateString("RegionName"))
      .PutMember("ReplicaStatus", smithy::schema::Schema::CreateEnum("ReplicaStatus"))
      .PutMember("ReplicaArn", smithy::schema::Schema::CreateString("ReplicaArn"))
      .PutMember("ReplicaStatusDescription", smithy::schema::Schema::CreateString("ReplicaStatusDescription"))
      .PutMember("ReplicaStatusPercentProgress", smithy::schema::Schema::CreateString("ReplicaStatusPercentProgress"))
      .PutMember("KMSMasterKeyId", smithy::schema::Schema::CreateString("KMSMasterKeyId"))
      .PutMember("ProvisionedThroughputOverride", CreateTableResult_ProvisionedThroughputOverrideSchemaSerdeDeser::BuildSchema())
      .PutMember("OnDemandThroughputOverride", CreateTableResult_OnDemandThroughputOverrideSchemaSerdeDeser::BuildSchema())
      .PutMember("WarmThroughput", CreateTableResult_TableWarmThroughputDescriptionSchemaSerdeDeser::BuildSchema())
      .PutMember("GlobalSecondaryIndexes",
                 smithy::schema::Schema::ListBuilder("ReplicaGlobalSecondaryIndexDescriptionList")
                     .PutMember("member", CreateTableResult_ReplicaGlobalSecondaryIndexDescriptionSchemaSerdeDeser::BuildSchema())
                     .Build())
      .PutMember("ReplicaInaccessibleDateTime", smithy::schema::Schema::CreateTimestamp("ReplicaInaccessibleDateTime"))
      .PutMember("ReplicaTableClassSummary", CreateTableResult_TableClassSummarySchemaSerdeDeser::BuildSchema())
      .PutMember("GlobalTableSettingsReplicationMode", smithy::schema::Schema::CreateEnum("GlobalTableSettingsReplicationMode"))
      .Build();
}

void CreateTableResult_ProvisionedThroughputOverrideSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
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

std::shared_ptr<const smithy::schema::Schema> CreateTableResult_ProvisionedThroughputOverrideSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("ProvisionedThroughputOverride")
      .PutMember("ReadCapacityUnits", smithy::schema::Schema::CreateLong("ReadCapacityUnits"))
      .Build();
}

void CreateTableResult_OnDemandThroughputOverrideSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
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

std::shared_ptr<const smithy::schema::Schema> CreateTableResult_OnDemandThroughputOverrideSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("OnDemandThroughputOverride")
      .PutMember("MaxReadRequestUnits", smithy::schema::Schema::CreateLong("MaxReadRequestUnits"))
      .Build();
}

void CreateTableResult_TableWarmThroughputDescriptionSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
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

std::shared_ptr<const smithy::schema::Schema> CreateTableResult_TableWarmThroughputDescriptionSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("TableWarmThroughputDescription")
      .PutMember("ReadUnitsPerSecond", smithy::schema::Schema::CreateLong("ReadUnitsPerSecond"))
      .PutMember("WriteUnitsPerSecond", smithy::schema::Schema::CreateLong("WriteUnitsPerSecond"))
      .PutMember("Status", smithy::schema::Schema::CreateEnum("Status"))
      .Build();
}

void CreateTableResult_ReplicaGlobalSecondaryIndexDescriptionSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
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
    CreateTableResult_ProvisionedThroughputOverrideSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetProvisionedThroughputOverride(std::move(nested0));
    return;
  }
  if (memberName == "OnDemandThroughputOverride") {
    OnDemandThroughputOverride nested0;
    CreateTableResult_OnDemandThroughputOverrideSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetOnDemandThroughputOverride(std::move(nested0));
    return;
  }
  if (memberName == "WarmThroughput") {
    GlobalSecondaryIndexWarmThroughputDescription nested0;
    CreateTableResult_GlobalSecondaryIndexWarmThroughputDescriptionSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetWarmThroughput(std::move(nested0));
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> CreateTableResult_ReplicaGlobalSecondaryIndexDescriptionSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("ReplicaGlobalSecondaryIndexDescription")
      .PutMember("IndexName", smithy::schema::Schema::CreateString("IndexName"))
      .PutMember("ProvisionedThroughputOverride", CreateTableResult_ProvisionedThroughputOverrideSchemaSerdeDeser::BuildSchema())
      .PutMember("OnDemandThroughputOverride", CreateTableResult_OnDemandThroughputOverrideSchemaSerdeDeser::BuildSchema())
      .PutMember("WarmThroughput", CreateTableResult_GlobalSecondaryIndexWarmThroughputDescriptionSchemaSerdeDeser::BuildSchema())
      .Build();
}

void CreateTableResult_TableClassSummarySchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
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

std::shared_ptr<const smithy::schema::Schema> CreateTableResult_TableClassSummarySchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("TableClassSummary")
      .PutMember("TableClass", smithy::schema::Schema::CreateEnum("TableClass"))
      .PutMember("LastUpdateDateTime", smithy::schema::Schema::CreateTimestamp("LastUpdateDateTime"))
      .Build();
}

void CreateTableResult_GlobalTableWitnessDescriptionSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
                                                                           smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "RegionName") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetRegionName(*value0);
    }
    return;
  }
  if (memberName == "WitnessStatus") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetWitnessStatus(WitnessStatusMapper::GetWitnessStatusForName(*value0));
    }
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> CreateTableResult_GlobalTableWitnessDescriptionSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("GlobalTableWitnessDescription")
      .PutMember("RegionName", smithy::schema::Schema::CreateString("RegionName"))
      .PutMember("WitnessStatus", smithy::schema::Schema::CreateEnum("WitnessStatus"))
      .Build();
}

void CreateTableResult_RestoreSummarySchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
                                                            smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "SourceBackupArn") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetSourceBackupArn(*value0);
    }
    return;
  }
  if (memberName == "SourceTableArn") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetSourceTableArn(*value0);
    }
    return;
  }
  if (memberName == "RestoreDateTime") {
    auto value0 = deserializer.ReadTimestamp(memberSchema);
    if (value0.has_value()) {
      m_obj.SetRestoreDateTime(*value0);
    }
    return;
  }
  if (memberName == "RestoreInProgress") {
    auto value0 = deserializer.ReadBoolean(memberSchema);
    if (value0.has_value()) {
      m_obj.SetRestoreInProgress(*value0);
    }
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> CreateTableResult_RestoreSummarySchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("RestoreSummary")
      .PutMember("SourceBackupArn", smithy::schema::Schema::CreateString("SourceBackupArn"))
      .PutMember("SourceTableArn", smithy::schema::Schema::CreateString("SourceTableArn"))
      .PutMember("RestoreDateTime", smithy::schema::Schema::CreateTimestamp("RestoreDateTime"))
      .PutMember("RestoreInProgress", smithy::schema::Schema::CreateBoolean("RestoreInProgress"))
      .Build();
}

void CreateTableResult_SSEDescriptionSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
                                                            smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "Status") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetStatus(SSEStatusMapper::GetSSEStatusForName(*value0));
    }
    return;
  }
  if (memberName == "SSEType") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetSSEType(SSETypeMapper::GetSSETypeForName(*value0));
    }
    return;
  }
  if (memberName == "KMSMasterKeyArn") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetKMSMasterKeyArn(*value0);
    }
    return;
  }
  if (memberName == "InaccessibleEncryptionDateTime") {
    auto value0 = deserializer.ReadTimestamp(memberSchema);
    if (value0.has_value()) {
      m_obj.SetInaccessibleEncryptionDateTime(*value0);
    }
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> CreateTableResult_SSEDescriptionSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("SSEDescription")
      .PutMember("Status", smithy::schema::Schema::CreateEnum("Status"))
      .PutMember("SSEType", smithy::schema::Schema::CreateEnum("SSEType"))
      .PutMember("KMSMasterKeyArn", smithy::schema::Schema::CreateString("KMSMasterKeyArn"))
      .PutMember("InaccessibleEncryptionDateTime", smithy::schema::Schema::CreateTimestamp("InaccessibleEncryptionDateTime"))
      .Build();
}

void CreateTableResult_ArchivalSummarySchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
                                                             smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "ArchivalDateTime") {
    auto value0 = deserializer.ReadTimestamp(memberSchema);
    if (value0.has_value()) {
      m_obj.SetArchivalDateTime(*value0);
    }
    return;
  }
  if (memberName == "ArchivalReason") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetArchivalReason(*value0);
    }
    return;
  }
  if (memberName == "ArchivalBackupArn") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetArchivalBackupArn(*value0);
    }
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> CreateTableResult_ArchivalSummarySchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("ArchivalSummary")
      .PutMember("ArchivalDateTime", smithy::schema::Schema::CreateTimestamp("ArchivalDateTime"))
      .PutMember("ArchivalReason", smithy::schema::Schema::CreateString("ArchivalReason"))
      .PutMember("ArchivalBackupArn", smithy::schema::Schema::CreateString("ArchivalBackupArn"))
      .Build();
}

void CreateTableResult_VectorIndexDescriptionSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
                                                                    smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "IndexName") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetIndexName(*value0);
    }
    return;
  }
  if (memberName == "SearchSchema") {
    Aws::Vector<SearchSchemaElement> list0;
    deserializer.ReadList(memberSchema, [&](smithy::schema::ShapeDeserializer& itemDeserializer0) {
      SearchSchemaElement nested1;
      CreateTableResult_SearchSchemaElementSchemaSerdeDeser{nested1}.Deserialize(itemDeserializer0);
      list0.push_back(std::move(nested1));
    });
    m_obj.SetSearchSchema(std::move(list0));
    return;
  }
  if (memberName == "Projection") {
    Projection nested0;
    CreateTableResult_ProjectionSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetProjection(std::move(nested0));
    return;
  }
  if (memberName == "VectorAttribute") {
    VectorAttributeDefinition nested0;
    CreateTableResult_VectorAttributeDefinitionSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetVectorAttribute(std::move(nested0));
    return;
  }
  if (memberName == "Dimensions") {
    auto value0 = deserializer.ReadLong(memberSchema);
    if (value0.has_value()) {
      m_obj.SetDimensions(*value0);
    }
    return;
  }
  if (memberName == "DistanceFunction") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetDistanceFunction(VectorDistanceFunctionMapper::GetVectorDistanceFunctionForName(*value0));
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
  if (memberName == "Backfilling") {
    auto value0 = deserializer.ReadBoolean(memberSchema);
    if (value0.has_value()) {
      m_obj.SetBackfilling(*value0);
    }
    return;
  }
  if (memberName == "IndexSizeBytes") {
    auto value0 = deserializer.ReadLong(memberSchema);
    if (value0.has_value()) {
      m_obj.SetIndexSizeBytes(*value0);
    }
    return;
  }
  if (memberName == "ItemCount") {
    auto value0 = deserializer.ReadLong(memberSchema);
    if (value0.has_value()) {
      m_obj.SetItemCount(*value0);
    }
    return;
  }
  if (memberName == "IndexArn") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetIndexArn(*value0);
    }
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> CreateTableResult_VectorIndexDescriptionSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("VectorIndexDescription")
      .PutMember("IndexName", smithy::schema::Schema::CreateString("IndexName"))
      .PutMember("SearchSchema", smithy::schema::Schema::ListBuilder("SearchSchema")
                                     .PutMember("member", CreateTableResult_SearchSchemaElementSchemaSerdeDeser::BuildSchema())
                                     .Build())
      .PutMember("Projection", CreateTableResult_ProjectionSchemaSerdeDeser::BuildSchema())
      .PutMember("VectorAttribute", CreateTableResult_VectorAttributeDefinitionSchemaSerdeDeser::BuildSchema())
      .PutMember("Dimensions", smithy::schema::Schema::CreateLong("Dimensions"))
      .PutMember("DistanceFunction", smithy::schema::Schema::CreateEnum("DistanceFunction"))
      .PutMember("IndexStatus", smithy::schema::Schema::CreateEnum("IndexStatus"))
      .PutMember("Backfilling", smithy::schema::Schema::CreateBoolean("Backfilling"))
      .PutMember("IndexSizeBytes", smithy::schema::Schema::CreateLong("IndexSizeBytes"))
      .PutMember("ItemCount", smithy::schema::Schema::CreateLong("ItemCount"))
      .PutMember("IndexArn", smithy::schema::Schema::CreateString("IndexArn"))
      .Build();
}

void CreateTableResult_SearchSchemaElementSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
                                                                 smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "AttributeName") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetAttributeName(*value0);
    }
    return;
  }
  if (memberName == "SearchSchemaElementType") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetSearchSchemaElementType(SearchSchemaElementTypeMapper::GetSearchSchemaElementTypeForName(*value0));
    }
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> CreateTableResult_SearchSchemaElementSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("SearchSchemaElement")
      .PutMember("AttributeName", smithy::schema::Schema::CreateString("AttributeName"))
      .PutMember("SearchSchemaElementType", smithy::schema::Schema::CreateEnum("SearchSchemaElementType"))
      .Build();
}

void CreateTableResult_VectorAttributeDefinitionSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
                                                                       smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "AttributeName") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetAttributeName(*value0);
    }
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> CreateTableResult_VectorAttributeDefinitionSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("VectorAttributeDefinition")
      .PutMember("AttributeName", smithy::schema::Schema::CreateString("AttributeName"))
      .Build();
}

void CreateTableResultDeserializable::From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "TableDescription") {
    TableDescription nested0;
    CreateTableResult_TableDescriptionSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetTableDescription(std::move(nested0));
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> CreateTableResultDeserializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("CreateTableResult")
      .PutMember("TableDescription", CreateTableResult_TableDescriptionSchemaSerdeDeser::BuildSchema())
      .Build();
}

}  // namespace
}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws

Aws::UniquePtr<smithy::schema::SerializableStruct> CreateTableResult::GetSchemaSerdeOutput() {
  return Aws::MakeUnique<CreateTableResultDeserializable>("CreateTableResultDeserializable", *this);
}
