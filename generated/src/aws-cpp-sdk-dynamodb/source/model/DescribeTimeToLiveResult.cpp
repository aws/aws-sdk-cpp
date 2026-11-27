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
#include <aws/dynamodb/model/DescribeTimeToLiveResult.h>
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

DescribeTimeToLiveResult::DescribeTimeToLiveResult(const Aws::AmazonWebServiceResult<Aws::String>& result) { *this = result; }

DescribeTimeToLiveResult& DescribeTimeToLiveResult::operator=(const Aws::AmazonWebServiceResult<Aws::String>& result) {
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
class DescribeTimeToLiveResultSchemaCache {
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
        Aws::New<std::shared_ptr<const smithy::schema::Schema>>("DescribeTimeToLiveResultSchemaCache", Adapter::BuildSchema());
    Aws::Utils::ComponentRegistry::RegisterComponent("DescribeTimeToLiveResultSchemaCache", built, &Release);
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
std::atomic<std::shared_ptr<const smithy::schema::Schema>*> DescribeTimeToLiveResultSchemaCache<Adapter>::s_schema{nullptr};
template <typename Adapter>
std::mutex DescribeTimeToLiveResultSchemaCache<Adapter>::s_mutex;

class DescribeTimeToLiveResult_TimeToLiveDescriptionSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit DescribeTimeToLiveResult_TimeToLiveDescriptionSchemaSerdeDeser(TimeToLiveDescription& obj)
      : m_obj(obj), m_schema(DescribeTimeToLiveResultSchemaCache<DescribeTimeToLiveResult_TimeToLiveDescriptionSchemaSerdeDeser>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  TimeToLiveDescription& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class DescribeTimeToLiveResultDeserializable final : public smithy::schema::SerializableStruct {
 public:
  explicit DescribeTimeToLiveResultDeserializable(DescribeTimeToLiveResult& obj)
      : m_obj(obj), m_schema(DescribeTimeToLiveResultSchemaCache<DescribeTimeToLiveResultDeserializable>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  DescribeTimeToLiveResult& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void DescribeTimeToLiveResult_TimeToLiveDescriptionSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
                                                                          smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "TimeToLiveStatus") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetTimeToLiveStatus(TimeToLiveStatusMapper::GetTimeToLiveStatusForName(*value0));
    }
    return;
  }
  if (memberName == "AttributeName") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetAttributeName(*value0);
    }
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> DescribeTimeToLiveResult_TimeToLiveDescriptionSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("TimeToLiveDescription")
      .PutMember("TimeToLiveStatus", smithy::schema::Schema::CreateEnum("TimeToLiveStatus"))
      .PutMember("AttributeName", smithy::schema::Schema::CreateString("AttributeName"))
      .Build();
}

void DescribeTimeToLiveResultDeserializable::From(const smithy::schema::Schema& memberSchema,
                                                  smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "TimeToLiveDescription") {
    TimeToLiveDescription nested0;
    DescribeTimeToLiveResult_TimeToLiveDescriptionSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetTimeToLiveDescription(std::move(nested0));
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> DescribeTimeToLiveResultDeserializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("DescribeTimeToLiveResult")
      .PutMember("TimeToLiveDescription",
                 DescribeTimeToLiveResultSchemaCache<DescribeTimeToLiveResult_TimeToLiveDescriptionSchemaSerdeDeser>::Get())
      .Build();
}

}  // namespace
}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws

Aws::UniquePtr<smithy::schema::SerializableStruct> DescribeTimeToLiveResult::GetSchemaSerdeOutput() {
  return Aws::MakeUnique<DescribeTimeToLiveResultDeserializable>("DescribeTimeToLiveResultDeserializable", *this);
}
