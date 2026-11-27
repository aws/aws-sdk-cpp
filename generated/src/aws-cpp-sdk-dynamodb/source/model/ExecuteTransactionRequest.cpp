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
#include <aws/dynamodb/model/ExecuteTransactionRequest.h>
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
class ExecuteTransactionRequestSchemaCache {
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
        Aws::New<std::shared_ptr<const smithy::schema::Schema>>("ExecuteTransactionRequestSchemaCache", Adapter::BuildSchema());
    Aws::Utils::ComponentRegistry::RegisterComponent("ExecuteTransactionRequestSchemaCache", built, &Release);
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
std::atomic<std::shared_ptr<const smithy::schema::Schema>*> ExecuteTransactionRequestSchemaCache<Adapter>::s_schema{nullptr};
template <typename Adapter>
std::mutex ExecuteTransactionRequestSchemaCache<Adapter>::s_mutex;

class ExecuteTransactionRequest_ParameterizedStatementSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit ExecuteTransactionRequest_ParameterizedStatementSchemaSerdeSer(const ParameterizedStatement& obj)
      : m_obj(obj), m_schema(ExecuteTransactionRequestSchemaCache<ExecuteTransactionRequest_ParameterizedStatementSchemaSerdeSer>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const ParameterizedStatement& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class ExecuteTransactionRequest_AttributeValueSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit ExecuteTransactionRequest_AttributeValueSchemaSerdeSer(const AttributeValue& obj)
      : m_obj(obj), m_schema(ExecuteTransactionRequestSchemaCache<ExecuteTransactionRequest_AttributeValueSchemaSerdeSer>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const AttributeValue& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class ExecuteTransactionRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit ExecuteTransactionRequestSerializable(const ExecuteTransactionRequest& obj)
      : m_obj(obj), m_schema(ExecuteTransactionRequestSchemaCache<ExecuteTransactionRequestSerializable>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const ExecuteTransactionRequest& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void ExecuteTransactionRequest_ParameterizedStatementSchemaSerdeSer::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.StatementHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("Statement").value();
    serializer.WriteString(memberSchema, m_obj.GetStatement());
  }
  if (m_obj.ParametersHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("Parameters").value();
    serializer.WriteList(memberSchema, m_obj.GetParameters().size(), [&](smithy::schema::ShapeSerializer& listSerializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      for (const auto& item0 : m_obj.GetParameters()) {
        ExecuteTransactionRequest_AttributeValueSchemaSerdeSer nested1(item0);
        listSerializer0.WriteStruct(itemSchema0, nested1);
      }
    });
  }
  if (m_obj.ReturnValuesOnConditionCheckFailureHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ReturnValuesOnConditionCheckFailure").value();
    serializer.WriteString(memberSchema, ReturnValuesOnConditionCheckFailureMapper::GetNameForReturnValuesOnConditionCheckFailure(
                                             m_obj.GetReturnValuesOnConditionCheckFailure()));
  }
}

std::shared_ptr<const smithy::schema::Schema> ExecuteTransactionRequest_ParameterizedStatementSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("ParameterizedStatement")
      .PutMember("Statement", smithy::schema::Schema::CreateString("Statement"))
      .PutMember("Parameters", smithy::schema::Schema::ListBuilder("PreparedStatementParameters")
                                   .PutMember("member", smithy::schema::Schema::UnionBuilder("AttributeValue").Build())
                                   .Build())
      .PutMember("ReturnValuesOnConditionCheckFailure", smithy::schema::Schema::CreateEnum("ReturnValuesOnConditionCheckFailure"))
      .Build();
}

void ExecuteTransactionRequest_AttributeValueSchemaSerdeSer::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
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
              ExecuteTransactionRequest_AttributeValueSchemaSerdeSer nested(*entry.second);
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
            ExecuteTransactionRequest_AttributeValueSchemaSerdeSer nested(*item);
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

std::shared_ptr<const smithy::schema::Schema> ExecuteTransactionRequest_AttributeValueSchemaSerdeSer::BuildSchema() {
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

void ExecuteTransactionRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.TransactStatementsHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("TransactStatements").value();
    serializer.WriteList(memberSchema, m_obj.GetTransactStatements().size(), [&](smithy::schema::ShapeSerializer& listSerializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      for (const auto& item0 : m_obj.GetTransactStatements()) {
        ExecuteTransactionRequest_ParameterizedStatementSchemaSerdeSer nested1(item0);
        listSerializer0.WriteStruct(itemSchema0, nested1);
      }
    });
  }
  if (m_obj.ClientRequestTokenHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ClientRequestToken").value();
    serializer.WriteString(memberSchema, m_obj.GetClientRequestToken());
  }
  if (m_obj.ReturnConsumedCapacityHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ReturnConsumedCapacity").value();
    serializer.WriteString(memberSchema, ReturnConsumedCapacityMapper::GetNameForReturnConsumedCapacity(m_obj.GetReturnConsumedCapacity()));
  }
}

std::shared_ptr<const smithy::schema::Schema> ExecuteTransactionRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("ExecuteTransactionRequest")
      .PutMember("TransactStatements",
                 smithy::schema::Schema::ListBuilder("ParameterizedStatements")
                     .PutMember("member",
                                ExecuteTransactionRequestSchemaCache<ExecuteTransactionRequest_ParameterizedStatementSchemaSerdeSer>::Get())
                     .Build())
      .PutMember("ClientRequestToken", smithy::schema::Schema::CreateString("ClientRequestToken"))
      .PutMember("ReturnConsumedCapacity", smithy::schema::Schema::CreateEnum("ReturnConsumedCapacity"))
      .Build();
}

}  // namespace
}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws

Aws::UniquePtr<smithy::schema::SerializableStruct> ExecuteTransactionRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<ExecuteTransactionRequestSerializable>("ExecuteTransactionRequestSerializable", *this);
}

Aws::String ExecuteTransactionRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext ExecuteTransactionRequest::GetSchemaSerdeContext() const {
  return {"ExecuteTransaction", "2012-08-10"};
}

Aws::Http::HeaderValueCollection ExecuteTransactionRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DynamoDB_20120810.ExecuteTransaction"));
  return headers;
}
