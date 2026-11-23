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
#include <aws/dynamodb/model/UpdateTableRequest.h>
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
class UpdateTableRequest_AttributeDefinitionSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit UpdateTableRequest_AttributeDefinitionSchemaSerdeSer(const AttributeDefinition& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const AttributeDefinition& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class UpdateTableRequest_ProvisionedThroughputSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit UpdateTableRequest_ProvisionedThroughputSchemaSerdeSer(const ProvisionedThroughput& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const ProvisionedThroughput& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class UpdateTableRequest_GlobalSecondaryIndexUpdateSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit UpdateTableRequest_GlobalSecondaryIndexUpdateSchemaSerdeSer(const GlobalSecondaryIndexUpdate& obj)
      : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const GlobalSecondaryIndexUpdate& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class UpdateTableRequest_UpdateGlobalSecondaryIndexActionSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit UpdateTableRequest_UpdateGlobalSecondaryIndexActionSchemaSerdeSer(const UpdateGlobalSecondaryIndexAction& obj)
      : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const UpdateGlobalSecondaryIndexAction& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class UpdateTableRequest_OnDemandThroughputSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit UpdateTableRequest_OnDemandThroughputSchemaSerdeSer(const OnDemandThroughput& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const OnDemandThroughput& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class UpdateTableRequest_WarmThroughputSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit UpdateTableRequest_WarmThroughputSchemaSerdeSer(const WarmThroughput& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const WarmThroughput& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class UpdateTableRequest_CreateGlobalSecondaryIndexActionSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit UpdateTableRequest_CreateGlobalSecondaryIndexActionSchemaSerdeSer(const CreateGlobalSecondaryIndexAction& obj)
      : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const CreateGlobalSecondaryIndexAction& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class UpdateTableRequest_KeySchemaElementSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit UpdateTableRequest_KeySchemaElementSchemaSerdeSer(const KeySchemaElement& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const KeySchemaElement& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class UpdateTableRequest_ProjectionSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit UpdateTableRequest_ProjectionSchemaSerdeSer(const Projection& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const Projection& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class UpdateTableRequest_DeleteGlobalSecondaryIndexActionSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit UpdateTableRequest_DeleteGlobalSecondaryIndexActionSchemaSerdeSer(const DeleteGlobalSecondaryIndexAction& obj)
      : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const DeleteGlobalSecondaryIndexAction& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class UpdateTableRequest_StreamSpecificationSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit UpdateTableRequest_StreamSpecificationSchemaSerdeSer(const StreamSpecification& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const StreamSpecification& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class UpdateTableRequest_SSESpecificationSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit UpdateTableRequest_SSESpecificationSchemaSerdeSer(const SSESpecification& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const SSESpecification& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class UpdateTableRequest_ReplicationGroupUpdateSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit UpdateTableRequest_ReplicationGroupUpdateSchemaSerdeSer(const ReplicationGroupUpdate& obj)
      : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const ReplicationGroupUpdate& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class UpdateTableRequest_CreateReplicationGroupMemberActionSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit UpdateTableRequest_CreateReplicationGroupMemberActionSchemaSerdeSer(const CreateReplicationGroupMemberAction& obj)
      : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const CreateReplicationGroupMemberAction& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class UpdateTableRequest_ProvisionedThroughputOverrideSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit UpdateTableRequest_ProvisionedThroughputOverrideSchemaSerdeSer(const ProvisionedThroughputOverride& obj)
      : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const ProvisionedThroughputOverride& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class UpdateTableRequest_OnDemandThroughputOverrideSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit UpdateTableRequest_OnDemandThroughputOverrideSchemaSerdeSer(const OnDemandThroughputOverride& obj)
      : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const OnDemandThroughputOverride& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class UpdateTableRequest_ReplicaGlobalSecondaryIndexSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit UpdateTableRequest_ReplicaGlobalSecondaryIndexSchemaSerdeSer(const ReplicaGlobalSecondaryIndex& obj)
      : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const ReplicaGlobalSecondaryIndex& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class UpdateTableRequest_UpdateReplicationGroupMemberActionSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit UpdateTableRequest_UpdateReplicationGroupMemberActionSchemaSerdeSer(const UpdateReplicationGroupMemberAction& obj)
      : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const UpdateReplicationGroupMemberAction& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class UpdateTableRequest_DeleteReplicationGroupMemberActionSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit UpdateTableRequest_DeleteReplicationGroupMemberActionSchemaSerdeSer(const DeleteReplicationGroupMemberAction& obj)
      : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const DeleteReplicationGroupMemberAction& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class UpdateTableRequest_DisassociateReplicationGroupMemberActionSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit UpdateTableRequest_DisassociateReplicationGroupMemberActionSchemaSerdeSer(const DisassociateReplicationGroupMemberAction& obj)
      : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const DisassociateReplicationGroupMemberAction& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class UpdateTableRequest_GlobalTableWitnessGroupUpdateSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit UpdateTableRequest_GlobalTableWitnessGroupUpdateSchemaSerdeSer(const GlobalTableWitnessGroupUpdate& obj)
      : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const GlobalTableWitnessGroupUpdate& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class UpdateTableRequest_CreateGlobalTableWitnessGroupMemberActionSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit UpdateTableRequest_CreateGlobalTableWitnessGroupMemberActionSchemaSerdeSer(const CreateGlobalTableWitnessGroupMemberAction& obj)
      : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const CreateGlobalTableWitnessGroupMemberAction& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class UpdateTableRequest_DeleteGlobalTableWitnessGroupMemberActionSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit UpdateTableRequest_DeleteGlobalTableWitnessGroupMemberActionSchemaSerdeSer(const DeleteGlobalTableWitnessGroupMemberAction& obj)
      : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const DeleteGlobalTableWitnessGroupMemberAction& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class UpdateTableRequest_VectorIndexUpdateSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit UpdateTableRequest_VectorIndexUpdateSchemaSerdeSer(const VectorIndexUpdate& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const VectorIndexUpdate& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class UpdateTableRequest_CreateVectorIndexActionSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit UpdateTableRequest_CreateVectorIndexActionSchemaSerdeSer(const CreateVectorIndexAction& obj)
      : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const CreateVectorIndexAction& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class UpdateTableRequest_VectorAttributeDefinitionSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit UpdateTableRequest_VectorAttributeDefinitionSchemaSerdeSer(const VectorAttributeDefinition& obj)
      : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const VectorAttributeDefinition& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class UpdateTableRequest_SearchSchemaElementSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit UpdateTableRequest_SearchSchemaElementSchemaSerdeSer(const SearchSchemaElement& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const SearchSchemaElement& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class UpdateTableRequest_DeleteVectorIndexActionSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit UpdateTableRequest_DeleteVectorIndexActionSchemaSerdeSer(const DeleteVectorIndexAction& obj)
      : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const DeleteVectorIndexAction& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class UpdateTableRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit UpdateTableRequestSerializable(const UpdateTableRequest& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const UpdateTableRequest& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void UpdateTableRequest_AttributeDefinitionSchemaSerdeSer::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.AttributeNameHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("AttributeName").value();
    serializer.WriteString(memberSchema, m_obj.GetAttributeName());
  }
  if (m_obj.AttributeTypeHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("AttributeType").value();
    serializer.WriteString(memberSchema, ScalarAttributeTypeMapper::GetNameForScalarAttributeType(m_obj.GetAttributeType()));
  }
}

std::shared_ptr<const smithy::schema::Schema> UpdateTableRequest_AttributeDefinitionSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("AttributeDefinition")
      .PutMember("AttributeName", smithy::schema::Schema::CreateString("AttributeName"))
      .PutMember("AttributeType", smithy::schema::Schema::CreateEnum("AttributeType"))
      .Build();
}

void UpdateTableRequest_ProvisionedThroughputSchemaSerdeSer::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.ReadCapacityUnitsHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ReadCapacityUnits").value();
    serializer.WriteLong(memberSchema, m_obj.GetReadCapacityUnits());
  }
  if (m_obj.WriteCapacityUnitsHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("WriteCapacityUnits").value();
    serializer.WriteLong(memberSchema, m_obj.GetWriteCapacityUnits());
  }
}

std::shared_ptr<const smithy::schema::Schema> UpdateTableRequest_ProvisionedThroughputSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("ProvisionedThroughput")
      .PutMember("ReadCapacityUnits", smithy::schema::Schema::CreateLong("ReadCapacityUnits"))
      .PutMember("WriteCapacityUnits", smithy::schema::Schema::CreateLong("WriteCapacityUnits"))
      .Build();
}

void UpdateTableRequest_GlobalSecondaryIndexUpdateSchemaSerdeSer::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.UpdateHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("Update").value();
    UpdateTableRequest_UpdateGlobalSecondaryIndexActionSchemaSerdeSer nested0(m_obj.GetUpdate());
    serializer.WriteStruct(memberSchema, nested0);
  }
  if (m_obj.CreateHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("Create").value();
    UpdateTableRequest_CreateGlobalSecondaryIndexActionSchemaSerdeSer nested0(m_obj.GetCreate());
    serializer.WriteStruct(memberSchema, nested0);
  }
  if (m_obj.DeleteHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("Delete").value();
    UpdateTableRequest_DeleteGlobalSecondaryIndexActionSchemaSerdeSer nested0(m_obj.GetDelete());
    serializer.WriteStruct(memberSchema, nested0);
  }
}

std::shared_ptr<const smithy::schema::Schema> UpdateTableRequest_GlobalSecondaryIndexUpdateSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("GlobalSecondaryIndexUpdate")
      .PutMember("Update", UpdateTableRequest_UpdateGlobalSecondaryIndexActionSchemaSerdeSer::BuildSchema())
      .PutMember("Create", UpdateTableRequest_CreateGlobalSecondaryIndexActionSchemaSerdeSer::BuildSchema())
      .PutMember("Delete", UpdateTableRequest_DeleteGlobalSecondaryIndexActionSchemaSerdeSer::BuildSchema())
      .Build();
}

void UpdateTableRequest_UpdateGlobalSecondaryIndexActionSchemaSerdeSer::SerializeMembers(
    smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.IndexNameHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("IndexName").value();
    serializer.WriteString(memberSchema, m_obj.GetIndexName());
  }
  if (m_obj.ProvisionedThroughputHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ProvisionedThroughput").value();
    UpdateTableRequest_ProvisionedThroughputSchemaSerdeSer nested0(m_obj.GetProvisionedThroughput());
    serializer.WriteStruct(memberSchema, nested0);
  }
  if (m_obj.OnDemandThroughputHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("OnDemandThroughput").value();
    UpdateTableRequest_OnDemandThroughputSchemaSerdeSer nested0(m_obj.GetOnDemandThroughput());
    serializer.WriteStruct(memberSchema, nested0);
  }
  if (m_obj.WarmThroughputHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("WarmThroughput").value();
    UpdateTableRequest_WarmThroughputSchemaSerdeSer nested0(m_obj.GetWarmThroughput());
    serializer.WriteStruct(memberSchema, nested0);
  }
}

std::shared_ptr<const smithy::schema::Schema> UpdateTableRequest_UpdateGlobalSecondaryIndexActionSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("UpdateGlobalSecondaryIndexAction")
      .PutMember("IndexName", smithy::schema::Schema::CreateString("IndexName"))
      .PutMember("ProvisionedThroughput", UpdateTableRequest_ProvisionedThroughputSchemaSerdeSer::BuildSchema())
      .PutMember("OnDemandThroughput", UpdateTableRequest_OnDemandThroughputSchemaSerdeSer::BuildSchema())
      .PutMember("WarmThroughput", UpdateTableRequest_WarmThroughputSchemaSerdeSer::BuildSchema())
      .Build();
}

void UpdateTableRequest_OnDemandThroughputSchemaSerdeSer::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.MaxReadRequestUnitsHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("MaxReadRequestUnits").value();
    serializer.WriteLong(memberSchema, m_obj.GetMaxReadRequestUnits());
  }
  if (m_obj.MaxWriteRequestUnitsHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("MaxWriteRequestUnits").value();
    serializer.WriteLong(memberSchema, m_obj.GetMaxWriteRequestUnits());
  }
}

std::shared_ptr<const smithy::schema::Schema> UpdateTableRequest_OnDemandThroughputSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("OnDemandThroughput")
      .PutMember("MaxReadRequestUnits", smithy::schema::Schema::CreateLong("MaxReadRequestUnits"))
      .PutMember("MaxWriteRequestUnits", smithy::schema::Schema::CreateLong("MaxWriteRequestUnits"))
      .Build();
}

void UpdateTableRequest_WarmThroughputSchemaSerdeSer::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.ReadUnitsPerSecondHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ReadUnitsPerSecond").value();
    serializer.WriteLong(memberSchema, m_obj.GetReadUnitsPerSecond());
  }
  if (m_obj.WriteUnitsPerSecondHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("WriteUnitsPerSecond").value();
    serializer.WriteLong(memberSchema, m_obj.GetWriteUnitsPerSecond());
  }
}

std::shared_ptr<const smithy::schema::Schema> UpdateTableRequest_WarmThroughputSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("WarmThroughput")
      .PutMember("ReadUnitsPerSecond", smithy::schema::Schema::CreateLong("ReadUnitsPerSecond"))
      .PutMember("WriteUnitsPerSecond", smithy::schema::Schema::CreateLong("WriteUnitsPerSecond"))
      .Build();
}

void UpdateTableRequest_CreateGlobalSecondaryIndexActionSchemaSerdeSer::SerializeMembers(
    smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.IndexNameHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("IndexName").value();
    serializer.WriteString(memberSchema, m_obj.GetIndexName());
  }
  if (m_obj.KeySchemaHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("KeySchema").value();
    serializer.WriteList(memberSchema, m_obj.GetKeySchema().size(), [&](smithy::schema::ShapeSerializer& listSerializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      for (const auto& item0 : m_obj.GetKeySchema()) {
        UpdateTableRequest_KeySchemaElementSchemaSerdeSer nested1(item0);
        listSerializer0.WriteStruct(itemSchema0, nested1);
      }
    });
  }
  if (m_obj.ProjectionHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("Projection").value();
    UpdateTableRequest_ProjectionSchemaSerdeSer nested0(m_obj.GetProjection());
    serializer.WriteStruct(memberSchema, nested0);
  }
  if (m_obj.ProvisionedThroughputHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ProvisionedThroughput").value();
    UpdateTableRequest_ProvisionedThroughputSchemaSerdeSer nested0(m_obj.GetProvisionedThroughput());
    serializer.WriteStruct(memberSchema, nested0);
  }
  if (m_obj.OnDemandThroughputHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("OnDemandThroughput").value();
    UpdateTableRequest_OnDemandThroughputSchemaSerdeSer nested0(m_obj.GetOnDemandThroughput());
    serializer.WriteStruct(memberSchema, nested0);
  }
  if (m_obj.WarmThroughputHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("WarmThroughput").value();
    UpdateTableRequest_WarmThroughputSchemaSerdeSer nested0(m_obj.GetWarmThroughput());
    serializer.WriteStruct(memberSchema, nested0);
  }
}

std::shared_ptr<const smithy::schema::Schema> UpdateTableRequest_CreateGlobalSecondaryIndexActionSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("CreateGlobalSecondaryIndexAction")
      .PutMember("IndexName", smithy::schema::Schema::CreateString("IndexName"))
      .PutMember("KeySchema", smithy::schema::Schema::ListBuilder("KeySchema")
                                  .PutMember("member", UpdateTableRequest_KeySchemaElementSchemaSerdeSer::BuildSchema())
                                  .Build())
      .PutMember("Projection", UpdateTableRequest_ProjectionSchemaSerdeSer::BuildSchema())
      .PutMember("ProvisionedThroughput", UpdateTableRequest_ProvisionedThroughputSchemaSerdeSer::BuildSchema())
      .PutMember("OnDemandThroughput", UpdateTableRequest_OnDemandThroughputSchemaSerdeSer::BuildSchema())
      .PutMember("WarmThroughput", UpdateTableRequest_WarmThroughputSchemaSerdeSer::BuildSchema())
      .Build();
}

void UpdateTableRequest_KeySchemaElementSchemaSerdeSer::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.AttributeNameHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("AttributeName").value();
    serializer.WriteString(memberSchema, m_obj.GetAttributeName());
  }
  if (m_obj.KeyTypeHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("KeyType").value();
    serializer.WriteString(memberSchema, KeyTypeMapper::GetNameForKeyType(m_obj.GetKeyType()));
  }
}

std::shared_ptr<const smithy::schema::Schema> UpdateTableRequest_KeySchemaElementSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("KeySchemaElement")
      .PutMember("AttributeName", smithy::schema::Schema::CreateString("AttributeName"))
      .PutMember("KeyType", smithy::schema::Schema::CreateEnum("KeyType"))
      .Build();
}

void UpdateTableRequest_ProjectionSchemaSerdeSer::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
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

std::shared_ptr<const smithy::schema::Schema> UpdateTableRequest_ProjectionSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("Projection")
      .PutMember("ProjectionType", smithy::schema::Schema::CreateEnum("ProjectionType"))
      .PutMember("NonKeyAttributes", smithy::schema::Schema::ListBuilder("NonKeyAttributeNameList")
                                         .PutMember("member", smithy::schema::Schema::CreateString("member"))
                                         .Build())
      .Build();
}

void UpdateTableRequest_DeleteGlobalSecondaryIndexActionSchemaSerdeSer::SerializeMembers(
    smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.IndexNameHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("IndexName").value();
    serializer.WriteString(memberSchema, m_obj.GetIndexName());
  }
}

std::shared_ptr<const smithy::schema::Schema> UpdateTableRequest_DeleteGlobalSecondaryIndexActionSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("DeleteGlobalSecondaryIndexAction")
      .PutMember("IndexName", smithy::schema::Schema::CreateString("IndexName"))
      .Build();
}

void UpdateTableRequest_StreamSpecificationSchemaSerdeSer::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.StreamEnabledHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("StreamEnabled").value();
    serializer.WriteBoolean(memberSchema, m_obj.GetStreamEnabled());
  }
  if (m_obj.StreamViewTypeHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("StreamViewType").value();
    serializer.WriteString(memberSchema, StreamViewTypeMapper::GetNameForStreamViewType(m_obj.GetStreamViewType()));
  }
}

std::shared_ptr<const smithy::schema::Schema> UpdateTableRequest_StreamSpecificationSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("StreamSpecification")
      .PutMember("StreamEnabled", smithy::schema::Schema::CreateBoolean("StreamEnabled"))
      .PutMember("StreamViewType", smithy::schema::Schema::CreateEnum("StreamViewType"))
      .Build();
}

void UpdateTableRequest_SSESpecificationSchemaSerdeSer::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
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

std::shared_ptr<const smithy::schema::Schema> UpdateTableRequest_SSESpecificationSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("SSESpecification")
      .PutMember("Enabled", smithy::schema::Schema::CreateBoolean("Enabled"))
      .PutMember("SSEType", smithy::schema::Schema::CreateEnum("SSEType"))
      .PutMember("KMSMasterKeyId", smithy::schema::Schema::CreateString("KMSMasterKeyId"))
      .Build();
}

void UpdateTableRequest_ReplicationGroupUpdateSchemaSerdeSer::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.CreateHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("Create").value();
    UpdateTableRequest_CreateReplicationGroupMemberActionSchemaSerdeSer nested0(m_obj.GetCreate());
    serializer.WriteStruct(memberSchema, nested0);
  }
  if (m_obj.UpdateHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("Update").value();
    UpdateTableRequest_UpdateReplicationGroupMemberActionSchemaSerdeSer nested0(m_obj.GetUpdate());
    serializer.WriteStruct(memberSchema, nested0);
  }
  if (m_obj.DeleteHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("Delete").value();
    UpdateTableRequest_DeleteReplicationGroupMemberActionSchemaSerdeSer nested0(m_obj.GetDelete());
    serializer.WriteStruct(memberSchema, nested0);
  }
  if (m_obj.DisassociateHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("Disassociate").value();
    UpdateTableRequest_DisassociateReplicationGroupMemberActionSchemaSerdeSer nested0(m_obj.GetDisassociate());
    serializer.WriteStruct(memberSchema, nested0);
  }
}

std::shared_ptr<const smithy::schema::Schema> UpdateTableRequest_ReplicationGroupUpdateSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("ReplicationGroupUpdate")
      .PutMember("Create", UpdateTableRequest_CreateReplicationGroupMemberActionSchemaSerdeSer::BuildSchema())
      .PutMember("Update", UpdateTableRequest_UpdateReplicationGroupMemberActionSchemaSerdeSer::BuildSchema())
      .PutMember("Delete", UpdateTableRequest_DeleteReplicationGroupMemberActionSchemaSerdeSer::BuildSchema())
      .PutMember("Disassociate", UpdateTableRequest_DisassociateReplicationGroupMemberActionSchemaSerdeSer::BuildSchema())
      .Build();
}

void UpdateTableRequest_CreateReplicationGroupMemberActionSchemaSerdeSer::SerializeMembers(
    smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.RegionNameHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("RegionName").value();
    serializer.WriteString(memberSchema, m_obj.GetRegionName());
  }
  if (m_obj.KMSMasterKeyIdHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("KMSMasterKeyId").value();
    serializer.WriteString(memberSchema, m_obj.GetKMSMasterKeyId());
  }
  if (m_obj.ProvisionedThroughputOverrideHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ProvisionedThroughputOverride").value();
    UpdateTableRequest_ProvisionedThroughputOverrideSchemaSerdeSer nested0(m_obj.GetProvisionedThroughputOverride());
    serializer.WriteStruct(memberSchema, nested0);
  }
  if (m_obj.OnDemandThroughputOverrideHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("OnDemandThroughputOverride").value();
    UpdateTableRequest_OnDemandThroughputOverrideSchemaSerdeSer nested0(m_obj.GetOnDemandThroughputOverride());
    serializer.WriteStruct(memberSchema, nested0);
  }
  if (m_obj.GlobalSecondaryIndexesHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("GlobalSecondaryIndexes").value();
    serializer.WriteList(memberSchema, m_obj.GetGlobalSecondaryIndexes().size(), [&](smithy::schema::ShapeSerializer& listSerializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      for (const auto& item0 : m_obj.GetGlobalSecondaryIndexes()) {
        UpdateTableRequest_ReplicaGlobalSecondaryIndexSchemaSerdeSer nested1(item0);
        listSerializer0.WriteStruct(itemSchema0, nested1);
      }
    });
  }
  if (m_obj.TableClassOverrideHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("TableClassOverride").value();
    serializer.WriteString(memberSchema, TableClassMapper::GetNameForTableClass(m_obj.GetTableClassOverride()));
  }
}

std::shared_ptr<const smithy::schema::Schema> UpdateTableRequest_CreateReplicationGroupMemberActionSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("CreateReplicationGroupMemberAction")
      .PutMember("RegionName", smithy::schema::Schema::CreateString("RegionName"))
      .PutMember("KMSMasterKeyId", smithy::schema::Schema::CreateString("KMSMasterKeyId"))
      .PutMember("ProvisionedThroughputOverride", UpdateTableRequest_ProvisionedThroughputOverrideSchemaSerdeSer::BuildSchema())
      .PutMember("OnDemandThroughputOverride", UpdateTableRequest_OnDemandThroughputOverrideSchemaSerdeSer::BuildSchema())
      .PutMember("GlobalSecondaryIndexes",
                 smithy::schema::Schema::ListBuilder("ReplicaGlobalSecondaryIndexList")
                     .PutMember("member", UpdateTableRequest_ReplicaGlobalSecondaryIndexSchemaSerdeSer::BuildSchema())
                     .Build())
      .PutMember("TableClassOverride", smithy::schema::Schema::CreateEnum("TableClassOverride"))
      .Build();
}

void UpdateTableRequest_ProvisionedThroughputOverrideSchemaSerdeSer::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.ReadCapacityUnitsHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ReadCapacityUnits").value();
    serializer.WriteLong(memberSchema, m_obj.GetReadCapacityUnits());
  }
}

std::shared_ptr<const smithy::schema::Schema> UpdateTableRequest_ProvisionedThroughputOverrideSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("ProvisionedThroughputOverride")
      .PutMember("ReadCapacityUnits", smithy::schema::Schema::CreateLong("ReadCapacityUnits"))
      .Build();
}

void UpdateTableRequest_OnDemandThroughputOverrideSchemaSerdeSer::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.MaxReadRequestUnitsHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("MaxReadRequestUnits").value();
    serializer.WriteLong(memberSchema, m_obj.GetMaxReadRequestUnits());
  }
}

std::shared_ptr<const smithy::schema::Schema> UpdateTableRequest_OnDemandThroughputOverrideSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("OnDemandThroughputOverride")
      .PutMember("MaxReadRequestUnits", smithy::schema::Schema::CreateLong("MaxReadRequestUnits"))
      .Build();
}

void UpdateTableRequest_ReplicaGlobalSecondaryIndexSchemaSerdeSer::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.IndexNameHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("IndexName").value();
    serializer.WriteString(memberSchema, m_obj.GetIndexName());
  }
  if (m_obj.ProvisionedThroughputOverrideHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ProvisionedThroughputOverride").value();
    UpdateTableRequest_ProvisionedThroughputOverrideSchemaSerdeSer nested0(m_obj.GetProvisionedThroughputOverride());
    serializer.WriteStruct(memberSchema, nested0);
  }
  if (m_obj.OnDemandThroughputOverrideHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("OnDemandThroughputOverride").value();
    UpdateTableRequest_OnDemandThroughputOverrideSchemaSerdeSer nested0(m_obj.GetOnDemandThroughputOverride());
    serializer.WriteStruct(memberSchema, nested0);
  }
}

std::shared_ptr<const smithy::schema::Schema> UpdateTableRequest_ReplicaGlobalSecondaryIndexSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("ReplicaGlobalSecondaryIndex")
      .PutMember("IndexName", smithy::schema::Schema::CreateString("IndexName"))
      .PutMember("ProvisionedThroughputOverride", UpdateTableRequest_ProvisionedThroughputOverrideSchemaSerdeSer::BuildSchema())
      .PutMember("OnDemandThroughputOverride", UpdateTableRequest_OnDemandThroughputOverrideSchemaSerdeSer::BuildSchema())
      .Build();
}

void UpdateTableRequest_UpdateReplicationGroupMemberActionSchemaSerdeSer::SerializeMembers(
    smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.RegionNameHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("RegionName").value();
    serializer.WriteString(memberSchema, m_obj.GetRegionName());
  }
  if (m_obj.KMSMasterKeyIdHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("KMSMasterKeyId").value();
    serializer.WriteString(memberSchema, m_obj.GetKMSMasterKeyId());
  }
  if (m_obj.ProvisionedThroughputOverrideHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ProvisionedThroughputOverride").value();
    UpdateTableRequest_ProvisionedThroughputOverrideSchemaSerdeSer nested0(m_obj.GetProvisionedThroughputOverride());
    serializer.WriteStruct(memberSchema, nested0);
  }
  if (m_obj.OnDemandThroughputOverrideHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("OnDemandThroughputOverride").value();
    UpdateTableRequest_OnDemandThroughputOverrideSchemaSerdeSer nested0(m_obj.GetOnDemandThroughputOverride());
    serializer.WriteStruct(memberSchema, nested0);
  }
  if (m_obj.GlobalSecondaryIndexesHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("GlobalSecondaryIndexes").value();
    serializer.WriteList(memberSchema, m_obj.GetGlobalSecondaryIndexes().size(), [&](smithy::schema::ShapeSerializer& listSerializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      for (const auto& item0 : m_obj.GetGlobalSecondaryIndexes()) {
        UpdateTableRequest_ReplicaGlobalSecondaryIndexSchemaSerdeSer nested1(item0);
        listSerializer0.WriteStruct(itemSchema0, nested1);
      }
    });
  }
  if (m_obj.TableClassOverrideHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("TableClassOverride").value();
    serializer.WriteString(memberSchema, TableClassMapper::GetNameForTableClass(m_obj.GetTableClassOverride()));
  }
}

std::shared_ptr<const smithy::schema::Schema> UpdateTableRequest_UpdateReplicationGroupMemberActionSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("UpdateReplicationGroupMemberAction")
      .PutMember("RegionName", smithy::schema::Schema::CreateString("RegionName"))
      .PutMember("KMSMasterKeyId", smithy::schema::Schema::CreateString("KMSMasterKeyId"))
      .PutMember("ProvisionedThroughputOverride", UpdateTableRequest_ProvisionedThroughputOverrideSchemaSerdeSer::BuildSchema())
      .PutMember("OnDemandThroughputOverride", UpdateTableRequest_OnDemandThroughputOverrideSchemaSerdeSer::BuildSchema())
      .PutMember("GlobalSecondaryIndexes",
                 smithy::schema::Schema::ListBuilder("ReplicaGlobalSecondaryIndexList")
                     .PutMember("member", UpdateTableRequest_ReplicaGlobalSecondaryIndexSchemaSerdeSer::BuildSchema())
                     .Build())
      .PutMember("TableClassOverride", smithy::schema::Schema::CreateEnum("TableClassOverride"))
      .Build();
}

void UpdateTableRequest_DeleteReplicationGroupMemberActionSchemaSerdeSer::SerializeMembers(
    smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.RegionNameHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("RegionName").value();
    serializer.WriteString(memberSchema, m_obj.GetRegionName());
  }
}

std::shared_ptr<const smithy::schema::Schema> UpdateTableRequest_DeleteReplicationGroupMemberActionSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("DeleteReplicationGroupMemberAction")
      .PutMember("RegionName", smithy::schema::Schema::CreateString("RegionName"))
      .Build();
}

void UpdateTableRequest_DisassociateReplicationGroupMemberActionSchemaSerdeSer::SerializeMembers(
    smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.RegionNameHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("RegionName").value();
    serializer.WriteString(memberSchema, m_obj.GetRegionName());
  }
  if (m_obj.DisassociationModeHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("DisassociationMode").value();
    serializer.WriteString(memberSchema, DisassociationModeMapper::GetNameForDisassociationMode(m_obj.GetDisassociationMode()));
  }
}

std::shared_ptr<const smithy::schema::Schema> UpdateTableRequest_DisassociateReplicationGroupMemberActionSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("DisassociateReplicationGroupMemberAction")
      .PutMember("RegionName", smithy::schema::Schema::CreateString("RegionName"))
      .PutMember("DisassociationMode", smithy::schema::Schema::CreateEnum("DisassociationMode"))
      .Build();
}

void UpdateTableRequest_GlobalTableWitnessGroupUpdateSchemaSerdeSer::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.CreateHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("Create").value();
    UpdateTableRequest_CreateGlobalTableWitnessGroupMemberActionSchemaSerdeSer nested0(m_obj.GetCreate());
    serializer.WriteStruct(memberSchema, nested0);
  }
  if (m_obj.DeleteHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("Delete").value();
    UpdateTableRequest_DeleteGlobalTableWitnessGroupMemberActionSchemaSerdeSer nested0(m_obj.GetDelete());
    serializer.WriteStruct(memberSchema, nested0);
  }
}

std::shared_ptr<const smithy::schema::Schema> UpdateTableRequest_GlobalTableWitnessGroupUpdateSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("GlobalTableWitnessGroupUpdate")
      .PutMember("Create", UpdateTableRequest_CreateGlobalTableWitnessGroupMemberActionSchemaSerdeSer::BuildSchema())
      .PutMember("Delete", UpdateTableRequest_DeleteGlobalTableWitnessGroupMemberActionSchemaSerdeSer::BuildSchema())
      .Build();
}

void UpdateTableRequest_CreateGlobalTableWitnessGroupMemberActionSchemaSerdeSer::SerializeMembers(
    smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.RegionNameHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("RegionName").value();
    serializer.WriteString(memberSchema, m_obj.GetRegionName());
  }
}

std::shared_ptr<const smithy::schema::Schema> UpdateTableRequest_CreateGlobalTableWitnessGroupMemberActionSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("CreateGlobalTableWitnessGroupMemberAction")
      .PutMember("RegionName", smithy::schema::Schema::CreateString("RegionName"))
      .Build();
}

void UpdateTableRequest_DeleteGlobalTableWitnessGroupMemberActionSchemaSerdeSer::SerializeMembers(
    smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.RegionNameHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("RegionName").value();
    serializer.WriteString(memberSchema, m_obj.GetRegionName());
  }
}

std::shared_ptr<const smithy::schema::Schema> UpdateTableRequest_DeleteGlobalTableWitnessGroupMemberActionSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("DeleteGlobalTableWitnessGroupMemberAction")
      .PutMember("RegionName", smithy::schema::Schema::CreateString("RegionName"))
      .Build();
}

void UpdateTableRequest_VectorIndexUpdateSchemaSerdeSer::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.CreateHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("Create").value();
    UpdateTableRequest_CreateVectorIndexActionSchemaSerdeSer nested0(m_obj.GetCreate());
    serializer.WriteStruct(memberSchema, nested0);
  }
  if (m_obj.DeleteHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("Delete").value();
    UpdateTableRequest_DeleteVectorIndexActionSchemaSerdeSer nested0(m_obj.GetDelete());
    serializer.WriteStruct(memberSchema, nested0);
  }
}

std::shared_ptr<const smithy::schema::Schema> UpdateTableRequest_VectorIndexUpdateSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("VectorIndexUpdate")
      .PutMember("Create", UpdateTableRequest_CreateVectorIndexActionSchemaSerdeSer::BuildSchema())
      .PutMember("Delete", UpdateTableRequest_DeleteVectorIndexActionSchemaSerdeSer::BuildSchema())
      .Build();
}

void UpdateTableRequest_CreateVectorIndexActionSchemaSerdeSer::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.IndexNameHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("IndexName").value();
    serializer.WriteString(memberSchema, m_obj.GetIndexName());
  }
  if (m_obj.VectorAttributeHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("VectorAttribute").value();
    UpdateTableRequest_VectorAttributeDefinitionSchemaSerdeSer nested0(m_obj.GetVectorAttribute());
    serializer.WriteStruct(memberSchema, nested0);
  }
  if (m_obj.SearchSchemaHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("SearchSchema").value();
    serializer.WriteList(memberSchema, m_obj.GetSearchSchema().size(), [&](smithy::schema::ShapeSerializer& listSerializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      for (const auto& item0 : m_obj.GetSearchSchema()) {
        UpdateTableRequest_SearchSchemaElementSchemaSerdeSer nested1(item0);
        listSerializer0.WriteStruct(itemSchema0, nested1);
      }
    });
  }
  if (m_obj.ProjectionHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("Projection").value();
    UpdateTableRequest_ProjectionSchemaSerdeSer nested0(m_obj.GetProjection());
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

std::shared_ptr<const smithy::schema::Schema> UpdateTableRequest_CreateVectorIndexActionSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("CreateVectorIndexAction")
      .PutMember("IndexName", smithy::schema::Schema::CreateString("IndexName"))
      .PutMember("VectorAttribute", UpdateTableRequest_VectorAttributeDefinitionSchemaSerdeSer::BuildSchema())
      .PutMember("SearchSchema", smithy::schema::Schema::ListBuilder("SearchSchema")
                                     .PutMember("member", UpdateTableRequest_SearchSchemaElementSchemaSerdeSer::BuildSchema())
                                     .Build())
      .PutMember("Projection", UpdateTableRequest_ProjectionSchemaSerdeSer::BuildSchema())
      .PutMember("Dimensions", smithy::schema::Schema::CreateLong("Dimensions"))
      .PutMember("DistanceFunction", smithy::schema::Schema::CreateEnum("DistanceFunction"))
      .Build();
}

void UpdateTableRequest_VectorAttributeDefinitionSchemaSerdeSer::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.AttributeNameHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("AttributeName").value();
    serializer.WriteString(memberSchema, m_obj.GetAttributeName());
  }
}

std::shared_ptr<const smithy::schema::Schema> UpdateTableRequest_VectorAttributeDefinitionSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("VectorAttributeDefinition")
      .PutMember("AttributeName", smithy::schema::Schema::CreateString("AttributeName"))
      .Build();
}

void UpdateTableRequest_SearchSchemaElementSchemaSerdeSer::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
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

std::shared_ptr<const smithy::schema::Schema> UpdateTableRequest_SearchSchemaElementSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("SearchSchemaElement")
      .PutMember("AttributeName", smithy::schema::Schema::CreateString("AttributeName"))
      .PutMember("SearchSchemaElementType", smithy::schema::Schema::CreateEnum("SearchSchemaElementType"))
      .Build();
}

void UpdateTableRequest_DeleteVectorIndexActionSchemaSerdeSer::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.IndexNameHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("IndexName").value();
    serializer.WriteString(memberSchema, m_obj.GetIndexName());
  }
}

std::shared_ptr<const smithy::schema::Schema> UpdateTableRequest_DeleteVectorIndexActionSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("DeleteVectorIndexAction")
      .PutMember("IndexName", smithy::schema::Schema::CreateString("IndexName"))
      .Build();
}

void UpdateTableRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.AttributeDefinitionsHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("AttributeDefinitions").value();
    serializer.WriteList(memberSchema, m_obj.GetAttributeDefinitions().size(), [&](smithy::schema::ShapeSerializer& listSerializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      for (const auto& item0 : m_obj.GetAttributeDefinitions()) {
        UpdateTableRequest_AttributeDefinitionSchemaSerdeSer nested1(item0);
        listSerializer0.WriteStruct(itemSchema0, nested1);
      }
    });
  }
  if (m_obj.TableNameHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("TableName").value();
    serializer.WriteString(memberSchema, m_obj.GetTableName());
  }
  if (m_obj.BillingModeHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("BillingMode").value();
    serializer.WriteString(memberSchema, BillingModeMapper::GetNameForBillingMode(m_obj.GetBillingMode()));
  }
  if (m_obj.ProvisionedThroughputHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ProvisionedThroughput").value();
    UpdateTableRequest_ProvisionedThroughputSchemaSerdeSer nested0(m_obj.GetProvisionedThroughput());
    serializer.WriteStruct(memberSchema, nested0);
  }
  if (m_obj.GlobalSecondaryIndexUpdatesHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("GlobalSecondaryIndexUpdates").value();
    serializer.WriteList(memberSchema, m_obj.GetGlobalSecondaryIndexUpdates().size(),
                         [&](smithy::schema::ShapeSerializer& listSerializer0) {
                           const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
                           for (const auto& item0 : m_obj.GetGlobalSecondaryIndexUpdates()) {
                             UpdateTableRequest_GlobalSecondaryIndexUpdateSchemaSerdeSer nested1(item0);
                             listSerializer0.WriteStruct(itemSchema0, nested1);
                           }
                         });
  }
  if (m_obj.StreamSpecificationHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("StreamSpecification").value();
    UpdateTableRequest_StreamSpecificationSchemaSerdeSer nested0(m_obj.GetStreamSpecification());
    serializer.WriteStruct(memberSchema, nested0);
  }
  if (m_obj.SSESpecificationHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("SSESpecification").value();
    UpdateTableRequest_SSESpecificationSchemaSerdeSer nested0(m_obj.GetSSESpecification());
    serializer.WriteStruct(memberSchema, nested0);
  }
  if (m_obj.ReplicaUpdatesHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ReplicaUpdates").value();
    serializer.WriteList(memberSchema, m_obj.GetReplicaUpdates().size(), [&](smithy::schema::ShapeSerializer& listSerializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      for (const auto& item0 : m_obj.GetReplicaUpdates()) {
        UpdateTableRequest_ReplicationGroupUpdateSchemaSerdeSer nested1(item0);
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
  if (m_obj.MultiRegionConsistencyHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("MultiRegionConsistency").value();
    serializer.WriteString(memberSchema, MultiRegionConsistencyMapper::GetNameForMultiRegionConsistency(m_obj.GetMultiRegionConsistency()));
  }
  if (m_obj.GlobalTableWitnessUpdatesHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("GlobalTableWitnessUpdates").value();
    serializer.WriteList(memberSchema, m_obj.GetGlobalTableWitnessUpdates().size(), [&](smithy::schema::ShapeSerializer& listSerializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      for (const auto& item0 : m_obj.GetGlobalTableWitnessUpdates()) {
        UpdateTableRequest_GlobalTableWitnessGroupUpdateSchemaSerdeSer nested1(item0);
        listSerializer0.WriteStruct(itemSchema0, nested1);
      }
    });
  }
  if (m_obj.OnDemandThroughputHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("OnDemandThroughput").value();
    UpdateTableRequest_OnDemandThroughputSchemaSerdeSer nested0(m_obj.GetOnDemandThroughput());
    serializer.WriteStruct(memberSchema, nested0);
  }
  if (m_obj.WarmThroughputHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("WarmThroughput").value();
    UpdateTableRequest_WarmThroughputSchemaSerdeSer nested0(m_obj.GetWarmThroughput());
    serializer.WriteStruct(memberSchema, nested0);
  }
  if (m_obj.GlobalTableSettingsReplicationModeHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("GlobalTableSettingsReplicationMode").value();
    serializer.WriteString(memberSchema, GlobalTableSettingsReplicationModeMapper::GetNameForGlobalTableSettingsReplicationMode(
                                             m_obj.GetGlobalTableSettingsReplicationMode()));
  }
  if (m_obj.DisassociationProtectionEnabledHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("DisassociationProtectionEnabled").value();
    serializer.WriteBoolean(memberSchema, m_obj.GetDisassociationProtectionEnabled());
  }
  if (m_obj.VectorIndexUpdatesHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("VectorIndexUpdates").value();
    serializer.WriteList(memberSchema, m_obj.GetVectorIndexUpdates().size(), [&](smithy::schema::ShapeSerializer& listSerializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      for (const auto& item0 : m_obj.GetVectorIndexUpdates()) {
        UpdateTableRequest_VectorIndexUpdateSchemaSerdeSer nested1(item0);
        listSerializer0.WriteStruct(itemSchema0, nested1);
      }
    });
  }
}

std::shared_ptr<const smithy::schema::Schema> UpdateTableRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("UpdateTableRequest")
      .PutMember("AttributeDefinitions", smithy::schema::Schema::ListBuilder("AttributeDefinitions")
                                             .PutMember("member", UpdateTableRequest_AttributeDefinitionSchemaSerdeSer::BuildSchema())
                                             .Build())
      .PutMember("TableName", smithy::schema::Schema::CreateString("TableName"))
      .PutMember("BillingMode", smithy::schema::Schema::CreateEnum("BillingMode"))
      .PutMember("ProvisionedThroughput", UpdateTableRequest_ProvisionedThroughputSchemaSerdeSer::BuildSchema())
      .PutMember("GlobalSecondaryIndexUpdates",
                 smithy::schema::Schema::ListBuilder("GlobalSecondaryIndexUpdateList")
                     .PutMember("member", UpdateTableRequest_GlobalSecondaryIndexUpdateSchemaSerdeSer::BuildSchema())
                     .Build())
      .PutMember("StreamSpecification", UpdateTableRequest_StreamSpecificationSchemaSerdeSer::BuildSchema())
      .PutMember("SSESpecification", UpdateTableRequest_SSESpecificationSchemaSerdeSer::BuildSchema())
      .PutMember("ReplicaUpdates", smithy::schema::Schema::ListBuilder("ReplicationGroupUpdateList")
                                       .PutMember("member", UpdateTableRequest_ReplicationGroupUpdateSchemaSerdeSer::BuildSchema())
                                       .Build())
      .PutMember("TableClass", smithy::schema::Schema::CreateEnum("TableClass"))
      .PutMember("DeletionProtectionEnabled", smithy::schema::Schema::CreateBoolean("DeletionProtectionEnabled"))
      .PutMember("MultiRegionConsistency", smithy::schema::Schema::CreateEnum("MultiRegionConsistency"))
      .PutMember("GlobalTableWitnessUpdates",
                 smithy::schema::Schema::ListBuilder("GlobalTableWitnessGroupUpdateList")
                     .PutMember("member", UpdateTableRequest_GlobalTableWitnessGroupUpdateSchemaSerdeSer::BuildSchema())
                     .Build())
      .PutMember("OnDemandThroughput", UpdateTableRequest_OnDemandThroughputSchemaSerdeSer::BuildSchema())
      .PutMember("WarmThroughput", UpdateTableRequest_WarmThroughputSchemaSerdeSer::BuildSchema())
      .PutMember("GlobalTableSettingsReplicationMode", smithy::schema::Schema::CreateEnum("GlobalTableSettingsReplicationMode"))
      .PutMember("DisassociationProtectionEnabled", smithy::schema::Schema::CreateBoolean("DisassociationProtectionEnabled"))
      .PutMember("VectorIndexUpdates", smithy::schema::Schema::ListBuilder("VectorIndexUpdateList")
                                           .PutMember("member", UpdateTableRequest_VectorIndexUpdateSchemaSerdeSer::BuildSchema())
                                           .Build())
      .Build();
}

}  // namespace
}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws

Aws::UniquePtr<smithy::schema::SerializableStruct> UpdateTableRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<UpdateTableRequestSerializable>("UpdateTableRequestSerializable", *this);
}

Aws::String UpdateTableRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext UpdateTableRequest::GetSchemaSerdeContext() const { return {"UpdateTable", "2012-08-10"}; }

Aws::Http::HeaderValueCollection UpdateTableRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DynamoDB_20120810.UpdateTable"));
  return headers;
}

UpdateTableRequest::EndpointParameters UpdateTableRequest::GetEndpointContextParams() const {
  EndpointParameters parameters;
  // Operation context parameters
  if (TableNameHasBeenSet()) {
    parameters.emplace_back(Aws::String("ResourceArn"), this->GetTableName(),
                            Aws::Endpoint::EndpointParameter::ParameterOrigin::OPERATION_CONTEXT);
  }
  return parameters;
}
