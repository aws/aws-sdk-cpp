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
#include <aws/dynamodb/model/UpdateTimeToLiveResult.h>
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

UpdateTimeToLiveResult::UpdateTimeToLiveResult(const Aws::AmazonWebServiceResult<Aws::String>& result) { *this = result; }

UpdateTimeToLiveResult& UpdateTimeToLiveResult::operator=(const Aws::AmazonWebServiceResult<Aws::String>& result) {
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
class UpdateTimeToLiveResultSchemaCache {
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
        Aws::New<std::shared_ptr<const smithy::schema::Schema>>("UpdateTimeToLiveResultSchemaCache", Adapter::BuildSchema());
    Aws::Utils::ComponentRegistry::RegisterComponent("UpdateTimeToLiveResultSchemaCache", built, &Release);
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
std::atomic<std::shared_ptr<const smithy::schema::Schema>*> UpdateTimeToLiveResultSchemaCache<Adapter>::s_schema{nullptr};
template <typename Adapter>
std::mutex UpdateTimeToLiveResultSchemaCache<Adapter>::s_mutex;

class UpdateTimeToLiveResult_TimeToLiveSpecificationSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit UpdateTimeToLiveResult_TimeToLiveSpecificationSchemaSerdeDeser(TimeToLiveSpecification& obj)
      : m_obj(obj), m_schema(UpdateTimeToLiveResultSchemaCache<UpdateTimeToLiveResult_TimeToLiveSpecificationSchemaSerdeDeser>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  TimeToLiveSpecification& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class UpdateTimeToLiveResultDeserializable final : public smithy::schema::SerializableStruct {
 public:
  explicit UpdateTimeToLiveResultDeserializable(UpdateTimeToLiveResult& obj)
      : m_obj(obj), m_schema(UpdateTimeToLiveResultSchemaCache<UpdateTimeToLiveResultDeserializable>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  UpdateTimeToLiveResult& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void UpdateTimeToLiveResult_TimeToLiveSpecificationSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
                                                                          smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "Enabled") {
    auto value0 = deserializer.ReadBoolean(memberSchema);
    if (value0.has_value()) {
      m_obj.SetEnabled(*value0);
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

std::shared_ptr<const smithy::schema::Schema> UpdateTimeToLiveResult_TimeToLiveSpecificationSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("TimeToLiveSpecification")
      .PutMember("Enabled", smithy::schema::Schema::CreateBoolean("Enabled"))
      .PutMember("AttributeName", smithy::schema::Schema::CreateString("AttributeName"))
      .Build();
}

void UpdateTimeToLiveResultDeserializable::From(const smithy::schema::Schema& memberSchema,
                                                smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "TimeToLiveSpecification") {
    TimeToLiveSpecification nested0;
    UpdateTimeToLiveResult_TimeToLiveSpecificationSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetTimeToLiveSpecification(std::move(nested0));
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> UpdateTimeToLiveResultDeserializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("UpdateTimeToLiveResult")
      .PutMember("TimeToLiveSpecification",
                 UpdateTimeToLiveResultSchemaCache<UpdateTimeToLiveResult_TimeToLiveSpecificationSchemaSerdeDeser>::Get())
      .Build();
}

}  // namespace
}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws

Aws::UniquePtr<smithy::schema::SerializableStruct> UpdateTimeToLiveResult::GetSchemaSerdeOutput() {
  return Aws::MakeUnique<UpdateTimeToLiveResultDeserializable>("UpdateTimeToLiveResultDeserializable", *this);
}
