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
#include <aws/dynamodb/model/UpdateContinuousBackupsResult.h>
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

UpdateContinuousBackupsResult::UpdateContinuousBackupsResult(const Aws::AmazonWebServiceResult<Aws::String>& result) { *this = result; }

UpdateContinuousBackupsResult& UpdateContinuousBackupsResult::operator=(const Aws::AmazonWebServiceResult<Aws::String>& result) {
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
class UpdateContinuousBackupsResultSchemaCache {
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
        Aws::New<std::shared_ptr<const smithy::schema::Schema>>("UpdateContinuousBackupsResultSchemaCache", Adapter::BuildSchema());
    Aws::Utils::ComponentRegistry::RegisterComponent("UpdateContinuousBackupsResultSchemaCache", built, &Release);
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
std::atomic<std::shared_ptr<const smithy::schema::Schema>*> UpdateContinuousBackupsResultSchemaCache<Adapter>::s_schema{nullptr};
template <typename Adapter>
std::mutex UpdateContinuousBackupsResultSchemaCache<Adapter>::s_mutex;

class UpdateContinuousBackupsResult_ContinuousBackupsDescriptionSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit UpdateContinuousBackupsResult_ContinuousBackupsDescriptionSchemaSerdeDeser(ContinuousBackupsDescription& obj)
      : m_obj(obj),
        m_schema(
            UpdateContinuousBackupsResultSchemaCache<UpdateContinuousBackupsResult_ContinuousBackupsDescriptionSchemaSerdeDeser>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  ContinuousBackupsDescription& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class UpdateContinuousBackupsResult_PointInTimeRecoveryDescriptionSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit UpdateContinuousBackupsResult_PointInTimeRecoveryDescriptionSchemaSerdeDeser(PointInTimeRecoveryDescription& obj)
      : m_obj(obj),
        m_schema(
            UpdateContinuousBackupsResultSchemaCache<UpdateContinuousBackupsResult_PointInTimeRecoveryDescriptionSchemaSerdeDeser>::Get()) {
  }
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  PointInTimeRecoveryDescription& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class UpdateContinuousBackupsResultDeserializable final : public smithy::schema::SerializableStruct {
 public:
  explicit UpdateContinuousBackupsResultDeserializable(UpdateContinuousBackupsResult& obj)
      : m_obj(obj), m_schema(UpdateContinuousBackupsResultSchemaCache<UpdateContinuousBackupsResultDeserializable>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  UpdateContinuousBackupsResult& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void UpdateContinuousBackupsResult_ContinuousBackupsDescriptionSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
                                                                                      smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "ContinuousBackupsStatus") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetContinuousBackupsStatus(ContinuousBackupsStatusMapper::GetContinuousBackupsStatusForName(*value0));
    }
    return;
  }
  if (memberName == "PointInTimeRecoveryDescription") {
    PointInTimeRecoveryDescription nested0;
    UpdateContinuousBackupsResult_PointInTimeRecoveryDescriptionSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetPointInTimeRecoveryDescription(std::move(nested0));
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> UpdateContinuousBackupsResult_ContinuousBackupsDescriptionSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("ContinuousBackupsDescription")
      .PutMember("ContinuousBackupsStatus", smithy::schema::Schema::CreateEnum("ContinuousBackupsStatus"))
      .PutMember(
          "PointInTimeRecoveryDescription",
          UpdateContinuousBackupsResultSchemaCache<UpdateContinuousBackupsResult_PointInTimeRecoveryDescriptionSchemaSerdeDeser>::Get())
      .Build();
}

void UpdateContinuousBackupsResult_PointInTimeRecoveryDescriptionSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
                                                                                        smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "PointInTimeRecoveryStatus") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetPointInTimeRecoveryStatus(PointInTimeRecoveryStatusMapper::GetPointInTimeRecoveryStatusForName(*value0));
    }
    return;
  }
  if (memberName == "RecoveryPeriodInDays") {
    auto value0 = deserializer.ReadInteger(memberSchema);
    if (value0.has_value()) {
      m_obj.SetRecoveryPeriodInDays(*value0);
    }
    return;
  }
  if (memberName == "EarliestRestorableDateTime") {
    auto value0 = deserializer.ReadTimestamp(memberSchema);
    if (value0.has_value()) {
      m_obj.SetEarliestRestorableDateTime(*value0);
    }
    return;
  }
  if (memberName == "LatestRestorableDateTime") {
    auto value0 = deserializer.ReadTimestamp(memberSchema);
    if (value0.has_value()) {
      m_obj.SetLatestRestorableDateTime(*value0);
    }
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> UpdateContinuousBackupsResult_PointInTimeRecoveryDescriptionSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("PointInTimeRecoveryDescription")
      .PutMember("PointInTimeRecoveryStatus", smithy::schema::Schema::CreateEnum("PointInTimeRecoveryStatus"))
      .PutMember("RecoveryPeriodInDays", smithy::schema::Schema::CreateInteger("RecoveryPeriodInDays"))
      .PutMember("EarliestRestorableDateTime", smithy::schema::Schema::CreateTimestamp("EarliestRestorableDateTime"))
      .PutMember("LatestRestorableDateTime", smithy::schema::Schema::CreateTimestamp("LatestRestorableDateTime"))
      .Build();
}

void UpdateContinuousBackupsResultDeserializable::From(const smithy::schema::Schema& memberSchema,
                                                       smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "ContinuousBackupsDescription") {
    ContinuousBackupsDescription nested0;
    UpdateContinuousBackupsResult_ContinuousBackupsDescriptionSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetContinuousBackupsDescription(std::move(nested0));
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> UpdateContinuousBackupsResultDeserializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("UpdateContinuousBackupsResult")
      .PutMember(
          "ContinuousBackupsDescription",
          UpdateContinuousBackupsResultSchemaCache<UpdateContinuousBackupsResult_ContinuousBackupsDescriptionSchemaSerdeDeser>::Get())
      .Build();
}

}  // namespace
}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws

Aws::UniquePtr<smithy::schema::SerializableStruct> UpdateContinuousBackupsResult::GetSchemaSerdeOutput() {
  return Aws::MakeUnique<UpdateContinuousBackupsResultDeserializable>("UpdateContinuousBackupsResultDeserializable", *this);
}
