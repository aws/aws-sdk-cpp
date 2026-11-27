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
#include <aws/dynamodb/model/ListContributorInsightsResult.h>
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

ListContributorInsightsResult::ListContributorInsightsResult(const Aws::AmazonWebServiceResult<Aws::String>& result) { *this = result; }

ListContributorInsightsResult& ListContributorInsightsResult::operator=(const Aws::AmazonWebServiceResult<Aws::String>& result) {
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
class ListContributorInsightsResultSchemaCache {
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
        Aws::New<std::shared_ptr<const smithy::schema::Schema>>("ListContributorInsightsResultSchemaCache", Adapter::BuildSchema());
    Aws::Utils::ComponentRegistry::RegisterComponent("ListContributorInsightsResultSchemaCache", built, &Release);
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
std::atomic<std::shared_ptr<const smithy::schema::Schema>*> ListContributorInsightsResultSchemaCache<Adapter>::s_schema{nullptr};
template <typename Adapter>
std::mutex ListContributorInsightsResultSchemaCache<Adapter>::s_mutex;

class ListContributorInsightsResult_ContributorInsightsSummarySchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit ListContributorInsightsResult_ContributorInsightsSummarySchemaSerdeDeser(ContributorInsightsSummary& obj)
      : m_obj(obj),
        m_schema(
            ListContributorInsightsResultSchemaCache<ListContributorInsightsResult_ContributorInsightsSummarySchemaSerdeDeser>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  ContributorInsightsSummary& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class ListContributorInsightsResultDeserializable final : public smithy::schema::SerializableStruct {
 public:
  explicit ListContributorInsightsResultDeserializable(ListContributorInsightsResult& obj)
      : m_obj(obj), m_schema(ListContributorInsightsResultSchemaCache<ListContributorInsightsResultDeserializable>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  ListContributorInsightsResult& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void ListContributorInsightsResult_ContributorInsightsSummarySchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
                                                                                    smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "TableName") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetTableName(*value0);
    }
    return;
  }
  if (memberName == "IndexName") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetIndexName(*value0);
    }
    return;
  }
  if (memberName == "ContributorInsightsStatus") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetContributorInsightsStatus(ContributorInsightsStatusMapper::GetContributorInsightsStatusForName(*value0));
    }
    return;
  }
  if (memberName == "ContributorInsightsMode") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetContributorInsightsMode(ContributorInsightsModeMapper::GetContributorInsightsModeForName(*value0));
    }
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> ListContributorInsightsResult_ContributorInsightsSummarySchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("ContributorInsightsSummary")
      .PutMember("TableName", smithy::schema::Schema::CreateString("TableName"))
      .PutMember("IndexName", smithy::schema::Schema::CreateString("IndexName"))
      .PutMember("ContributorInsightsStatus", smithy::schema::Schema::CreateEnum("ContributorInsightsStatus"))
      .PutMember("ContributorInsightsMode", smithy::schema::Schema::CreateEnum("ContributorInsightsMode"))
      .Build();
}

void ListContributorInsightsResultDeserializable::From(const smithy::schema::Schema& memberSchema,
                                                       smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "ContributorInsightsSummaries") {
    Aws::Vector<ContributorInsightsSummary> list0;
    deserializer.ReadList(memberSchema, [&](smithy::schema::ShapeDeserializer& itemDeserializer0) {
      ContributorInsightsSummary nested1;
      ListContributorInsightsResult_ContributorInsightsSummarySchemaSerdeDeser{nested1}.Deserialize(itemDeserializer0);
      list0.push_back(std::move(nested1));
    });
    m_obj.SetContributorInsightsSummaries(std::move(list0));
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

std::shared_ptr<const smithy::schema::Schema> ListContributorInsightsResultDeserializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("ListContributorInsightsResult")
      .PutMember(
          "ContributorInsightsSummaries",
          smithy::schema::Schema::ListBuilder("ContributorInsightsSummaries")
              .PutMember(
                  "member",
                  ListContributorInsightsResultSchemaCache<ListContributorInsightsResult_ContributorInsightsSummarySchemaSerdeDeser>::Get())
              .Build())
      .PutMember("NextToken", smithy::schema::Schema::CreateString("NextToken"))
      .Build();
}

}  // namespace
}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws

Aws::UniquePtr<smithy::schema::SerializableStruct> ListContributorInsightsResult::GetSchemaSerdeOutput() {
  return Aws::MakeUnique<ListContributorInsightsResultDeserializable>("ListContributorInsightsResultDeserializable", *this);
}
