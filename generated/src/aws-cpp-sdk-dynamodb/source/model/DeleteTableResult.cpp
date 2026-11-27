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
#include <aws/dynamodb/model/DeleteTableResult.h>
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

DeleteTableResult::DeleteTableResult(const Aws::AmazonWebServiceResult<Aws::String>& result) { *this = result; }

DeleteTableResult& DeleteTableResult::operator=(const Aws::AmazonWebServiceResult<Aws::String>& result) {
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
class DeleteTableResultSchemaCache {
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
        Aws::New<std::shared_ptr<const smithy::schema::Schema>>("DeleteTableResultSchemaCache", Adapter::BuildSchema());
    Aws::Utils::ComponentRegistry::RegisterComponent("DeleteTableResultSchemaCache", built, &Release);
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
std::atomic<std::shared_ptr<const smithy::schema::Schema>*> DeleteTableResultSchemaCache<Adapter>::s_schema{nullptr};
template <typename Adapter>
std::mutex DeleteTableResultSchemaCache<Adapter>::s_mutex;

class DeleteTableResult_TableDescriptionSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit DeleteTableResult_TableDescriptionSchemaSerdeDeser(TableDescription& obj)
      : m_obj(obj), m_schema(DeleteTableResultSchemaCache<DeleteTableResult_TableDescriptionSchemaSerdeDeser>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  TableDescription& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class DeleteTableResult_AttributeDefinitionSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit DeleteTableResult_AttributeDefinitionSchemaSerdeDeser(AttributeDefinition& obj)
      : m_obj(obj), m_schema(DeleteTableResultSchemaCache<DeleteTableResult_AttributeDefinitionSchemaSerdeDeser>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  AttributeDefinition& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class DeleteTableResult_KeySchemaElementSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit DeleteTableResult_KeySchemaElementSchemaSerdeDeser(KeySchemaElement& obj)
      : m_obj(obj), m_schema(DeleteTableResultSchemaCache<DeleteTableResult_KeySchemaElementSchemaSerdeDeser>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  KeySchemaElement& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class DeleteTableResult_ProvisionedThroughputDescriptionSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit DeleteTableResult_ProvisionedThroughputDescriptionSchemaSerdeDeser(ProvisionedThroughputDescription& obj)
      : m_obj(obj), m_schema(DeleteTableResultSchemaCache<DeleteTableResult_ProvisionedThroughputDescriptionSchemaSerdeDeser>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  ProvisionedThroughputDescription& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class DeleteTableResult_BillingModeSummarySchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit DeleteTableResult_BillingModeSummarySchemaSerdeDeser(BillingModeSummary& obj)
      : m_obj(obj), m_schema(DeleteTableResultSchemaCache<DeleteTableResult_BillingModeSummarySchemaSerdeDeser>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  BillingModeSummary& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class DeleteTableResult_LocalSecondaryIndexDescriptionSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit DeleteTableResult_LocalSecondaryIndexDescriptionSchemaSerdeDeser(LocalSecondaryIndexDescription& obj)
      : m_obj(obj), m_schema(DeleteTableResultSchemaCache<DeleteTableResult_LocalSecondaryIndexDescriptionSchemaSerdeDeser>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  LocalSecondaryIndexDescription& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class DeleteTableResult_ProjectionSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit DeleteTableResult_ProjectionSchemaSerdeDeser(Projection& obj)
      : m_obj(obj), m_schema(DeleteTableResultSchemaCache<DeleteTableResult_ProjectionSchemaSerdeDeser>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  Projection& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class DeleteTableResult_GlobalSecondaryIndexDescriptionSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit DeleteTableResult_GlobalSecondaryIndexDescriptionSchemaSerdeDeser(GlobalSecondaryIndexDescription& obj)
      : m_obj(obj), m_schema(DeleteTableResultSchemaCache<DeleteTableResult_GlobalSecondaryIndexDescriptionSchemaSerdeDeser>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  GlobalSecondaryIndexDescription& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class DeleteTableResult_OnDemandThroughputSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit DeleteTableResult_OnDemandThroughputSchemaSerdeDeser(OnDemandThroughput& obj)
      : m_obj(obj), m_schema(DeleteTableResultSchemaCache<DeleteTableResult_OnDemandThroughputSchemaSerdeDeser>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  OnDemandThroughput& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class DeleteTableResult_GlobalSecondaryIndexWarmThroughputDescriptionSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit DeleteTableResult_GlobalSecondaryIndexWarmThroughputDescriptionSchemaSerdeDeser(
      GlobalSecondaryIndexWarmThroughputDescription& obj)
      : m_obj(obj),
        m_schema(DeleteTableResultSchemaCache<DeleteTableResult_GlobalSecondaryIndexWarmThroughputDescriptionSchemaSerdeDeser>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  GlobalSecondaryIndexWarmThroughputDescription& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class DeleteTableResult_StreamSpecificationSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit DeleteTableResult_StreamSpecificationSchemaSerdeDeser(StreamSpecification& obj)
      : m_obj(obj), m_schema(DeleteTableResultSchemaCache<DeleteTableResult_StreamSpecificationSchemaSerdeDeser>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  StreamSpecification& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class DeleteTableResult_ReplicaDescriptionSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit DeleteTableResult_ReplicaDescriptionSchemaSerdeDeser(ReplicaDescription& obj)
      : m_obj(obj), m_schema(DeleteTableResultSchemaCache<DeleteTableResult_ReplicaDescriptionSchemaSerdeDeser>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  ReplicaDescription& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class DeleteTableResult_ProvisionedThroughputOverrideSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit DeleteTableResult_ProvisionedThroughputOverrideSchemaSerdeDeser(ProvisionedThroughputOverride& obj)
      : m_obj(obj), m_schema(DeleteTableResultSchemaCache<DeleteTableResult_ProvisionedThroughputOverrideSchemaSerdeDeser>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  ProvisionedThroughputOverride& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class DeleteTableResult_OnDemandThroughputOverrideSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit DeleteTableResult_OnDemandThroughputOverrideSchemaSerdeDeser(OnDemandThroughputOverride& obj)
      : m_obj(obj), m_schema(DeleteTableResultSchemaCache<DeleteTableResult_OnDemandThroughputOverrideSchemaSerdeDeser>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  OnDemandThroughputOverride& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class DeleteTableResult_TableWarmThroughputDescriptionSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit DeleteTableResult_TableWarmThroughputDescriptionSchemaSerdeDeser(TableWarmThroughputDescription& obj)
      : m_obj(obj), m_schema(DeleteTableResultSchemaCache<DeleteTableResult_TableWarmThroughputDescriptionSchemaSerdeDeser>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  TableWarmThroughputDescription& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class DeleteTableResult_ReplicaGlobalSecondaryIndexDescriptionSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit DeleteTableResult_ReplicaGlobalSecondaryIndexDescriptionSchemaSerdeDeser(ReplicaGlobalSecondaryIndexDescription& obj)
      : m_obj(obj),
        m_schema(DeleteTableResultSchemaCache<DeleteTableResult_ReplicaGlobalSecondaryIndexDescriptionSchemaSerdeDeser>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  ReplicaGlobalSecondaryIndexDescription& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class DeleteTableResult_TableClassSummarySchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit DeleteTableResult_TableClassSummarySchemaSerdeDeser(TableClassSummary& obj)
      : m_obj(obj), m_schema(DeleteTableResultSchemaCache<DeleteTableResult_TableClassSummarySchemaSerdeDeser>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  TableClassSummary& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class DeleteTableResult_GlobalTableWitnessDescriptionSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit DeleteTableResult_GlobalTableWitnessDescriptionSchemaSerdeDeser(GlobalTableWitnessDescription& obj)
      : m_obj(obj), m_schema(DeleteTableResultSchemaCache<DeleteTableResult_GlobalTableWitnessDescriptionSchemaSerdeDeser>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  GlobalTableWitnessDescription& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class DeleteTableResult_RestoreSummarySchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit DeleteTableResult_RestoreSummarySchemaSerdeDeser(RestoreSummary& obj)
      : m_obj(obj), m_schema(DeleteTableResultSchemaCache<DeleteTableResult_RestoreSummarySchemaSerdeDeser>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  RestoreSummary& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class DeleteTableResult_SSEDescriptionSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit DeleteTableResult_SSEDescriptionSchemaSerdeDeser(SSEDescription& obj)
      : m_obj(obj), m_schema(DeleteTableResultSchemaCache<DeleteTableResult_SSEDescriptionSchemaSerdeDeser>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  SSEDescription& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class DeleteTableResult_ArchivalSummarySchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit DeleteTableResult_ArchivalSummarySchemaSerdeDeser(ArchivalSummary& obj)
      : m_obj(obj), m_schema(DeleteTableResultSchemaCache<DeleteTableResult_ArchivalSummarySchemaSerdeDeser>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  ArchivalSummary& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class DeleteTableResult_VectorIndexDescriptionSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit DeleteTableResult_VectorIndexDescriptionSchemaSerdeDeser(VectorIndexDescription& obj)
      : m_obj(obj), m_schema(DeleteTableResultSchemaCache<DeleteTableResult_VectorIndexDescriptionSchemaSerdeDeser>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  VectorIndexDescription& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class DeleteTableResult_SearchSchemaElementSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit DeleteTableResult_SearchSchemaElementSchemaSerdeDeser(SearchSchemaElement& obj)
      : m_obj(obj), m_schema(DeleteTableResultSchemaCache<DeleteTableResult_SearchSchemaElementSchemaSerdeDeser>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  SearchSchemaElement& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class DeleteTableResult_VectorAttributeDefinitionSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit DeleteTableResult_VectorAttributeDefinitionSchemaSerdeDeser(VectorAttributeDefinition& obj)
      : m_obj(obj), m_schema(DeleteTableResultSchemaCache<DeleteTableResult_VectorAttributeDefinitionSchemaSerdeDeser>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  VectorAttributeDefinition& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class DeleteTableResultDeserializable final : public smithy::schema::SerializableStruct {
 public:
  explicit DeleteTableResultDeserializable(DeleteTableResult& obj)
      : m_obj(obj), m_schema(DeleteTableResultSchemaCache<DeleteTableResultDeserializable>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  DeleteTableResult& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void DeleteTableResult_TableDescriptionSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
                                                              smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "AttributeDefinitions") {
    Aws::Vector<AttributeDefinition> list0;
    deserializer.ReadList(memberSchema, [&](smithy::schema::ShapeDeserializer& itemDeserializer0) {
      AttributeDefinition nested1;
      DeleteTableResult_AttributeDefinitionSchemaSerdeDeser{nested1}.Deserialize(itemDeserializer0);
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
      DeleteTableResult_KeySchemaElementSchemaSerdeDeser{nested1}.Deserialize(itemDeserializer0);
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
    DeleteTableResult_ProvisionedThroughputDescriptionSchemaSerdeDeser{nested0}.Deserialize(deserializer);
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
    DeleteTableResult_BillingModeSummarySchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetBillingModeSummary(std::move(nested0));
    return;
  }
  if (memberName == "LocalSecondaryIndexes") {
    Aws::Vector<LocalSecondaryIndexDescription> list0;
    deserializer.ReadList(memberSchema, [&](smithy::schema::ShapeDeserializer& itemDeserializer0) {
      LocalSecondaryIndexDescription nested1;
      DeleteTableResult_LocalSecondaryIndexDescriptionSchemaSerdeDeser{nested1}.Deserialize(itemDeserializer0);
      list0.push_back(std::move(nested1));
    });
    m_obj.SetLocalSecondaryIndexes(std::move(list0));
    return;
  }
  if (memberName == "GlobalSecondaryIndexes") {
    Aws::Vector<GlobalSecondaryIndexDescription> list0;
    deserializer.ReadList(memberSchema, [&](smithy::schema::ShapeDeserializer& itemDeserializer0) {
      GlobalSecondaryIndexDescription nested1;
      DeleteTableResult_GlobalSecondaryIndexDescriptionSchemaSerdeDeser{nested1}.Deserialize(itemDeserializer0);
      list0.push_back(std::move(nested1));
    });
    m_obj.SetGlobalSecondaryIndexes(std::move(list0));
    return;
  }
  if (memberName == "StreamSpecification") {
    StreamSpecification nested0;
    DeleteTableResult_StreamSpecificationSchemaSerdeDeser{nested0}.Deserialize(deserializer);
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
      DeleteTableResult_ReplicaDescriptionSchemaSerdeDeser{nested1}.Deserialize(itemDeserializer0);
      list0.push_back(std::move(nested1));
    });
    m_obj.SetReplicas(std::move(list0));
    return;
  }
  if (memberName == "GlobalTableWitnesses") {
    Aws::Vector<GlobalTableWitnessDescription> list0;
    deserializer.ReadList(memberSchema, [&](smithy::schema::ShapeDeserializer& itemDeserializer0) {
      GlobalTableWitnessDescription nested1;
      DeleteTableResult_GlobalTableWitnessDescriptionSchemaSerdeDeser{nested1}.Deserialize(itemDeserializer0);
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
    DeleteTableResult_RestoreSummarySchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetRestoreSummary(std::move(nested0));
    return;
  }
  if (memberName == "SSEDescription") {
    SSEDescription nested0;
    DeleteTableResult_SSEDescriptionSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetSSEDescription(std::move(nested0));
    return;
  }
  if (memberName == "ArchivalSummary") {
    ArchivalSummary nested0;
    DeleteTableResult_ArchivalSummarySchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetArchivalSummary(std::move(nested0));
    return;
  }
  if (memberName == "TableClassSummary") {
    TableClassSummary nested0;
    DeleteTableResult_TableClassSummarySchemaSerdeDeser{nested0}.Deserialize(deserializer);
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
    DeleteTableResult_OnDemandThroughputSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetOnDemandThroughput(std::move(nested0));
    return;
  }
  if (memberName == "WarmThroughput") {
    TableWarmThroughputDescription nested0;
    DeleteTableResult_TableWarmThroughputDescriptionSchemaSerdeDeser{nested0}.Deserialize(deserializer);
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
      DeleteTableResult_VectorIndexDescriptionSchemaSerdeDeser{nested1}.Deserialize(itemDeserializer0);
      list0.push_back(std::move(nested1));
    });
    m_obj.SetVectorIndexes(std::move(list0));
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> DeleteTableResult_TableDescriptionSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("TableDescription")
      .PutMember("AttributeDefinitions",
                 smithy::schema::Schema::ListBuilder("AttributeDefinitions")
                     .PutMember("member", DeleteTableResultSchemaCache<DeleteTableResult_AttributeDefinitionSchemaSerdeDeser>::Get())
                     .Build())
      .PutMember("TableName", smithy::schema::Schema::CreateString("TableName"))
      .PutMember("KeySchema",
                 smithy::schema::Schema::ListBuilder("KeySchema")
                     .PutMember("member", DeleteTableResultSchemaCache<DeleteTableResult_KeySchemaElementSchemaSerdeDeser>::Get())
                     .Build())
      .PutMember("TableStatus", smithy::schema::Schema::CreateEnum("TableStatus"))
      .PutMember("CreationDateTime", smithy::schema::Schema::CreateTimestamp("CreationDateTime"))
      .PutMember("ProvisionedThroughput",
                 DeleteTableResultSchemaCache<DeleteTableResult_ProvisionedThroughputDescriptionSchemaSerdeDeser>::Get())
      .PutMember("TableSizeBytes", smithy::schema::Schema::CreateLong("TableSizeBytes"))
      .PutMember("ItemCount", smithy::schema::Schema::CreateLong("ItemCount"))
      .PutMember("TableArn", smithy::schema::Schema::CreateString("TableArn"))
      .PutMember("TableId", smithy::schema::Schema::CreateString("TableId"))
      .PutMember("BillingModeSummary", DeleteTableResultSchemaCache<DeleteTableResult_BillingModeSummarySchemaSerdeDeser>::Get())
      .PutMember(
          "LocalSecondaryIndexes",
          smithy::schema::Schema::ListBuilder("LocalSecondaryIndexDescriptionList")
              .PutMember("member", DeleteTableResultSchemaCache<DeleteTableResult_LocalSecondaryIndexDescriptionSchemaSerdeDeser>::Get())
              .Build())
      .PutMember(
          "GlobalSecondaryIndexes",
          smithy::schema::Schema::ListBuilder("GlobalSecondaryIndexDescriptionList")
              .PutMember("member", DeleteTableResultSchemaCache<DeleteTableResult_GlobalSecondaryIndexDescriptionSchemaSerdeDeser>::Get())
              .Build())
      .PutMember("StreamSpecification", DeleteTableResultSchemaCache<DeleteTableResult_StreamSpecificationSchemaSerdeDeser>::Get())
      .PutMember("LatestStreamLabel", smithy::schema::Schema::CreateString("LatestStreamLabel"))
      .PutMember("LatestStreamArn", smithy::schema::Schema::CreateString("LatestStreamArn"))
      .PutMember("GlobalTableVersion", smithy::schema::Schema::CreateString("GlobalTableVersion"))
      .PutMember("Replicas",
                 smithy::schema::Schema::ListBuilder("ReplicaDescriptionList")
                     .PutMember("member", DeleteTableResultSchemaCache<DeleteTableResult_ReplicaDescriptionSchemaSerdeDeser>::Get())
                     .Build())
      .PutMember(
          "GlobalTableWitnesses",
          smithy::schema::Schema::ListBuilder("GlobalTableWitnessDescriptionList")
              .PutMember("member", DeleteTableResultSchemaCache<DeleteTableResult_GlobalTableWitnessDescriptionSchemaSerdeDeser>::Get())
              .Build())
      .PutMember("GlobalTableSettingsReplicationMode", smithy::schema::Schema::CreateEnum("GlobalTableSettingsReplicationMode"))
      .PutMember("RestoreSummary", DeleteTableResultSchemaCache<DeleteTableResult_RestoreSummarySchemaSerdeDeser>::Get())
      .PutMember("SSEDescription", DeleteTableResultSchemaCache<DeleteTableResult_SSEDescriptionSchemaSerdeDeser>::Get())
      .PutMember("ArchivalSummary", DeleteTableResultSchemaCache<DeleteTableResult_ArchivalSummarySchemaSerdeDeser>::Get())
      .PutMember("TableClassSummary", DeleteTableResultSchemaCache<DeleteTableResult_TableClassSummarySchemaSerdeDeser>::Get())
      .PutMember("DeletionProtectionEnabled", smithy::schema::Schema::CreateBoolean("DeletionProtectionEnabled"))
      .PutMember("DisassociationProtectionEnabled", smithy::schema::Schema::CreateBoolean("DisassociationProtectionEnabled"))
      .PutMember("OnDemandThroughput", DeleteTableResultSchemaCache<DeleteTableResult_OnDemandThroughputSchemaSerdeDeser>::Get())
      .PutMember("WarmThroughput", DeleteTableResultSchemaCache<DeleteTableResult_TableWarmThroughputDescriptionSchemaSerdeDeser>::Get())
      .PutMember("MultiRegionConsistency", smithy::schema::Schema::CreateEnum("MultiRegionConsistency"))
      .PutMember("VectorIndexes",
                 smithy::schema::Schema::ListBuilder("VectorIndexDescriptionList")
                     .PutMember("member", DeleteTableResultSchemaCache<DeleteTableResult_VectorIndexDescriptionSchemaSerdeDeser>::Get())
                     .Build())
      .Build();
}

void DeleteTableResult_AttributeDefinitionSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
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

std::shared_ptr<const smithy::schema::Schema> DeleteTableResult_AttributeDefinitionSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("AttributeDefinition")
      .PutMember("AttributeName", smithy::schema::Schema::CreateString("AttributeName"))
      .PutMember("AttributeType", smithy::schema::Schema::CreateEnum("AttributeType"))
      .Build();
}

void DeleteTableResult_KeySchemaElementSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
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

std::shared_ptr<const smithy::schema::Schema> DeleteTableResult_KeySchemaElementSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("KeySchemaElement")
      .PutMember("AttributeName", smithy::schema::Schema::CreateString("AttributeName"))
      .PutMember("KeyType", smithy::schema::Schema::CreateEnum("KeyType"))
      .Build();
}

void DeleteTableResult_ProvisionedThroughputDescriptionSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
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

std::shared_ptr<const smithy::schema::Schema> DeleteTableResult_ProvisionedThroughputDescriptionSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("ProvisionedThroughputDescription")
      .PutMember("LastIncreaseDateTime", smithy::schema::Schema::CreateTimestamp("LastIncreaseDateTime"))
      .PutMember("LastDecreaseDateTime", smithy::schema::Schema::CreateTimestamp("LastDecreaseDateTime"))
      .PutMember("NumberOfDecreasesToday", smithy::schema::Schema::CreateLong("NumberOfDecreasesToday"))
      .PutMember("ReadCapacityUnits", smithy::schema::Schema::CreateLong("ReadCapacityUnits"))
      .PutMember("WriteCapacityUnits", smithy::schema::Schema::CreateLong("WriteCapacityUnits"))
      .Build();
}

void DeleteTableResult_BillingModeSummarySchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
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

std::shared_ptr<const smithy::schema::Schema> DeleteTableResult_BillingModeSummarySchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("BillingModeSummary")
      .PutMember("BillingMode", smithy::schema::Schema::CreateEnum("BillingMode"))
      .PutMember("LastUpdateToPayPerRequestDateTime", smithy::schema::Schema::CreateTimestamp("LastUpdateToPayPerRequestDateTime"))
      .Build();
}

void DeleteTableResult_LocalSecondaryIndexDescriptionSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
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
      DeleteTableResult_KeySchemaElementSchemaSerdeDeser{nested1}.Deserialize(itemDeserializer0);
      list0.push_back(std::move(nested1));
    });
    m_obj.SetKeySchema(std::move(list0));
    return;
  }
  if (memberName == "Projection") {
    Projection nested0;
    DeleteTableResult_ProjectionSchemaSerdeDeser{nested0}.Deserialize(deserializer);
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

std::shared_ptr<const smithy::schema::Schema> DeleteTableResult_LocalSecondaryIndexDescriptionSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("LocalSecondaryIndexDescription")
      .PutMember("IndexName", smithy::schema::Schema::CreateString("IndexName"))
      .PutMember("KeySchema",
                 smithy::schema::Schema::ListBuilder("KeySchema")
                     .PutMember("member", DeleteTableResultSchemaCache<DeleteTableResult_KeySchemaElementSchemaSerdeDeser>::Get())
                     .Build())
      .PutMember("Projection", DeleteTableResultSchemaCache<DeleteTableResult_ProjectionSchemaSerdeDeser>::Get())
      .PutMember("IndexSizeBytes", smithy::schema::Schema::CreateLong("IndexSizeBytes"))
      .PutMember("ItemCount", smithy::schema::Schema::CreateLong("ItemCount"))
      .PutMember("IndexArn", smithy::schema::Schema::CreateString("IndexArn"))
      .Build();
}

void DeleteTableResult_ProjectionSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
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

std::shared_ptr<const smithy::schema::Schema> DeleteTableResult_ProjectionSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("Projection")
      .PutMember("ProjectionType", smithy::schema::Schema::CreateEnum("ProjectionType"))
      .PutMember("NonKeyAttributes", smithy::schema::Schema::ListBuilder("NonKeyAttributeNameList")
                                         .PutMember("member", smithy::schema::Schema::CreateString("member"))
                                         .Build())
      .Build();
}

void DeleteTableResult_GlobalSecondaryIndexDescriptionSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
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
      DeleteTableResult_KeySchemaElementSchemaSerdeDeser{nested1}.Deserialize(itemDeserializer0);
      list0.push_back(std::move(nested1));
    });
    m_obj.SetKeySchema(std::move(list0));
    return;
  }
  if (memberName == "Projection") {
    Projection nested0;
    DeleteTableResult_ProjectionSchemaSerdeDeser{nested0}.Deserialize(deserializer);
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
    DeleteTableResult_ProvisionedThroughputDescriptionSchemaSerdeDeser{nested0}.Deserialize(deserializer);
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
    DeleteTableResult_OnDemandThroughputSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetOnDemandThroughput(std::move(nested0));
    return;
  }
  if (memberName == "WarmThroughput") {
    GlobalSecondaryIndexWarmThroughputDescription nested0;
    DeleteTableResult_GlobalSecondaryIndexWarmThroughputDescriptionSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetWarmThroughput(std::move(nested0));
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> DeleteTableResult_GlobalSecondaryIndexDescriptionSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("GlobalSecondaryIndexDescription")
      .PutMember("IndexName", smithy::schema::Schema::CreateString("IndexName"))
      .PutMember("KeySchema",
                 smithy::schema::Schema::ListBuilder("KeySchema")
                     .PutMember("member", DeleteTableResultSchemaCache<DeleteTableResult_KeySchemaElementSchemaSerdeDeser>::Get())
                     .Build())
      .PutMember("Projection", DeleteTableResultSchemaCache<DeleteTableResult_ProjectionSchemaSerdeDeser>::Get())
      .PutMember("IndexStatus", smithy::schema::Schema::CreateEnum("IndexStatus"))
      .PutMember("Backfilling", smithy::schema::Schema::CreateBoolean("Backfilling"))
      .PutMember("ProvisionedThroughput",
                 DeleteTableResultSchemaCache<DeleteTableResult_ProvisionedThroughputDescriptionSchemaSerdeDeser>::Get())
      .PutMember("IndexSizeBytes", smithy::schema::Schema::CreateLong("IndexSizeBytes"))
      .PutMember("ItemCount", smithy::schema::Schema::CreateLong("ItemCount"))
      .PutMember("IndexArn", smithy::schema::Schema::CreateString("IndexArn"))
      .PutMember("OnDemandThroughput", DeleteTableResultSchemaCache<DeleteTableResult_OnDemandThroughputSchemaSerdeDeser>::Get())
      .PutMember("WarmThroughput",
                 DeleteTableResultSchemaCache<DeleteTableResult_GlobalSecondaryIndexWarmThroughputDescriptionSchemaSerdeDeser>::Get())
      .Build();
}

void DeleteTableResult_OnDemandThroughputSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
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

std::shared_ptr<const smithy::schema::Schema> DeleteTableResult_OnDemandThroughputSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("OnDemandThroughput")
      .PutMember("MaxReadRequestUnits", smithy::schema::Schema::CreateLong("MaxReadRequestUnits"))
      .PutMember("MaxWriteRequestUnits", smithy::schema::Schema::CreateLong("MaxWriteRequestUnits"))
      .Build();
}

void DeleteTableResult_GlobalSecondaryIndexWarmThroughputDescriptionSchemaSerdeDeser::From(
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
DeleteTableResult_GlobalSecondaryIndexWarmThroughputDescriptionSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("GlobalSecondaryIndexWarmThroughputDescription")
      .PutMember("ReadUnitsPerSecond", smithy::schema::Schema::CreateLong("ReadUnitsPerSecond"))
      .PutMember("WriteUnitsPerSecond", smithy::schema::Schema::CreateLong("WriteUnitsPerSecond"))
      .PutMember("Status", smithy::schema::Schema::CreateEnum("Status"))
      .Build();
}

void DeleteTableResult_StreamSpecificationSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
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

std::shared_ptr<const smithy::schema::Schema> DeleteTableResult_StreamSpecificationSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("StreamSpecification")
      .PutMember("StreamEnabled", smithy::schema::Schema::CreateBoolean("StreamEnabled"))
      .PutMember("StreamViewType", smithy::schema::Schema::CreateEnum("StreamViewType"))
      .Build();
}

void DeleteTableResult_ReplicaDescriptionSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
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
    DeleteTableResult_ProvisionedThroughputOverrideSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetProvisionedThroughputOverride(std::move(nested0));
    return;
  }
  if (memberName == "OnDemandThroughputOverride") {
    OnDemandThroughputOverride nested0;
    DeleteTableResult_OnDemandThroughputOverrideSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetOnDemandThroughputOverride(std::move(nested0));
    return;
  }
  if (memberName == "WarmThroughput") {
    TableWarmThroughputDescription nested0;
    DeleteTableResult_TableWarmThroughputDescriptionSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetWarmThroughput(std::move(nested0));
    return;
  }
  if (memberName == "GlobalSecondaryIndexes") {
    Aws::Vector<ReplicaGlobalSecondaryIndexDescription> list0;
    deserializer.ReadList(memberSchema, [&](smithy::schema::ShapeDeserializer& itemDeserializer0) {
      ReplicaGlobalSecondaryIndexDescription nested1;
      DeleteTableResult_ReplicaGlobalSecondaryIndexDescriptionSchemaSerdeDeser{nested1}.Deserialize(itemDeserializer0);
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
    DeleteTableResult_TableClassSummarySchemaSerdeDeser{nested0}.Deserialize(deserializer);
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

std::shared_ptr<const smithy::schema::Schema> DeleteTableResult_ReplicaDescriptionSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("ReplicaDescription")
      .PutMember("RegionName", smithy::schema::Schema::CreateString("RegionName"))
      .PutMember("ReplicaStatus", smithy::schema::Schema::CreateEnum("ReplicaStatus"))
      .PutMember("ReplicaArn", smithy::schema::Schema::CreateString("ReplicaArn"))
      .PutMember("ReplicaStatusDescription", smithy::schema::Schema::CreateString("ReplicaStatusDescription"))
      .PutMember("ReplicaStatusPercentProgress", smithy::schema::Schema::CreateString("ReplicaStatusPercentProgress"))
      .PutMember("KMSMasterKeyId", smithy::schema::Schema::CreateString("KMSMasterKeyId"))
      .PutMember("ProvisionedThroughputOverride",
                 DeleteTableResultSchemaCache<DeleteTableResult_ProvisionedThroughputOverrideSchemaSerdeDeser>::Get())
      .PutMember("OnDemandThroughputOverride",
                 DeleteTableResultSchemaCache<DeleteTableResult_OnDemandThroughputOverrideSchemaSerdeDeser>::Get())
      .PutMember("WarmThroughput", DeleteTableResultSchemaCache<DeleteTableResult_TableWarmThroughputDescriptionSchemaSerdeDeser>::Get())
      .PutMember(
          "GlobalSecondaryIndexes",
          smithy::schema::Schema::ListBuilder("ReplicaGlobalSecondaryIndexDescriptionList")
              .PutMember("member",
                         DeleteTableResultSchemaCache<DeleteTableResult_ReplicaGlobalSecondaryIndexDescriptionSchemaSerdeDeser>::Get())
              .Build())
      .PutMember("ReplicaInaccessibleDateTime", smithy::schema::Schema::CreateTimestamp("ReplicaInaccessibleDateTime"))
      .PutMember("ReplicaTableClassSummary", DeleteTableResultSchemaCache<DeleteTableResult_TableClassSummarySchemaSerdeDeser>::Get())
      .PutMember("GlobalTableSettingsReplicationMode", smithy::schema::Schema::CreateEnum("GlobalTableSettingsReplicationMode"))
      .Build();
}

void DeleteTableResult_ProvisionedThroughputOverrideSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
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

std::shared_ptr<const smithy::schema::Schema> DeleteTableResult_ProvisionedThroughputOverrideSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("ProvisionedThroughputOverride")
      .PutMember("ReadCapacityUnits", smithy::schema::Schema::CreateLong("ReadCapacityUnits"))
      .Build();
}

void DeleteTableResult_OnDemandThroughputOverrideSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
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

std::shared_ptr<const smithy::schema::Schema> DeleteTableResult_OnDemandThroughputOverrideSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("OnDemandThroughputOverride")
      .PutMember("MaxReadRequestUnits", smithy::schema::Schema::CreateLong("MaxReadRequestUnits"))
      .Build();
}

void DeleteTableResult_TableWarmThroughputDescriptionSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
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

std::shared_ptr<const smithy::schema::Schema> DeleteTableResult_TableWarmThroughputDescriptionSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("TableWarmThroughputDescription")
      .PutMember("ReadUnitsPerSecond", smithy::schema::Schema::CreateLong("ReadUnitsPerSecond"))
      .PutMember("WriteUnitsPerSecond", smithy::schema::Schema::CreateLong("WriteUnitsPerSecond"))
      .PutMember("Status", smithy::schema::Schema::CreateEnum("Status"))
      .Build();
}

void DeleteTableResult_ReplicaGlobalSecondaryIndexDescriptionSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
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
    DeleteTableResult_ProvisionedThroughputOverrideSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetProvisionedThroughputOverride(std::move(nested0));
    return;
  }
  if (memberName == "OnDemandThroughputOverride") {
    OnDemandThroughputOverride nested0;
    DeleteTableResult_OnDemandThroughputOverrideSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetOnDemandThroughputOverride(std::move(nested0));
    return;
  }
  if (memberName == "WarmThroughput") {
    GlobalSecondaryIndexWarmThroughputDescription nested0;
    DeleteTableResult_GlobalSecondaryIndexWarmThroughputDescriptionSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetWarmThroughput(std::move(nested0));
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> DeleteTableResult_ReplicaGlobalSecondaryIndexDescriptionSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("ReplicaGlobalSecondaryIndexDescription")
      .PutMember("IndexName", smithy::schema::Schema::CreateString("IndexName"))
      .PutMember("ProvisionedThroughputOverride",
                 DeleteTableResultSchemaCache<DeleteTableResult_ProvisionedThroughputOverrideSchemaSerdeDeser>::Get())
      .PutMember("OnDemandThroughputOverride",
                 DeleteTableResultSchemaCache<DeleteTableResult_OnDemandThroughputOverrideSchemaSerdeDeser>::Get())
      .PutMember("WarmThroughput",
                 DeleteTableResultSchemaCache<DeleteTableResult_GlobalSecondaryIndexWarmThroughputDescriptionSchemaSerdeDeser>::Get())
      .Build();
}

void DeleteTableResult_TableClassSummarySchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
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

std::shared_ptr<const smithy::schema::Schema> DeleteTableResult_TableClassSummarySchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("TableClassSummary")
      .PutMember("TableClass", smithy::schema::Schema::CreateEnum("TableClass"))
      .PutMember("LastUpdateDateTime", smithy::schema::Schema::CreateTimestamp("LastUpdateDateTime"))
      .Build();
}

void DeleteTableResult_GlobalTableWitnessDescriptionSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
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

std::shared_ptr<const smithy::schema::Schema> DeleteTableResult_GlobalTableWitnessDescriptionSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("GlobalTableWitnessDescription")
      .PutMember("RegionName", smithy::schema::Schema::CreateString("RegionName"))
      .PutMember("WitnessStatus", smithy::schema::Schema::CreateEnum("WitnessStatus"))
      .Build();
}

void DeleteTableResult_RestoreSummarySchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
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

std::shared_ptr<const smithy::schema::Schema> DeleteTableResult_RestoreSummarySchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("RestoreSummary")
      .PutMember("SourceBackupArn", smithy::schema::Schema::CreateString("SourceBackupArn"))
      .PutMember("SourceTableArn", smithy::schema::Schema::CreateString("SourceTableArn"))
      .PutMember("RestoreDateTime", smithy::schema::Schema::CreateTimestamp("RestoreDateTime"))
      .PutMember("RestoreInProgress", smithy::schema::Schema::CreateBoolean("RestoreInProgress"))
      .Build();
}

void DeleteTableResult_SSEDescriptionSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
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

std::shared_ptr<const smithy::schema::Schema> DeleteTableResult_SSEDescriptionSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("SSEDescription")
      .PutMember("Status", smithy::schema::Schema::CreateEnum("Status"))
      .PutMember("SSEType", smithy::schema::Schema::CreateEnum("SSEType"))
      .PutMember("KMSMasterKeyArn", smithy::schema::Schema::CreateString("KMSMasterKeyArn"))
      .PutMember("InaccessibleEncryptionDateTime", smithy::schema::Schema::CreateTimestamp("InaccessibleEncryptionDateTime"))
      .Build();
}

void DeleteTableResult_ArchivalSummarySchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
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

std::shared_ptr<const smithy::schema::Schema> DeleteTableResult_ArchivalSummarySchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("ArchivalSummary")
      .PutMember("ArchivalDateTime", smithy::schema::Schema::CreateTimestamp("ArchivalDateTime"))
      .PutMember("ArchivalReason", smithy::schema::Schema::CreateString("ArchivalReason"))
      .PutMember("ArchivalBackupArn", smithy::schema::Schema::CreateString("ArchivalBackupArn"))
      .Build();
}

void DeleteTableResult_VectorIndexDescriptionSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
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
      DeleteTableResult_SearchSchemaElementSchemaSerdeDeser{nested1}.Deserialize(itemDeserializer0);
      list0.push_back(std::move(nested1));
    });
    m_obj.SetSearchSchema(std::move(list0));
    return;
  }
  if (memberName == "Projection") {
    Projection nested0;
    DeleteTableResult_ProjectionSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetProjection(std::move(nested0));
    return;
  }
  if (memberName == "VectorAttribute") {
    VectorAttributeDefinition nested0;
    DeleteTableResult_VectorAttributeDefinitionSchemaSerdeDeser{nested0}.Deserialize(deserializer);
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

std::shared_ptr<const smithy::schema::Schema> DeleteTableResult_VectorIndexDescriptionSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("VectorIndexDescription")
      .PutMember("IndexName", smithy::schema::Schema::CreateString("IndexName"))
      .PutMember("SearchSchema",
                 smithy::schema::Schema::ListBuilder("SearchSchema")
                     .PutMember("member", DeleteTableResultSchemaCache<DeleteTableResult_SearchSchemaElementSchemaSerdeDeser>::Get())
                     .Build())
      .PutMember("Projection", DeleteTableResultSchemaCache<DeleteTableResult_ProjectionSchemaSerdeDeser>::Get())
      .PutMember("VectorAttribute", DeleteTableResultSchemaCache<DeleteTableResult_VectorAttributeDefinitionSchemaSerdeDeser>::Get())
      .PutMember("Dimensions", smithy::schema::Schema::CreateLong("Dimensions"))
      .PutMember("DistanceFunction", smithy::schema::Schema::CreateEnum("DistanceFunction"))
      .PutMember("IndexStatus", smithy::schema::Schema::CreateEnum("IndexStatus"))
      .PutMember("Backfilling", smithy::schema::Schema::CreateBoolean("Backfilling"))
      .PutMember("IndexSizeBytes", smithy::schema::Schema::CreateLong("IndexSizeBytes"))
      .PutMember("ItemCount", smithy::schema::Schema::CreateLong("ItemCount"))
      .PutMember("IndexArn", smithy::schema::Schema::CreateString("IndexArn"))
      .Build();
}

void DeleteTableResult_SearchSchemaElementSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
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

std::shared_ptr<const smithy::schema::Schema> DeleteTableResult_SearchSchemaElementSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("SearchSchemaElement")
      .PutMember("AttributeName", smithy::schema::Schema::CreateString("AttributeName"))
      .PutMember("SearchSchemaElementType", smithy::schema::Schema::CreateEnum("SearchSchemaElementType"))
      .Build();
}

void DeleteTableResult_VectorAttributeDefinitionSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
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

std::shared_ptr<const smithy::schema::Schema> DeleteTableResult_VectorAttributeDefinitionSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("VectorAttributeDefinition")
      .PutMember("AttributeName", smithy::schema::Schema::CreateString("AttributeName"))
      .Build();
}

void DeleteTableResultDeserializable::From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "TableDescription") {
    TableDescription nested0;
    DeleteTableResult_TableDescriptionSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetTableDescription(std::move(nested0));
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> DeleteTableResultDeserializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("DeleteTableResult")
      .PutMember("TableDescription", DeleteTableResultSchemaCache<DeleteTableResult_TableDescriptionSchemaSerdeDeser>::Get())
      .Build();
}

}  // namespace
}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws

Aws::UniquePtr<smithy::schema::SerializableStruct> DeleteTableResult::GetSchemaSerdeOutput() {
  return Aws::MakeUnique<DeleteTableResultDeserializable>("DeleteTableResultDeserializable", *this);
}
