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
#include <aws/dynamodb/model/RestoreTableFromBackupRequest.h>
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
class RestoreTableFromBackupRequestSchemaCache {
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
        Aws::New<std::shared_ptr<const smithy::schema::Schema>>("RestoreTableFromBackupRequestSchemaCache", Adapter::BuildSchema());
    Aws::Utils::ComponentRegistry::RegisterComponent("RestoreTableFromBackupRequestSchemaCache", built, &Release);
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
std::atomic<std::shared_ptr<const smithy::schema::Schema>*> RestoreTableFromBackupRequestSchemaCache<Adapter>::s_schema{nullptr};
template <typename Adapter>
std::mutex RestoreTableFromBackupRequestSchemaCache<Adapter>::s_mutex;

class RestoreTableFromBackupRequest_GlobalSecondaryIndexSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit RestoreTableFromBackupRequest_GlobalSecondaryIndexSchemaSerdeSer(const GlobalSecondaryIndex& obj)
      : m_obj(obj),
        m_schema(RestoreTableFromBackupRequestSchemaCache<RestoreTableFromBackupRequest_GlobalSecondaryIndexSchemaSerdeSer>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const GlobalSecondaryIndex& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class RestoreTableFromBackupRequest_KeySchemaElementSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit RestoreTableFromBackupRequest_KeySchemaElementSchemaSerdeSer(const KeySchemaElement& obj)
      : m_obj(obj),
        m_schema(RestoreTableFromBackupRequestSchemaCache<RestoreTableFromBackupRequest_KeySchemaElementSchemaSerdeSer>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const KeySchemaElement& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class RestoreTableFromBackupRequest_ProjectionSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit RestoreTableFromBackupRequest_ProjectionSchemaSerdeSer(const Projection& obj)
      : m_obj(obj), m_schema(RestoreTableFromBackupRequestSchemaCache<RestoreTableFromBackupRequest_ProjectionSchemaSerdeSer>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const Projection& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class RestoreTableFromBackupRequest_ProvisionedThroughputSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit RestoreTableFromBackupRequest_ProvisionedThroughputSchemaSerdeSer(const ProvisionedThroughput& obj)
      : m_obj(obj),
        m_schema(RestoreTableFromBackupRequestSchemaCache<RestoreTableFromBackupRequest_ProvisionedThroughputSchemaSerdeSer>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const ProvisionedThroughput& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class RestoreTableFromBackupRequest_OnDemandThroughputSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit RestoreTableFromBackupRequest_OnDemandThroughputSchemaSerdeSer(const OnDemandThroughput& obj)
      : m_obj(obj),
        m_schema(RestoreTableFromBackupRequestSchemaCache<RestoreTableFromBackupRequest_OnDemandThroughputSchemaSerdeSer>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const OnDemandThroughput& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class RestoreTableFromBackupRequest_WarmThroughputSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit RestoreTableFromBackupRequest_WarmThroughputSchemaSerdeSer(const WarmThroughput& obj)
      : m_obj(obj), m_schema(RestoreTableFromBackupRequestSchemaCache<RestoreTableFromBackupRequest_WarmThroughputSchemaSerdeSer>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const WarmThroughput& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class RestoreTableFromBackupRequest_LocalSecondaryIndexSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit RestoreTableFromBackupRequest_LocalSecondaryIndexSchemaSerdeSer(const LocalSecondaryIndex& obj)
      : m_obj(obj),
        m_schema(RestoreTableFromBackupRequestSchemaCache<RestoreTableFromBackupRequest_LocalSecondaryIndexSchemaSerdeSer>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const LocalSecondaryIndex& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class RestoreTableFromBackupRequest_SSESpecificationSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit RestoreTableFromBackupRequest_SSESpecificationSchemaSerdeSer(const SSESpecification& obj)
      : m_obj(obj),
        m_schema(RestoreTableFromBackupRequestSchemaCache<RestoreTableFromBackupRequest_SSESpecificationSchemaSerdeSer>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const SSESpecification& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class RestoreTableFromBackupRequest_VectorIndexSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit RestoreTableFromBackupRequest_VectorIndexSchemaSerdeSer(const VectorIndex& obj)
      : m_obj(obj), m_schema(RestoreTableFromBackupRequestSchemaCache<RestoreTableFromBackupRequest_VectorIndexSchemaSerdeSer>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const VectorIndex& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class RestoreTableFromBackupRequest_VectorAttributeDefinitionSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit RestoreTableFromBackupRequest_VectorAttributeDefinitionSchemaSerdeSer(const VectorAttributeDefinition& obj)
      : m_obj(obj),
        m_schema(RestoreTableFromBackupRequestSchemaCache<RestoreTableFromBackupRequest_VectorAttributeDefinitionSchemaSerdeSer>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const VectorAttributeDefinition& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class RestoreTableFromBackupRequest_SearchSchemaElementSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit RestoreTableFromBackupRequest_SearchSchemaElementSchemaSerdeSer(const SearchSchemaElement& obj)
      : m_obj(obj),
        m_schema(RestoreTableFromBackupRequestSchemaCache<RestoreTableFromBackupRequest_SearchSchemaElementSchemaSerdeSer>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const SearchSchemaElement& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class RestoreTableFromBackupRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit RestoreTableFromBackupRequestSerializable(const RestoreTableFromBackupRequest& obj)
      : m_obj(obj), m_schema(RestoreTableFromBackupRequestSchemaCache<RestoreTableFromBackupRequestSerializable>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const RestoreTableFromBackupRequest& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void RestoreTableFromBackupRequest_GlobalSecondaryIndexSchemaSerdeSer::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.IndexNameHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("IndexName").value();
    serializer.WriteString(memberSchema, m_obj.GetIndexName());
  }
  if (m_obj.KeySchemaHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("KeySchema").value();
    serializer.WriteList(memberSchema, m_obj.GetKeySchema().size(), [&](smithy::schema::ShapeSerializer& listSerializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      for (const auto& item0 : m_obj.GetKeySchema()) {
        RestoreTableFromBackupRequest_KeySchemaElementSchemaSerdeSer nested1(item0);
        listSerializer0.WriteStruct(itemSchema0, nested1);
      }
    });
  }
  if (m_obj.ProjectionHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("Projection").value();
    RestoreTableFromBackupRequest_ProjectionSchemaSerdeSer nested0(m_obj.GetProjection());
    serializer.WriteStruct(memberSchema, nested0);
  }
  if (m_obj.ProvisionedThroughputHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ProvisionedThroughput").value();
    RestoreTableFromBackupRequest_ProvisionedThroughputSchemaSerdeSer nested0(m_obj.GetProvisionedThroughput());
    serializer.WriteStruct(memberSchema, nested0);
  }
  if (m_obj.OnDemandThroughputHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("OnDemandThroughput").value();
    RestoreTableFromBackupRequest_OnDemandThroughputSchemaSerdeSer nested0(m_obj.GetOnDemandThroughput());
    serializer.WriteStruct(memberSchema, nested0);
  }
  if (m_obj.WarmThroughputHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("WarmThroughput").value();
    RestoreTableFromBackupRequest_WarmThroughputSchemaSerdeSer nested0(m_obj.GetWarmThroughput());
    serializer.WriteStruct(memberSchema, nested0);
  }
}

std::shared_ptr<const smithy::schema::Schema> RestoreTableFromBackupRequest_GlobalSecondaryIndexSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("GlobalSecondaryIndex")
      .PutMember("IndexName", smithy::schema::Schema::CreateString("IndexName"))
      .PutMember(
          "KeySchema",
          smithy::schema::Schema::ListBuilder("KeySchema")
              .PutMember("member",
                         RestoreTableFromBackupRequestSchemaCache<RestoreTableFromBackupRequest_KeySchemaElementSchemaSerdeSer>::Get())
              .Build())
      .PutMember("Projection", RestoreTableFromBackupRequestSchemaCache<RestoreTableFromBackupRequest_ProjectionSchemaSerdeSer>::Get())
      .PutMember("ProvisionedThroughput",
                 RestoreTableFromBackupRequestSchemaCache<RestoreTableFromBackupRequest_ProvisionedThroughputSchemaSerdeSer>::Get())
      .PutMember("OnDemandThroughput",
                 RestoreTableFromBackupRequestSchemaCache<RestoreTableFromBackupRequest_OnDemandThroughputSchemaSerdeSer>::Get())
      .PutMember("WarmThroughput",
                 RestoreTableFromBackupRequestSchemaCache<RestoreTableFromBackupRequest_WarmThroughputSchemaSerdeSer>::Get())
      .Build();
}

void RestoreTableFromBackupRequest_KeySchemaElementSchemaSerdeSer::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.AttributeNameHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("AttributeName").value();
    serializer.WriteString(memberSchema, m_obj.GetAttributeName());
  }
  if (m_obj.KeyTypeHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("KeyType").value();
    serializer.WriteString(memberSchema, KeyTypeMapper::GetNameForKeyType(m_obj.GetKeyType()));
  }
}

std::shared_ptr<const smithy::schema::Schema> RestoreTableFromBackupRequest_KeySchemaElementSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("KeySchemaElement")
      .PutMember("AttributeName", smithy::schema::Schema::CreateString("AttributeName"))
      .PutMember("KeyType", smithy::schema::Schema::CreateEnum("KeyType"))
      .Build();
}

void RestoreTableFromBackupRequest_ProjectionSchemaSerdeSer::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
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

std::shared_ptr<const smithy::schema::Schema> RestoreTableFromBackupRequest_ProjectionSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("Projection")
      .PutMember("ProjectionType", smithy::schema::Schema::CreateEnum("ProjectionType"))
      .PutMember("NonKeyAttributes", smithy::schema::Schema::ListBuilder("NonKeyAttributeNameList")
                                         .PutMember("member", smithy::schema::Schema::CreateString("member"))
                                         .Build())
      .Build();
}

void RestoreTableFromBackupRequest_ProvisionedThroughputSchemaSerdeSer::SerializeMembers(
    smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.ReadCapacityUnitsHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ReadCapacityUnits").value();
    serializer.WriteLong(memberSchema, m_obj.GetReadCapacityUnits());
  }
  if (m_obj.WriteCapacityUnitsHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("WriteCapacityUnits").value();
    serializer.WriteLong(memberSchema, m_obj.GetWriteCapacityUnits());
  }
}

std::shared_ptr<const smithy::schema::Schema> RestoreTableFromBackupRequest_ProvisionedThroughputSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("ProvisionedThroughput")
      .PutMember("ReadCapacityUnits", smithy::schema::Schema::CreateLong("ReadCapacityUnits"))
      .PutMember("WriteCapacityUnits", smithy::schema::Schema::CreateLong("WriteCapacityUnits"))
      .Build();
}

void RestoreTableFromBackupRequest_OnDemandThroughputSchemaSerdeSer::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.MaxReadRequestUnitsHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("MaxReadRequestUnits").value();
    serializer.WriteLong(memberSchema, m_obj.GetMaxReadRequestUnits());
  }
  if (m_obj.MaxWriteRequestUnitsHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("MaxWriteRequestUnits").value();
    serializer.WriteLong(memberSchema, m_obj.GetMaxWriteRequestUnits());
  }
}

std::shared_ptr<const smithy::schema::Schema> RestoreTableFromBackupRequest_OnDemandThroughputSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("OnDemandThroughput")
      .PutMember("MaxReadRequestUnits", smithy::schema::Schema::CreateLong("MaxReadRequestUnits"))
      .PutMember("MaxWriteRequestUnits", smithy::schema::Schema::CreateLong("MaxWriteRequestUnits"))
      .Build();
}

void RestoreTableFromBackupRequest_WarmThroughputSchemaSerdeSer::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.ReadUnitsPerSecondHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ReadUnitsPerSecond").value();
    serializer.WriteLong(memberSchema, m_obj.GetReadUnitsPerSecond());
  }
  if (m_obj.WriteUnitsPerSecondHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("WriteUnitsPerSecond").value();
    serializer.WriteLong(memberSchema, m_obj.GetWriteUnitsPerSecond());
  }
}

std::shared_ptr<const smithy::schema::Schema> RestoreTableFromBackupRequest_WarmThroughputSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("WarmThroughput")
      .PutMember("ReadUnitsPerSecond", smithy::schema::Schema::CreateLong("ReadUnitsPerSecond"))
      .PutMember("WriteUnitsPerSecond", smithy::schema::Schema::CreateLong("WriteUnitsPerSecond"))
      .Build();
}

void RestoreTableFromBackupRequest_LocalSecondaryIndexSchemaSerdeSer::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.IndexNameHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("IndexName").value();
    serializer.WriteString(memberSchema, m_obj.GetIndexName());
  }
  if (m_obj.KeySchemaHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("KeySchema").value();
    serializer.WriteList(memberSchema, m_obj.GetKeySchema().size(), [&](smithy::schema::ShapeSerializer& listSerializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      for (const auto& item0 : m_obj.GetKeySchema()) {
        RestoreTableFromBackupRequest_KeySchemaElementSchemaSerdeSer nested1(item0);
        listSerializer0.WriteStruct(itemSchema0, nested1);
      }
    });
  }
  if (m_obj.ProjectionHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("Projection").value();
    RestoreTableFromBackupRequest_ProjectionSchemaSerdeSer nested0(m_obj.GetProjection());
    serializer.WriteStruct(memberSchema, nested0);
  }
}

std::shared_ptr<const smithy::schema::Schema> RestoreTableFromBackupRequest_LocalSecondaryIndexSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("LocalSecondaryIndex")
      .PutMember("IndexName", smithy::schema::Schema::CreateString("IndexName"))
      .PutMember(
          "KeySchema",
          smithy::schema::Schema::ListBuilder("KeySchema")
              .PutMember("member",
                         RestoreTableFromBackupRequestSchemaCache<RestoreTableFromBackupRequest_KeySchemaElementSchemaSerdeSer>::Get())
              .Build())
      .PutMember("Projection", RestoreTableFromBackupRequestSchemaCache<RestoreTableFromBackupRequest_ProjectionSchemaSerdeSer>::Get())
      .Build();
}

void RestoreTableFromBackupRequest_SSESpecificationSchemaSerdeSer::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
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

std::shared_ptr<const smithy::schema::Schema> RestoreTableFromBackupRequest_SSESpecificationSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("SSESpecification")
      .PutMember("Enabled", smithy::schema::Schema::CreateBoolean("Enabled"))
      .PutMember("SSEType", smithy::schema::Schema::CreateEnum("SSEType"))
      .PutMember("KMSMasterKeyId", smithy::schema::Schema::CreateString("KMSMasterKeyId"))
      .Build();
}

void RestoreTableFromBackupRequest_VectorIndexSchemaSerdeSer::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.IndexNameHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("IndexName").value();
    serializer.WriteString(memberSchema, m_obj.GetIndexName());
  }
  if (m_obj.VectorAttributeHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("VectorAttribute").value();
    RestoreTableFromBackupRequest_VectorAttributeDefinitionSchemaSerdeSer nested0(m_obj.GetVectorAttribute());
    serializer.WriteStruct(memberSchema, nested0);
  }
  if (m_obj.SearchSchemaHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("SearchSchema").value();
    serializer.WriteList(memberSchema, m_obj.GetSearchSchema().size(), [&](smithy::schema::ShapeSerializer& listSerializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      for (const auto& item0 : m_obj.GetSearchSchema()) {
        RestoreTableFromBackupRequest_SearchSchemaElementSchemaSerdeSer nested1(item0);
        listSerializer0.WriteStruct(itemSchema0, nested1);
      }
    });
  }
  if (m_obj.ProjectionHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("Projection").value();
    RestoreTableFromBackupRequest_ProjectionSchemaSerdeSer nested0(m_obj.GetProjection());
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

std::shared_ptr<const smithy::schema::Schema> RestoreTableFromBackupRequest_VectorIndexSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("VectorIndex")
      .PutMember("IndexName", smithy::schema::Schema::CreateString("IndexName"))
      .PutMember("VectorAttribute",
                 RestoreTableFromBackupRequestSchemaCache<RestoreTableFromBackupRequest_VectorAttributeDefinitionSchemaSerdeSer>::Get())
      .PutMember(
          "SearchSchema",
          smithy::schema::Schema::ListBuilder("SearchSchema")
              .PutMember("member",
                         RestoreTableFromBackupRequestSchemaCache<RestoreTableFromBackupRequest_SearchSchemaElementSchemaSerdeSer>::Get())
              .Build())
      .PutMember("Projection", RestoreTableFromBackupRequestSchemaCache<RestoreTableFromBackupRequest_ProjectionSchemaSerdeSer>::Get())
      .PutMember("Dimensions", smithy::schema::Schema::CreateLong("Dimensions"))
      .PutMember("DistanceFunction", smithy::schema::Schema::CreateEnum("DistanceFunction"))
      .Build();
}

void RestoreTableFromBackupRequest_VectorAttributeDefinitionSchemaSerdeSer::SerializeMembers(
    smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.AttributeNameHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("AttributeName").value();
    serializer.WriteString(memberSchema, m_obj.GetAttributeName());
  }
}

std::shared_ptr<const smithy::schema::Schema> RestoreTableFromBackupRequest_VectorAttributeDefinitionSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("VectorAttributeDefinition")
      .PutMember("AttributeName", smithy::schema::Schema::CreateString("AttributeName"))
      .Build();
}

void RestoreTableFromBackupRequest_SearchSchemaElementSchemaSerdeSer::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
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

std::shared_ptr<const smithy::schema::Schema> RestoreTableFromBackupRequest_SearchSchemaElementSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("SearchSchemaElement")
      .PutMember("AttributeName", smithy::schema::Schema::CreateString("AttributeName"))
      .PutMember("SearchSchemaElementType", smithy::schema::Schema::CreateEnum("SearchSchemaElementType"))
      .Build();
}

void RestoreTableFromBackupRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.TargetTableNameHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("TargetTableName").value();
    serializer.WriteString(memberSchema, m_obj.GetTargetTableName());
  }
  if (m_obj.BackupArnHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("BackupArn").value();
    serializer.WriteString(memberSchema, m_obj.GetBackupArn());
  }
  if (m_obj.BillingModeOverrideHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("BillingModeOverride").value();
    serializer.WriteString(memberSchema, BillingModeMapper::GetNameForBillingMode(m_obj.GetBillingModeOverride()));
  }
  if (m_obj.GlobalSecondaryIndexOverrideHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("GlobalSecondaryIndexOverride").value();
    serializer.WriteList(memberSchema, m_obj.GetGlobalSecondaryIndexOverride().size(),
                         [&](smithy::schema::ShapeSerializer& listSerializer0) {
                           const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
                           for (const auto& item0 : m_obj.GetGlobalSecondaryIndexOverride()) {
                             RestoreTableFromBackupRequest_GlobalSecondaryIndexSchemaSerdeSer nested1(item0);
                             listSerializer0.WriteStruct(itemSchema0, nested1);
                           }
                         });
  }
  if (m_obj.LocalSecondaryIndexOverrideHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("LocalSecondaryIndexOverride").value();
    serializer.WriteList(memberSchema, m_obj.GetLocalSecondaryIndexOverride().size(),
                         [&](smithy::schema::ShapeSerializer& listSerializer0) {
                           const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
                           for (const auto& item0 : m_obj.GetLocalSecondaryIndexOverride()) {
                             RestoreTableFromBackupRequest_LocalSecondaryIndexSchemaSerdeSer nested1(item0);
                             listSerializer0.WriteStruct(itemSchema0, nested1);
                           }
                         });
  }
  if (m_obj.ProvisionedThroughputOverrideHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ProvisionedThroughputOverride").value();
    RestoreTableFromBackupRequest_ProvisionedThroughputSchemaSerdeSer nested0(m_obj.GetProvisionedThroughputOverride());
    serializer.WriteStruct(memberSchema, nested0);
  }
  if (m_obj.OnDemandThroughputOverrideHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("OnDemandThroughputOverride").value();
    RestoreTableFromBackupRequest_OnDemandThroughputSchemaSerdeSer nested0(m_obj.GetOnDemandThroughputOverride());
    serializer.WriteStruct(memberSchema, nested0);
  }
  if (m_obj.SSESpecificationOverrideHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("SSESpecificationOverride").value();
    RestoreTableFromBackupRequest_SSESpecificationSchemaSerdeSer nested0(m_obj.GetSSESpecificationOverride());
    serializer.WriteStruct(memberSchema, nested0);
  }
  if (m_obj.VectorIndexOverrideHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("VectorIndexOverride").value();
    serializer.WriteList(memberSchema, m_obj.GetVectorIndexOverride().size(), [&](smithy::schema::ShapeSerializer& listSerializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      for (const auto& item0 : m_obj.GetVectorIndexOverride()) {
        RestoreTableFromBackupRequest_VectorIndexSchemaSerdeSer nested1(item0);
        listSerializer0.WriteStruct(itemSchema0, nested1);
      }
    });
  }
}

std::shared_ptr<const smithy::schema::Schema> RestoreTableFromBackupRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("RestoreTableFromBackupRequest")
      .PutMember("TargetTableName", smithy::schema::Schema::CreateString("TargetTableName"))
      .PutMember("BackupArn", smithy::schema::Schema::CreateString("BackupArn"))
      .PutMember("BillingModeOverride", smithy::schema::Schema::CreateEnum("BillingModeOverride"))
      .PutMember(
          "GlobalSecondaryIndexOverride",
          smithy::schema::Schema::ListBuilder("GlobalSecondaryIndexList")
              .PutMember("member",
                         RestoreTableFromBackupRequestSchemaCache<RestoreTableFromBackupRequest_GlobalSecondaryIndexSchemaSerdeSer>::Get())
              .Build())
      .PutMember(
          "LocalSecondaryIndexOverride",
          smithy::schema::Schema::ListBuilder("LocalSecondaryIndexList")
              .PutMember("member",
                         RestoreTableFromBackupRequestSchemaCache<RestoreTableFromBackupRequest_LocalSecondaryIndexSchemaSerdeSer>::Get())
              .Build())
      .PutMember("ProvisionedThroughputOverride",
                 RestoreTableFromBackupRequestSchemaCache<RestoreTableFromBackupRequest_ProvisionedThroughputSchemaSerdeSer>::Get())
      .PutMember("OnDemandThroughputOverride",
                 RestoreTableFromBackupRequestSchemaCache<RestoreTableFromBackupRequest_OnDemandThroughputSchemaSerdeSer>::Get())
      .PutMember("SSESpecificationOverride",
                 RestoreTableFromBackupRequestSchemaCache<RestoreTableFromBackupRequest_SSESpecificationSchemaSerdeSer>::Get())
      .PutMember(
          "VectorIndexOverride",
          smithy::schema::Schema::ListBuilder("VectorIndexList")
              .PutMember("member", RestoreTableFromBackupRequestSchemaCache<RestoreTableFromBackupRequest_VectorIndexSchemaSerdeSer>::Get())
              .Build())
      .Build();
}

}  // namespace
}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws

Aws::UniquePtr<smithy::schema::SerializableStruct> RestoreTableFromBackupRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<RestoreTableFromBackupRequestSerializable>("RestoreTableFromBackupRequestSerializable", *this);
}

Aws::String RestoreTableFromBackupRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext RestoreTableFromBackupRequest::GetSchemaSerdeContext() const {
  return {"RestoreTableFromBackup", "2012-08-10"};
}

Aws::Http::HeaderValueCollection RestoreTableFromBackupRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DynamoDB_20120810.RestoreTableFromBackup"));
  return headers;
}

RestoreTableFromBackupRequest::EndpointParameters RestoreTableFromBackupRequest::GetEndpointContextParams() const {
  EndpointParameters parameters;
  // Operation context parameters
  if (TargetTableNameHasBeenSet()) {
    parameters.emplace_back(Aws::String("ResourceArn"), this->GetTargetTableName(),
                            Aws::Endpoint::EndpointParameter::ParameterOrigin::OPERATION_CONTEXT);
  }
  return parameters;
}
