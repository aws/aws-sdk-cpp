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
#include <aws/dynamodb/model/UpdateKinesisStreamingDestinationResult.h>
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

UpdateKinesisStreamingDestinationResult::UpdateKinesisStreamingDestinationResult(const Aws::AmazonWebServiceResult<Aws::String>& result) {
  *this = result;
}

UpdateKinesisStreamingDestinationResult& UpdateKinesisStreamingDestinationResult::operator=(
    const Aws::AmazonWebServiceResult<Aws::String>& result) {
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
class UpdateKinesisStreamingDestinationResultSchemaCache {
 public:
  static std::shared_ptr<const smithy::schema::Schema> Get() {
    if (std::shared_ptr<const smithy::schema::Schema>* cached = s_schema.load(std::memory_order_acquire)) {
      return *cached;
    }
    std::lock_guard<std::mutex> lock(s_mutex);
    if (std::shared_ptr<const smithy::schema::Schema>* cached = s_schema.load(std::memory_order_relaxed)) {
      return *cached;
    }
    std::shared_ptr<const smithy::schema::Schema>* built = Aws::New<std::shared_ptr<const smithy::schema::Schema>>(
        "UpdateKinesisStreamingDestinationResultSchemaCache", Adapter::BuildSchema());
    Aws::Utils::ComponentRegistry::RegisterComponent("UpdateKinesisStreamingDestinationResultSchemaCache", built, &Release);
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
std::atomic<std::shared_ptr<const smithy::schema::Schema>*> UpdateKinesisStreamingDestinationResultSchemaCache<Adapter>::s_schema{nullptr};
template <typename Adapter>
std::mutex UpdateKinesisStreamingDestinationResultSchemaCache<Adapter>::s_mutex;

class UpdateKinesisStreamingDestinationResult_UpdateKinesisStreamingConfigurationSchemaSerdeDeser final
    : public smithy::schema::SerializableStruct {
 public:
  explicit UpdateKinesisStreamingDestinationResult_UpdateKinesisStreamingConfigurationSchemaSerdeDeser(
      UpdateKinesisStreamingConfiguration& obj)
      : m_obj(obj),
        m_schema(UpdateKinesisStreamingDestinationResultSchemaCache<
                 UpdateKinesisStreamingDestinationResult_UpdateKinesisStreamingConfigurationSchemaSerdeDeser>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  UpdateKinesisStreamingConfiguration& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class UpdateKinesisStreamingDestinationResultDeserializable final : public smithy::schema::SerializableStruct {
 public:
  explicit UpdateKinesisStreamingDestinationResultDeserializable(UpdateKinesisStreamingDestinationResult& obj)
      : m_obj(obj),
        m_schema(UpdateKinesisStreamingDestinationResultSchemaCache<UpdateKinesisStreamingDestinationResultDeserializable>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  UpdateKinesisStreamingDestinationResult& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void UpdateKinesisStreamingDestinationResult_UpdateKinesisStreamingConfigurationSchemaSerdeDeser::From(
    const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "ApproximateCreationDateTimePrecision") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetApproximateCreationDateTimePrecision(
          ApproximateCreationDateTimePrecisionMapper::GetApproximateCreationDateTimePrecisionForName(*value0));
    }
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema>
UpdateKinesisStreamingDestinationResult_UpdateKinesisStreamingConfigurationSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("UpdateKinesisStreamingConfiguration")
      .PutMember("ApproximateCreationDateTimePrecision", smithy::schema::Schema::CreateEnum("ApproximateCreationDateTimePrecision"))
      .Build();
}

void UpdateKinesisStreamingDestinationResultDeserializable::From(const smithy::schema::Schema& memberSchema,
                                                                 smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "TableName") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetTableName(*value0);
    }
    return;
  }
  if (memberName == "StreamArn") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetStreamArn(*value0);
    }
    return;
  }
  if (memberName == "DestinationStatus") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetDestinationStatus(DestinationStatusMapper::GetDestinationStatusForName(*value0));
    }
    return;
  }
  if (memberName == "UpdateKinesisStreamingConfiguration") {
    UpdateKinesisStreamingConfiguration nested0;
    UpdateKinesisStreamingDestinationResult_UpdateKinesisStreamingConfigurationSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetUpdateKinesisStreamingConfiguration(std::move(nested0));
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> UpdateKinesisStreamingDestinationResultDeserializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("UpdateKinesisStreamingDestinationResult")
      .PutMember("TableName", smithy::schema::Schema::CreateString("TableName"))
      .PutMember("StreamArn", smithy::schema::Schema::CreateString("StreamArn"))
      .PutMember("DestinationStatus", smithy::schema::Schema::CreateEnum("DestinationStatus"))
      .PutMember("UpdateKinesisStreamingConfiguration",
                 UpdateKinesisStreamingDestinationResultSchemaCache<
                     UpdateKinesisStreamingDestinationResult_UpdateKinesisStreamingConfigurationSchemaSerdeDeser>::Get())
      .Build();
}

}  // namespace
}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws

Aws::UniquePtr<smithy::schema::SerializableStruct> UpdateKinesisStreamingDestinationResult::GetSchemaSerdeOutput() {
  return Aws::MakeUnique<UpdateKinesisStreamingDestinationResultDeserializable>("UpdateKinesisStreamingDestinationResultDeserializable",
                                                                                *this);
}
