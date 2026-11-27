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
#include <aws/dynamodb/model/ImportTableRequest.h>
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
class ImportTableRequestSchemaCache {
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
        Aws::New<std::shared_ptr<const smithy::schema::Schema>>("ImportTableRequestSchemaCache", Adapter::BuildSchema());
    Aws::Utils::ComponentRegistry::RegisterComponent("ImportTableRequestSchemaCache", built, &Release);
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
std::atomic<std::shared_ptr<const smithy::schema::Schema>*> ImportTableRequestSchemaCache<Adapter>::s_schema{nullptr};
template <typename Adapter>
std::mutex ImportTableRequestSchemaCache<Adapter>::s_mutex;

class ImportTableRequest_S3BucketSourceSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit ImportTableRequest_S3BucketSourceSchemaSerdeSer(const S3BucketSource& obj)
      : m_obj(obj), m_schema(ImportTableRequestSchemaCache<ImportTableRequest_S3BucketSourceSchemaSerdeSer>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const S3BucketSource& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class ImportTableRequest_InputFormatOptionsSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit ImportTableRequest_InputFormatOptionsSchemaSerdeSer(const InputFormatOptions& obj)
      : m_obj(obj), m_schema(ImportTableRequestSchemaCache<ImportTableRequest_InputFormatOptionsSchemaSerdeSer>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const InputFormatOptions& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class ImportTableRequest_CsvOptionsSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit ImportTableRequest_CsvOptionsSchemaSerdeSer(const CsvOptions& obj)
      : m_obj(obj), m_schema(ImportTableRequestSchemaCache<ImportTableRequest_CsvOptionsSchemaSerdeSer>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const CsvOptions& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class ImportTableRequest_TableCreationParametersSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit ImportTableRequest_TableCreationParametersSchemaSerdeSer(const TableCreationParameters& obj)
      : m_obj(obj), m_schema(ImportTableRequestSchemaCache<ImportTableRequest_TableCreationParametersSchemaSerdeSer>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const TableCreationParameters& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class ImportTableRequest_AttributeDefinitionSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit ImportTableRequest_AttributeDefinitionSchemaSerdeSer(const AttributeDefinition& obj)
      : m_obj(obj), m_schema(ImportTableRequestSchemaCache<ImportTableRequest_AttributeDefinitionSchemaSerdeSer>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const AttributeDefinition& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class ImportTableRequest_KeySchemaElementSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit ImportTableRequest_KeySchemaElementSchemaSerdeSer(const KeySchemaElement& obj)
      : m_obj(obj), m_schema(ImportTableRequestSchemaCache<ImportTableRequest_KeySchemaElementSchemaSerdeSer>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const KeySchemaElement& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class ImportTableRequest_ProvisionedThroughputSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit ImportTableRequest_ProvisionedThroughputSchemaSerdeSer(const ProvisionedThroughput& obj)
      : m_obj(obj), m_schema(ImportTableRequestSchemaCache<ImportTableRequest_ProvisionedThroughputSchemaSerdeSer>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const ProvisionedThroughput& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class ImportTableRequest_OnDemandThroughputSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit ImportTableRequest_OnDemandThroughputSchemaSerdeSer(const OnDemandThroughput& obj)
      : m_obj(obj), m_schema(ImportTableRequestSchemaCache<ImportTableRequest_OnDemandThroughputSchemaSerdeSer>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const OnDemandThroughput& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class ImportTableRequest_SSESpecificationSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit ImportTableRequest_SSESpecificationSchemaSerdeSer(const SSESpecification& obj)
      : m_obj(obj), m_schema(ImportTableRequestSchemaCache<ImportTableRequest_SSESpecificationSchemaSerdeSer>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const SSESpecification& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class ImportTableRequest_GlobalSecondaryIndexSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit ImportTableRequest_GlobalSecondaryIndexSchemaSerdeSer(const GlobalSecondaryIndex& obj)
      : m_obj(obj), m_schema(ImportTableRequestSchemaCache<ImportTableRequest_GlobalSecondaryIndexSchemaSerdeSer>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const GlobalSecondaryIndex& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class ImportTableRequest_ProjectionSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit ImportTableRequest_ProjectionSchemaSerdeSer(const Projection& obj)
      : m_obj(obj), m_schema(ImportTableRequestSchemaCache<ImportTableRequest_ProjectionSchemaSerdeSer>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const Projection& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class ImportTableRequest_WarmThroughputSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit ImportTableRequest_WarmThroughputSchemaSerdeSer(const WarmThroughput& obj)
      : m_obj(obj), m_schema(ImportTableRequestSchemaCache<ImportTableRequest_WarmThroughputSchemaSerdeSer>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const WarmThroughput& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class ImportTableRequest_VectorIndexSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit ImportTableRequest_VectorIndexSchemaSerdeSer(const VectorIndex& obj)
      : m_obj(obj), m_schema(ImportTableRequestSchemaCache<ImportTableRequest_VectorIndexSchemaSerdeSer>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const VectorIndex& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class ImportTableRequest_VectorAttributeDefinitionSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit ImportTableRequest_VectorAttributeDefinitionSchemaSerdeSer(const VectorAttributeDefinition& obj)
      : m_obj(obj), m_schema(ImportTableRequestSchemaCache<ImportTableRequest_VectorAttributeDefinitionSchemaSerdeSer>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const VectorAttributeDefinition& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class ImportTableRequest_SearchSchemaElementSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit ImportTableRequest_SearchSchemaElementSchemaSerdeSer(const SearchSchemaElement& obj)
      : m_obj(obj), m_schema(ImportTableRequestSchemaCache<ImportTableRequest_SearchSchemaElementSchemaSerdeSer>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const SearchSchemaElement& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class ImportTableRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit ImportTableRequestSerializable(const ImportTableRequest& obj)
      : m_obj(obj), m_schema(ImportTableRequestSchemaCache<ImportTableRequestSerializable>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const ImportTableRequest& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void ImportTableRequest_S3BucketSourceSchemaSerdeSer::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.S3BucketOwnerHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("S3BucketOwner").value();
    serializer.WriteString(memberSchema, m_obj.GetS3BucketOwner());
  }
  if (m_obj.S3BucketHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("S3Bucket").value();
    serializer.WriteString(memberSchema, m_obj.GetS3Bucket());
  }
  if (m_obj.S3KeyPrefixHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("S3KeyPrefix").value();
    serializer.WriteString(memberSchema, m_obj.GetS3KeyPrefix());
  }
}

std::shared_ptr<const smithy::schema::Schema> ImportTableRequest_S3BucketSourceSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("S3BucketSource")
      .PutMember("S3BucketOwner", smithy::schema::Schema::CreateString("S3BucketOwner"))
      .PutMember("S3Bucket", smithy::schema::Schema::CreateString("S3Bucket"))
      .PutMember("S3KeyPrefix", smithy::schema::Schema::CreateString("S3KeyPrefix"))
      .Build();
}

void ImportTableRequest_InputFormatOptionsSchemaSerdeSer::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.CsvHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("Csv").value();
    ImportTableRequest_CsvOptionsSchemaSerdeSer nested0(m_obj.GetCsv());
    serializer.WriteStruct(memberSchema, nested0);
  }
}

std::shared_ptr<const smithy::schema::Schema> ImportTableRequest_InputFormatOptionsSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("InputFormatOptions")
      .PutMember("Csv", ImportTableRequestSchemaCache<ImportTableRequest_CsvOptionsSchemaSerdeSer>::Get())
      .Build();
}

void ImportTableRequest_CsvOptionsSchemaSerdeSer::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.DelimiterHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("Delimiter").value();
    serializer.WriteString(memberSchema, m_obj.GetDelimiter());
  }
  if (m_obj.HeaderListHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("HeaderList").value();
    serializer.WriteList(memberSchema, m_obj.GetHeaderList().size(), [&](smithy::schema::ShapeSerializer& listSerializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      for (const auto& item0 : m_obj.GetHeaderList()) {
        listSerializer0.WriteString(itemSchema0, item0);
      }
    });
  }
}

std::shared_ptr<const smithy::schema::Schema> ImportTableRequest_CsvOptionsSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("CsvOptions")
      .PutMember("Delimiter", smithy::schema::Schema::CreateString("Delimiter"))
      .PutMember(
          "HeaderList",
          smithy::schema::Schema::ListBuilder("CsvHeaderList").PutMember("member", smithy::schema::Schema::CreateString("member")).Build())
      .Build();
}

void ImportTableRequest_TableCreationParametersSchemaSerdeSer::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.TableNameHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("TableName").value();
    serializer.WriteString(memberSchema, m_obj.GetTableName());
  }
  if (m_obj.AttributeDefinitionsHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("AttributeDefinitions").value();
    serializer.WriteList(memberSchema, m_obj.GetAttributeDefinitions().size(), [&](smithy::schema::ShapeSerializer& listSerializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      for (const auto& item0 : m_obj.GetAttributeDefinitions()) {
        ImportTableRequest_AttributeDefinitionSchemaSerdeSer nested1(item0);
        listSerializer0.WriteStruct(itemSchema0, nested1);
      }
    });
  }
  if (m_obj.KeySchemaHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("KeySchema").value();
    serializer.WriteList(memberSchema, m_obj.GetKeySchema().size(), [&](smithy::schema::ShapeSerializer& listSerializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      for (const auto& item0 : m_obj.GetKeySchema()) {
        ImportTableRequest_KeySchemaElementSchemaSerdeSer nested1(item0);
        listSerializer0.WriteStruct(itemSchema0, nested1);
      }
    });
  }
  if (m_obj.BillingModeHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("BillingMode").value();
    serializer.WriteString(memberSchema, BillingModeMapper::GetNameForBillingMode(m_obj.GetBillingMode()));
  }
  if (m_obj.ProvisionedThroughputHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ProvisionedThroughput").value();
    ImportTableRequest_ProvisionedThroughputSchemaSerdeSer nested0(m_obj.GetProvisionedThroughput());
    serializer.WriteStruct(memberSchema, nested0);
  }
  if (m_obj.OnDemandThroughputHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("OnDemandThroughput").value();
    ImportTableRequest_OnDemandThroughputSchemaSerdeSer nested0(m_obj.GetOnDemandThroughput());
    serializer.WriteStruct(memberSchema, nested0);
  }
  if (m_obj.SSESpecificationHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("SSESpecification").value();
    ImportTableRequest_SSESpecificationSchemaSerdeSer nested0(m_obj.GetSSESpecification());
    serializer.WriteStruct(memberSchema, nested0);
  }
  if (m_obj.GlobalSecondaryIndexesHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("GlobalSecondaryIndexes").value();
    serializer.WriteList(memberSchema, m_obj.GetGlobalSecondaryIndexes().size(), [&](smithy::schema::ShapeSerializer& listSerializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      for (const auto& item0 : m_obj.GetGlobalSecondaryIndexes()) {
        ImportTableRequest_GlobalSecondaryIndexSchemaSerdeSer nested1(item0);
        listSerializer0.WriteStruct(itemSchema0, nested1);
      }
    });
  }
  if (m_obj.VectorIndexesHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("VectorIndexes").value();
    serializer.WriteList(memberSchema, m_obj.GetVectorIndexes().size(), [&](smithy::schema::ShapeSerializer& listSerializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      for (const auto& item0 : m_obj.GetVectorIndexes()) {
        ImportTableRequest_VectorIndexSchemaSerdeSer nested1(item0);
        listSerializer0.WriteStruct(itemSchema0, nested1);
      }
    });
  }
}

std::shared_ptr<const smithy::schema::Schema> ImportTableRequest_TableCreationParametersSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("TableCreationParameters")
      .PutMember("TableName", smithy::schema::Schema::CreateString("TableName"))
      .PutMember("AttributeDefinitions",
                 smithy::schema::Schema::ListBuilder("AttributeDefinitions")
                     .PutMember("member", ImportTableRequestSchemaCache<ImportTableRequest_AttributeDefinitionSchemaSerdeSer>::Get())
                     .Build())
      .PutMember("KeySchema",
                 smithy::schema::Schema::ListBuilder("KeySchema")
                     .PutMember("member", ImportTableRequestSchemaCache<ImportTableRequest_KeySchemaElementSchemaSerdeSer>::Get())
                     .Build())
      .PutMember("BillingMode", smithy::schema::Schema::CreateEnum("BillingMode"))
      .PutMember("ProvisionedThroughput", ImportTableRequestSchemaCache<ImportTableRequest_ProvisionedThroughputSchemaSerdeSer>::Get())
      .PutMember("OnDemandThroughput", ImportTableRequestSchemaCache<ImportTableRequest_OnDemandThroughputSchemaSerdeSer>::Get())
      .PutMember("SSESpecification", ImportTableRequestSchemaCache<ImportTableRequest_SSESpecificationSchemaSerdeSer>::Get())
      .PutMember("GlobalSecondaryIndexes",
                 smithy::schema::Schema::ListBuilder("GlobalSecondaryIndexList")
                     .PutMember("member", ImportTableRequestSchemaCache<ImportTableRequest_GlobalSecondaryIndexSchemaSerdeSer>::Get())
                     .Build())
      .PutMember("VectorIndexes",
                 smithy::schema::Schema::ListBuilder("VectorIndexList")
                     .PutMember("member", ImportTableRequestSchemaCache<ImportTableRequest_VectorIndexSchemaSerdeSer>::Get())
                     .Build())
      .Build();
}

void ImportTableRequest_AttributeDefinitionSchemaSerdeSer::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.AttributeNameHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("AttributeName").value();
    serializer.WriteString(memberSchema, m_obj.GetAttributeName());
  }
  if (m_obj.AttributeTypeHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("AttributeType").value();
    serializer.WriteString(memberSchema, ScalarAttributeTypeMapper::GetNameForScalarAttributeType(m_obj.GetAttributeType()));
  }
}

std::shared_ptr<const smithy::schema::Schema> ImportTableRequest_AttributeDefinitionSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("AttributeDefinition")
      .PutMember("AttributeName", smithy::schema::Schema::CreateString("AttributeName"))
      .PutMember("AttributeType", smithy::schema::Schema::CreateEnum("AttributeType"))
      .Build();
}

void ImportTableRequest_KeySchemaElementSchemaSerdeSer::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.AttributeNameHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("AttributeName").value();
    serializer.WriteString(memberSchema, m_obj.GetAttributeName());
  }
  if (m_obj.KeyTypeHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("KeyType").value();
    serializer.WriteString(memberSchema, KeyTypeMapper::GetNameForKeyType(m_obj.GetKeyType()));
  }
}

std::shared_ptr<const smithy::schema::Schema> ImportTableRequest_KeySchemaElementSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("KeySchemaElement")
      .PutMember("AttributeName", smithy::schema::Schema::CreateString("AttributeName"))
      .PutMember("KeyType", smithy::schema::Schema::CreateEnum("KeyType"))
      .Build();
}

void ImportTableRequest_ProvisionedThroughputSchemaSerdeSer::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.ReadCapacityUnitsHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ReadCapacityUnits").value();
    serializer.WriteLong(memberSchema, m_obj.GetReadCapacityUnits());
  }
  if (m_obj.WriteCapacityUnitsHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("WriteCapacityUnits").value();
    serializer.WriteLong(memberSchema, m_obj.GetWriteCapacityUnits());
  }
}

std::shared_ptr<const smithy::schema::Schema> ImportTableRequest_ProvisionedThroughputSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("ProvisionedThroughput")
      .PutMember("ReadCapacityUnits", smithy::schema::Schema::CreateLong("ReadCapacityUnits"))
      .PutMember("WriteCapacityUnits", smithy::schema::Schema::CreateLong("WriteCapacityUnits"))
      .Build();
}

void ImportTableRequest_OnDemandThroughputSchemaSerdeSer::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.MaxReadRequestUnitsHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("MaxReadRequestUnits").value();
    serializer.WriteLong(memberSchema, m_obj.GetMaxReadRequestUnits());
  }
  if (m_obj.MaxWriteRequestUnitsHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("MaxWriteRequestUnits").value();
    serializer.WriteLong(memberSchema, m_obj.GetMaxWriteRequestUnits());
  }
}

std::shared_ptr<const smithy::schema::Schema> ImportTableRequest_OnDemandThroughputSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("OnDemandThroughput")
      .PutMember("MaxReadRequestUnits", smithy::schema::Schema::CreateLong("MaxReadRequestUnits"))
      .PutMember("MaxWriteRequestUnits", smithy::schema::Schema::CreateLong("MaxWriteRequestUnits"))
      .Build();
}

void ImportTableRequest_SSESpecificationSchemaSerdeSer::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.EnabledHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("Enabled").value();
    serializer.WriteBoolean(memberSchema, m_obj.GetEnabled());
  }
  if (m_obj.SSETypeHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("SSEType").value();
    serializer.WriteString(memberSchema, SSETypeMapper::GetNameForSSEType(m_obj.GetSSEType()));
  }
  if (m_obj.KMSMasterKeyIdHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("KMSMasterKeyId").value();
    serializer.WriteString(memberSchema, m_obj.GetKMSMasterKeyId());
  }
}

std::shared_ptr<const smithy::schema::Schema> ImportTableRequest_SSESpecificationSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("SSESpecification")
      .PutMember("Enabled", smithy::schema::Schema::CreateBoolean("Enabled"))
      .PutMember("SSEType", smithy::schema::Schema::CreateEnum("SSEType"))
      .PutMember("KMSMasterKeyId", smithy::schema::Schema::CreateString("KMSMasterKeyId"))
      .Build();
}

void ImportTableRequest_GlobalSecondaryIndexSchemaSerdeSer::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.IndexNameHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("IndexName").value();
    serializer.WriteString(memberSchema, m_obj.GetIndexName());
  }
  if (m_obj.KeySchemaHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("KeySchema").value();
    serializer.WriteList(memberSchema, m_obj.GetKeySchema().size(), [&](smithy::schema::ShapeSerializer& listSerializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      for (const auto& item0 : m_obj.GetKeySchema()) {
        ImportTableRequest_KeySchemaElementSchemaSerdeSer nested1(item0);
        listSerializer0.WriteStruct(itemSchema0, nested1);
      }
    });
  }
  if (m_obj.ProjectionHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("Projection").value();
    ImportTableRequest_ProjectionSchemaSerdeSer nested0(m_obj.GetProjection());
    serializer.WriteStruct(memberSchema, nested0);
  }
  if (m_obj.ProvisionedThroughputHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ProvisionedThroughput").value();
    ImportTableRequest_ProvisionedThroughputSchemaSerdeSer nested0(m_obj.GetProvisionedThroughput());
    serializer.WriteStruct(memberSchema, nested0);
  }
  if (m_obj.OnDemandThroughputHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("OnDemandThroughput").value();
    ImportTableRequest_OnDemandThroughputSchemaSerdeSer nested0(m_obj.GetOnDemandThroughput());
    serializer.WriteStruct(memberSchema, nested0);
  }
  if (m_obj.WarmThroughputHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("WarmThroughput").value();
    ImportTableRequest_WarmThroughputSchemaSerdeSer nested0(m_obj.GetWarmThroughput());
    serializer.WriteStruct(memberSchema, nested0);
  }
}

std::shared_ptr<const smithy::schema::Schema> ImportTableRequest_GlobalSecondaryIndexSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("GlobalSecondaryIndex")
      .PutMember("IndexName", smithy::schema::Schema::CreateString("IndexName"))
      .PutMember("KeySchema",
                 smithy::schema::Schema::ListBuilder("KeySchema")
                     .PutMember("member", ImportTableRequestSchemaCache<ImportTableRequest_KeySchemaElementSchemaSerdeSer>::Get())
                     .Build())
      .PutMember("Projection", ImportTableRequestSchemaCache<ImportTableRequest_ProjectionSchemaSerdeSer>::Get())
      .PutMember("ProvisionedThroughput", ImportTableRequestSchemaCache<ImportTableRequest_ProvisionedThroughputSchemaSerdeSer>::Get())
      .PutMember("OnDemandThroughput", ImportTableRequestSchemaCache<ImportTableRequest_OnDemandThroughputSchemaSerdeSer>::Get())
      .PutMember("WarmThroughput", ImportTableRequestSchemaCache<ImportTableRequest_WarmThroughputSchemaSerdeSer>::Get())
      .Build();
}

void ImportTableRequest_ProjectionSchemaSerdeSer::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.ProjectionTypeHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ProjectionType").value();
    serializer.WriteString(memberSchema, ProjectionTypeMapper::GetNameForProjectionType(m_obj.GetProjectionType()));
  }
  if (m_obj.NonKeyAttributesHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("NonKeyAttributes").value();
    serializer.WriteList(memberSchema, m_obj.GetNonKeyAttributes().size(), [&](smithy::schema::ShapeSerializer& listSerializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      for (const auto& item0 : m_obj.GetNonKeyAttributes()) {
        listSerializer0.WriteString(itemSchema0, item0);
      }
    });
  }
}

std::shared_ptr<const smithy::schema::Schema> ImportTableRequest_ProjectionSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("Projection")
      .PutMember("ProjectionType", smithy::schema::Schema::CreateEnum("ProjectionType"))
      .PutMember("NonKeyAttributes", smithy::schema::Schema::ListBuilder("NonKeyAttributeNameList")
                                         .PutMember("member", smithy::schema::Schema::CreateString("member"))
                                         .Build())
      .Build();
}

void ImportTableRequest_WarmThroughputSchemaSerdeSer::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.ReadUnitsPerSecondHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ReadUnitsPerSecond").value();
    serializer.WriteLong(memberSchema, m_obj.GetReadUnitsPerSecond());
  }
  if (m_obj.WriteUnitsPerSecondHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("WriteUnitsPerSecond").value();
    serializer.WriteLong(memberSchema, m_obj.GetWriteUnitsPerSecond());
  }
}

std::shared_ptr<const smithy::schema::Schema> ImportTableRequest_WarmThroughputSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("WarmThroughput")
      .PutMember("ReadUnitsPerSecond", smithy::schema::Schema::CreateLong("ReadUnitsPerSecond"))
      .PutMember("WriteUnitsPerSecond", smithy::schema::Schema::CreateLong("WriteUnitsPerSecond"))
      .Build();
}

void ImportTableRequest_VectorIndexSchemaSerdeSer::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.IndexNameHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("IndexName").value();
    serializer.WriteString(memberSchema, m_obj.GetIndexName());
  }
  if (m_obj.VectorAttributeHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("VectorAttribute").value();
    ImportTableRequest_VectorAttributeDefinitionSchemaSerdeSer nested0(m_obj.GetVectorAttribute());
    serializer.WriteStruct(memberSchema, nested0);
  }
  if (m_obj.SearchSchemaHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("SearchSchema").value();
    serializer.WriteList(memberSchema, m_obj.GetSearchSchema().size(), [&](smithy::schema::ShapeSerializer& listSerializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      for (const auto& item0 : m_obj.GetSearchSchema()) {
        ImportTableRequest_SearchSchemaElementSchemaSerdeSer nested1(item0);
        listSerializer0.WriteStruct(itemSchema0, nested1);
      }
    });
  }
  if (m_obj.ProjectionHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("Projection").value();
    ImportTableRequest_ProjectionSchemaSerdeSer nested0(m_obj.GetProjection());
    serializer.WriteStruct(memberSchema, nested0);
  }
  if (m_obj.DimensionsHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("Dimensions").value();
    serializer.WriteLong(memberSchema, m_obj.GetDimensions());
  }
  if (m_obj.DistanceFunctionHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("DistanceFunction").value();
    serializer.WriteString(memberSchema, VectorDistanceFunctionMapper::GetNameForVectorDistanceFunction(m_obj.GetDistanceFunction()));
  }
}

std::shared_ptr<const smithy::schema::Schema> ImportTableRequest_VectorIndexSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("VectorIndex")
      .PutMember("IndexName", smithy::schema::Schema::CreateString("IndexName"))
      .PutMember("VectorAttribute", ImportTableRequestSchemaCache<ImportTableRequest_VectorAttributeDefinitionSchemaSerdeSer>::Get())
      .PutMember("SearchSchema",
                 smithy::schema::Schema::ListBuilder("SearchSchema")
                     .PutMember("member", ImportTableRequestSchemaCache<ImportTableRequest_SearchSchemaElementSchemaSerdeSer>::Get())
                     .Build())
      .PutMember("Projection", ImportTableRequestSchemaCache<ImportTableRequest_ProjectionSchemaSerdeSer>::Get())
      .PutMember("Dimensions", smithy::schema::Schema::CreateLong("Dimensions"))
      .PutMember("DistanceFunction", smithy::schema::Schema::CreateEnum("DistanceFunction"))
      .Build();
}

void ImportTableRequest_VectorAttributeDefinitionSchemaSerdeSer::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.AttributeNameHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("AttributeName").value();
    serializer.WriteString(memberSchema, m_obj.GetAttributeName());
  }
}

std::shared_ptr<const smithy::schema::Schema> ImportTableRequest_VectorAttributeDefinitionSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("VectorAttributeDefinition")
      .PutMember("AttributeName", smithy::schema::Schema::CreateString("AttributeName"))
      .Build();
}

void ImportTableRequest_SearchSchemaElementSchemaSerdeSer::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.AttributeNameHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("AttributeName").value();
    serializer.WriteString(memberSchema, m_obj.GetAttributeName());
  }
  if (m_obj.SearchSchemaElementTypeHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("SearchSchemaElementType").value();
    serializer.WriteString(memberSchema,
                           SearchSchemaElementTypeMapper::GetNameForSearchSchemaElementType(m_obj.GetSearchSchemaElementType()));
  }
}

std::shared_ptr<const smithy::schema::Schema> ImportTableRequest_SearchSchemaElementSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("SearchSchemaElement")
      .PutMember("AttributeName", smithy::schema::Schema::CreateString("AttributeName"))
      .PutMember("SearchSchemaElementType", smithy::schema::Schema::CreateEnum("SearchSchemaElementType"))
      .Build();
}

void ImportTableRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.ClientTokenHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ClientToken").value();
    serializer.WriteString(memberSchema, m_obj.GetClientToken());
  }
  if (m_obj.S3BucketSourceHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("S3BucketSource").value();
    ImportTableRequest_S3BucketSourceSchemaSerdeSer nested0(m_obj.GetS3BucketSource());
    serializer.WriteStruct(memberSchema, nested0);
  }
  if (m_obj.InputFormatHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("InputFormat").value();
    serializer.WriteString(memberSchema, InputFormatMapper::GetNameForInputFormat(m_obj.GetInputFormat()));
  }
  if (m_obj.InputFormatOptionsHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("InputFormatOptions").value();
    ImportTableRequest_InputFormatOptionsSchemaSerdeSer nested0(m_obj.GetInputFormatOptions());
    serializer.WriteStruct(memberSchema, nested0);
  }
  if (m_obj.InputCompressionTypeHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("InputCompressionType").value();
    serializer.WriteString(memberSchema, InputCompressionTypeMapper::GetNameForInputCompressionType(m_obj.GetInputCompressionType()));
  }
  if (m_obj.TableCreationParametersHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("TableCreationParameters").value();
    ImportTableRequest_TableCreationParametersSchemaSerdeSer nested0(m_obj.GetTableCreationParameters());
    serializer.WriteStruct(memberSchema, nested0);
  }
}

std::shared_ptr<const smithy::schema::Schema> ImportTableRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("ImportTableRequest")
      .PutMember("ClientToken", smithy::schema::Schema::CreateString("ClientToken"))
      .PutMember("S3BucketSource", ImportTableRequestSchemaCache<ImportTableRequest_S3BucketSourceSchemaSerdeSer>::Get())
      .PutMember("InputFormat", smithy::schema::Schema::CreateEnum("InputFormat"))
      .PutMember("InputFormatOptions", ImportTableRequestSchemaCache<ImportTableRequest_InputFormatOptionsSchemaSerdeSer>::Get())
      .PutMember("InputCompressionType", smithy::schema::Schema::CreateEnum("InputCompressionType"))
      .PutMember("TableCreationParameters", ImportTableRequestSchemaCache<ImportTableRequest_TableCreationParametersSchemaSerdeSer>::Get())
      .Build();
}

}  // namespace
}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws

Aws::UniquePtr<smithy::schema::SerializableStruct> ImportTableRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<ImportTableRequestSerializable>("ImportTableRequestSerializable", *this);
}

Aws::String ImportTableRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext ImportTableRequest::GetSchemaSerdeContext() const { return {"ImportTable", "2012-08-10"}; }

Aws::Http::HeaderValueCollection ImportTableRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DynamoDB_20120810.ImportTable"));
  return headers;
}

ImportTableRequest::EndpointParameters ImportTableRequest::GetEndpointContextParams() const {
  EndpointParameters parameters;
  // operation context params go here
  parameters.emplace_back(Aws::String{"ResourceArn"}, this->GetOperationContextParams(),
                          Aws::Endpoint::EndpointParameter::ParameterOrigin::OPERATION_CONTEXT);
  return parameters;
}
// Accessor for dynamic context endpoint params
Aws::Vector<Aws::String> ImportTableRequest::GetOperationContextParams() const {
  Aws::Vector<Aws::String> result;
  auto& TableCreationParametersElems = (*this).GetTableCreationParameters().GetTableName();
  result.emplace_back(TableCreationParametersElems);
  return result;
}
