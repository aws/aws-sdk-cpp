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
#include <aws/dynamodb/model/RestoreTableFromBackupResult.h>
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

RestoreTableFromBackupResult::RestoreTableFromBackupResult(const Aws::AmazonWebServiceResult<Aws::String>& result) { *this = result; }

RestoreTableFromBackupResult& RestoreTableFromBackupResult::operator=(const Aws::AmazonWebServiceResult<Aws::String>& result) {
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
class RestoreTableFromBackupResultSchemaCache {
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
        Aws::New<std::shared_ptr<const smithy::schema::Schema>>("RestoreTableFromBackupResultSchemaCache", Adapter::BuildSchema());
    Aws::Utils::ComponentRegistry::RegisterComponent("RestoreTableFromBackupResultSchemaCache", built, &Release);
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
std::atomic<std::shared_ptr<const smithy::schema::Schema>*> RestoreTableFromBackupResultSchemaCache<Adapter>::s_schema{nullptr};
template <typename Adapter>
std::mutex RestoreTableFromBackupResultSchemaCache<Adapter>::s_mutex;

class RestoreTableFromBackupResult_TableDescriptionSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit RestoreTableFromBackupResult_TableDescriptionSchemaSerdeDeser(TableDescription& obj)
      : m_obj(obj),
        m_schema(RestoreTableFromBackupResultSchemaCache<RestoreTableFromBackupResult_TableDescriptionSchemaSerdeDeser>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  TableDescription& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class RestoreTableFromBackupResult_AttributeDefinitionSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit RestoreTableFromBackupResult_AttributeDefinitionSchemaSerdeDeser(AttributeDefinition& obj)
      : m_obj(obj),
        m_schema(RestoreTableFromBackupResultSchemaCache<RestoreTableFromBackupResult_AttributeDefinitionSchemaSerdeDeser>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  AttributeDefinition& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class RestoreTableFromBackupResult_KeySchemaElementSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit RestoreTableFromBackupResult_KeySchemaElementSchemaSerdeDeser(KeySchemaElement& obj)
      : m_obj(obj),
        m_schema(RestoreTableFromBackupResultSchemaCache<RestoreTableFromBackupResult_KeySchemaElementSchemaSerdeDeser>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  KeySchemaElement& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class RestoreTableFromBackupResult_ProvisionedThroughputDescriptionSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit RestoreTableFromBackupResult_ProvisionedThroughputDescriptionSchemaSerdeDeser(ProvisionedThroughputDescription& obj)
      : m_obj(obj),
        m_schema(
            RestoreTableFromBackupResultSchemaCache<RestoreTableFromBackupResult_ProvisionedThroughputDescriptionSchemaSerdeDeser>::Get()) {
  }
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  ProvisionedThroughputDescription& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class RestoreTableFromBackupResult_BillingModeSummarySchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit RestoreTableFromBackupResult_BillingModeSummarySchemaSerdeDeser(BillingModeSummary& obj)
      : m_obj(obj),
        m_schema(RestoreTableFromBackupResultSchemaCache<RestoreTableFromBackupResult_BillingModeSummarySchemaSerdeDeser>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  BillingModeSummary& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class RestoreTableFromBackupResult_LocalSecondaryIndexDescriptionSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit RestoreTableFromBackupResult_LocalSecondaryIndexDescriptionSchemaSerdeDeser(LocalSecondaryIndexDescription& obj)
      : m_obj(obj),
        m_schema(
            RestoreTableFromBackupResultSchemaCache<RestoreTableFromBackupResult_LocalSecondaryIndexDescriptionSchemaSerdeDeser>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  LocalSecondaryIndexDescription& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class RestoreTableFromBackupResult_ProjectionSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit RestoreTableFromBackupResult_ProjectionSchemaSerdeDeser(Projection& obj)
      : m_obj(obj), m_schema(RestoreTableFromBackupResultSchemaCache<RestoreTableFromBackupResult_ProjectionSchemaSerdeDeser>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  Projection& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class RestoreTableFromBackupResult_GlobalSecondaryIndexDescriptionSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit RestoreTableFromBackupResult_GlobalSecondaryIndexDescriptionSchemaSerdeDeser(GlobalSecondaryIndexDescription& obj)
      : m_obj(obj),
        m_schema(
            RestoreTableFromBackupResultSchemaCache<RestoreTableFromBackupResult_GlobalSecondaryIndexDescriptionSchemaSerdeDeser>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  GlobalSecondaryIndexDescription& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class RestoreTableFromBackupResult_OnDemandThroughputSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit RestoreTableFromBackupResult_OnDemandThroughputSchemaSerdeDeser(OnDemandThroughput& obj)
      : m_obj(obj),
        m_schema(RestoreTableFromBackupResultSchemaCache<RestoreTableFromBackupResult_OnDemandThroughputSchemaSerdeDeser>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  OnDemandThroughput& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class RestoreTableFromBackupResult_GlobalSecondaryIndexWarmThroughputDescriptionSchemaSerdeDeser final
    : public smithy::schema::SerializableStruct {
 public:
  explicit RestoreTableFromBackupResult_GlobalSecondaryIndexWarmThroughputDescriptionSchemaSerdeDeser(
      GlobalSecondaryIndexWarmThroughputDescription& obj)
      : m_obj(obj),
        m_schema(RestoreTableFromBackupResultSchemaCache<
                 RestoreTableFromBackupResult_GlobalSecondaryIndexWarmThroughputDescriptionSchemaSerdeDeser>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  GlobalSecondaryIndexWarmThroughputDescription& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class RestoreTableFromBackupResult_StreamSpecificationSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit RestoreTableFromBackupResult_StreamSpecificationSchemaSerdeDeser(StreamSpecification& obj)
      : m_obj(obj),
        m_schema(RestoreTableFromBackupResultSchemaCache<RestoreTableFromBackupResult_StreamSpecificationSchemaSerdeDeser>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  StreamSpecification& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class RestoreTableFromBackupResult_ReplicaDescriptionSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit RestoreTableFromBackupResult_ReplicaDescriptionSchemaSerdeDeser(ReplicaDescription& obj)
      : m_obj(obj),
        m_schema(RestoreTableFromBackupResultSchemaCache<RestoreTableFromBackupResult_ReplicaDescriptionSchemaSerdeDeser>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  ReplicaDescription& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class RestoreTableFromBackupResult_ProvisionedThroughputOverrideSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit RestoreTableFromBackupResult_ProvisionedThroughputOverrideSchemaSerdeDeser(ProvisionedThroughputOverride& obj)
      : m_obj(obj),
        m_schema(
            RestoreTableFromBackupResultSchemaCache<RestoreTableFromBackupResult_ProvisionedThroughputOverrideSchemaSerdeDeser>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  ProvisionedThroughputOverride& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class RestoreTableFromBackupResult_OnDemandThroughputOverrideSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit RestoreTableFromBackupResult_OnDemandThroughputOverrideSchemaSerdeDeser(OnDemandThroughputOverride& obj)
      : m_obj(obj),
        m_schema(RestoreTableFromBackupResultSchemaCache<RestoreTableFromBackupResult_OnDemandThroughputOverrideSchemaSerdeDeser>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  OnDemandThroughputOverride& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class RestoreTableFromBackupResult_TableWarmThroughputDescriptionSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit RestoreTableFromBackupResult_TableWarmThroughputDescriptionSchemaSerdeDeser(TableWarmThroughputDescription& obj)
      : m_obj(obj),
        m_schema(
            RestoreTableFromBackupResultSchemaCache<RestoreTableFromBackupResult_TableWarmThroughputDescriptionSchemaSerdeDeser>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  TableWarmThroughputDescription& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class RestoreTableFromBackupResult_ReplicaGlobalSecondaryIndexDescriptionSchemaSerdeDeser final
    : public smithy::schema::SerializableStruct {
 public:
  explicit RestoreTableFromBackupResult_ReplicaGlobalSecondaryIndexDescriptionSchemaSerdeDeser(ReplicaGlobalSecondaryIndexDescription& obj)
      : m_obj(obj),
        m_schema(RestoreTableFromBackupResultSchemaCache<
                 RestoreTableFromBackupResult_ReplicaGlobalSecondaryIndexDescriptionSchemaSerdeDeser>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  ReplicaGlobalSecondaryIndexDescription& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class RestoreTableFromBackupResult_TableClassSummarySchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit RestoreTableFromBackupResult_TableClassSummarySchemaSerdeDeser(TableClassSummary& obj)
      : m_obj(obj),
        m_schema(RestoreTableFromBackupResultSchemaCache<RestoreTableFromBackupResult_TableClassSummarySchemaSerdeDeser>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  TableClassSummary& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class RestoreTableFromBackupResult_GlobalTableWitnessDescriptionSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit RestoreTableFromBackupResult_GlobalTableWitnessDescriptionSchemaSerdeDeser(GlobalTableWitnessDescription& obj)
      : m_obj(obj),
        m_schema(
            RestoreTableFromBackupResultSchemaCache<RestoreTableFromBackupResult_GlobalTableWitnessDescriptionSchemaSerdeDeser>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  GlobalTableWitnessDescription& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class RestoreTableFromBackupResult_RestoreSummarySchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit RestoreTableFromBackupResult_RestoreSummarySchemaSerdeDeser(RestoreSummary& obj)
      : m_obj(obj), m_schema(RestoreTableFromBackupResultSchemaCache<RestoreTableFromBackupResult_RestoreSummarySchemaSerdeDeser>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  RestoreSummary& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class RestoreTableFromBackupResult_SSEDescriptionSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit RestoreTableFromBackupResult_SSEDescriptionSchemaSerdeDeser(SSEDescription& obj)
      : m_obj(obj), m_schema(RestoreTableFromBackupResultSchemaCache<RestoreTableFromBackupResult_SSEDescriptionSchemaSerdeDeser>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  SSEDescription& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class RestoreTableFromBackupResult_ArchivalSummarySchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit RestoreTableFromBackupResult_ArchivalSummarySchemaSerdeDeser(ArchivalSummary& obj)
      : m_obj(obj),
        m_schema(RestoreTableFromBackupResultSchemaCache<RestoreTableFromBackupResult_ArchivalSummarySchemaSerdeDeser>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  ArchivalSummary& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class RestoreTableFromBackupResult_VectorIndexDescriptionSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit RestoreTableFromBackupResult_VectorIndexDescriptionSchemaSerdeDeser(VectorIndexDescription& obj)
      : m_obj(obj),
        m_schema(RestoreTableFromBackupResultSchemaCache<RestoreTableFromBackupResult_VectorIndexDescriptionSchemaSerdeDeser>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  VectorIndexDescription& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class RestoreTableFromBackupResult_SearchSchemaElementSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit RestoreTableFromBackupResult_SearchSchemaElementSchemaSerdeDeser(SearchSchemaElement& obj)
      : m_obj(obj),
        m_schema(RestoreTableFromBackupResultSchemaCache<RestoreTableFromBackupResult_SearchSchemaElementSchemaSerdeDeser>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  SearchSchemaElement& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class RestoreTableFromBackupResult_VectorAttributeDefinitionSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit RestoreTableFromBackupResult_VectorAttributeDefinitionSchemaSerdeDeser(VectorAttributeDefinition& obj)
      : m_obj(obj),
        m_schema(RestoreTableFromBackupResultSchemaCache<RestoreTableFromBackupResult_VectorAttributeDefinitionSchemaSerdeDeser>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  VectorAttributeDefinition& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class RestoreTableFromBackupResultDeserializable final : public smithy::schema::SerializableStruct {
 public:
  explicit RestoreTableFromBackupResultDeserializable(RestoreTableFromBackupResult& obj)
      : m_obj(obj), m_schema(RestoreTableFromBackupResultSchemaCache<RestoreTableFromBackupResultDeserializable>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  RestoreTableFromBackupResult& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void RestoreTableFromBackupResult_TableDescriptionSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
                                                                         smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "AttributeDefinitions") {
    Aws::Vector<AttributeDefinition> list0;
    deserializer.ReadList(memberSchema, [&](smithy::schema::ShapeDeserializer& itemDeserializer0) {
      AttributeDefinition nested1;
      RestoreTableFromBackupResult_AttributeDefinitionSchemaSerdeDeser{nested1}.Deserialize(itemDeserializer0);
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
      RestoreTableFromBackupResult_KeySchemaElementSchemaSerdeDeser{nested1}.Deserialize(itemDeserializer0);
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
    RestoreTableFromBackupResult_ProvisionedThroughputDescriptionSchemaSerdeDeser{nested0}.Deserialize(deserializer);
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
    RestoreTableFromBackupResult_BillingModeSummarySchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetBillingModeSummary(std::move(nested0));
    return;
  }
  if (memberName == "LocalSecondaryIndexes") {
    Aws::Vector<LocalSecondaryIndexDescription> list0;
    deserializer.ReadList(memberSchema, [&](smithy::schema::ShapeDeserializer& itemDeserializer0) {
      LocalSecondaryIndexDescription nested1;
      RestoreTableFromBackupResult_LocalSecondaryIndexDescriptionSchemaSerdeDeser{nested1}.Deserialize(itemDeserializer0);
      list0.push_back(std::move(nested1));
    });
    m_obj.SetLocalSecondaryIndexes(std::move(list0));
    return;
  }
  if (memberName == "GlobalSecondaryIndexes") {
    Aws::Vector<GlobalSecondaryIndexDescription> list0;
    deserializer.ReadList(memberSchema, [&](smithy::schema::ShapeDeserializer& itemDeserializer0) {
      GlobalSecondaryIndexDescription nested1;
      RestoreTableFromBackupResult_GlobalSecondaryIndexDescriptionSchemaSerdeDeser{nested1}.Deserialize(itemDeserializer0);
      list0.push_back(std::move(nested1));
    });
    m_obj.SetGlobalSecondaryIndexes(std::move(list0));
    return;
  }
  if (memberName == "StreamSpecification") {
    StreamSpecification nested0;
    RestoreTableFromBackupResult_StreamSpecificationSchemaSerdeDeser{nested0}.Deserialize(deserializer);
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
      RestoreTableFromBackupResult_ReplicaDescriptionSchemaSerdeDeser{nested1}.Deserialize(itemDeserializer0);
      list0.push_back(std::move(nested1));
    });
    m_obj.SetReplicas(std::move(list0));
    return;
  }
  if (memberName == "GlobalTableWitnesses") {
    Aws::Vector<GlobalTableWitnessDescription> list0;
    deserializer.ReadList(memberSchema, [&](smithy::schema::ShapeDeserializer& itemDeserializer0) {
      GlobalTableWitnessDescription nested1;
      RestoreTableFromBackupResult_GlobalTableWitnessDescriptionSchemaSerdeDeser{nested1}.Deserialize(itemDeserializer0);
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
    RestoreTableFromBackupResult_RestoreSummarySchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetRestoreSummary(std::move(nested0));
    return;
  }
  if (memberName == "SSEDescription") {
    SSEDescription nested0;
    RestoreTableFromBackupResult_SSEDescriptionSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetSSEDescription(std::move(nested0));
    return;
  }
  if (memberName == "ArchivalSummary") {
    ArchivalSummary nested0;
    RestoreTableFromBackupResult_ArchivalSummarySchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetArchivalSummary(std::move(nested0));
    return;
  }
  if (memberName == "TableClassSummary") {
    TableClassSummary nested0;
    RestoreTableFromBackupResult_TableClassSummarySchemaSerdeDeser{nested0}.Deserialize(deserializer);
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
    RestoreTableFromBackupResult_OnDemandThroughputSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetOnDemandThroughput(std::move(nested0));
    return;
  }
  if (memberName == "WarmThroughput") {
    TableWarmThroughputDescription nested0;
    RestoreTableFromBackupResult_TableWarmThroughputDescriptionSchemaSerdeDeser{nested0}.Deserialize(deserializer);
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
      RestoreTableFromBackupResult_VectorIndexDescriptionSchemaSerdeDeser{nested1}.Deserialize(itemDeserializer0);
      list0.push_back(std::move(nested1));
    });
    m_obj.SetVectorIndexes(std::move(list0));
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> RestoreTableFromBackupResult_TableDescriptionSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("TableDescription")
      .PutMember(
          "AttributeDefinitions",
          smithy::schema::Schema::ListBuilder("AttributeDefinitions")
              .PutMember("member",
                         RestoreTableFromBackupResultSchemaCache<RestoreTableFromBackupResult_AttributeDefinitionSchemaSerdeDeser>::Get())
              .Build())
      .PutMember("TableName", smithy::schema::Schema::CreateString("TableName"))
      .PutMember(
          "KeySchema",
          smithy::schema::Schema::ListBuilder("KeySchema")
              .PutMember("member",
                         RestoreTableFromBackupResultSchemaCache<RestoreTableFromBackupResult_KeySchemaElementSchemaSerdeDeser>::Get())
              .Build())
      .PutMember("TableStatus", smithy::schema::Schema::CreateEnum("TableStatus"))
      .PutMember("CreationDateTime", smithy::schema::Schema::CreateTimestamp("CreationDateTime"))
      .PutMember(
          "ProvisionedThroughput",
          RestoreTableFromBackupResultSchemaCache<RestoreTableFromBackupResult_ProvisionedThroughputDescriptionSchemaSerdeDeser>::Get())
      .PutMember("TableSizeBytes", smithy::schema::Schema::CreateLong("TableSizeBytes"))
      .PutMember("ItemCount", smithy::schema::Schema::CreateLong("ItemCount"))
      .PutMember("TableArn", smithy::schema::Schema::CreateString("TableArn"))
      .PutMember("TableId", smithy::schema::Schema::CreateString("TableId"))
      .PutMember("BillingModeSummary",
                 RestoreTableFromBackupResultSchemaCache<RestoreTableFromBackupResult_BillingModeSummarySchemaSerdeDeser>::Get())
      .PutMember("LocalSecondaryIndexes",
                 smithy::schema::Schema::ListBuilder("LocalSecondaryIndexDescriptionList")
                     .PutMember("member", RestoreTableFromBackupResultSchemaCache<
                                              RestoreTableFromBackupResult_LocalSecondaryIndexDescriptionSchemaSerdeDeser>::Get())
                     .Build())
      .PutMember("GlobalSecondaryIndexes",
                 smithy::schema::Schema::ListBuilder("GlobalSecondaryIndexDescriptionList")
                     .PutMember("member", RestoreTableFromBackupResultSchemaCache<
                                              RestoreTableFromBackupResult_GlobalSecondaryIndexDescriptionSchemaSerdeDeser>::Get())
                     .Build())
      .PutMember("StreamSpecification",
                 RestoreTableFromBackupResultSchemaCache<RestoreTableFromBackupResult_StreamSpecificationSchemaSerdeDeser>::Get())
      .PutMember("LatestStreamLabel", smithy::schema::Schema::CreateString("LatestStreamLabel"))
      .PutMember("LatestStreamArn", smithy::schema::Schema::CreateString("LatestStreamArn"))
      .PutMember("GlobalTableVersion", smithy::schema::Schema::CreateString("GlobalTableVersion"))
      .PutMember(
          "Replicas",
          smithy::schema::Schema::ListBuilder("ReplicaDescriptionList")
              .PutMember("member",
                         RestoreTableFromBackupResultSchemaCache<RestoreTableFromBackupResult_ReplicaDescriptionSchemaSerdeDeser>::Get())
              .Build())
      .PutMember("GlobalTableWitnesses",
                 smithy::schema::Schema::ListBuilder("GlobalTableWitnessDescriptionList")
                     .PutMember("member", RestoreTableFromBackupResultSchemaCache<
                                              RestoreTableFromBackupResult_GlobalTableWitnessDescriptionSchemaSerdeDeser>::Get())
                     .Build())
      .PutMember("GlobalTableSettingsReplicationMode", smithy::schema::Schema::CreateEnum("GlobalTableSettingsReplicationMode"))
      .PutMember("RestoreSummary",
                 RestoreTableFromBackupResultSchemaCache<RestoreTableFromBackupResult_RestoreSummarySchemaSerdeDeser>::Get())
      .PutMember("SSEDescription",
                 RestoreTableFromBackupResultSchemaCache<RestoreTableFromBackupResult_SSEDescriptionSchemaSerdeDeser>::Get())
      .PutMember("ArchivalSummary",
                 RestoreTableFromBackupResultSchemaCache<RestoreTableFromBackupResult_ArchivalSummarySchemaSerdeDeser>::Get())
      .PutMember("TableClassSummary",
                 RestoreTableFromBackupResultSchemaCache<RestoreTableFromBackupResult_TableClassSummarySchemaSerdeDeser>::Get())
      .PutMember("DeletionProtectionEnabled", smithy::schema::Schema::CreateBoolean("DeletionProtectionEnabled"))
      .PutMember("DisassociationProtectionEnabled", smithy::schema::Schema::CreateBoolean("DisassociationProtectionEnabled"))
      .PutMember("OnDemandThroughput",
                 RestoreTableFromBackupResultSchemaCache<RestoreTableFromBackupResult_OnDemandThroughputSchemaSerdeDeser>::Get())
      .PutMember(
          "WarmThroughput",
          RestoreTableFromBackupResultSchemaCache<RestoreTableFromBackupResult_TableWarmThroughputDescriptionSchemaSerdeDeser>::Get())
      .PutMember("MultiRegionConsistency", smithy::schema::Schema::CreateEnum("MultiRegionConsistency"))
      .PutMember(
          "VectorIndexes",
          smithy::schema::Schema::ListBuilder("VectorIndexDescriptionList")
              .PutMember(
                  "member",
                  RestoreTableFromBackupResultSchemaCache<RestoreTableFromBackupResult_VectorIndexDescriptionSchemaSerdeDeser>::Get())
              .Build())
      .Build();
}

void RestoreTableFromBackupResult_AttributeDefinitionSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
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

std::shared_ptr<const smithy::schema::Schema> RestoreTableFromBackupResult_AttributeDefinitionSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("AttributeDefinition")
      .PutMember("AttributeName", smithy::schema::Schema::CreateString("AttributeName"))
      .PutMember("AttributeType", smithy::schema::Schema::CreateEnum("AttributeType"))
      .Build();
}

void RestoreTableFromBackupResult_KeySchemaElementSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
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

std::shared_ptr<const smithy::schema::Schema> RestoreTableFromBackupResult_KeySchemaElementSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("KeySchemaElement")
      .PutMember("AttributeName", smithy::schema::Schema::CreateString("AttributeName"))
      .PutMember("KeyType", smithy::schema::Schema::CreateEnum("KeyType"))
      .Build();
}

void RestoreTableFromBackupResult_ProvisionedThroughputDescriptionSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
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

std::shared_ptr<const smithy::schema::Schema> RestoreTableFromBackupResult_ProvisionedThroughputDescriptionSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("ProvisionedThroughputDescription")
      .PutMember("LastIncreaseDateTime", smithy::schema::Schema::CreateTimestamp("LastIncreaseDateTime"))
      .PutMember("LastDecreaseDateTime", smithy::schema::Schema::CreateTimestamp("LastDecreaseDateTime"))
      .PutMember("NumberOfDecreasesToday", smithy::schema::Schema::CreateLong("NumberOfDecreasesToday"))
      .PutMember("ReadCapacityUnits", smithy::schema::Schema::CreateLong("ReadCapacityUnits"))
      .PutMember("WriteCapacityUnits", smithy::schema::Schema::CreateLong("WriteCapacityUnits"))
      .Build();
}

void RestoreTableFromBackupResult_BillingModeSummarySchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
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

std::shared_ptr<const smithy::schema::Schema> RestoreTableFromBackupResult_BillingModeSummarySchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("BillingModeSummary")
      .PutMember("BillingMode", smithy::schema::Schema::CreateEnum("BillingMode"))
      .PutMember("LastUpdateToPayPerRequestDateTime", smithy::schema::Schema::CreateTimestamp("LastUpdateToPayPerRequestDateTime"))
      .Build();
}

void RestoreTableFromBackupResult_LocalSecondaryIndexDescriptionSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
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
      RestoreTableFromBackupResult_KeySchemaElementSchemaSerdeDeser{nested1}.Deserialize(itemDeserializer0);
      list0.push_back(std::move(nested1));
    });
    m_obj.SetKeySchema(std::move(list0));
    return;
  }
  if (memberName == "Projection") {
    Projection nested0;
    RestoreTableFromBackupResult_ProjectionSchemaSerdeDeser{nested0}.Deserialize(deserializer);
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

std::shared_ptr<const smithy::schema::Schema> RestoreTableFromBackupResult_LocalSecondaryIndexDescriptionSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("LocalSecondaryIndexDescription")
      .PutMember("IndexName", smithy::schema::Schema::CreateString("IndexName"))
      .PutMember(
          "KeySchema",
          smithy::schema::Schema::ListBuilder("KeySchema")
              .PutMember("member",
                         RestoreTableFromBackupResultSchemaCache<RestoreTableFromBackupResult_KeySchemaElementSchemaSerdeDeser>::Get())
              .Build())
      .PutMember("Projection", RestoreTableFromBackupResultSchemaCache<RestoreTableFromBackupResult_ProjectionSchemaSerdeDeser>::Get())
      .PutMember("IndexSizeBytes", smithy::schema::Schema::CreateLong("IndexSizeBytes"))
      .PutMember("ItemCount", smithy::schema::Schema::CreateLong("ItemCount"))
      .PutMember("IndexArn", smithy::schema::Schema::CreateString("IndexArn"))
      .Build();
}

void RestoreTableFromBackupResult_ProjectionSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
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

std::shared_ptr<const smithy::schema::Schema> RestoreTableFromBackupResult_ProjectionSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("Projection")
      .PutMember("ProjectionType", smithy::schema::Schema::CreateEnum("ProjectionType"))
      .PutMember("NonKeyAttributes", smithy::schema::Schema::ListBuilder("NonKeyAttributeNameList")
                                         .PutMember("member", smithy::schema::Schema::CreateString("member"))
                                         .Build())
      .Build();
}

void RestoreTableFromBackupResult_GlobalSecondaryIndexDescriptionSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
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
      RestoreTableFromBackupResult_KeySchemaElementSchemaSerdeDeser{nested1}.Deserialize(itemDeserializer0);
      list0.push_back(std::move(nested1));
    });
    m_obj.SetKeySchema(std::move(list0));
    return;
  }
  if (memberName == "Projection") {
    Projection nested0;
    RestoreTableFromBackupResult_ProjectionSchemaSerdeDeser{nested0}.Deserialize(deserializer);
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
    RestoreTableFromBackupResult_ProvisionedThroughputDescriptionSchemaSerdeDeser{nested0}.Deserialize(deserializer);
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
    RestoreTableFromBackupResult_OnDemandThroughputSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetOnDemandThroughput(std::move(nested0));
    return;
  }
  if (memberName == "WarmThroughput") {
    GlobalSecondaryIndexWarmThroughputDescription nested0;
    RestoreTableFromBackupResult_GlobalSecondaryIndexWarmThroughputDescriptionSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetWarmThroughput(std::move(nested0));
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> RestoreTableFromBackupResult_GlobalSecondaryIndexDescriptionSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("GlobalSecondaryIndexDescription")
      .PutMember("IndexName", smithy::schema::Schema::CreateString("IndexName"))
      .PutMember(
          "KeySchema",
          smithy::schema::Schema::ListBuilder("KeySchema")
              .PutMember("member",
                         RestoreTableFromBackupResultSchemaCache<RestoreTableFromBackupResult_KeySchemaElementSchemaSerdeDeser>::Get())
              .Build())
      .PutMember("Projection", RestoreTableFromBackupResultSchemaCache<RestoreTableFromBackupResult_ProjectionSchemaSerdeDeser>::Get())
      .PutMember("IndexStatus", smithy::schema::Schema::CreateEnum("IndexStatus"))
      .PutMember("Backfilling", smithy::schema::Schema::CreateBoolean("Backfilling"))
      .PutMember(
          "ProvisionedThroughput",
          RestoreTableFromBackupResultSchemaCache<RestoreTableFromBackupResult_ProvisionedThroughputDescriptionSchemaSerdeDeser>::Get())
      .PutMember("IndexSizeBytes", smithy::schema::Schema::CreateLong("IndexSizeBytes"))
      .PutMember("ItemCount", smithy::schema::Schema::CreateLong("ItemCount"))
      .PutMember("IndexArn", smithy::schema::Schema::CreateString("IndexArn"))
      .PutMember("OnDemandThroughput",
                 RestoreTableFromBackupResultSchemaCache<RestoreTableFromBackupResult_OnDemandThroughputSchemaSerdeDeser>::Get())
      .PutMember("WarmThroughput", RestoreTableFromBackupResultSchemaCache<
                                       RestoreTableFromBackupResult_GlobalSecondaryIndexWarmThroughputDescriptionSchemaSerdeDeser>::Get())
      .Build();
}

void RestoreTableFromBackupResult_OnDemandThroughputSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
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

std::shared_ptr<const smithy::schema::Schema> RestoreTableFromBackupResult_OnDemandThroughputSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("OnDemandThroughput")
      .PutMember("MaxReadRequestUnits", smithy::schema::Schema::CreateLong("MaxReadRequestUnits"))
      .PutMember("MaxWriteRequestUnits", smithy::schema::Schema::CreateLong("MaxWriteRequestUnits"))
      .Build();
}

void RestoreTableFromBackupResult_GlobalSecondaryIndexWarmThroughputDescriptionSchemaSerdeDeser::From(
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
RestoreTableFromBackupResult_GlobalSecondaryIndexWarmThroughputDescriptionSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("GlobalSecondaryIndexWarmThroughputDescription")
      .PutMember("ReadUnitsPerSecond", smithy::schema::Schema::CreateLong("ReadUnitsPerSecond"))
      .PutMember("WriteUnitsPerSecond", smithy::schema::Schema::CreateLong("WriteUnitsPerSecond"))
      .PutMember("Status", smithy::schema::Schema::CreateEnum("Status"))
      .Build();
}

void RestoreTableFromBackupResult_StreamSpecificationSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
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

std::shared_ptr<const smithy::schema::Schema> RestoreTableFromBackupResult_StreamSpecificationSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("StreamSpecification")
      .PutMember("StreamEnabled", smithy::schema::Schema::CreateBoolean("StreamEnabled"))
      .PutMember("StreamViewType", smithy::schema::Schema::CreateEnum("StreamViewType"))
      .Build();
}

void RestoreTableFromBackupResult_ReplicaDescriptionSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
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
    RestoreTableFromBackupResult_ProvisionedThroughputOverrideSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetProvisionedThroughputOverride(std::move(nested0));
    return;
  }
  if (memberName == "OnDemandThroughputOverride") {
    OnDemandThroughputOverride nested0;
    RestoreTableFromBackupResult_OnDemandThroughputOverrideSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetOnDemandThroughputOverride(std::move(nested0));
    return;
  }
  if (memberName == "WarmThroughput") {
    TableWarmThroughputDescription nested0;
    RestoreTableFromBackupResult_TableWarmThroughputDescriptionSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetWarmThroughput(std::move(nested0));
    return;
  }
  if (memberName == "GlobalSecondaryIndexes") {
    Aws::Vector<ReplicaGlobalSecondaryIndexDescription> list0;
    deserializer.ReadList(memberSchema, [&](smithy::schema::ShapeDeserializer& itemDeserializer0) {
      ReplicaGlobalSecondaryIndexDescription nested1;
      RestoreTableFromBackupResult_ReplicaGlobalSecondaryIndexDescriptionSchemaSerdeDeser{nested1}.Deserialize(itemDeserializer0);
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
    RestoreTableFromBackupResult_TableClassSummarySchemaSerdeDeser{nested0}.Deserialize(deserializer);
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

std::shared_ptr<const smithy::schema::Schema> RestoreTableFromBackupResult_ReplicaDescriptionSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("ReplicaDescription")
      .PutMember("RegionName", smithy::schema::Schema::CreateString("RegionName"))
      .PutMember("ReplicaStatus", smithy::schema::Schema::CreateEnum("ReplicaStatus"))
      .PutMember("ReplicaArn", smithy::schema::Schema::CreateString("ReplicaArn"))
      .PutMember("ReplicaStatusDescription", smithy::schema::Schema::CreateString("ReplicaStatusDescription"))
      .PutMember("ReplicaStatusPercentProgress", smithy::schema::Schema::CreateString("ReplicaStatusPercentProgress"))
      .PutMember("KMSMasterKeyId", smithy::schema::Schema::CreateString("KMSMasterKeyId"))
      .PutMember("ProvisionedThroughputOverride",
                 RestoreTableFromBackupResultSchemaCache<RestoreTableFromBackupResult_ProvisionedThroughputOverrideSchemaSerdeDeser>::Get())
      .PutMember("OnDemandThroughputOverride",
                 RestoreTableFromBackupResultSchemaCache<RestoreTableFromBackupResult_OnDemandThroughputOverrideSchemaSerdeDeser>::Get())
      .PutMember(
          "WarmThroughput",
          RestoreTableFromBackupResultSchemaCache<RestoreTableFromBackupResult_TableWarmThroughputDescriptionSchemaSerdeDeser>::Get())
      .PutMember("GlobalSecondaryIndexes",
                 smithy::schema::Schema::ListBuilder("ReplicaGlobalSecondaryIndexDescriptionList")
                     .PutMember("member", RestoreTableFromBackupResultSchemaCache<
                                              RestoreTableFromBackupResult_ReplicaGlobalSecondaryIndexDescriptionSchemaSerdeDeser>::Get())
                     .Build())
      .PutMember("ReplicaInaccessibleDateTime", smithy::schema::Schema::CreateTimestamp("ReplicaInaccessibleDateTime"))
      .PutMember("ReplicaTableClassSummary",
                 RestoreTableFromBackupResultSchemaCache<RestoreTableFromBackupResult_TableClassSummarySchemaSerdeDeser>::Get())
      .PutMember("GlobalTableSettingsReplicationMode", smithy::schema::Schema::CreateEnum("GlobalTableSettingsReplicationMode"))
      .Build();
}

void RestoreTableFromBackupResult_ProvisionedThroughputOverrideSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
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

std::shared_ptr<const smithy::schema::Schema> RestoreTableFromBackupResult_ProvisionedThroughputOverrideSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("ProvisionedThroughputOverride")
      .PutMember("ReadCapacityUnits", smithy::schema::Schema::CreateLong("ReadCapacityUnits"))
      .Build();
}

void RestoreTableFromBackupResult_OnDemandThroughputOverrideSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
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

std::shared_ptr<const smithy::schema::Schema> RestoreTableFromBackupResult_OnDemandThroughputOverrideSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("OnDemandThroughputOverride")
      .PutMember("MaxReadRequestUnits", smithy::schema::Schema::CreateLong("MaxReadRequestUnits"))
      .Build();
}

void RestoreTableFromBackupResult_TableWarmThroughputDescriptionSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
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

std::shared_ptr<const smithy::schema::Schema> RestoreTableFromBackupResult_TableWarmThroughputDescriptionSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("TableWarmThroughputDescription")
      .PutMember("ReadUnitsPerSecond", smithy::schema::Schema::CreateLong("ReadUnitsPerSecond"))
      .PutMember("WriteUnitsPerSecond", smithy::schema::Schema::CreateLong("WriteUnitsPerSecond"))
      .PutMember("Status", smithy::schema::Schema::CreateEnum("Status"))
      .Build();
}

void RestoreTableFromBackupResult_ReplicaGlobalSecondaryIndexDescriptionSchemaSerdeDeser::From(
    const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) {
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
    RestoreTableFromBackupResult_ProvisionedThroughputOverrideSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetProvisionedThroughputOverride(std::move(nested0));
    return;
  }
  if (memberName == "OnDemandThroughputOverride") {
    OnDemandThroughputOverride nested0;
    RestoreTableFromBackupResult_OnDemandThroughputOverrideSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetOnDemandThroughputOverride(std::move(nested0));
    return;
  }
  if (memberName == "WarmThroughput") {
    GlobalSecondaryIndexWarmThroughputDescription nested0;
    RestoreTableFromBackupResult_GlobalSecondaryIndexWarmThroughputDescriptionSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetWarmThroughput(std::move(nested0));
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema>
RestoreTableFromBackupResult_ReplicaGlobalSecondaryIndexDescriptionSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("ReplicaGlobalSecondaryIndexDescription")
      .PutMember("IndexName", smithy::schema::Schema::CreateString("IndexName"))
      .PutMember("ProvisionedThroughputOverride",
                 RestoreTableFromBackupResultSchemaCache<RestoreTableFromBackupResult_ProvisionedThroughputOverrideSchemaSerdeDeser>::Get())
      .PutMember("OnDemandThroughputOverride",
                 RestoreTableFromBackupResultSchemaCache<RestoreTableFromBackupResult_OnDemandThroughputOverrideSchemaSerdeDeser>::Get())
      .PutMember("WarmThroughput", RestoreTableFromBackupResultSchemaCache<
                                       RestoreTableFromBackupResult_GlobalSecondaryIndexWarmThroughputDescriptionSchemaSerdeDeser>::Get())
      .Build();
}

void RestoreTableFromBackupResult_TableClassSummarySchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
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

std::shared_ptr<const smithy::schema::Schema> RestoreTableFromBackupResult_TableClassSummarySchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("TableClassSummary")
      .PutMember("TableClass", smithy::schema::Schema::CreateEnum("TableClass"))
      .PutMember("LastUpdateDateTime", smithy::schema::Schema::CreateTimestamp("LastUpdateDateTime"))
      .Build();
}

void RestoreTableFromBackupResult_GlobalTableWitnessDescriptionSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
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

std::shared_ptr<const smithy::schema::Schema> RestoreTableFromBackupResult_GlobalTableWitnessDescriptionSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("GlobalTableWitnessDescription")
      .PutMember("RegionName", smithy::schema::Schema::CreateString("RegionName"))
      .PutMember("WitnessStatus", smithy::schema::Schema::CreateEnum("WitnessStatus"))
      .Build();
}

void RestoreTableFromBackupResult_RestoreSummarySchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
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

std::shared_ptr<const smithy::schema::Schema> RestoreTableFromBackupResult_RestoreSummarySchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("RestoreSummary")
      .PutMember("SourceBackupArn", smithy::schema::Schema::CreateString("SourceBackupArn"))
      .PutMember("SourceTableArn", smithy::schema::Schema::CreateString("SourceTableArn"))
      .PutMember("RestoreDateTime", smithy::schema::Schema::CreateTimestamp("RestoreDateTime"))
      .PutMember("RestoreInProgress", smithy::schema::Schema::CreateBoolean("RestoreInProgress"))
      .Build();
}

void RestoreTableFromBackupResult_SSEDescriptionSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
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

std::shared_ptr<const smithy::schema::Schema> RestoreTableFromBackupResult_SSEDescriptionSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("SSEDescription")
      .PutMember("Status", smithy::schema::Schema::CreateEnum("Status"))
      .PutMember("SSEType", smithy::schema::Schema::CreateEnum("SSEType"))
      .PutMember("KMSMasterKeyArn", smithy::schema::Schema::CreateString("KMSMasterKeyArn"))
      .PutMember("InaccessibleEncryptionDateTime", smithy::schema::Schema::CreateTimestamp("InaccessibleEncryptionDateTime"))
      .Build();
}

void RestoreTableFromBackupResult_ArchivalSummarySchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
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

std::shared_ptr<const smithy::schema::Schema> RestoreTableFromBackupResult_ArchivalSummarySchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("ArchivalSummary")
      .PutMember("ArchivalDateTime", smithy::schema::Schema::CreateTimestamp("ArchivalDateTime"))
      .PutMember("ArchivalReason", smithy::schema::Schema::CreateString("ArchivalReason"))
      .PutMember("ArchivalBackupArn", smithy::schema::Schema::CreateString("ArchivalBackupArn"))
      .Build();
}

void RestoreTableFromBackupResult_VectorIndexDescriptionSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
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
      RestoreTableFromBackupResult_SearchSchemaElementSchemaSerdeDeser{nested1}.Deserialize(itemDeserializer0);
      list0.push_back(std::move(nested1));
    });
    m_obj.SetSearchSchema(std::move(list0));
    return;
  }
  if (memberName == "Projection") {
    Projection nested0;
    RestoreTableFromBackupResult_ProjectionSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetProjection(std::move(nested0));
    return;
  }
  if (memberName == "VectorAttribute") {
    VectorAttributeDefinition nested0;
    RestoreTableFromBackupResult_VectorAttributeDefinitionSchemaSerdeDeser{nested0}.Deserialize(deserializer);
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

std::shared_ptr<const smithy::schema::Schema> RestoreTableFromBackupResult_VectorIndexDescriptionSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("VectorIndexDescription")
      .PutMember("IndexName", smithy::schema::Schema::CreateString("IndexName"))
      .PutMember(
          "SearchSchema",
          smithy::schema::Schema::ListBuilder("SearchSchema")
              .PutMember("member",
                         RestoreTableFromBackupResultSchemaCache<RestoreTableFromBackupResult_SearchSchemaElementSchemaSerdeDeser>::Get())
              .Build())
      .PutMember("Projection", RestoreTableFromBackupResultSchemaCache<RestoreTableFromBackupResult_ProjectionSchemaSerdeDeser>::Get())
      .PutMember("VectorAttribute",
                 RestoreTableFromBackupResultSchemaCache<RestoreTableFromBackupResult_VectorAttributeDefinitionSchemaSerdeDeser>::Get())
      .PutMember("Dimensions", smithy::schema::Schema::CreateLong("Dimensions"))
      .PutMember("DistanceFunction", smithy::schema::Schema::CreateEnum("DistanceFunction"))
      .PutMember("IndexStatus", smithy::schema::Schema::CreateEnum("IndexStatus"))
      .PutMember("Backfilling", smithy::schema::Schema::CreateBoolean("Backfilling"))
      .PutMember("IndexSizeBytes", smithy::schema::Schema::CreateLong("IndexSizeBytes"))
      .PutMember("ItemCount", smithy::schema::Schema::CreateLong("ItemCount"))
      .PutMember("IndexArn", smithy::schema::Schema::CreateString("IndexArn"))
      .Build();
}

void RestoreTableFromBackupResult_SearchSchemaElementSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
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

std::shared_ptr<const smithy::schema::Schema> RestoreTableFromBackupResult_SearchSchemaElementSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("SearchSchemaElement")
      .PutMember("AttributeName", smithy::schema::Schema::CreateString("AttributeName"))
      .PutMember("SearchSchemaElementType", smithy::schema::Schema::CreateEnum("SearchSchemaElementType"))
      .Build();
}

void RestoreTableFromBackupResult_VectorAttributeDefinitionSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
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

std::shared_ptr<const smithy::schema::Schema> RestoreTableFromBackupResult_VectorAttributeDefinitionSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("VectorAttributeDefinition")
      .PutMember("AttributeName", smithy::schema::Schema::CreateString("AttributeName"))
      .Build();
}

void RestoreTableFromBackupResultDeserializable::From(const smithy::schema::Schema& memberSchema,
                                                      smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "TableDescription") {
    TableDescription nested0;
    RestoreTableFromBackupResult_TableDescriptionSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetTableDescription(std::move(nested0));
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> RestoreTableFromBackupResultDeserializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("RestoreTableFromBackupResult")
      .PutMember("TableDescription",
                 RestoreTableFromBackupResultSchemaCache<RestoreTableFromBackupResult_TableDescriptionSchemaSerdeDeser>::Get())
      .Build();
}

}  // namespace
}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws

Aws::UniquePtr<smithy::schema::SerializableStruct> RestoreTableFromBackupResult::GetSchemaSerdeOutput() {
  return Aws::MakeUnique<RestoreTableFromBackupResultDeserializable>("RestoreTableFromBackupResultDeserializable", *this);
}
