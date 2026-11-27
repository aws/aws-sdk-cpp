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
#include <aws/dynamodb/model/ListBackupsResult.h>
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

ListBackupsResult::ListBackupsResult(const Aws::AmazonWebServiceResult<Aws::String>& result) { *this = result; }

ListBackupsResult& ListBackupsResult::operator=(const Aws::AmazonWebServiceResult<Aws::String>& result) {
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
class ListBackupsResultSchemaCache {
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
        Aws::New<std::shared_ptr<const smithy::schema::Schema>>("ListBackupsResultSchemaCache", Adapter::BuildSchema());
    Aws::Utils::ComponentRegistry::RegisterComponent("ListBackupsResultSchemaCache", built, &Release);
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
std::atomic<std::shared_ptr<const smithy::schema::Schema>*> ListBackupsResultSchemaCache<Adapter>::s_schema{nullptr};
template <typename Adapter>
std::mutex ListBackupsResultSchemaCache<Adapter>::s_mutex;

class ListBackupsResult_BackupSummarySchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit ListBackupsResult_BackupSummarySchemaSerdeDeser(BackupSummary& obj)
      : m_obj(obj), m_schema(ListBackupsResultSchemaCache<ListBackupsResult_BackupSummarySchemaSerdeDeser>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  BackupSummary& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class ListBackupsResultDeserializable final : public smithy::schema::SerializableStruct {
 public:
  explicit ListBackupsResultDeserializable(ListBackupsResult& obj)
      : m_obj(obj), m_schema(ListBackupsResultSchemaCache<ListBackupsResultDeserializable>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  ListBackupsResult& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void ListBackupsResult_BackupSummarySchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
                                                           smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "TableName") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetTableName(*value0);
    }
    return;
  }
  if (memberName == "TableId") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetTableId(*value0);
    }
    return;
  }
  if (memberName == "TableArn") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetTableArn(*value0);
    }
    return;
  }
  if (memberName == "BackupArn") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetBackupArn(*value0);
    }
    return;
  }
  if (memberName == "BackupName") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetBackupName(*value0);
    }
    return;
  }
  if (memberName == "BackupCreationDateTime") {
    auto value0 = deserializer.ReadTimestamp(memberSchema);
    if (value0.has_value()) {
      m_obj.SetBackupCreationDateTime(*value0);
    }
    return;
  }
  if (memberName == "BackupExpiryDateTime") {
    auto value0 = deserializer.ReadTimestamp(memberSchema);
    if (value0.has_value()) {
      m_obj.SetBackupExpiryDateTime(*value0);
    }
    return;
  }
  if (memberName == "BackupStatus") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetBackupStatus(BackupStatusMapper::GetBackupStatusForName(*value0));
    }
    return;
  }
  if (memberName == "BackupType") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetBackupType(BackupTypeMapper::GetBackupTypeForName(*value0));
    }
    return;
  }
  if (memberName == "BackupSizeBytes") {
    auto value0 = deserializer.ReadLong(memberSchema);
    if (value0.has_value()) {
      m_obj.SetBackupSizeBytes(*value0);
    }
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> ListBackupsResult_BackupSummarySchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("BackupSummary")
      .PutMember("TableName", smithy::schema::Schema::CreateString("TableName"))
      .PutMember("TableId", smithy::schema::Schema::CreateString("TableId"))
      .PutMember("TableArn", smithy::schema::Schema::CreateString("TableArn"))
      .PutMember("BackupArn", smithy::schema::Schema::CreateString("BackupArn"))
      .PutMember("BackupName", smithy::schema::Schema::CreateString("BackupName"))
      .PutMember("BackupCreationDateTime", smithy::schema::Schema::CreateTimestamp("BackupCreationDateTime"))
      .PutMember("BackupExpiryDateTime", smithy::schema::Schema::CreateTimestamp("BackupExpiryDateTime"))
      .PutMember("BackupStatus", smithy::schema::Schema::CreateEnum("BackupStatus"))
      .PutMember("BackupType", smithy::schema::Schema::CreateEnum("BackupType"))
      .PutMember("BackupSizeBytes", smithy::schema::Schema::CreateLong("BackupSizeBytes"))
      .Build();
}

void ListBackupsResultDeserializable::From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "BackupSummaries") {
    Aws::Vector<BackupSummary> list0;
    deserializer.ReadList(memberSchema, [&](smithy::schema::ShapeDeserializer& itemDeserializer0) {
      BackupSummary nested1;
      ListBackupsResult_BackupSummarySchemaSerdeDeser{nested1}.Deserialize(itemDeserializer0);
      list0.push_back(std::move(nested1));
    });
    m_obj.SetBackupSummaries(std::move(list0));
    return;
  }
  if (memberName == "LastEvaluatedBackupArn") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetLastEvaluatedBackupArn(*value0);
    }
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> ListBackupsResultDeserializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("ListBackupsResult")
      .PutMember("BackupSummaries",
                 smithy::schema::Schema::ListBuilder("BackupSummaries")
                     .PutMember("member", ListBackupsResultSchemaCache<ListBackupsResult_BackupSummarySchemaSerdeDeser>::Get())
                     .Build())
      .PutMember("LastEvaluatedBackupArn", smithy::schema::Schema::CreateString("LastEvaluatedBackupArn"))
      .Build();
}

}  // namespace
}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws

Aws::UniquePtr<smithy::schema::SerializableStruct> ListBackupsResult::GetSchemaSerdeOutput() {
  return Aws::MakeUnique<ListBackupsResultDeserializable>("ListBackupsResultDeserializable", *this);
}
