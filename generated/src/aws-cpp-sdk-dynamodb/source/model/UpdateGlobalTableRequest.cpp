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
#include <aws/dynamodb/model/UpdateGlobalTableRequest.h>
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
class UpdateGlobalTableRequest_ReplicaUpdateSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit UpdateGlobalTableRequest_ReplicaUpdateSchemaSerdeSer(const ReplicaUpdate& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const ReplicaUpdate& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class UpdateGlobalTableRequest_CreateReplicaActionSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit UpdateGlobalTableRequest_CreateReplicaActionSchemaSerdeSer(const CreateReplicaAction& obj)
      : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const CreateReplicaAction& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class UpdateGlobalTableRequest_DeleteReplicaActionSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit UpdateGlobalTableRequest_DeleteReplicaActionSchemaSerdeSer(const DeleteReplicaAction& obj)
      : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const DeleteReplicaAction& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class UpdateGlobalTableRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit UpdateGlobalTableRequestSerializable(const UpdateGlobalTableRequest& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const UpdateGlobalTableRequest& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void UpdateGlobalTableRequest_ReplicaUpdateSchemaSerdeSer::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.CreateHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("Create").value();
    UpdateGlobalTableRequest_CreateReplicaActionSchemaSerdeSer nested0(m_obj.GetCreate());
    serializer.WriteStruct(memberSchema, nested0);
  }
  if (m_obj.DeleteHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("Delete").value();
    UpdateGlobalTableRequest_DeleteReplicaActionSchemaSerdeSer nested0(m_obj.GetDelete());
    serializer.WriteStruct(memberSchema, nested0);
  }
}

std::shared_ptr<const smithy::schema::Schema> UpdateGlobalTableRequest_ReplicaUpdateSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("ReplicaUpdate")
      .PutMember("Create", UpdateGlobalTableRequest_CreateReplicaActionSchemaSerdeSer::BuildSchema())
      .PutMember("Delete", UpdateGlobalTableRequest_DeleteReplicaActionSchemaSerdeSer::BuildSchema())
      .Build();
}

void UpdateGlobalTableRequest_CreateReplicaActionSchemaSerdeSer::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.RegionNameHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("RegionName").value();
    serializer.WriteString(memberSchema, m_obj.GetRegionName());
  }
}

std::shared_ptr<const smithy::schema::Schema> UpdateGlobalTableRequest_CreateReplicaActionSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("CreateReplicaAction")
      .PutMember("RegionName", smithy::schema::Schema::CreateString("RegionName"))
      .Build();
}

void UpdateGlobalTableRequest_DeleteReplicaActionSchemaSerdeSer::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.RegionNameHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("RegionName").value();
    serializer.WriteString(memberSchema, m_obj.GetRegionName());
  }
}

std::shared_ptr<const smithy::schema::Schema> UpdateGlobalTableRequest_DeleteReplicaActionSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("DeleteReplicaAction")
      .PutMember("RegionName", smithy::schema::Schema::CreateString("RegionName"))
      .Build();
}

void UpdateGlobalTableRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.GlobalTableNameHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("GlobalTableName").value();
    serializer.WriteString(memberSchema, m_obj.GetGlobalTableName());
  }
  if (m_obj.ReplicaUpdatesHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ReplicaUpdates").value();
    serializer.WriteList(memberSchema, m_obj.GetReplicaUpdates().size(), [&](smithy::schema::ShapeSerializer& listSerializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      for (const auto& item0 : m_obj.GetReplicaUpdates()) {
        UpdateGlobalTableRequest_ReplicaUpdateSchemaSerdeSer nested1(item0);
        listSerializer0.WriteStruct(itemSchema0, nested1);
      }
    });
  }
}

std::shared_ptr<const smithy::schema::Schema> UpdateGlobalTableRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("UpdateGlobalTableRequest")
      .PutMember("GlobalTableName", smithy::schema::Schema::CreateString("GlobalTableName"))
      .PutMember("ReplicaUpdates", smithy::schema::Schema::ListBuilder("ReplicaUpdateList")
                                       .PutMember("member", UpdateGlobalTableRequest_ReplicaUpdateSchemaSerdeSer::BuildSchema())
                                       .Build())
      .Build();
}

}  // namespace
}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws

Aws::UniquePtr<smithy::schema::SerializableStruct> UpdateGlobalTableRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<UpdateGlobalTableRequestSerializable>("UpdateGlobalTableRequestSerializable", *this);
}

Aws::String UpdateGlobalTableRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext UpdateGlobalTableRequest::GetSchemaSerdeContext() const {
  return {"UpdateGlobalTable", "2012-08-10"};
}

Aws::Http::HeaderValueCollection UpdateGlobalTableRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DynamoDB_20120810.UpdateGlobalTable"));
  return headers;
}

UpdateGlobalTableRequest::EndpointParameters UpdateGlobalTableRequest::GetEndpointContextParams() const {
  EndpointParameters parameters;
  // Operation context parameters
  if (GlobalTableNameHasBeenSet()) {
    parameters.emplace_back(Aws::String("ResourceArn"), this->GetGlobalTableName(),
                            Aws::Endpoint::EndpointParameter::ParameterOrigin::OPERATION_CONTEXT);
  }
  return parameters;
}
