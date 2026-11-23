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
#include <aws/dynamodb/model/CreateGlobalTableRequest.h>
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
class CreateGlobalTableRequest_ReplicaSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit CreateGlobalTableRequest_ReplicaSchemaSerdeSer(const Replica& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const Replica& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class CreateGlobalTableRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit CreateGlobalTableRequestSerializable(const CreateGlobalTableRequest& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const CreateGlobalTableRequest& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void CreateGlobalTableRequest_ReplicaSchemaSerdeSer::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.RegionNameHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("RegionName").value();
    serializer.WriteString(memberSchema, m_obj.GetRegionName());
  }
}

std::shared_ptr<const smithy::schema::Schema> CreateGlobalTableRequest_ReplicaSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("Replica")
      .PutMember("RegionName", smithy::schema::Schema::CreateString("RegionName"))
      .Build();
}

void CreateGlobalTableRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.GlobalTableNameHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("GlobalTableName").value();
    serializer.WriteString(memberSchema, m_obj.GetGlobalTableName());
  }
  if (m_obj.ReplicationGroupHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ReplicationGroup").value();
    serializer.WriteList(memberSchema, m_obj.GetReplicationGroup().size(), [&](smithy::schema::ShapeSerializer& listSerializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      for (const auto& item0 : m_obj.GetReplicationGroup()) {
        CreateGlobalTableRequest_ReplicaSchemaSerdeSer nested1(item0);
        listSerializer0.WriteStruct(itemSchema0, nested1);
      }
    });
  }
}

std::shared_ptr<const smithy::schema::Schema> CreateGlobalTableRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("CreateGlobalTableRequest")
      .PutMember("GlobalTableName", smithy::schema::Schema::CreateString("GlobalTableName"))
      .PutMember("ReplicationGroup", smithy::schema::Schema::ListBuilder("ReplicaList")
                                         .PutMember("member", CreateGlobalTableRequest_ReplicaSchemaSerdeSer::BuildSchema())
                                         .Build())
      .Build();
}

}  // namespace
}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws

Aws::UniquePtr<smithy::schema::SerializableStruct> CreateGlobalTableRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<CreateGlobalTableRequestSerializable>("CreateGlobalTableRequestSerializable", *this);
}

Aws::String CreateGlobalTableRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext CreateGlobalTableRequest::GetSchemaSerdeContext() const {
  return {"CreateGlobalTable", "2012-08-10"};
}

Aws::Http::HeaderValueCollection CreateGlobalTableRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DynamoDB_20120810.CreateGlobalTable"));
  return headers;
}

CreateGlobalTableRequest::EndpointParameters CreateGlobalTableRequest::GetEndpointContextParams() const {
  EndpointParameters parameters;
  // Operation context parameters
  if (GlobalTableNameHasBeenSet()) {
    parameters.emplace_back(Aws::String("ResourceArn"), this->GetGlobalTableName(),
                            Aws::Endpoint::EndpointParameter::ParameterOrigin::OPERATION_CONTEXT);
  }
  return parameters;
}
