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
#include <aws/dynamodb/model/BatchWriteItemResult.h>
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

BatchWriteItemResult::BatchWriteItemResult(const Aws::AmazonWebServiceResult<Aws::String>& result) { *this = result; }

BatchWriteItemResult& BatchWriteItemResult::operator=(const Aws::AmazonWebServiceResult<Aws::String>& result) {
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
class BatchWriteItemResult_WriteRequestSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit BatchWriteItemResult_WriteRequestSchemaSerdeDeser(WriteRequest& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  WriteRequest& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class BatchWriteItemResult_PutRequestSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit BatchWriteItemResult_PutRequestSchemaSerdeDeser(PutRequest& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  PutRequest& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class BatchWriteItemResult_AttributeValueSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit BatchWriteItemResult_AttributeValueSchemaSerdeDeser(AttributeValue& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  AttributeValue& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class BatchWriteItemResult_DeleteRequestSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit BatchWriteItemResult_DeleteRequestSchemaSerdeDeser(DeleteRequest& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  DeleteRequest& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class BatchWriteItemResult_ItemCollectionMetricsSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit BatchWriteItemResult_ItemCollectionMetricsSchemaSerdeDeser(ItemCollectionMetrics& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  ItemCollectionMetrics& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class BatchWriteItemResult_ConsumedCapacitySchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit BatchWriteItemResult_ConsumedCapacitySchemaSerdeDeser(ConsumedCapacity& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  ConsumedCapacity& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class BatchWriteItemResult_CapacitySchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit BatchWriteItemResult_CapacitySchemaSerdeDeser(Capacity& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  Capacity& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class BatchWriteItemResult_VectorCapacitySchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit BatchWriteItemResult_VectorCapacitySchemaSerdeDeser(VectorCapacity& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  VectorCapacity& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class BatchWriteItemResultDeserializable final : public smithy::schema::SerializableStruct {
 public:
  explicit BatchWriteItemResultDeserializable(BatchWriteItemResult& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  BatchWriteItemResult& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void BatchWriteItemResult_WriteRequestSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
                                                             smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "PutRequest") {
    PutRequest nested0;
    BatchWriteItemResult_PutRequestSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetPutRequest(std::move(nested0));
    return;
  }
  if (memberName == "DeleteRequest") {
    DeleteRequest nested0;
    BatchWriteItemResult_DeleteRequestSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetDeleteRequest(std::move(nested0));
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> BatchWriteItemResult_WriteRequestSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("WriteRequest")
      .PutMember("PutRequest", BatchWriteItemResult_PutRequestSchemaSerdeDeser::BuildSchema())
      .PutMember("DeleteRequest", BatchWriteItemResult_DeleteRequestSchemaSerdeDeser::BuildSchema())
      .Build();
}

void BatchWriteItemResult_PutRequestSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
                                                           smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "Item") {
    Aws::Map<Aws::String, AttributeValue> map0;
    deserializer.ReadMap(memberSchema, [&](const Aws::String& key0, smithy::schema::ShapeDeserializer& valueDeserializer0) {
      AttributeValue nested1;
      BatchWriteItemResult_AttributeValueSchemaSerdeDeser{nested1}.Deserialize(valueDeserializer0);
      map0[key0] = std::move(nested1);
    });
    m_obj.SetItem(std::move(map0));
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> BatchWriteItemResult_PutRequestSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("PutRequest")
      .PutMember("Item", smithy::schema::Schema::MapBuilder("PutItemInputAttributeMap")
                             .PutMember("key", smithy::schema::Schema::CreateString("key"))
                             .PutMember("value", smithy::schema::Schema::UnionBuilder("AttributeValue").Build())
                             .Build())
      .Build();
}

void BatchWriteItemResult_AttributeValueSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
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
      BatchWriteItemResult_AttributeValueSchemaSerdeDeser{*nested}.Deserialize(valueDeserializer);
      m_obj.AddMEntry(key, nested);
    });
    return;
  }
  if (memberName == "L") {
    m_obj.SetL({});
    deserializer.ReadList(memberSchema, [&](smithy::schema::ShapeDeserializer& itemDeserializer) {
      auto nested = Aws::MakeShared<AttributeValue>("AttributeValue");
      BatchWriteItemResult_AttributeValueSchemaSerdeDeser{*nested}.Deserialize(itemDeserializer);
      m_obj.AddLItem(nested);
    });
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> BatchWriteItemResult_AttributeValueSchemaSerdeDeser::BuildSchema() {
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

void BatchWriteItemResult_DeleteRequestSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
                                                              smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "Key") {
    Aws::Map<Aws::String, AttributeValue> map0;
    deserializer.ReadMap(memberSchema, [&](const Aws::String& key0, smithy::schema::ShapeDeserializer& valueDeserializer0) {
      AttributeValue nested1;
      BatchWriteItemResult_AttributeValueSchemaSerdeDeser{nested1}.Deserialize(valueDeserializer0);
      map0[key0] = std::move(nested1);
    });
    m_obj.SetKey(std::move(map0));
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> BatchWriteItemResult_DeleteRequestSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("DeleteRequest")
      .PutMember("Key", smithy::schema::Schema::MapBuilder("Key")
                            .PutMember("key", smithy::schema::Schema::CreateString("key"))
                            .PutMember("value", smithy::schema::Schema::UnionBuilder("AttributeValue").Build())
                            .Build())
      .Build();
}

void BatchWriteItemResult_ItemCollectionMetricsSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
                                                                      smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "ItemCollectionKey") {
    Aws::Map<Aws::String, AttributeValue> map0;
    deserializer.ReadMap(memberSchema, [&](const Aws::String& key0, smithy::schema::ShapeDeserializer& valueDeserializer0) {
      AttributeValue nested1;
      BatchWriteItemResult_AttributeValueSchemaSerdeDeser{nested1}.Deserialize(valueDeserializer0);
      map0[key0] = std::move(nested1);
    });
    m_obj.SetItemCollectionKey(std::move(map0));
    return;
  }
  if (memberName == "SizeEstimateRangeGB") {
    Aws::Vector<double> list0;
    deserializer.ReadList(memberSchema, [&](smithy::schema::ShapeDeserializer& itemDeserializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      auto value1 = itemDeserializer0.ReadDouble(itemSchema0);
      if (value1.has_value()) {
        list0.push_back(*value1);
      }
    });
    m_obj.SetSizeEstimateRangeGB(std::move(list0));
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> BatchWriteItemResult_ItemCollectionMetricsSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("ItemCollectionMetrics")
      .PutMember("ItemCollectionKey", smithy::schema::Schema::MapBuilder("ItemCollectionKeyAttributeMap")
                                          .PutMember("key", smithy::schema::Schema::CreateString("key"))
                                          .PutMember("value", smithy::schema::Schema::UnionBuilder("AttributeValue").Build())
                                          .Build())
      .PutMember("SizeEstimateRangeGB", smithy::schema::Schema::ListBuilder("ItemCollectionSizeEstimateRange")
                                            .PutMember("member", smithy::schema::Schema::CreateDouble("member"))
                                            .Build())
      .Build();
}

void BatchWriteItemResult_ConsumedCapacitySchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
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
    BatchWriteItemResult_CapacitySchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetTable(std::move(nested0));
    return;
  }
  if (memberName == "LocalSecondaryIndexes") {
    Aws::Map<Aws::String, Capacity> map0;
    deserializer.ReadMap(memberSchema, [&](const Aws::String& key0, smithy::schema::ShapeDeserializer& valueDeserializer0) {
      Capacity nested1;
      BatchWriteItemResult_CapacitySchemaSerdeDeser{nested1}.Deserialize(valueDeserializer0);
      map0[key0] = std::move(nested1);
    });
    m_obj.SetLocalSecondaryIndexes(std::move(map0));
    return;
  }
  if (memberName == "GlobalSecondaryIndexes") {
    Aws::Map<Aws::String, Capacity> map0;
    deserializer.ReadMap(memberSchema, [&](const Aws::String& key0, smithy::schema::ShapeDeserializer& valueDeserializer0) {
      Capacity nested1;
      BatchWriteItemResult_CapacitySchemaSerdeDeser{nested1}.Deserialize(valueDeserializer0);
      map0[key0] = std::move(nested1);
    });
    m_obj.SetGlobalSecondaryIndexes(std::move(map0));
    return;
  }
  if (memberName == "VectorIndexes") {
    Aws::Map<Aws::String, VectorCapacity> map0;
    deserializer.ReadMap(memberSchema, [&](const Aws::String& key0, smithy::schema::ShapeDeserializer& valueDeserializer0) {
      VectorCapacity nested1;
      BatchWriteItemResult_VectorCapacitySchemaSerdeDeser{nested1}.Deserialize(valueDeserializer0);
      map0[key0] = std::move(nested1);
    });
    m_obj.SetVectorIndexes(std::move(map0));
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> BatchWriteItemResult_ConsumedCapacitySchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("ConsumedCapacity")
      .PutMember("TableName", smithy::schema::Schema::CreateString("TableName"))
      .PutMember("CapacityUnits", smithy::schema::Schema::CreateDouble("CapacityUnits"))
      .PutMember("ReadCapacityUnits", smithy::schema::Schema::CreateDouble("ReadCapacityUnits"))
      .PutMember("WriteCapacityUnits", smithy::schema::Schema::CreateDouble("WriteCapacityUnits"))
      .PutMember("Table", BatchWriteItemResult_CapacitySchemaSerdeDeser::BuildSchema())
      .PutMember("LocalSecondaryIndexes", smithy::schema::Schema::MapBuilder("SecondaryIndexesCapacityMap")
                                              .PutMember("key", smithy::schema::Schema::CreateString("key"))
                                              .PutMember("value", BatchWriteItemResult_CapacitySchemaSerdeDeser::BuildSchema())
                                              .Build())
      .PutMember("GlobalSecondaryIndexes", smithy::schema::Schema::MapBuilder("SecondaryIndexesCapacityMap")
                                               .PutMember("key", smithy::schema::Schema::CreateString("key"))
                                               .PutMember("value", BatchWriteItemResult_CapacitySchemaSerdeDeser::BuildSchema())
                                               .Build())
      .PutMember("VectorIndexes", smithy::schema::Schema::MapBuilder("VectorIndexesCapacityMap")
                                      .PutMember("key", smithy::schema::Schema::CreateString("key"))
                                      .PutMember("value", BatchWriteItemResult_VectorCapacitySchemaSerdeDeser::BuildSchema())
                                      .Build())
      .Build();
}

void BatchWriteItemResult_CapacitySchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
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

std::shared_ptr<const smithy::schema::Schema> BatchWriteItemResult_CapacitySchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("Capacity")
      .PutMember("ReadCapacityUnits", smithy::schema::Schema::CreateDouble("ReadCapacityUnits"))
      .PutMember("WriteCapacityUnits", smithy::schema::Schema::CreateDouble("WriteCapacityUnits"))
      .PutMember("CapacityUnits", smithy::schema::Schema::CreateDouble("CapacityUnits"))
      .Build();
}

void BatchWriteItemResult_VectorCapacitySchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
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

std::shared_ptr<const smithy::schema::Schema> BatchWriteItemResult_VectorCapacitySchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("VectorCapacity")
      .PutMember("VectorSearchRequestBytes", smithy::schema::Schema::CreateDouble("VectorSearchRequestBytes"))
      .PutMember("VectorWriteRequestBytes", smithy::schema::Schema::CreateDouble("VectorWriteRequestBytes"))
      .Build();
}

void BatchWriteItemResultDeserializable::From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "UnprocessedItems") {
    Aws::Map<Aws::String, Aws::Vector<WriteRequest>> map0;
    deserializer.ReadMap(memberSchema, [&](const Aws::String& key0, smithy::schema::ShapeDeserializer& valueDeserializer0) {
      const smithy::schema::Schema& valueSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("value").value();
      Aws::Vector<WriteRequest> list1;
      valueDeserializer0.ReadList(valueSchema0, [&](smithy::schema::ShapeDeserializer& itemDeserializer1) {
        WriteRequest nested2;
        BatchWriteItemResult_WriteRequestSchemaSerdeDeser{nested2}.Deserialize(itemDeserializer1);
        list1.push_back(std::move(nested2));
      });
      map0[key0] = std::move(list1);
    });
    m_obj.SetUnprocessedItems(std::move(map0));
    return;
  }
  if (memberName == "ItemCollectionMetrics") {
    Aws::Map<Aws::String, Aws::Vector<ItemCollectionMetrics>> map0;
    deserializer.ReadMap(memberSchema, [&](const Aws::String& key0, smithy::schema::ShapeDeserializer& valueDeserializer0) {
      const smithy::schema::Schema& valueSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("value").value();
      Aws::Vector<ItemCollectionMetrics> list1;
      valueDeserializer0.ReadList(valueSchema0, [&](smithy::schema::ShapeDeserializer& itemDeserializer1) {
        ItemCollectionMetrics nested2;
        BatchWriteItemResult_ItemCollectionMetricsSchemaSerdeDeser{nested2}.Deserialize(itemDeserializer1);
        list1.push_back(std::move(nested2));
      });
      map0[key0] = std::move(list1);
    });
    m_obj.SetItemCollectionMetrics(std::move(map0));
    return;
  }
  if (memberName == "ConsumedCapacity") {
    Aws::Vector<ConsumedCapacity> list0;
    deserializer.ReadList(memberSchema, [&](smithy::schema::ShapeDeserializer& itemDeserializer0) {
      ConsumedCapacity nested1;
      BatchWriteItemResult_ConsumedCapacitySchemaSerdeDeser{nested1}.Deserialize(itemDeserializer0);
      list0.push_back(std::move(nested1));
    });
    m_obj.SetConsumedCapacity(std::move(list0));
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> BatchWriteItemResultDeserializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("BatchWriteItemResult")
      .PutMember("UnprocessedItems",
                 smithy::schema::Schema::MapBuilder("BatchWriteItemRequestMap")
                     .PutMember("key", smithy::schema::Schema::CreateString("key"))
                     .PutMember("value", smithy::schema::Schema::ListBuilder("WriteRequests")
                                             .PutMember("member", BatchWriteItemResult_WriteRequestSchemaSerdeDeser::BuildSchema())
                                             .Build())
                     .Build())
      .PutMember("ItemCollectionMetrics",
                 smithy::schema::Schema::MapBuilder("ItemCollectionMetricsPerTable")
                     .PutMember("key", smithy::schema::Schema::CreateString("key"))
                     .PutMember("value", smithy::schema::Schema::ListBuilder("ItemCollectionMetricsMultiple")
                                             .PutMember("member", BatchWriteItemResult_ItemCollectionMetricsSchemaSerdeDeser::BuildSchema())
                                             .Build())
                     .Build())
      .PutMember("ConsumedCapacity", smithy::schema::Schema::ListBuilder("ConsumedCapacityMultiple")
                                         .PutMember("member", BatchWriteItemResult_ConsumedCapacitySchemaSerdeDeser::BuildSchema())
                                         .Build())
      .Build();
}

}  // namespace
}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws

Aws::UniquePtr<smithy::schema::SerializableStruct> BatchWriteItemResult::GetSchemaSerdeOutput() {
  return Aws::MakeUnique<BatchWriteItemResultDeserializable>("BatchWriteItemResultDeserializable", *this);
}
