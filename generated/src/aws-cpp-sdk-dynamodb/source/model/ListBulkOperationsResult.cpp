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
#include <aws/dynamodb/model/ListBulkOperationsResult.h>
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

ListBulkOperationsResult::ListBulkOperationsResult(const Aws::AmazonWebServiceResult<Aws::String>& result) { *this = result; }

ListBulkOperationsResult& ListBulkOperationsResult::operator=(const Aws::AmazonWebServiceResult<Aws::String>& result) {
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
class ListBulkOperationsResultSchemaCache {
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
        Aws::New<std::shared_ptr<const smithy::schema::Schema>>("ListBulkOperationsResultSchemaCache", Adapter::BuildSchema());
    Aws::Utils::ComponentRegistry::RegisterComponent("ListBulkOperationsResultSchemaCache", built, &Release);
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
std::atomic<std::shared_ptr<const smithy::schema::Schema>*> ListBulkOperationsResultSchemaCache<Adapter>::s_schema{nullptr};
template <typename Adapter>
std::mutex ListBulkOperationsResultSchemaCache<Adapter>::s_mutex;

class ListBulkOperationsResult_BulkOperationSummarySchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit ListBulkOperationsResult_BulkOperationSummarySchemaSerdeDeser(BulkOperationSummary& obj)
      : m_obj(obj), m_schema(ListBulkOperationsResultSchemaCache<ListBulkOperationsResult_BulkOperationSummarySchemaSerdeDeser>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  BulkOperationSummary& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class ListBulkOperationsResultDeserializable final : public smithy::schema::SerializableStruct {
 public:
  explicit ListBulkOperationsResultDeserializable(ListBulkOperationsResult& obj)
      : m_obj(obj), m_schema(ListBulkOperationsResultSchemaCache<ListBulkOperationsResultDeserializable>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  ListBulkOperationsResult& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void ListBulkOperationsResult_BulkOperationSummarySchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
                                                                         smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "BulkOperationArn") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetBulkOperationArn(*value0);
    }
    return;
  }
  if (memberName == "BulkOperationStatus") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetBulkOperationStatus(BulkOperationStatusMapper::GetBulkOperationStatusForName(*value0));
    }
    return;
  }
  if (memberName == "StartTime") {
    auto value0 = deserializer.ReadTimestamp(memberSchema);
    if (value0.has_value()) {
      m_obj.SetStartTime(*value0);
    }
    return;
  }
  if (memberName == "EndTime") {
    auto value0 = deserializer.ReadTimestamp(memberSchema);
    if (value0.has_value()) {
      m_obj.SetEndTime(*value0);
    }
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> ListBulkOperationsResult_BulkOperationSummarySchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("BulkOperationSummary")
      .PutMember("BulkOperationArn", smithy::schema::Schema::CreateString("BulkOperationArn"))
      .PutMember("BulkOperationStatus", smithy::schema::Schema::CreateEnum("BulkOperationStatus"))
      .PutMember("StartTime", smithy::schema::Schema::CreateTimestamp("StartTime"))
      .PutMember("EndTime", smithy::schema::Schema::CreateTimestamp("EndTime"))
      .Build();
}

void ListBulkOperationsResultDeserializable::From(const smithy::schema::Schema& memberSchema,
                                                  smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "BulkOperationsSummaryList") {
    Aws::Vector<BulkOperationSummary> list0;
    deserializer.ReadList(memberSchema, [&](smithy::schema::ShapeDeserializer& itemDeserializer0) {
      BulkOperationSummary nested1;
      ListBulkOperationsResult_BulkOperationSummarySchemaSerdeDeser{nested1}.Deserialize(itemDeserializer0);
      list0.push_back(std::move(nested1));
    });
    m_obj.SetBulkOperationsSummaryList(std::move(list0));
    return;
  }
  if (memberName == "NextToken") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetNextToken(*value0);
    }
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> ListBulkOperationsResultDeserializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("ListBulkOperationsResult")
      .PutMember("BulkOperationsSummaryList",
                 smithy::schema::Schema::ListBuilder("BulkOperationsSummaryList")
                     .PutMember("member",
                                ListBulkOperationsResultSchemaCache<ListBulkOperationsResult_BulkOperationSummarySchemaSerdeDeser>::Get())
                     .Build())
      .PutMember("NextToken", smithy::schema::Schema::CreateString("NextToken"))
      .Build();
}

}  // namespace
}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws

Aws::UniquePtr<smithy::schema::SerializableStruct> ListBulkOperationsResult::GetSchemaSerdeOutput() {
  return Aws::MakeUnique<ListBulkOperationsResultDeserializable>("ListBulkOperationsResultDeserializable", *this);
}
