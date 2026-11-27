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
#include <aws/dynamodb/model/TransactWriteItemsRequest.h>
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
class TransactWriteItemsRequestSchemaCache {
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
        Aws::New<std::shared_ptr<const smithy::schema::Schema>>("TransactWriteItemsRequestSchemaCache", Adapter::BuildSchema());
    Aws::Utils::ComponentRegistry::RegisterComponent("TransactWriteItemsRequestSchemaCache", built, &Release);
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
std::atomic<std::shared_ptr<const smithy::schema::Schema>*> TransactWriteItemsRequestSchemaCache<Adapter>::s_schema{nullptr};
template <typename Adapter>
std::mutex TransactWriteItemsRequestSchemaCache<Adapter>::s_mutex;

class TransactWriteItemsRequest_TransactWriteItemSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit TransactWriteItemsRequest_TransactWriteItemSchemaSerdeSer(const TransactWriteItem& obj)
      : m_obj(obj), m_schema(TransactWriteItemsRequestSchemaCache<TransactWriteItemsRequest_TransactWriteItemSchemaSerdeSer>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const TransactWriteItem& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class TransactWriteItemsRequest_ConditionCheckSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit TransactWriteItemsRequest_ConditionCheckSchemaSerdeSer(const ConditionCheck& obj)
      : m_obj(obj), m_schema(TransactWriteItemsRequestSchemaCache<TransactWriteItemsRequest_ConditionCheckSchemaSerdeSer>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const ConditionCheck& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class TransactWriteItemsRequest_AttributeValueSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit TransactWriteItemsRequest_AttributeValueSchemaSerdeSer(const AttributeValue& obj)
      : m_obj(obj), m_schema(TransactWriteItemsRequestSchemaCache<TransactWriteItemsRequest_AttributeValueSchemaSerdeSer>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const AttributeValue& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class TransactWriteItemsRequest_PutSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit TransactWriteItemsRequest_PutSchemaSerdeSer(const Put& obj)
      : m_obj(obj), m_schema(TransactWriteItemsRequestSchemaCache<TransactWriteItemsRequest_PutSchemaSerdeSer>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const Put& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class TransactWriteItemsRequest_DeleteSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit TransactWriteItemsRequest_DeleteSchemaSerdeSer(const Delete& obj)
      : m_obj(obj), m_schema(TransactWriteItemsRequestSchemaCache<TransactWriteItemsRequest_DeleteSchemaSerdeSer>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const Delete& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class TransactWriteItemsRequest_UpdateSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit TransactWriteItemsRequest_UpdateSchemaSerdeSer(const Update& obj)
      : m_obj(obj), m_schema(TransactWriteItemsRequestSchemaCache<TransactWriteItemsRequest_UpdateSchemaSerdeSer>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const Update& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class TransactWriteItemsRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit TransactWriteItemsRequestSerializable(const TransactWriteItemsRequest& obj)
      : m_obj(obj), m_schema(TransactWriteItemsRequestSchemaCache<TransactWriteItemsRequestSerializable>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const TransactWriteItemsRequest& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void TransactWriteItemsRequest_TransactWriteItemSchemaSerdeSer::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.ConditionCheckHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ConditionCheck").value();
    TransactWriteItemsRequest_ConditionCheckSchemaSerdeSer nested0(m_obj.GetConditionCheck());
    serializer.WriteStruct(memberSchema, nested0);
  }
  if (m_obj.PutHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("Put").value();
    TransactWriteItemsRequest_PutSchemaSerdeSer nested0(m_obj.GetPut());
    serializer.WriteStruct(memberSchema, nested0);
  }
  if (m_obj.DeleteHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("Delete").value();
    TransactWriteItemsRequest_DeleteSchemaSerdeSer nested0(m_obj.GetDelete());
    serializer.WriteStruct(memberSchema, nested0);
  }
  if (m_obj.UpdateHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("Update").value();
    TransactWriteItemsRequest_UpdateSchemaSerdeSer nested0(m_obj.GetUpdate());
    serializer.WriteStruct(memberSchema, nested0);
  }
}

std::shared_ptr<const smithy::schema::Schema> TransactWriteItemsRequest_TransactWriteItemSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("TransactWriteItem")
      .PutMember("ConditionCheck", TransactWriteItemsRequestSchemaCache<TransactWriteItemsRequest_ConditionCheckSchemaSerdeSer>::Get())
      .PutMember("Put", TransactWriteItemsRequestSchemaCache<TransactWriteItemsRequest_PutSchemaSerdeSer>::Get())
      .PutMember("Delete", TransactWriteItemsRequestSchemaCache<TransactWriteItemsRequest_DeleteSchemaSerdeSer>::Get())
      .PutMember("Update", TransactWriteItemsRequestSchemaCache<TransactWriteItemsRequest_UpdateSchemaSerdeSer>::Get())
      .Build();
}

void TransactWriteItemsRequest_ConditionCheckSchemaSerdeSer::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.KeyHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("Key").value();
    serializer.WriteMap(memberSchema, m_obj.GetKey().size(), [&](smithy::schema::MapSerializer& mapSerializer0) {
      const smithy::schema::Schema& valueSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("value").value();
      for (const auto& entry0 : m_obj.GetKey()) {
        mapSerializer0.WriteEntry(entry0.first, [&](smithy::schema::ShapeSerializer& valueSerializer0) {
          TransactWriteItemsRequest_AttributeValueSchemaSerdeSer nested1(entry0.second);
          valueSerializer0.WriteStruct(valueSchema0, nested1);
        });
      }
    });
  }
  if (m_obj.TableNameHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("TableName").value();
    serializer.WriteString(memberSchema, m_obj.GetTableName());
  }
  if (m_obj.ConditionExpressionHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ConditionExpression").value();
    serializer.WriteString(memberSchema, m_obj.GetConditionExpression());
  }
  if (m_obj.ExpressionAttributeNamesHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ExpressionAttributeNames").value();
    serializer.WriteMap(memberSchema, m_obj.GetExpressionAttributeNames().size(), [&](smithy::schema::MapSerializer& mapSerializer0) {
      const smithy::schema::Schema& valueSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("value").value();
      for (const auto& entry0 : m_obj.GetExpressionAttributeNames()) {
        mapSerializer0.WriteEntry(entry0.first, [&](smithy::schema::ShapeSerializer& valueSerializer0) {
          valueSerializer0.WriteString(valueSchema0, entry0.second);
        });
      }
    });
  }
  if (m_obj.ExpressionAttributeValuesHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ExpressionAttributeValues").value();
    serializer.WriteMap(memberSchema, m_obj.GetExpressionAttributeValues().size(), [&](smithy::schema::MapSerializer& mapSerializer0) {
      const smithy::schema::Schema& valueSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("value").value();
      for (const auto& entry0 : m_obj.GetExpressionAttributeValues()) {
        mapSerializer0.WriteEntry(entry0.first, [&](smithy::schema::ShapeSerializer& valueSerializer0) {
          TransactWriteItemsRequest_AttributeValueSchemaSerdeSer nested1(entry0.second);
          valueSerializer0.WriteStruct(valueSchema0, nested1);
        });
      }
    });
  }
  if (m_obj.ReturnValuesOnConditionCheckFailureHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ReturnValuesOnConditionCheckFailure").value();
    serializer.WriteString(memberSchema, ReturnValuesOnConditionCheckFailureMapper::GetNameForReturnValuesOnConditionCheckFailure(
                                             m_obj.GetReturnValuesOnConditionCheckFailure()));
  }
}

std::shared_ptr<const smithy::schema::Schema> TransactWriteItemsRequest_ConditionCheckSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("ConditionCheck")
      .PutMember("Key", smithy::schema::Schema::MapBuilder("Key")
                            .PutMember("key", smithy::schema::Schema::CreateString("key"))
                            .PutMember("value", smithy::schema::Schema::UnionBuilder("AttributeValue").Build())
                            .Build())
      .PutMember("TableName", smithy::schema::Schema::CreateString("TableName"))
      .PutMember("ConditionExpression", smithy::schema::Schema::CreateString("ConditionExpression"))
      .PutMember("ExpressionAttributeNames", smithy::schema::Schema::MapBuilder("ExpressionAttributeNameMap")
                                                 .PutMember("key", smithy::schema::Schema::CreateString("key"))
                                                 .PutMember("value", smithy::schema::Schema::CreateString("value"))
                                                 .Build())
      .PutMember("ExpressionAttributeValues", smithy::schema::Schema::MapBuilder("ExpressionAttributeValueMap")
                                                  .PutMember("key", smithy::schema::Schema::CreateString("key"))
                                                  .PutMember("value", smithy::schema::Schema::UnionBuilder("AttributeValue").Build())
                                                  .Build())
      .PutMember("ReturnValuesOnConditionCheckFailure", smithy::schema::Schema::CreateEnum("ReturnValuesOnConditionCheckFailure"))
      .Build();
}

void TransactWriteItemsRequest_AttributeValueSchemaSerdeSer::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (!m_obj.HasValue()) {
    return;
  }
  switch (m_obj.GetType()) {
    case ValueType::STRING:
      serializer.WriteString(*m_schema->GetMember("S").value(), m_obj.GetS());
      break;
    case ValueType::NUMBER:
      serializer.WriteString(*m_schema->GetMember("N").value(), m_obj.GetN());
      break;
    case ValueType::BYTEBUFFER:
      serializer.WriteBlob(*m_schema->GetMember("B").value(), m_obj.GetB());
      break;
    case ValueType::BOOL:
      serializer.WriteBoolean(*m_schema->GetMember("BOOL").value(), m_obj.GetBool());
      break;
    case ValueType::NULLVALUE:
      serializer.WriteBoolean(*m_schema->GetMember("NULL").value(), m_obj.GetNull());
      break;
    case ValueType::STRING_SET: {
      const smithy::schema::Schema& setSchema = *m_schema->GetMember("SS").value();
      const auto items = m_obj.GetSS();
      serializer.WriteList(setSchema, items.size(), [&](smithy::schema::ShapeSerializer& listSerializer) {
        const smithy::schema::Schema& itemSchema = *setSchema.GetMemberTarget().value()->GetMember("member").value();
        for (const auto& item : items) {
          listSerializer.WriteString(itemSchema, item);
        }
      });
      break;
    }
    case ValueType::NUMBER_SET: {
      const smithy::schema::Schema& setSchema = *m_schema->GetMember("NS").value();
      const auto items = m_obj.GetNS();
      serializer.WriteList(setSchema, items.size(), [&](smithy::schema::ShapeSerializer& listSerializer) {
        const smithy::schema::Schema& itemSchema = *setSchema.GetMemberTarget().value()->GetMember("member").value();
        for (const auto& item : items) {
          listSerializer.WriteString(itemSchema, item);
        }
      });
      break;
    }
    case ValueType::BYTEBUFFER_SET: {
      const smithy::schema::Schema& setSchema = *m_schema->GetMember("BS").value();
      const auto items = m_obj.GetBS();
      serializer.WriteList(setSchema, items.size(), [&](smithy::schema::ShapeSerializer& listSerializer) {
        const smithy::schema::Schema& itemSchema = *setSchema.GetMemberTarget().value()->GetMember("member").value();
        for (const auto& item : items) {
          listSerializer.WriteBlob(itemSchema, item);
        }
      });
      break;
    }
    case ValueType::ATTRIBUTE_MAP: {
      const smithy::schema::Schema& mapSchema = *m_schema->GetMember("M").value();
      const auto entries = m_obj.GetM();
      serializer.WriteMap(mapSchema, entries.size(), [&](smithy::schema::MapSerializer& mapSerializer) {
        const smithy::schema::Schema& valueSchema = *mapSchema.GetMemberTarget().value()->GetMember("value").value();
        for (const auto& entry : entries) {
          mapSerializer.WriteEntry(entry.first, [&](smithy::schema::ShapeSerializer& valueSerializer) {
            if (entry.second) {
              TransactWriteItemsRequest_AttributeValueSchemaSerdeSer nested(*entry.second);
              valueSerializer.WriteStruct(valueSchema, nested);
            } else {
              valueSerializer.WriteNull(valueSchema);
            }
          });
        }
      });
      break;
    }
    case ValueType::ATTRIBUTE_LIST: {
      const smithy::schema::Schema& listSchema = *m_schema->GetMember("L").value();
      const auto items = m_obj.GetL();
      serializer.WriteList(listSchema, items.size(), [&](smithy::schema::ShapeSerializer& listSerializer) {
        const smithy::schema::Schema& itemSchema = *listSchema.GetMemberTarget().value()->GetMember("member").value();
        for (const auto& item : items) {
          if (item) {
            TransactWriteItemsRequest_AttributeValueSchemaSerdeSer nested(*item);
            listSerializer.WriteStruct(itemSchema, nested);
          } else {
            listSerializer.WriteNull(itemSchema);
          }
        }
      });
      break;
    }
  }
}

std::shared_ptr<const smithy::schema::Schema> TransactWriteItemsRequest_AttributeValueSchemaSerdeSer::BuildSchema() {
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

void TransactWriteItemsRequest_PutSchemaSerdeSer::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.ItemHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("Item").value();
    serializer.WriteMap(memberSchema, m_obj.GetItem().size(), [&](smithy::schema::MapSerializer& mapSerializer0) {
      const smithy::schema::Schema& valueSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("value").value();
      for (const auto& entry0 : m_obj.GetItem()) {
        mapSerializer0.WriteEntry(entry0.first, [&](smithy::schema::ShapeSerializer& valueSerializer0) {
          TransactWriteItemsRequest_AttributeValueSchemaSerdeSer nested1(entry0.second);
          valueSerializer0.WriteStruct(valueSchema0, nested1);
        });
      }
    });
  }
  if (m_obj.TableNameHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("TableName").value();
    serializer.WriteString(memberSchema, m_obj.GetTableName());
  }
  if (m_obj.ConditionExpressionHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ConditionExpression").value();
    serializer.WriteString(memberSchema, m_obj.GetConditionExpression());
  }
  if (m_obj.ExpressionAttributeNamesHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ExpressionAttributeNames").value();
    serializer.WriteMap(memberSchema, m_obj.GetExpressionAttributeNames().size(), [&](smithy::schema::MapSerializer& mapSerializer0) {
      const smithy::schema::Schema& valueSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("value").value();
      for (const auto& entry0 : m_obj.GetExpressionAttributeNames()) {
        mapSerializer0.WriteEntry(entry0.first, [&](smithy::schema::ShapeSerializer& valueSerializer0) {
          valueSerializer0.WriteString(valueSchema0, entry0.second);
        });
      }
    });
  }
  if (m_obj.ExpressionAttributeValuesHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ExpressionAttributeValues").value();
    serializer.WriteMap(memberSchema, m_obj.GetExpressionAttributeValues().size(), [&](smithy::schema::MapSerializer& mapSerializer0) {
      const smithy::schema::Schema& valueSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("value").value();
      for (const auto& entry0 : m_obj.GetExpressionAttributeValues()) {
        mapSerializer0.WriteEntry(entry0.first, [&](smithy::schema::ShapeSerializer& valueSerializer0) {
          TransactWriteItemsRequest_AttributeValueSchemaSerdeSer nested1(entry0.second);
          valueSerializer0.WriteStruct(valueSchema0, nested1);
        });
      }
    });
  }
  if (m_obj.ReturnValuesOnConditionCheckFailureHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ReturnValuesOnConditionCheckFailure").value();
    serializer.WriteString(memberSchema, ReturnValuesOnConditionCheckFailureMapper::GetNameForReturnValuesOnConditionCheckFailure(
                                             m_obj.GetReturnValuesOnConditionCheckFailure()));
  }
}

std::shared_ptr<const smithy::schema::Schema> TransactWriteItemsRequest_PutSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("Put")
      .PutMember("Item", smithy::schema::Schema::MapBuilder("PutItemInputAttributeMap")
                             .PutMember("key", smithy::schema::Schema::CreateString("key"))
                             .PutMember("value", smithy::schema::Schema::UnionBuilder("AttributeValue").Build())
                             .Build())
      .PutMember("TableName", smithy::schema::Schema::CreateString("TableName"))
      .PutMember("ConditionExpression", smithy::schema::Schema::CreateString("ConditionExpression"))
      .PutMember("ExpressionAttributeNames", smithy::schema::Schema::MapBuilder("ExpressionAttributeNameMap")
                                                 .PutMember("key", smithy::schema::Schema::CreateString("key"))
                                                 .PutMember("value", smithy::schema::Schema::CreateString("value"))
                                                 .Build())
      .PutMember("ExpressionAttributeValues", smithy::schema::Schema::MapBuilder("ExpressionAttributeValueMap")
                                                  .PutMember("key", smithy::schema::Schema::CreateString("key"))
                                                  .PutMember("value", smithy::schema::Schema::UnionBuilder("AttributeValue").Build())
                                                  .Build())
      .PutMember("ReturnValuesOnConditionCheckFailure", smithy::schema::Schema::CreateEnum("ReturnValuesOnConditionCheckFailure"))
      .Build();
}

void TransactWriteItemsRequest_DeleteSchemaSerdeSer::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.KeyHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("Key").value();
    serializer.WriteMap(memberSchema, m_obj.GetKey().size(), [&](smithy::schema::MapSerializer& mapSerializer0) {
      const smithy::schema::Schema& valueSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("value").value();
      for (const auto& entry0 : m_obj.GetKey()) {
        mapSerializer0.WriteEntry(entry0.first, [&](smithy::schema::ShapeSerializer& valueSerializer0) {
          TransactWriteItemsRequest_AttributeValueSchemaSerdeSer nested1(entry0.second);
          valueSerializer0.WriteStruct(valueSchema0, nested1);
        });
      }
    });
  }
  if (m_obj.TableNameHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("TableName").value();
    serializer.WriteString(memberSchema, m_obj.GetTableName());
  }
  if (m_obj.ConditionExpressionHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ConditionExpression").value();
    serializer.WriteString(memberSchema, m_obj.GetConditionExpression());
  }
  if (m_obj.ExpressionAttributeNamesHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ExpressionAttributeNames").value();
    serializer.WriteMap(memberSchema, m_obj.GetExpressionAttributeNames().size(), [&](smithy::schema::MapSerializer& mapSerializer0) {
      const smithy::schema::Schema& valueSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("value").value();
      for (const auto& entry0 : m_obj.GetExpressionAttributeNames()) {
        mapSerializer0.WriteEntry(entry0.first, [&](smithy::schema::ShapeSerializer& valueSerializer0) {
          valueSerializer0.WriteString(valueSchema0, entry0.second);
        });
      }
    });
  }
  if (m_obj.ExpressionAttributeValuesHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ExpressionAttributeValues").value();
    serializer.WriteMap(memberSchema, m_obj.GetExpressionAttributeValues().size(), [&](smithy::schema::MapSerializer& mapSerializer0) {
      const smithy::schema::Schema& valueSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("value").value();
      for (const auto& entry0 : m_obj.GetExpressionAttributeValues()) {
        mapSerializer0.WriteEntry(entry0.first, [&](smithy::schema::ShapeSerializer& valueSerializer0) {
          TransactWriteItemsRequest_AttributeValueSchemaSerdeSer nested1(entry0.second);
          valueSerializer0.WriteStruct(valueSchema0, nested1);
        });
      }
    });
  }
  if (m_obj.ReturnValuesOnConditionCheckFailureHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ReturnValuesOnConditionCheckFailure").value();
    serializer.WriteString(memberSchema, ReturnValuesOnConditionCheckFailureMapper::GetNameForReturnValuesOnConditionCheckFailure(
                                             m_obj.GetReturnValuesOnConditionCheckFailure()));
  }
}

std::shared_ptr<const smithy::schema::Schema> TransactWriteItemsRequest_DeleteSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("Delete")
      .PutMember("Key", smithy::schema::Schema::MapBuilder("Key")
                            .PutMember("key", smithy::schema::Schema::CreateString("key"))
                            .PutMember("value", smithy::schema::Schema::UnionBuilder("AttributeValue").Build())
                            .Build())
      .PutMember("TableName", smithy::schema::Schema::CreateString("TableName"))
      .PutMember("ConditionExpression", smithy::schema::Schema::CreateString("ConditionExpression"))
      .PutMember("ExpressionAttributeNames", smithy::schema::Schema::MapBuilder("ExpressionAttributeNameMap")
                                                 .PutMember("key", smithy::schema::Schema::CreateString("key"))
                                                 .PutMember("value", smithy::schema::Schema::CreateString("value"))
                                                 .Build())
      .PutMember("ExpressionAttributeValues", smithy::schema::Schema::MapBuilder("ExpressionAttributeValueMap")
                                                  .PutMember("key", smithy::schema::Schema::CreateString("key"))
                                                  .PutMember("value", smithy::schema::Schema::UnionBuilder("AttributeValue").Build())
                                                  .Build())
      .PutMember("ReturnValuesOnConditionCheckFailure", smithy::schema::Schema::CreateEnum("ReturnValuesOnConditionCheckFailure"))
      .Build();
}

void TransactWriteItemsRequest_UpdateSchemaSerdeSer::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.KeyHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("Key").value();
    serializer.WriteMap(memberSchema, m_obj.GetKey().size(), [&](smithy::schema::MapSerializer& mapSerializer0) {
      const smithy::schema::Schema& valueSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("value").value();
      for (const auto& entry0 : m_obj.GetKey()) {
        mapSerializer0.WriteEntry(entry0.first, [&](smithy::schema::ShapeSerializer& valueSerializer0) {
          TransactWriteItemsRequest_AttributeValueSchemaSerdeSer nested1(entry0.second);
          valueSerializer0.WriteStruct(valueSchema0, nested1);
        });
      }
    });
  }
  if (m_obj.UpdateExpressionHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("UpdateExpression").value();
    serializer.WriteString(memberSchema, m_obj.GetUpdateExpression());
  }
  if (m_obj.TableNameHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("TableName").value();
    serializer.WriteString(memberSchema, m_obj.GetTableName());
  }
  if (m_obj.ConditionExpressionHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ConditionExpression").value();
    serializer.WriteString(memberSchema, m_obj.GetConditionExpression());
  }
  if (m_obj.ExpressionAttributeNamesHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ExpressionAttributeNames").value();
    serializer.WriteMap(memberSchema, m_obj.GetExpressionAttributeNames().size(), [&](smithy::schema::MapSerializer& mapSerializer0) {
      const smithy::schema::Schema& valueSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("value").value();
      for (const auto& entry0 : m_obj.GetExpressionAttributeNames()) {
        mapSerializer0.WriteEntry(entry0.first, [&](smithy::schema::ShapeSerializer& valueSerializer0) {
          valueSerializer0.WriteString(valueSchema0, entry0.second);
        });
      }
    });
  }
  if (m_obj.ExpressionAttributeValuesHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ExpressionAttributeValues").value();
    serializer.WriteMap(memberSchema, m_obj.GetExpressionAttributeValues().size(), [&](smithy::schema::MapSerializer& mapSerializer0) {
      const smithy::schema::Schema& valueSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("value").value();
      for (const auto& entry0 : m_obj.GetExpressionAttributeValues()) {
        mapSerializer0.WriteEntry(entry0.first, [&](smithy::schema::ShapeSerializer& valueSerializer0) {
          TransactWriteItemsRequest_AttributeValueSchemaSerdeSer nested1(entry0.second);
          valueSerializer0.WriteStruct(valueSchema0, nested1);
        });
      }
    });
  }
  if (m_obj.ReturnValuesOnConditionCheckFailureHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ReturnValuesOnConditionCheckFailure").value();
    serializer.WriteString(memberSchema, ReturnValuesOnConditionCheckFailureMapper::GetNameForReturnValuesOnConditionCheckFailure(
                                             m_obj.GetReturnValuesOnConditionCheckFailure()));
  }
}

std::shared_ptr<const smithy::schema::Schema> TransactWriteItemsRequest_UpdateSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("Update")
      .PutMember("Key", smithy::schema::Schema::MapBuilder("Key")
                            .PutMember("key", smithy::schema::Schema::CreateString("key"))
                            .PutMember("value", smithy::schema::Schema::UnionBuilder("AttributeValue").Build())
                            .Build())
      .PutMember("UpdateExpression", smithy::schema::Schema::CreateString("UpdateExpression"))
      .PutMember("TableName", smithy::schema::Schema::CreateString("TableName"))
      .PutMember("ConditionExpression", smithy::schema::Schema::CreateString("ConditionExpression"))
      .PutMember("ExpressionAttributeNames", smithy::schema::Schema::MapBuilder("ExpressionAttributeNameMap")
                                                 .PutMember("key", smithy::schema::Schema::CreateString("key"))
                                                 .PutMember("value", smithy::schema::Schema::CreateString("value"))
                                                 .Build())
      .PutMember("ExpressionAttributeValues", smithy::schema::Schema::MapBuilder("ExpressionAttributeValueMap")
                                                  .PutMember("key", smithy::schema::Schema::CreateString("key"))
                                                  .PutMember("value", smithy::schema::Schema::UnionBuilder("AttributeValue").Build())
                                                  .Build())
      .PutMember("ReturnValuesOnConditionCheckFailure", smithy::schema::Schema::CreateEnum("ReturnValuesOnConditionCheckFailure"))
      .Build();
}

void TransactWriteItemsRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.TransactItemsHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("TransactItems").value();
    serializer.WriteList(memberSchema, m_obj.GetTransactItems().size(), [&](smithy::schema::ShapeSerializer& listSerializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      for (const auto& item0 : m_obj.GetTransactItems()) {
        TransactWriteItemsRequest_TransactWriteItemSchemaSerdeSer nested1(item0);
        listSerializer0.WriteStruct(itemSchema0, nested1);
      }
    });
  }
  if (m_obj.ReturnConsumedCapacityHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ReturnConsumedCapacity").value();
    serializer.WriteString(memberSchema, ReturnConsumedCapacityMapper::GetNameForReturnConsumedCapacity(m_obj.GetReturnConsumedCapacity()));
  }
  if (m_obj.ReturnItemCollectionMetricsHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ReturnItemCollectionMetrics").value();
    serializer.WriteString(
        memberSchema, ReturnItemCollectionMetricsMapper::GetNameForReturnItemCollectionMetrics(m_obj.GetReturnItemCollectionMetrics()));
  }
  if (m_obj.ClientRequestTokenHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ClientRequestToken").value();
    serializer.WriteString(memberSchema, m_obj.GetClientRequestToken());
  }
}

std::shared_ptr<const smithy::schema::Schema> TransactWriteItemsRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("TransactWriteItemsRequest")
      .PutMember(
          "TransactItems",
          smithy::schema::Schema::ListBuilder("TransactWriteItemList")
              .PutMember("member", TransactWriteItemsRequestSchemaCache<TransactWriteItemsRequest_TransactWriteItemSchemaSerdeSer>::Get())
              .Build())
      .PutMember("ReturnConsumedCapacity", smithy::schema::Schema::CreateEnum("ReturnConsumedCapacity"))
      .PutMember("ReturnItemCollectionMetrics", smithy::schema::Schema::CreateEnum("ReturnItemCollectionMetrics"))
      .PutMember("ClientRequestToken", smithy::schema::Schema::CreateString("ClientRequestToken"))
      .Build();
}

}  // namespace
}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws

Aws::UniquePtr<smithy::schema::SerializableStruct> TransactWriteItemsRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<TransactWriteItemsRequestSerializable>("TransactWriteItemsRequestSerializable", *this);
}

Aws::String TransactWriteItemsRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext TransactWriteItemsRequest::GetSchemaSerdeContext() const {
  return {"TransactWriteItems", "2012-08-10"};
}

Aws::Http::HeaderValueCollection TransactWriteItemsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DynamoDB_20120810.TransactWriteItems"));
  return headers;
}

TransactWriteItemsRequest::EndpointParameters TransactWriteItemsRequest::GetEndpointContextParams() const {
  EndpointParameters parameters;
  // operation context params go here
  parameters.emplace_back(Aws::String{"ResourceArnList"}, this->GetOperationContextParams(),
                          Aws::Endpoint::EndpointParameter::ParameterOrigin::OPERATION_CONTEXT);
  return parameters;
}
// Accessor for dynamic context endpoint params
Aws::Vector<Aws::String> TransactWriteItemsRequest::GetOperationContextParams() const {
  Aws::Vector<Aws::String> result;
  auto& TransactItemsElems = (*this).GetTransactItems();
  for (auto& TransactItemsElem : TransactItemsElems) {
    auto& ConditionCheckElems = TransactItemsElem.GetConditionCheck().GetTableName();
    result.emplace_back(ConditionCheckElems);
    auto& PutElems = TransactItemsElem.GetPut().GetTableName();
    result.emplace_back(PutElems);
    auto& DeleteElems = TransactItemsElem.GetDelete().GetTableName();
    result.emplace_back(DeleteElems);
    auto& UpdateElems = TransactItemsElem.GetUpdate().GetTableName();
    result.emplace_back(UpdateElems);
  }
  return result;
}
