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
#include <aws/dynamodb/model/ListBackupsRequest.h>
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
class ListBackupsRequestSchemaCache {
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
        Aws::New<std::shared_ptr<const smithy::schema::Schema>>("ListBackupsRequestSchemaCache", Adapter::BuildSchema());
    Aws::Utils::ComponentRegistry::RegisterComponent("ListBackupsRequestSchemaCache", built, &Release);
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
std::atomic<std::shared_ptr<const smithy::schema::Schema>*> ListBackupsRequestSchemaCache<Adapter>::s_schema{nullptr};
template <typename Adapter>
std::mutex ListBackupsRequestSchemaCache<Adapter>::s_mutex;

class ListBackupsRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit ListBackupsRequestSerializable(const ListBackupsRequest& obj)
      : m_obj(obj), m_schema(ListBackupsRequestSchemaCache<ListBackupsRequestSerializable>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const ListBackupsRequest& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void ListBackupsRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.TableNameHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("TableName").value();
    serializer.WriteString(memberSchema, m_obj.GetTableName());
  }
  if (m_obj.LimitHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("Limit").value();
    serializer.WriteInteger(memberSchema, m_obj.GetLimit());
  }
  if (m_obj.TimeRangeLowerBoundHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("TimeRangeLowerBound").value();
    serializer.WriteTimestamp(memberSchema, m_obj.GetTimeRangeLowerBound());
  }
  if (m_obj.TimeRangeUpperBoundHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("TimeRangeUpperBound").value();
    serializer.WriteTimestamp(memberSchema, m_obj.GetTimeRangeUpperBound());
  }
  if (m_obj.ExclusiveStartBackupArnHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ExclusiveStartBackupArn").value();
    serializer.WriteString(memberSchema, m_obj.GetExclusiveStartBackupArn());
  }
  if (m_obj.BackupTypeHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("BackupType").value();
    serializer.WriteString(memberSchema, BackupTypeFilterMapper::GetNameForBackupTypeFilter(m_obj.GetBackupType()));
  }
}

std::shared_ptr<const smithy::schema::Schema> ListBackupsRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("ListBackupsRequest")
      .PutMember("TableName", smithy::schema::Schema::CreateString("TableName"))
      .PutMember("Limit", smithy::schema::Schema::CreateInteger("Limit"))
      .PutMember("TimeRangeLowerBound", smithy::schema::Schema::CreateTimestamp("TimeRangeLowerBound"))
      .PutMember("TimeRangeUpperBound", smithy::schema::Schema::CreateTimestamp("TimeRangeUpperBound"))
      .PutMember("ExclusiveStartBackupArn", smithy::schema::Schema::CreateString("ExclusiveStartBackupArn"))
      .PutMember("BackupType", smithy::schema::Schema::CreateEnum("BackupType"))
      .Build();
}

}  // namespace
}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws

Aws::UniquePtr<smithy::schema::SerializableStruct> ListBackupsRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<ListBackupsRequestSerializable>("ListBackupsRequestSerializable", *this);
}

Aws::String ListBackupsRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext ListBackupsRequest::GetSchemaSerdeContext() const { return {"ListBackups", "2012-08-10"}; }

Aws::Http::HeaderValueCollection ListBackupsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DynamoDB_20120810.ListBackups"));
  return headers;
}

ListBackupsRequest::EndpointParameters ListBackupsRequest::GetEndpointContextParams() const {
  EndpointParameters parameters;
  // Operation context parameters
  if (TableNameHasBeenSet()) {
    parameters.emplace_back(Aws::String("ResourceArn"), this->GetTableName(),
                            Aws::Endpoint::EndpointParameter::ParameterOrigin::OPERATION_CONTEXT);
  }
  return parameters;
}
