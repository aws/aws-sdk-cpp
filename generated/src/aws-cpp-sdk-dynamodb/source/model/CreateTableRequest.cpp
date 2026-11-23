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
#include <aws/dynamodb/model/CreateTableRequest.h>
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
class CreateTableRequest_AttributeDefinitionSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit CreateTableRequest_AttributeDefinitionSchemaSerdeSer(const AttributeDefinition& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const AttributeDefinition& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class CreateTableRequest_KeySchemaElementSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit CreateTableRequest_KeySchemaElementSchemaSerdeSer(const KeySchemaElement& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const KeySchemaElement& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class CreateTableRequest_LocalSecondaryIndexSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit CreateTableRequest_LocalSecondaryIndexSchemaSerdeSer(const LocalSecondaryIndex& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const LocalSecondaryIndex& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class CreateTableRequest_ProjectionSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit CreateTableRequest_ProjectionSchemaSerdeSer(const Projection& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const Projection& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class CreateTableRequest_GlobalSecondaryIndexSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit CreateTableRequest_GlobalSecondaryIndexSchemaSerdeSer(const GlobalSecondaryIndex& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const GlobalSecondaryIndex& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class CreateTableRequest_ProvisionedThroughputSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit CreateTableRequest_ProvisionedThroughputSchemaSerdeSer(const ProvisionedThroughput& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const ProvisionedThroughput& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class CreateTableRequest_OnDemandThroughputSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit CreateTableRequest_OnDemandThroughputSchemaSerdeSer(const OnDemandThroughput& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const OnDemandThroughput& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class CreateTableRequest_WarmThroughputSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit CreateTableRequest_WarmThroughputSchemaSerdeSer(const WarmThroughput& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const WarmThroughput& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class CreateTableRequest_StreamSpecificationSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit CreateTableRequest_StreamSpecificationSchemaSerdeSer(const StreamSpecification& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const StreamSpecification& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class CreateTableRequest_SSESpecificationSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit CreateTableRequest_SSESpecificationSchemaSerdeSer(const SSESpecification& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const SSESpecification& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class CreateTableRequest_TagSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit CreateTableRequest_TagSchemaSerdeSer(const Tag& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const Tag& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class CreateTableRequest_VectorIndexSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit CreateTableRequest_VectorIndexSchemaSerdeSer(const VectorIndex& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const VectorIndex& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class CreateTableRequest_VectorAttributeDefinitionSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit CreateTableRequest_VectorAttributeDefinitionSchemaSerdeSer(const VectorAttributeDefinition& obj)
      : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const VectorAttributeDefinition& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class CreateTableRequest_SearchSchemaElementSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit CreateTableRequest_SearchSchemaElementSchemaSerdeSer(const SearchSchemaElement& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const SearchSchemaElement& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class CreateTableRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit CreateTableRequestSerializable(const CreateTableRequest& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const CreateTableRequest& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void CreateTableRequest_AttributeDefinitionSchemaSerdeSer::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.AttributeNameHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("AttributeName").value();
    serializer.WriteString(memberSchema, m_obj.GetAttributeName());
  }
  if (m_obj.AttributeTypeHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("AttributeType").value();
    serializer.WriteString(memberSchema, ScalarAttributeTypeMapper::GetNameForScalarAttributeType(m_obj.GetAttributeType()));
  }
}

std::shared_ptr<const smithy::schema::Schema> CreateTableRequest_AttributeDefinitionSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("AttributeDefinition")
      .PutMember("AttributeName", smithy::schema::Schema::CreateString("AttributeName"))
      .PutMember("AttributeType", smithy::schema::Schema::CreateEnum("AttributeType"))
      .Build();
}

void CreateTableRequest_KeySchemaElementSchemaSerdeSer::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.AttributeNameHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("AttributeName").value();
    serializer.WriteString(memberSchema, m_obj.GetAttributeName());
  }
  if (m_obj.KeyTypeHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("KeyType").value();
    serializer.WriteString(memberSchema, KeyTypeMapper::GetNameForKeyType(m_obj.GetKeyType()));
  }
}

std::shared_ptr<const smithy::schema::Schema> CreateTableRequest_KeySchemaElementSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("KeySchemaElement")
      .PutMember("AttributeName", smithy::schema::Schema::CreateString("AttributeName"))
      .PutMember("KeyType", smithy::schema::Schema::CreateEnum("KeyType"))
      .Build();
}

void CreateTableRequest_LocalSecondaryIndexSchemaSerdeSer::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.IndexNameHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("IndexName").value();
    serializer.WriteString(memberSchema, m_obj.GetIndexName());
  }
  if (m_obj.KeySchemaHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("KeySchema").value();
    serializer.WriteList(memberSchema, m_obj.GetKeySchema().size(), [&](smithy::schema::ShapeSerializer& listSerializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      for (const auto& item0 : m_obj.GetKeySchema()) {
        CreateTableRequest_KeySchemaElementSchemaSerdeSer nested1(item0);
        listSerializer0.WriteStruct(itemSchema0, nested1);
      }
    });
  }
  if (m_obj.ProjectionHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("Projection").value();
    CreateTableRequest_ProjectionSchemaSerdeSer nested0(m_obj.GetProjection());
    serializer.WriteStruct(memberSchema, nested0);
  }
}

std::shared_ptr<const smithy::schema::Schema> CreateTableRequest_LocalSecondaryIndexSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("LocalSecondaryIndex")
      .PutMember("IndexName", smithy::schema::Schema::CreateString("IndexName"))
      .PutMember("KeySchema", smithy::schema::Schema::ListBuilder("KeySchema")
                                  .PutMember("member", CreateTableRequest_KeySchemaElementSchemaSerdeSer::BuildSchema())
                                  .Build())
      .PutMember("Projection", CreateTableRequest_ProjectionSchemaSerdeSer::BuildSchema())
      .Build();
}

void CreateTableRequest_ProjectionSchemaSerdeSer::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
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

std::shared_ptr<const smithy::schema::Schema> CreateTableRequest_ProjectionSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("Projection")
      .PutMember("ProjectionType", smithy::schema::Schema::CreateEnum("ProjectionType"))
      .PutMember("NonKeyAttributes", smithy::schema::Schema::ListBuilder("NonKeyAttributeNameList")
                                         .PutMember("member", smithy::schema::Schema::CreateString("member"))
                                         .Build())
      .Build();
}

void CreateTableRequest_GlobalSecondaryIndexSchemaSerdeSer::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.IndexNameHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("IndexName").value();
    serializer.WriteString(memberSchema, m_obj.GetIndexName());
  }
  if (m_obj.KeySchemaHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("KeySchema").value();
    serializer.WriteList(memberSchema, m_obj.GetKeySchema().size(), [&](smithy::schema::ShapeSerializer& listSerializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      for (const auto& item0 : m_obj.GetKeySchema()) {
        CreateTableRequest_KeySchemaElementSchemaSerdeSer nested1(item0);
        listSerializer0.WriteStruct(itemSchema0, nested1);
      }
    });
  }
  if (m_obj.ProjectionHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("Projection").value();
    CreateTableRequest_ProjectionSchemaSerdeSer nested0(m_obj.GetProjection());
    serializer.WriteStruct(memberSchema, nested0);
  }
  if (m_obj.ProvisionedThroughputHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ProvisionedThroughput").value();
    CreateTableRequest_ProvisionedThroughputSchemaSerdeSer nested0(m_obj.GetProvisionedThroughput());
    serializer.WriteStruct(memberSchema, nested0);
  }
  if (m_obj.OnDemandThroughputHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("OnDemandThroughput").value();
    CreateTableRequest_OnDemandThroughputSchemaSerdeSer nested0(m_obj.GetOnDemandThroughput());
    serializer.WriteStruct(memberSchema, nested0);
  }
  if (m_obj.WarmThroughputHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("WarmThroughput").value();
    CreateTableRequest_WarmThroughputSchemaSerdeSer nested0(m_obj.GetWarmThroughput());
    serializer.WriteStruct(memberSchema, nested0);
  }
}

std::shared_ptr<const smithy::schema::Schema> CreateTableRequest_GlobalSecondaryIndexSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("GlobalSecondaryIndex")
      .PutMember("IndexName", smithy::schema::Schema::CreateString("IndexName"))
      .PutMember("KeySchema", smithy::schema::Schema::ListBuilder("KeySchema")
                                  .PutMember("member", CreateTableRequest_KeySchemaElementSchemaSerdeSer::BuildSchema())
                                  .Build())
      .PutMember("Projection", CreateTableRequest_ProjectionSchemaSerdeSer::BuildSchema())
      .PutMember("ProvisionedThroughput", CreateTableRequest_ProvisionedThroughputSchemaSerdeSer::BuildSchema())
      .PutMember("OnDemandThroughput", CreateTableRequest_OnDemandThroughputSchemaSerdeSer::BuildSchema())
      .PutMember("WarmThroughput", CreateTableRequest_WarmThroughputSchemaSerdeSer::BuildSchema())
      .Build();
}

void CreateTableRequest_ProvisionedThroughputSchemaSerdeSer::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.ReadCapacityUnitsHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ReadCapacityUnits").value();
    serializer.WriteLong(memberSchema, m_obj.GetReadCapacityUnits());
  }
  if (m_obj.WriteCapacityUnitsHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("WriteCapacityUnits").value();
    serializer.WriteLong(memberSchema, m_obj.GetWriteCapacityUnits());
  }
}

std::shared_ptr<const smithy::schema::Schema> CreateTableRequest_ProvisionedThroughputSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("ProvisionedThroughput")
      .PutMember("ReadCapacityUnits", smithy::schema::Schema::CreateLong("ReadCapacityUnits"))
      .PutMember("WriteCapacityUnits", smithy::schema::Schema::CreateLong("WriteCapacityUnits"))
      .Build();
}

void CreateTableRequest_OnDemandThroughputSchemaSerdeSer::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.MaxReadRequestUnitsHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("MaxReadRequestUnits").value();
    serializer.WriteLong(memberSchema, m_obj.GetMaxReadRequestUnits());
  }
  if (m_obj.MaxWriteRequestUnitsHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("MaxWriteRequestUnits").value();
    serializer.WriteLong(memberSchema, m_obj.GetMaxWriteRequestUnits());
  }
}

std::shared_ptr<const smithy::schema::Schema> CreateTableRequest_OnDemandThroughputSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("OnDemandThroughput")
      .PutMember("MaxReadRequestUnits", smithy::schema::Schema::CreateLong("MaxReadRequestUnits"))
      .PutMember("MaxWriteRequestUnits", smithy::schema::Schema::CreateLong("MaxWriteRequestUnits"))
      .Build();
}

void CreateTableRequest_WarmThroughputSchemaSerdeSer::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.ReadUnitsPerSecondHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ReadUnitsPerSecond").value();
    serializer.WriteLong(memberSchema, m_obj.GetReadUnitsPerSecond());
  }
  if (m_obj.WriteUnitsPerSecondHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("WriteUnitsPerSecond").value();
    serializer.WriteLong(memberSchema, m_obj.GetWriteUnitsPerSecond());
  }
}

std::shared_ptr<const smithy::schema::Schema> CreateTableRequest_WarmThroughputSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("WarmThroughput")
      .PutMember("ReadUnitsPerSecond", smithy::schema::Schema::CreateLong("ReadUnitsPerSecond"))
      .PutMember("WriteUnitsPerSecond", smithy::schema::Schema::CreateLong("WriteUnitsPerSecond"))
      .Build();
}

void CreateTableRequest_StreamSpecificationSchemaSerdeSer::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.StreamEnabledHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("StreamEnabled").value();
    serializer.WriteBoolean(memberSchema, m_obj.GetStreamEnabled());
  }
  if (m_obj.StreamViewTypeHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("StreamViewType").value();
    serializer.WriteString(memberSchema, StreamViewTypeMapper::GetNameForStreamViewType(m_obj.GetStreamViewType()));
  }
}

std::shared_ptr<const smithy::schema::Schema> CreateTableRequest_StreamSpecificationSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("StreamSpecification")
      .PutMember("StreamEnabled", smithy::schema::Schema::CreateBoolean("StreamEnabled"))
      .PutMember("StreamViewType", smithy::schema::Schema::CreateEnum("StreamViewType"))
      .Build();
}

void CreateTableRequest_SSESpecificationSchemaSerdeSer::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
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

std::shared_ptr<const smithy::schema::Schema> CreateTableRequest_SSESpecificationSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("SSESpecification")
      .PutMember("Enabled", smithy::schema::Schema::CreateBoolean("Enabled"))
      .PutMember("SSEType", smithy::schema::Schema::CreateEnum("SSEType"))
      .PutMember("KMSMasterKeyId", smithy::schema::Schema::CreateString("KMSMasterKeyId"))
      .Build();
}

void CreateTableRequest_TagSchemaSerdeSer::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.KeyHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("Key").value();
    serializer.WriteString(memberSchema, m_obj.GetKey());
  }
  if (m_obj.ValueHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("Value").value();
    serializer.WriteString(memberSchema, m_obj.GetValue());
  }
}

std::shared_ptr<const smithy::schema::Schema> CreateTableRequest_TagSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("Tag")
      .PutMember("Key", smithy::schema::Schema::CreateString("Key"))
      .PutMember("Value", smithy::schema::Schema::CreateString("Value"))
      .Build();
}

void CreateTableRequest_VectorIndexSchemaSerdeSer::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.IndexNameHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("IndexName").value();
    serializer.WriteString(memberSchema, m_obj.GetIndexName());
  }
  if (m_obj.VectorAttributeHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("VectorAttribute").value();
    CreateTableRequest_VectorAttributeDefinitionSchemaSerdeSer nested0(m_obj.GetVectorAttribute());
    serializer.WriteStruct(memberSchema, nested0);
  }
  if (m_obj.SearchSchemaHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("SearchSchema").value();
    serializer.WriteList(memberSchema, m_obj.GetSearchSchema().size(), [&](smithy::schema::ShapeSerializer& listSerializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      for (const auto& item0 : m_obj.GetSearchSchema()) {
        CreateTableRequest_SearchSchemaElementSchemaSerdeSer nested1(item0);
        listSerializer0.WriteStruct(itemSchema0, nested1);
      }
    });
  }
  if (m_obj.ProjectionHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("Projection").value();
    CreateTableRequest_ProjectionSchemaSerdeSer nested0(m_obj.GetProjection());
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

std::shared_ptr<const smithy::schema::Schema> CreateTableRequest_VectorIndexSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("VectorIndex")
      .PutMember("IndexName", smithy::schema::Schema::CreateString("IndexName"))
      .PutMember("VectorAttribute", CreateTableRequest_VectorAttributeDefinitionSchemaSerdeSer::BuildSchema())
      .PutMember("SearchSchema", smithy::schema::Schema::ListBuilder("SearchSchema")
                                     .PutMember("member", CreateTableRequest_SearchSchemaElementSchemaSerdeSer::BuildSchema())
                                     .Build())
      .PutMember("Projection", CreateTableRequest_ProjectionSchemaSerdeSer::BuildSchema())
      .PutMember("Dimensions", smithy::schema::Schema::CreateLong("Dimensions"))
      .PutMember("DistanceFunction", smithy::schema::Schema::CreateEnum("DistanceFunction"))
      .Build();
}

void CreateTableRequest_VectorAttributeDefinitionSchemaSerdeSer::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.AttributeNameHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("AttributeName").value();
    serializer.WriteString(memberSchema, m_obj.GetAttributeName());
  }
}

std::shared_ptr<const smithy::schema::Schema> CreateTableRequest_VectorAttributeDefinitionSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("VectorAttributeDefinition")
      .PutMember("AttributeName", smithy::schema::Schema::CreateString("AttributeName"))
      .Build();
}

void CreateTableRequest_SearchSchemaElementSchemaSerdeSer::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
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

std::shared_ptr<const smithy::schema::Schema> CreateTableRequest_SearchSchemaElementSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("SearchSchemaElement")
      .PutMember("AttributeName", smithy::schema::Schema::CreateString("AttributeName"))
      .PutMember("SearchSchemaElementType", smithy::schema::Schema::CreateEnum("SearchSchemaElementType"))
      .Build();
}

void CreateTableRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.AttributeDefinitionsHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("AttributeDefinitions").value();
    serializer.WriteList(memberSchema, m_obj.GetAttributeDefinitions().size(), [&](smithy::schema::ShapeSerializer& listSerializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      for (const auto& item0 : m_obj.GetAttributeDefinitions()) {
        CreateTableRequest_AttributeDefinitionSchemaSerdeSer nested1(item0);
        listSerializer0.WriteStruct(itemSchema0, nested1);
      }
    });
  }
  if (m_obj.TableNameHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("TableName").value();
    serializer.WriteString(memberSchema, m_obj.GetTableName());
  }
  if (m_obj.KeySchemaHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("KeySchema").value();
    serializer.WriteList(memberSchema, m_obj.GetKeySchema().size(), [&](smithy::schema::ShapeSerializer& listSerializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      for (const auto& item0 : m_obj.GetKeySchema()) {
        CreateTableRequest_KeySchemaElementSchemaSerdeSer nested1(item0);
        listSerializer0.WriteStruct(itemSchema0, nested1);
      }
    });
  }
  if (m_obj.LocalSecondaryIndexesHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("LocalSecondaryIndexes").value();
    serializer.WriteList(memberSchema, m_obj.GetLocalSecondaryIndexes().size(), [&](smithy::schema::ShapeSerializer& listSerializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      for (const auto& item0 : m_obj.GetLocalSecondaryIndexes()) {
        CreateTableRequest_LocalSecondaryIndexSchemaSerdeSer nested1(item0);
        listSerializer0.WriteStruct(itemSchema0, nested1);
      }
    });
  }
  if (m_obj.GlobalSecondaryIndexesHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("GlobalSecondaryIndexes").value();
    serializer.WriteList(memberSchema, m_obj.GetGlobalSecondaryIndexes().size(), [&](smithy::schema::ShapeSerializer& listSerializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      for (const auto& item0 : m_obj.GetGlobalSecondaryIndexes()) {
        CreateTableRequest_GlobalSecondaryIndexSchemaSerdeSer nested1(item0);
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
    CreateTableRequest_ProvisionedThroughputSchemaSerdeSer nested0(m_obj.GetProvisionedThroughput());
    serializer.WriteStruct(memberSchema, nested0);
  }
  if (m_obj.StreamSpecificationHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("StreamSpecification").value();
    CreateTableRequest_StreamSpecificationSchemaSerdeSer nested0(m_obj.GetStreamSpecification());
    serializer.WriteStruct(memberSchema, nested0);
  }
  if (m_obj.SSESpecificationHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("SSESpecification").value();
    CreateTableRequest_SSESpecificationSchemaSerdeSer nested0(m_obj.GetSSESpecification());
    serializer.WriteStruct(memberSchema, nested0);
  }
  if (m_obj.TagsHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("Tags").value();
    serializer.WriteList(memberSchema, m_obj.GetTags().size(), [&](smithy::schema::ShapeSerializer& listSerializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      for (const auto& item0 : m_obj.GetTags()) {
        CreateTableRequest_TagSchemaSerdeSer nested1(item0);
        listSerializer0.WriteStruct(itemSchema0, nested1);
      }
    });
  }
  if (m_obj.TableClassHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("TableClass").value();
    serializer.WriteString(memberSchema, TableClassMapper::GetNameForTableClass(m_obj.GetTableClass()));
  }
  if (m_obj.DeletionProtectionEnabledHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("DeletionProtectionEnabled").value();
    serializer.WriteBoolean(memberSchema, m_obj.GetDeletionProtectionEnabled());
  }
  if (m_obj.WarmThroughputHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("WarmThroughput").value();
    CreateTableRequest_WarmThroughputSchemaSerdeSer nested0(m_obj.GetWarmThroughput());
    serializer.WriteStruct(memberSchema, nested0);
  }
  if (m_obj.ResourcePolicyHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ResourcePolicy").value();
    serializer.WriteString(memberSchema, m_obj.GetResourcePolicy());
  }
  if (m_obj.OnDemandThroughputHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("OnDemandThroughput").value();
    CreateTableRequest_OnDemandThroughputSchemaSerdeSer nested0(m_obj.GetOnDemandThroughput());
    serializer.WriteStruct(memberSchema, nested0);
  }
  if (m_obj.GlobalTableSourceArnHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("GlobalTableSourceArn").value();
    serializer.WriteString(memberSchema, m_obj.GetGlobalTableSourceArn());
  }
  if (m_obj.GlobalTableSettingsReplicationModeHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("GlobalTableSettingsReplicationMode").value();
    serializer.WriteString(memberSchema, GlobalTableSettingsReplicationModeMapper::GetNameForGlobalTableSettingsReplicationMode(
                                             m_obj.GetGlobalTableSettingsReplicationMode()));
  }
  if (m_obj.VectorIndexesHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("VectorIndexes").value();
    serializer.WriteList(memberSchema, m_obj.GetVectorIndexes().size(), [&](smithy::schema::ShapeSerializer& listSerializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      for (const auto& item0 : m_obj.GetVectorIndexes()) {
        CreateTableRequest_VectorIndexSchemaSerdeSer nested1(item0);
        listSerializer0.WriteStruct(itemSchema0, nested1);
      }
    });
  }
}

std::shared_ptr<const smithy::schema::Schema> CreateTableRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("CreateTableRequest")
      .PutMember("AttributeDefinitions", smithy::schema::Schema::ListBuilder("AttributeDefinitions")
                                             .PutMember("member", CreateTableRequest_AttributeDefinitionSchemaSerdeSer::BuildSchema())
                                             .Build())
      .PutMember("TableName", smithy::schema::Schema::CreateString("TableName"))
      .PutMember("KeySchema", smithy::schema::Schema::ListBuilder("KeySchema")
                                  .PutMember("member", CreateTableRequest_KeySchemaElementSchemaSerdeSer::BuildSchema())
                                  .Build())
      .PutMember("LocalSecondaryIndexes", smithy::schema::Schema::ListBuilder("LocalSecondaryIndexList")
                                              .PutMember("member", CreateTableRequest_LocalSecondaryIndexSchemaSerdeSer::BuildSchema())
                                              .Build())
      .PutMember("GlobalSecondaryIndexes", smithy::schema::Schema::ListBuilder("GlobalSecondaryIndexList")
                                               .PutMember("member", CreateTableRequest_GlobalSecondaryIndexSchemaSerdeSer::BuildSchema())
                                               .Build())
      .PutMember("BillingMode", smithy::schema::Schema::CreateEnum("BillingMode"))
      .PutMember("ProvisionedThroughput", CreateTableRequest_ProvisionedThroughputSchemaSerdeSer::BuildSchema())
      .PutMember("StreamSpecification", CreateTableRequest_StreamSpecificationSchemaSerdeSer::BuildSchema())
      .PutMember("SSESpecification", CreateTableRequest_SSESpecificationSchemaSerdeSer::BuildSchema())
      .PutMember(
          "Tags",
          smithy::schema::Schema::ListBuilder("TagList").PutMember("member", CreateTableRequest_TagSchemaSerdeSer::BuildSchema()).Build())
      .PutMember("TableClass", smithy::schema::Schema::CreateEnum("TableClass"))
      .PutMember("DeletionProtectionEnabled", smithy::schema::Schema::CreateBoolean("DeletionProtectionEnabled"))
      .PutMember("WarmThroughput", CreateTableRequest_WarmThroughputSchemaSerdeSer::BuildSchema())
      .PutMember("ResourcePolicy", smithy::schema::Schema::CreateString("ResourcePolicy"))
      .PutMember("OnDemandThroughput", CreateTableRequest_OnDemandThroughputSchemaSerdeSer::BuildSchema())
      .PutMember("GlobalTableSourceArn", smithy::schema::Schema::CreateString("GlobalTableSourceArn"))
      .PutMember("GlobalTableSettingsReplicationMode", smithy::schema::Schema::CreateEnum("GlobalTableSettingsReplicationMode"))
      .PutMember("VectorIndexes", smithy::schema::Schema::ListBuilder("VectorIndexList")
                                      .PutMember("member", CreateTableRequest_VectorIndexSchemaSerdeSer::BuildSchema())
                                      .Build())
      .Build();
}

}  // namespace
}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws

Aws::UniquePtr<smithy::schema::SerializableStruct> CreateTableRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<CreateTableRequestSerializable>("CreateTableRequestSerializable", *this);
}

Aws::String CreateTableRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext CreateTableRequest::GetSchemaSerdeContext() const { return {"CreateTable", "2012-08-10"}; }

Aws::Http::HeaderValueCollection CreateTableRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DynamoDB_20120810.CreateTable"));
  return headers;
}

CreateTableRequest::EndpointParameters CreateTableRequest::GetEndpointContextParams() const {
  EndpointParameters parameters;
  // Operation context parameters
  if (TableNameHasBeenSet()) {
    parameters.emplace_back(Aws::String("ResourceArn"), this->GetTableName(),
                            Aws::Endpoint::EndpointParameter::ParameterOrigin::OPERATION_CONTEXT);
  }
  return parameters;
}
