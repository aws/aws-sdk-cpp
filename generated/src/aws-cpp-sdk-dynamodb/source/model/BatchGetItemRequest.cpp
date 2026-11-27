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
#include <aws/dynamodb/model/BatchGetItemRequest.h>
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
class BatchGetItemRequestSchemaCache {
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
        Aws::New<std::shared_ptr<const smithy::schema::Schema>>("BatchGetItemRequestSchemaCache", Adapter::BuildSchema());
    Aws::Utils::ComponentRegistry::RegisterComponent("BatchGetItemRequestSchemaCache", built, &Release);
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
std::atomic<std::shared_ptr<const smithy::schema::Schema>*> BatchGetItemRequestSchemaCache<Adapter>::s_schema{nullptr};
template <typename Adapter>
std::mutex BatchGetItemRequestSchemaCache<Adapter>::s_mutex;

class BatchGetItemRequest_KeysAndAttributesSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit BatchGetItemRequest_KeysAndAttributesSchemaSerdeSer(const KeysAndAttributes& obj)
      : m_obj(obj), m_schema(BatchGetItemRequestSchemaCache<BatchGetItemRequest_KeysAndAttributesSchemaSerdeSer>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const KeysAndAttributes& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class BatchGetItemRequest_AttributeValueSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit BatchGetItemRequest_AttributeValueSchemaSerdeSer(const AttributeValue& obj)
      : m_obj(obj), m_schema(BatchGetItemRequestSchemaCache<BatchGetItemRequest_AttributeValueSchemaSerdeSer>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const AttributeValue& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class BatchGetItemRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit BatchGetItemRequestSerializable(const BatchGetItemRequest& obj)
      : m_obj(obj), m_schema(BatchGetItemRequestSchemaCache<BatchGetItemRequestSerializable>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const BatchGetItemRequest& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void BatchGetItemRequest_KeysAndAttributesSchemaSerdeSer::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.KeysHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("Keys").value();
    serializer.WriteList(memberSchema, m_obj.GetKeys().size(), [&](smithy::schema::ShapeSerializer& listSerializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      for (const auto& item0 : m_obj.GetKeys()) {
        listSerializer0.WriteMap(itemSchema0, item0.size(), [&](smithy::schema::MapSerializer& mapSerializer1) {
          const smithy::schema::Schema& valueSchema1 = *itemSchema0.GetMemberTarget().value()->GetMember("value").value();
          for (const auto& entry1 : item0) {
            mapSerializer1.WriteEntry(entry1.first, [&](smithy::schema::ShapeSerializer& valueSerializer1) {
              BatchGetItemRequest_AttributeValueSchemaSerdeSer nested2(entry1.second);
              valueSerializer1.WriteStruct(valueSchema1, nested2);
            });
          }
        });
      }
    });
  }
  if (m_obj.AttributesToGetHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("AttributesToGet").value();
    serializer.WriteList(memberSchema, m_obj.GetAttributesToGet().size(), [&](smithy::schema::ShapeSerializer& listSerializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      for (const auto& item0 : m_obj.GetAttributesToGet()) {
        listSerializer0.WriteString(itemSchema0, item0);
      }
    });
  }
  if (m_obj.ConsistentReadHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ConsistentRead").value();
    serializer.WriteBoolean(memberSchema, m_obj.GetConsistentRead());
  }
  if (m_obj.ProjectionExpressionHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ProjectionExpression").value();
    serializer.WriteString(memberSchema, m_obj.GetProjectionExpression());
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
}

std::shared_ptr<const smithy::schema::Schema> BatchGetItemRequest_KeysAndAttributesSchemaSerdeSer::BuildSchema() {
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

void BatchGetItemRequest_AttributeValueSchemaSerdeSer::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
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
              BatchGetItemRequest_AttributeValueSchemaSerdeSer nested(*entry.second);
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
            BatchGetItemRequest_AttributeValueSchemaSerdeSer nested(*item);
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

std::shared_ptr<const smithy::schema::Schema> BatchGetItemRequest_AttributeValueSchemaSerdeSer::BuildSchema() {
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

void BatchGetItemRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.RequestItemsHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("RequestItems").value();
    serializer.WriteMap(memberSchema, m_obj.GetRequestItems().size(), [&](smithy::schema::MapSerializer& mapSerializer0) {
      const smithy::schema::Schema& valueSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("value").value();
      for (const auto& entry0 : m_obj.GetRequestItems()) {
        mapSerializer0.WriteEntry(entry0.first, [&](smithy::schema::ShapeSerializer& valueSerializer0) {
          BatchGetItemRequest_KeysAndAttributesSchemaSerdeSer nested1(entry0.second);
          valueSerializer0.WriteStruct(valueSchema0, nested1);
        });
      }
    });
  }
  if (m_obj.ReturnConsumedCapacityHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ReturnConsumedCapacity").value();
    serializer.WriteString(memberSchema, ReturnConsumedCapacityMapper::GetNameForReturnConsumedCapacity(m_obj.GetReturnConsumedCapacity()));
  }
}

std::shared_ptr<const smithy::schema::Schema> BatchGetItemRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("BatchGetItemRequest")
      .PutMember("RequestItems",
                 smithy::schema::Schema::MapBuilder("BatchGetRequestMap")
                     .PutMember("key", smithy::schema::Schema::CreateString("key"))
                     .PutMember("value", BatchGetItemRequestSchemaCache<BatchGetItemRequest_KeysAndAttributesSchemaSerdeSer>::Get())
                     .Build())
      .PutMember("ReturnConsumedCapacity", smithy::schema::Schema::CreateEnum("ReturnConsumedCapacity"))
      .Build();
}

}  // namespace
}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws

Aws::UniquePtr<smithy::schema::SerializableStruct> BatchGetItemRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<BatchGetItemRequestSerializable>("BatchGetItemRequestSerializable", *this);
}

Aws::String BatchGetItemRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext BatchGetItemRequest::GetSchemaSerdeContext() const { return {"BatchGetItem", "2012-08-10"}; }

Aws::Http::HeaderValueCollection BatchGetItemRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DynamoDB_20120810.BatchGetItem"));
  return headers;
}

BatchGetItemRequest::EndpointParameters BatchGetItemRequest::GetEndpointContextParams() const {
  EndpointParameters parameters;
  // operation context params go here
  parameters.emplace_back(Aws::String{"ResourceArnList"}, this->GetOperationContextParams(),
                          Aws::Endpoint::EndpointParameter::ParameterOrigin::OPERATION_CONTEXT);
  return parameters;
}
// Accessor for dynamic context endpoint params
Aws::Vector<Aws::String> BatchGetItemRequest::GetOperationContextParams() const {
  Aws::Vector<Aws::String> result;
  auto& RequestItemsElems = (*this).GetRequestItems();
  for (auto& keysElem : RequestItemsElems) {
    result.emplace_back(keysElem.first);
  }
  return result;
}
