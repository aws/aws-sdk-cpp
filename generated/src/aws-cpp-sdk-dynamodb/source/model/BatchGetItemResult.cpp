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
#include <aws/dynamodb/model/BatchGetItemResult.h>
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

BatchGetItemResult::BatchGetItemResult(const Aws::AmazonWebServiceResult<Aws::String>& result) { *this = result; }

BatchGetItemResult& BatchGetItemResult::operator=(const Aws::AmazonWebServiceResult<Aws::String>& result) {
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
class BatchGetItemResultSchemaCache {
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
        Aws::New<std::shared_ptr<const smithy::schema::Schema>>("BatchGetItemResultSchemaCache", Adapter::BuildSchema());
    Aws::Utils::ComponentRegistry::RegisterComponent("BatchGetItemResultSchemaCache", built, &Release);
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
std::atomic<std::shared_ptr<const smithy::schema::Schema>*> BatchGetItemResultSchemaCache<Adapter>::s_schema{nullptr};
template <typename Adapter>
std::mutex BatchGetItemResultSchemaCache<Adapter>::s_mutex;

class BatchGetItemResult_AttributeValueSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit BatchGetItemResult_AttributeValueSchemaSerdeDeser(AttributeValue& obj)
      : m_obj(obj), m_schema(BatchGetItemResultSchemaCache<BatchGetItemResult_AttributeValueSchemaSerdeDeser>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  AttributeValue& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class BatchGetItemResult_KeysAndAttributesSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit BatchGetItemResult_KeysAndAttributesSchemaSerdeDeser(KeysAndAttributes& obj)
      : m_obj(obj), m_schema(BatchGetItemResultSchemaCache<BatchGetItemResult_KeysAndAttributesSchemaSerdeDeser>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  KeysAndAttributes& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class BatchGetItemResult_ConsumedCapacitySchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit BatchGetItemResult_ConsumedCapacitySchemaSerdeDeser(ConsumedCapacity& obj)
      : m_obj(obj), m_schema(BatchGetItemResultSchemaCache<BatchGetItemResult_ConsumedCapacitySchemaSerdeDeser>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  ConsumedCapacity& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class BatchGetItemResult_CapacitySchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit BatchGetItemResult_CapacitySchemaSerdeDeser(Capacity& obj)
      : m_obj(obj), m_schema(BatchGetItemResultSchemaCache<BatchGetItemResult_CapacitySchemaSerdeDeser>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  Capacity& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class BatchGetItemResult_VectorCapacitySchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit BatchGetItemResult_VectorCapacitySchemaSerdeDeser(VectorCapacity& obj)
      : m_obj(obj), m_schema(BatchGetItemResultSchemaCache<BatchGetItemResult_VectorCapacitySchemaSerdeDeser>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  VectorCapacity& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class BatchGetItemResultDeserializable final : public smithy::schema::SerializableStruct {
 public:
  explicit BatchGetItemResultDeserializable(BatchGetItemResult& obj)
      : m_obj(obj), m_schema(BatchGetItemResultSchemaCache<BatchGetItemResultDeserializable>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  BatchGetItemResult& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void BatchGetItemResult_AttributeValueSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
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
      BatchGetItemResult_AttributeValueSchemaSerdeDeser{*nested}.Deserialize(valueDeserializer);
      m_obj.AddMEntry(key, nested);
    });
    return;
  }
  if (memberName == "L") {
    m_obj.SetL({});
    deserializer.ReadList(memberSchema, [&](smithy::schema::ShapeDeserializer& itemDeserializer) {
      auto nested = Aws::MakeShared<AttributeValue>("AttributeValue");
      BatchGetItemResult_AttributeValueSchemaSerdeDeser{*nested}.Deserialize(itemDeserializer);
      m_obj.AddLItem(nested);
    });
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> BatchGetItemResult_AttributeValueSchemaSerdeDeser::BuildSchema() {
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

void BatchGetItemResult_KeysAndAttributesSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
                                                                smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "Keys") {
    Aws::Vector<Aws::Map<Aws::String, AttributeValue>> list0;
    deserializer.ReadList(memberSchema, [&](smithy::schema::ShapeDeserializer& itemDeserializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      Aws::Map<Aws::String, AttributeValue> map1;
      itemDeserializer0.ReadMap(itemSchema0, [&](const Aws::String& key1, smithy::schema::ShapeDeserializer& valueDeserializer1) {
        AttributeValue nested2;
        BatchGetItemResult_AttributeValueSchemaSerdeDeser{nested2}.Deserialize(valueDeserializer1);
        map1[key1] = std::move(nested2);
      });
      list0.push_back(std::move(map1));
    });
    m_obj.SetKeys(std::move(list0));
    return;
  }
  if (memberName == "AttributesToGet") {
    Aws::Vector<Aws::String> list0;
    deserializer.ReadList(memberSchema, [&](smithy::schema::ShapeDeserializer& itemDeserializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      auto value1 = itemDeserializer0.ReadString(itemSchema0);
      if (value1.has_value()) {
        list0.push_back(*value1);
      }
    });
    m_obj.SetAttributesToGet(std::move(list0));
    return;
  }
  if (memberName == "ConsistentRead") {
    auto value0 = deserializer.ReadBoolean(memberSchema);
    if (value0.has_value()) {
      m_obj.SetConsistentRead(*value0);
    }
    return;
  }
  if (memberName == "ProjectionExpression") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetProjectionExpression(*value0);
    }
    return;
  }
  if (memberName == "ExpressionAttributeNames") {
    Aws::Map<Aws::String, Aws::String> map0;
    deserializer.ReadMap(memberSchema, [&](const Aws::String& key0, smithy::schema::ShapeDeserializer& valueDeserializer0) {
      const smithy::schema::Schema& valueSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("value").value();
      auto value1 = valueDeserializer0.ReadString(valueSchema0);
      if (value1.has_value()) {
        map0[key0] = *value1;
      }
    });
    m_obj.SetExpressionAttributeNames(std::move(map0));
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> BatchGetItemResult_KeysAndAttributesSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("KeysAndAttributes")
      .PutMember("Keys", smithy::schema::Schema::ListBuilder("KeyList")
                             .PutMember("member", smithy::schema::Schema::MapBuilder("Key")
                                                      .PutMember("key", smithy::schema::Schema::CreateString("key"))
                                                      .PutMember("value", smithy::schema::Schema::UnionBuilder("AttributeValue").Build())
                                                      .Build())
                             .Build())
      .PutMember("AttributesToGet", smithy::schema::Schema::ListBuilder("AttributeNameList")
                                        .PutMember("member", smithy::schema::Schema::CreateString("member"))
                                        .Build())
      .PutMember("ConsistentRead", smithy::schema::Schema::CreateBoolean("ConsistentRead"))
      .PutMember("ProjectionExpression", smithy::schema::Schema::CreateString("ProjectionExpression"))
      .PutMember("ExpressionAttributeNames", smithy::schema::Schema::MapBuilder("ExpressionAttributeNameMap")
                                                 .PutMember("key", smithy::schema::Schema::CreateString("key"))
                                                 .PutMember("value", smithy::schema::Schema::CreateString("value"))
                                                 .Build())
      .Build();
}

void BatchGetItemResult_ConsumedCapacitySchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
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
    BatchGetItemResult_CapacitySchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetTable(std::move(nested0));
    return;
  }
  if (memberName == "LocalSecondaryIndexes") {
    Aws::Map<Aws::String, Capacity> map0;
    deserializer.ReadMap(memberSchema, [&](const Aws::String& key0, smithy::schema::ShapeDeserializer& valueDeserializer0) {
      Capacity nested1;
      BatchGetItemResult_CapacitySchemaSerdeDeser{nested1}.Deserialize(valueDeserializer0);
      map0[key0] = std::move(nested1);
    });
    m_obj.SetLocalSecondaryIndexes(std::move(map0));
    return;
  }
  if (memberName == "GlobalSecondaryIndexes") {
    Aws::Map<Aws::String, Capacity> map0;
    deserializer.ReadMap(memberSchema, [&](const Aws::String& key0, smithy::schema::ShapeDeserializer& valueDeserializer0) {
      Capacity nested1;
      BatchGetItemResult_CapacitySchemaSerdeDeser{nested1}.Deserialize(valueDeserializer0);
      map0[key0] = std::move(nested1);
    });
    m_obj.SetGlobalSecondaryIndexes(std::move(map0));
    return;
  }
  if (memberName == "VectorIndexes") {
    Aws::Map<Aws::String, VectorCapacity> map0;
    deserializer.ReadMap(memberSchema, [&](const Aws::String& key0, smithy::schema::ShapeDeserializer& valueDeserializer0) {
      VectorCapacity nested1;
      BatchGetItemResult_VectorCapacitySchemaSerdeDeser{nested1}.Deserialize(valueDeserializer0);
      map0[key0] = std::move(nested1);
    });
    m_obj.SetVectorIndexes(std::move(map0));
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> BatchGetItemResult_ConsumedCapacitySchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("ConsumedCapacity")
      .PutMember("TableName", smithy::schema::Schema::CreateString("TableName"))
      .PutMember("CapacityUnits", smithy::schema::Schema::CreateDouble("CapacityUnits"))
      .PutMember("ReadCapacityUnits", smithy::schema::Schema::CreateDouble("ReadCapacityUnits"))
      .PutMember("WriteCapacityUnits", smithy::schema::Schema::CreateDouble("WriteCapacityUnits"))
      .PutMember("Table", BatchGetItemResultSchemaCache<BatchGetItemResult_CapacitySchemaSerdeDeser>::Get())
      .PutMember("LocalSecondaryIndexes",
                 smithy::schema::Schema::MapBuilder("SecondaryIndexesCapacityMap")
                     .PutMember("key", smithy::schema::Schema::CreateString("key"))
                     .PutMember("value", BatchGetItemResultSchemaCache<BatchGetItemResult_CapacitySchemaSerdeDeser>::Get())
                     .Build())
      .PutMember("GlobalSecondaryIndexes",
                 smithy::schema::Schema::MapBuilder("SecondaryIndexesCapacityMap")
                     .PutMember("key", smithy::schema::Schema::CreateString("key"))
                     .PutMember("value", BatchGetItemResultSchemaCache<BatchGetItemResult_CapacitySchemaSerdeDeser>::Get())
                     .Build())
      .PutMember("VectorIndexes",
                 smithy::schema::Schema::MapBuilder("VectorIndexesCapacityMap")
                     .PutMember("key", smithy::schema::Schema::CreateString("key"))
                     .PutMember("value", BatchGetItemResultSchemaCache<BatchGetItemResult_VectorCapacitySchemaSerdeDeser>::Get())
                     .Build())
      .Build();
}

void BatchGetItemResult_CapacitySchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
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

std::shared_ptr<const smithy::schema::Schema> BatchGetItemResult_CapacitySchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("Capacity")
      .PutMember("ReadCapacityUnits", smithy::schema::Schema::CreateDouble("ReadCapacityUnits"))
      .PutMember("WriteCapacityUnits", smithy::schema::Schema::CreateDouble("WriteCapacityUnits"))
      .PutMember("CapacityUnits", smithy::schema::Schema::CreateDouble("CapacityUnits"))
      .Build();
}

void BatchGetItemResult_VectorCapacitySchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
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

std::shared_ptr<const smithy::schema::Schema> BatchGetItemResult_VectorCapacitySchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("VectorCapacity")
      .PutMember("VectorSearchRequestBytes", smithy::schema::Schema::CreateDouble("VectorSearchRequestBytes"))
      .PutMember("VectorWriteRequestBytes", smithy::schema::Schema::CreateDouble("VectorWriteRequestBytes"))
      .Build();
}

void BatchGetItemResultDeserializable::From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "Responses") {
    Aws::Map<Aws::String, Aws::Vector<Aws::Map<Aws::String, AttributeValue>>> map0;
    deserializer.ReadMap(memberSchema, [&](const Aws::String& key0, smithy::schema::ShapeDeserializer& valueDeserializer0) {
      const smithy::schema::Schema& valueSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("value").value();
      Aws::Vector<Aws::Map<Aws::String, AttributeValue>> list1;
      valueDeserializer0.ReadList(valueSchema0, [&](smithy::schema::ShapeDeserializer& itemDeserializer1) {
        const smithy::schema::Schema& itemSchema1 = *valueSchema0.GetMemberTarget().value()->GetMember("member").value();
        Aws::Map<Aws::String, AttributeValue> map2;
        itemDeserializer1.ReadMap(itemSchema1, [&](const Aws::String& key2, smithy::schema::ShapeDeserializer& valueDeserializer2) {
          AttributeValue nested3;
          BatchGetItemResult_AttributeValueSchemaSerdeDeser{nested3}.Deserialize(valueDeserializer2);
          map2[key2] = std::move(nested3);
        });
        list1.push_back(std::move(map2));
      });
      map0[key0] = std::move(list1);
    });
    m_obj.SetResponses(std::move(map0));
    return;
  }
  if (memberName == "UnprocessedKeys") {
    Aws::Map<Aws::String, KeysAndAttributes> map0;
    deserializer.ReadMap(memberSchema, [&](const Aws::String& key0, smithy::schema::ShapeDeserializer& valueDeserializer0) {
      KeysAndAttributes nested1;
      BatchGetItemResult_KeysAndAttributesSchemaSerdeDeser{nested1}.Deserialize(valueDeserializer0);
      map0[key0] = std::move(nested1);
    });
    m_obj.SetUnprocessedKeys(std::move(map0));
    return;
  }
  if (memberName == "ConsumedCapacity") {
    Aws::Vector<ConsumedCapacity> list0;
    deserializer.ReadList(memberSchema, [&](smithy::schema::ShapeDeserializer& itemDeserializer0) {
      ConsumedCapacity nested1;
      BatchGetItemResult_ConsumedCapacitySchemaSerdeDeser{nested1}.Deserialize(itemDeserializer0);
      list0.push_back(std::move(nested1));
    });
    m_obj.SetConsumedCapacity(std::move(list0));
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> BatchGetItemResultDeserializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("BatchGetItemResult")
      .PutMember(
          "Responses",
          smithy::schema::Schema::MapBuilder("BatchGetResponseMap")
              .PutMember("key", smithy::schema::Schema::CreateString("key"))
              .PutMember("value",
                         smithy::schema::Schema::ListBuilder("ItemList")
                             .PutMember("member", smithy::schema::Schema::MapBuilder("AttributeMap")
                                                      .PutMember("key", smithy::schema::Schema::CreateString("key"))
                                                      .PutMember("value", smithy::schema::Schema::UnionBuilder("AttributeValue").Build())
                                                      .Build())
                             .Build())
              .Build())
      .PutMember("UnprocessedKeys",
                 smithy::schema::Schema::MapBuilder("BatchGetRequestMap")
                     .PutMember("key", smithy::schema::Schema::CreateString("key"))
                     .PutMember("value", BatchGetItemResultSchemaCache<BatchGetItemResult_KeysAndAttributesSchemaSerdeDeser>::Get())
                     .Build())
      .PutMember("ConsumedCapacity",
                 smithy::schema::Schema::ListBuilder("ConsumedCapacityMultiple")
                     .PutMember("member", BatchGetItemResultSchemaCache<BatchGetItemResult_ConsumedCapacitySchemaSerdeDeser>::Get())
                     .Build())
      .Build();
}

}  // namespace
}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws

Aws::UniquePtr<smithy::schema::SerializableStruct> BatchGetItemResult::GetSchemaSerdeOutput() {
  return Aws::MakeUnique<BatchGetItemResultDeserializable>("BatchGetItemResultDeserializable", *this);
}
