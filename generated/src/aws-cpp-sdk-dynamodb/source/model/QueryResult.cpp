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
#include <aws/dynamodb/model/QueryResult.h>
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

QueryResult::QueryResult(const Aws::AmazonWebServiceResult<Aws::String>& result) { *this = result; }

QueryResult& QueryResult::operator=(const Aws::AmazonWebServiceResult<Aws::String>& result) {
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
class QueryResultSchemaCache {
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
        Aws::New<std::shared_ptr<const smithy::schema::Schema>>("QueryResultSchemaCache", Adapter::BuildSchema());
    Aws::Utils::ComponentRegistry::RegisterComponent("QueryResultSchemaCache", built, &Release);
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
std::atomic<std::shared_ptr<const smithy::schema::Schema>*> QueryResultSchemaCache<Adapter>::s_schema{nullptr};
template <typename Adapter>
std::mutex QueryResultSchemaCache<Adapter>::s_mutex;

class QueryResult_AttributeValueSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit QueryResult_AttributeValueSchemaSerdeDeser(AttributeValue& obj)
      : m_obj(obj), m_schema(QueryResultSchemaCache<QueryResult_AttributeValueSchemaSerdeDeser>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  AttributeValue& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class QueryResult_ConsumedCapacitySchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit QueryResult_ConsumedCapacitySchemaSerdeDeser(ConsumedCapacity& obj)
      : m_obj(obj), m_schema(QueryResultSchemaCache<QueryResult_ConsumedCapacitySchemaSerdeDeser>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  ConsumedCapacity& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class QueryResult_CapacitySchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit QueryResult_CapacitySchemaSerdeDeser(Capacity& obj)
      : m_obj(obj), m_schema(QueryResultSchemaCache<QueryResult_CapacitySchemaSerdeDeser>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  Capacity& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class QueryResult_VectorCapacitySchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit QueryResult_VectorCapacitySchemaSerdeDeser(VectorCapacity& obj)
      : m_obj(obj), m_schema(QueryResultSchemaCache<QueryResult_VectorCapacitySchemaSerdeDeser>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  VectorCapacity& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class QueryResultDeserializable final : public smithy::schema::SerializableStruct {
 public:
  explicit QueryResultDeserializable(QueryResult& obj) : m_obj(obj), m_schema(QueryResultSchemaCache<QueryResultDeserializable>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  QueryResult& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void QueryResult_AttributeValueSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
                                                      smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "S") {
    auto value = deserializer.ReadString(memberSchema);
    if (value.has_value()) {
      m_obj.SetS(*value);
    }
    return;
  }
  if (memberName == "N") {
    auto value = deserializer.ReadString(memberSchema);
    if (value.has_value()) {
      m_obj.SetN(*value);
    }
    return;
  }
  if (memberName == "B") {
    auto value = deserializer.ReadBlob(memberSchema);
    if (value.has_value()) {
      m_obj.SetB(*value);
    }
    return;
  }
  if (memberName == "BOOL") {
    auto value = deserializer.ReadBoolean(memberSchema);
    if (value.has_value()) {
      m_obj.SetBool(*value);
    }
    return;
  }
  if (memberName == "NULL") {
    auto value = deserializer.ReadBoolean(memberSchema);
    if (value.has_value()) {
      m_obj.SetNull(*value);
    }
    return;
  }
  if (memberName == "SS") {
    m_obj.SetSS({});
    deserializer.ReadList(memberSchema, [&](smithy::schema::ShapeDeserializer& itemDeserializer) {
      const smithy::schema::Schema& itemSchema = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      auto item = itemDeserializer.ReadString(itemSchema);
      if (item.has_value()) {
        m_obj.AddSItem(*item);
      }
    });
    return;
  }
  if (memberName == "NS") {
    m_obj.SetNS({});
    deserializer.ReadList(memberSchema, [&](smithy::schema::ShapeDeserializer& itemDeserializer) {
      const smithy::schema::Schema& itemSchema = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      auto item = itemDeserializer.ReadString(itemSchema);
      if (item.has_value()) {
        m_obj.AddNItem(*item);
      }
    });
    return;
  }
  if (memberName == "BS") {
    m_obj.SetBS({});
    deserializer.ReadList(memberSchema, [&](smithy::schema::ShapeDeserializer& itemDeserializer) {
      const smithy::schema::Schema& itemSchema = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      auto item = itemDeserializer.ReadBlob(itemSchema);
      if (item.has_value()) {
        m_obj.AddBItem(*item);
      }
    });
    return;
  }
  if (memberName == "M") {
    m_obj.SetM({});
    deserializer.ReadMap(memberSchema, [&](const Aws::String& key, smithy::schema::ShapeDeserializer& valueDeserializer) {
      auto nested = Aws::MakeShared<AttributeValue>("AttributeValue");
      QueryResult_AttributeValueSchemaSerdeDeser{*nested}.Deserialize(valueDeserializer);
      m_obj.AddMEntry(key, nested);
    });
    return;
  }
  if (memberName == "L") {
    m_obj.SetL({});
    deserializer.ReadList(memberSchema, [&](smithy::schema::ShapeDeserializer& itemDeserializer) {
      auto nested = Aws::MakeShared<AttributeValue>("AttributeValue");
      QueryResult_AttributeValueSchemaSerdeDeser{*nested}.Deserialize(itemDeserializer);
      m_obj.AddLItem(nested);
    });
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> QueryResult_AttributeValueSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::UnionBuilder("AttributeValue")
      .PutMember("S", smithy::schema::Schema::CreateString("S"))
      .PutMember("N", smithy::schema::Schema::CreateString("N"))
      .PutMember("B", smithy::schema::Schema::CreateBlob("B"))
      .PutMember("SS", smithy::schema::Schema::ListBuilder("StringSetAttributeValue")
                           .PutMember("member", smithy::schema::Schema::CreateString("member"))
                           .Build())
      .PutMember("NS", smithy::schema::Schema::ListBuilder("NumberSetAttributeValue")
                           .PutMember("member", smithy::schema::Schema::CreateString("member"))
                           .Build())
      .PutMember("BS", smithy::schema::Schema::ListBuilder("BinarySetAttributeValue")
                           .PutMember("member", smithy::schema::Schema::CreateBlob("member"))
                           .Build())
      .PutMember("M", smithy::schema::Schema::MapBuilder("MapAttributeValue")
                          .PutMember("key", smithy::schema::Schema::CreateString("key"))
                          .PutMember("value", smithy::schema::Schema::UnionBuilder("AttributeValue").Build())
                          .Build())
      .PutMember("L", smithy::schema::Schema::ListBuilder("ListAttributeValue")
                          .PutMember("member", smithy::schema::Schema::UnionBuilder("AttributeValue").Build())
                          .Build())
      .PutMember("NULL", smithy::schema::Schema::CreateBoolean("NULL"))
      .PutMember("BOOL", smithy::schema::Schema::CreateBoolean("BOOL"))
      .Build();
}

void QueryResult_ConsumedCapacitySchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
                                                        smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "TableName") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetTableName(*value0);
    }
    return;
  }
  if (memberName == "CapacityUnits") {
    auto value0 = deserializer.ReadDouble(memberSchema);
    if (value0.has_value()) {
      m_obj.SetCapacityUnits(*value0);
    }
    return;
  }
  if (memberName == "ReadCapacityUnits") {
    auto value0 = deserializer.ReadDouble(memberSchema);
    if (value0.has_value()) {
      m_obj.SetReadCapacityUnits(*value0);
    }
    return;
  }
  if (memberName == "WriteCapacityUnits") {
    auto value0 = deserializer.ReadDouble(memberSchema);
    if (value0.has_value()) {
      m_obj.SetWriteCapacityUnits(*value0);
    }
    return;
  }
  if (memberName == "Table") {
    Capacity nested0;
    QueryResult_CapacitySchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetTable(std::move(nested0));
    return;
  }
  if (memberName == "LocalSecondaryIndexes") {
    Aws::Map<Aws::String, Capacity> map0;
    deserializer.ReadMap(memberSchema, [&](const Aws::String& key0, smithy::schema::ShapeDeserializer& valueDeserializer0) {
      Capacity nested1;
      QueryResult_CapacitySchemaSerdeDeser{nested1}.Deserialize(valueDeserializer0);
      map0[key0] = std::move(nested1);
    });
    m_obj.SetLocalSecondaryIndexes(std::move(map0));
    return;
  }
  if (memberName == "GlobalSecondaryIndexes") {
    Aws::Map<Aws::String, Capacity> map0;
    deserializer.ReadMap(memberSchema, [&](const Aws::String& key0, smithy::schema::ShapeDeserializer& valueDeserializer0) {
      Capacity nested1;
      QueryResult_CapacitySchemaSerdeDeser{nested1}.Deserialize(valueDeserializer0);
      map0[key0] = std::move(nested1);
    });
    m_obj.SetGlobalSecondaryIndexes(std::move(map0));
    return;
  }
  if (memberName == "VectorIndexes") {
    Aws::Map<Aws::String, VectorCapacity> map0;
    deserializer.ReadMap(memberSchema, [&](const Aws::String& key0, smithy::schema::ShapeDeserializer& valueDeserializer0) {
      VectorCapacity nested1;
      QueryResult_VectorCapacitySchemaSerdeDeser{nested1}.Deserialize(valueDeserializer0);
      map0[key0] = std::move(nested1);
    });
    m_obj.SetVectorIndexes(std::move(map0));
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> QueryResult_ConsumedCapacitySchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("ConsumedCapacity")
      .PutMember("TableName", smithy::schema::Schema::CreateString("TableName"))
      .PutMember("CapacityUnits", smithy::schema::Schema::CreateDouble("CapacityUnits"))
      .PutMember("ReadCapacityUnits", smithy::schema::Schema::CreateDouble("ReadCapacityUnits"))
      .PutMember("WriteCapacityUnits", smithy::schema::Schema::CreateDouble("WriteCapacityUnits"))
      .PutMember("Table", QueryResultSchemaCache<QueryResult_CapacitySchemaSerdeDeser>::Get())
      .PutMember("LocalSecondaryIndexes", smithy::schema::Schema::MapBuilder("SecondaryIndexesCapacityMap")
                                              .PutMember("key", smithy::schema::Schema::CreateString("key"))
                                              .PutMember("value", QueryResultSchemaCache<QueryResult_CapacitySchemaSerdeDeser>::Get())
                                              .Build())
      .PutMember("GlobalSecondaryIndexes", smithy::schema::Schema::MapBuilder("SecondaryIndexesCapacityMap")
                                               .PutMember("key", smithy::schema::Schema::CreateString("key"))
                                               .PutMember("value", QueryResultSchemaCache<QueryResult_CapacitySchemaSerdeDeser>::Get())
                                               .Build())
      .PutMember("VectorIndexes", smithy::schema::Schema::MapBuilder("VectorIndexesCapacityMap")
                                      .PutMember("key", smithy::schema::Schema::CreateString("key"))
                                      .PutMember("value", QueryResultSchemaCache<QueryResult_VectorCapacitySchemaSerdeDeser>::Get())
                                      .Build())
      .Build();
}

void QueryResult_CapacitySchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
                                                smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "ReadCapacityUnits") {
    auto value0 = deserializer.ReadDouble(memberSchema);
    if (value0.has_value()) {
      m_obj.SetReadCapacityUnits(*value0);
    }
    return;
  }
  if (memberName == "WriteCapacityUnits") {
    auto value0 = deserializer.ReadDouble(memberSchema);
    if (value0.has_value()) {
      m_obj.SetWriteCapacityUnits(*value0);
    }
    return;
  }
  if (memberName == "CapacityUnits") {
    auto value0 = deserializer.ReadDouble(memberSchema);
    if (value0.has_value()) {
      m_obj.SetCapacityUnits(*value0);
    }
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> QueryResult_CapacitySchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("Capacity")
      .PutMember("ReadCapacityUnits", smithy::schema::Schema::CreateDouble("ReadCapacityUnits"))
      .PutMember("WriteCapacityUnits", smithy::schema::Schema::CreateDouble("WriteCapacityUnits"))
      .PutMember("CapacityUnits", smithy::schema::Schema::CreateDouble("CapacityUnits"))
      .Build();
}

void QueryResult_VectorCapacitySchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
                                                      smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "VectorSearchRequestBytes") {
    auto value0 = deserializer.ReadDouble(memberSchema);
    if (value0.has_value()) {
      m_obj.SetVectorSearchRequestBytes(*value0);
    }
    return;
  }
  if (memberName == "VectorWriteRequestBytes") {
    auto value0 = deserializer.ReadDouble(memberSchema);
    if (value0.has_value()) {
      m_obj.SetVectorWriteRequestBytes(*value0);
    }
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> QueryResult_VectorCapacitySchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("VectorCapacity")
      .PutMember("VectorSearchRequestBytes", smithy::schema::Schema::CreateDouble("VectorSearchRequestBytes"))
      .PutMember("VectorWriteRequestBytes", smithy::schema::Schema::CreateDouble("VectorWriteRequestBytes"))
      .Build();
}

void QueryResultDeserializable::From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "Items") {
    Aws::Vector<Aws::Map<Aws::String, AttributeValue>> list0;
    deserializer.ReadList(memberSchema, [&](smithy::schema::ShapeDeserializer& itemDeserializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      Aws::Map<Aws::String, AttributeValue> map1;
      itemDeserializer0.ReadMap(itemSchema0, [&](const Aws::String& key1, smithy::schema::ShapeDeserializer& valueDeserializer1) {
        AttributeValue nested2;
        QueryResult_AttributeValueSchemaSerdeDeser{nested2}.Deserialize(valueDeserializer1);
        map1[key1] = std::move(nested2);
      });
      list0.push_back(std::move(map1));
    });
    m_obj.SetItems(std::move(list0));
    return;
  }
  if (memberName == "Count") {
    auto value0 = deserializer.ReadInteger(memberSchema);
    if (value0.has_value()) {
      m_obj.SetCount(*value0);
    }
    return;
  }
  if (memberName == "ScannedCount") {
    auto value0 = deserializer.ReadInteger(memberSchema);
    if (value0.has_value()) {
      m_obj.SetScannedCount(*value0);
    }
    return;
  }
  if (memberName == "LastEvaluatedKey") {
    Aws::Map<Aws::String, AttributeValue> map0;
    deserializer.ReadMap(memberSchema, [&](const Aws::String& key0, smithy::schema::ShapeDeserializer& valueDeserializer0) {
      AttributeValue nested1;
      QueryResult_AttributeValueSchemaSerdeDeser{nested1}.Deserialize(valueDeserializer0);
      map0[key0] = std::move(nested1);
    });
    m_obj.SetLastEvaluatedKey(std::move(map0));
    return;
  }
  if (memberName == "ConsumedCapacity") {
    ConsumedCapacity nested0;
    QueryResult_ConsumedCapacitySchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetConsumedCapacity(std::move(nested0));
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> QueryResultDeserializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("QueryResult")
      .PutMember("Items", smithy::schema::Schema::ListBuilder("ItemList")
                              .PutMember("member", smithy::schema::Schema::MapBuilder("AttributeMap")
                                                       .PutMember("key", smithy::schema::Schema::CreateString("key"))
                                                       .PutMember("value", smithy::schema::Schema::UnionBuilder("AttributeValue").Build())
                                                       .Build())
                              .Build())
      .PutMember("Count", smithy::schema::Schema::CreateInteger("Count"))
      .PutMember("ScannedCount", smithy::schema::Schema::CreateInteger("ScannedCount"))
      .PutMember("LastEvaluatedKey", smithy::schema::Schema::MapBuilder("Key")
                                         .PutMember("key", smithy::schema::Schema::CreateString("key"))
                                         .PutMember("value", smithy::schema::Schema::UnionBuilder("AttributeValue").Build())
                                         .Build())
      .PutMember("ConsumedCapacity", QueryResultSchemaCache<QueryResult_ConsumedCapacitySchemaSerdeDeser>::Get())
      .Build();
}

}  // namespace
}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws

Aws::UniquePtr<smithy::schema::SerializableStruct> QueryResult::GetSchemaSerdeOutput() {
  return Aws::MakeUnique<QueryResultDeserializable>("QueryResultDeserializable", *this);
}
