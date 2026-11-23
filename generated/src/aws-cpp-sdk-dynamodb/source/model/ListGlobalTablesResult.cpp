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
#include <aws/dynamodb/model/ListGlobalTablesResult.h>
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

ListGlobalTablesResult::ListGlobalTablesResult(const Aws::AmazonWebServiceResult<Aws::String>& result) { *this = result; }

ListGlobalTablesResult& ListGlobalTablesResult::operator=(const Aws::AmazonWebServiceResult<Aws::String>& result) {
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
class ListGlobalTablesResult_GlobalTableSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit ListGlobalTablesResult_GlobalTableSchemaSerdeDeser(GlobalTable& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  GlobalTable& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class ListGlobalTablesResult_ReplicaSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit ListGlobalTablesResult_ReplicaSchemaSerdeDeser(Replica& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  Replica& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class ListGlobalTablesResultDeserializable final : public smithy::schema::SerializableStruct {
 public:
  explicit ListGlobalTablesResultDeserializable(ListGlobalTablesResult& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  ListGlobalTablesResult& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void ListGlobalTablesResult_GlobalTableSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
                                                              smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "GlobalTableName") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetGlobalTableName(*value0);
    }
    return;
  }
  if (memberName == "ReplicationGroup") {
    Aws::Vector<Replica> list0;
    deserializer.ReadList(memberSchema, [&](smithy::schema::ShapeDeserializer& itemDeserializer0) {
      Replica nested1;
      ListGlobalTablesResult_ReplicaSchemaSerdeDeser{nested1}.Deserialize(itemDeserializer0);
      list0.push_back(std::move(nested1));
    });
    m_obj.SetReplicationGroup(std::move(list0));
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> ListGlobalTablesResult_GlobalTableSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("GlobalTable")
      .PutMember("GlobalTableName", smithy::schema::Schema::CreateString("GlobalTableName"))
      .PutMember("ReplicationGroup", smithy::schema::Schema::ListBuilder("ReplicaList")
                                         .PutMember("member", ListGlobalTablesResult_ReplicaSchemaSerdeDeser::BuildSchema())
                                         .Build())
      .Build();
}

void ListGlobalTablesResult_ReplicaSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
                                                          smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "RegionName") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetRegionName(*value0);
    }
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> ListGlobalTablesResult_ReplicaSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("Replica")
      .PutMember("RegionName", smithy::schema::Schema::CreateString("RegionName"))
      .Build();
}

void ListGlobalTablesResultDeserializable::From(const smithy::schema::Schema& memberSchema,
                                                smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "GlobalTables") {
    Aws::Vector<GlobalTable> list0;
    deserializer.ReadList(memberSchema, [&](smithy::schema::ShapeDeserializer& itemDeserializer0) {
      GlobalTable nested1;
      ListGlobalTablesResult_GlobalTableSchemaSerdeDeser{nested1}.Deserialize(itemDeserializer0);
      list0.push_back(std::move(nested1));
    });
    m_obj.SetGlobalTables(std::move(list0));
    return;
  }
  if (memberName == "LastEvaluatedGlobalTableName") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetLastEvaluatedGlobalTableName(*value0);
    }
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> ListGlobalTablesResultDeserializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("ListGlobalTablesResult")
      .PutMember("GlobalTables", smithy::schema::Schema::ListBuilder("GlobalTableList")
                                     .PutMember("member", ListGlobalTablesResult_GlobalTableSchemaSerdeDeser::BuildSchema())
                                     .Build())
      .PutMember("LastEvaluatedGlobalTableName", smithy::schema::Schema::CreateString("LastEvaluatedGlobalTableName"))
      .Build();
}

}  // namespace
}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws

Aws::UniquePtr<smithy::schema::SerializableStruct> ListGlobalTablesResult::GetSchemaSerdeOutput() {
  return Aws::MakeUnique<ListGlobalTablesResultDeserializable>("ListGlobalTablesResultDeserializable", *this);
}
