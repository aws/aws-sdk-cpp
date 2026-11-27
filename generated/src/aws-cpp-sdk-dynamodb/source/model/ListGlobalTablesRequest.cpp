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
#include <aws/dynamodb/model/ListGlobalTablesRequest.h>
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
class ListGlobalTablesRequestSchemaCache {
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
        Aws::New<std::shared_ptr<const smithy::schema::Schema>>("ListGlobalTablesRequestSchemaCache", Adapter::BuildSchema());
    Aws::Utils::ComponentRegistry::RegisterComponent("ListGlobalTablesRequestSchemaCache", built, &Release);
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
std::atomic<std::shared_ptr<const smithy::schema::Schema>*> ListGlobalTablesRequestSchemaCache<Adapter>::s_schema{nullptr};
template <typename Adapter>
std::mutex ListGlobalTablesRequestSchemaCache<Adapter>::s_mutex;

class ListGlobalTablesRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit ListGlobalTablesRequestSerializable(const ListGlobalTablesRequest& obj)
      : m_obj(obj), m_schema(ListGlobalTablesRequestSchemaCache<ListGlobalTablesRequestSerializable>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const ListGlobalTablesRequest& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void ListGlobalTablesRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.ExclusiveStartGlobalTableNameHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ExclusiveStartGlobalTableName").value();
    serializer.WriteString(memberSchema, m_obj.GetExclusiveStartGlobalTableName());
  }
  if (m_obj.LimitHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("Limit").value();
    serializer.WriteInteger(memberSchema, m_obj.GetLimit());
  }
  if (m_obj.RegionNameHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("RegionName").value();
    serializer.WriteString(memberSchema, m_obj.GetRegionName());
  }
}

std::shared_ptr<const smithy::schema::Schema> ListGlobalTablesRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("ListGlobalTablesRequest")
      .PutMember("ExclusiveStartGlobalTableName", smithy::schema::Schema::CreateString("ExclusiveStartGlobalTableName"))
      .PutMember("Limit", smithy::schema::Schema::CreateInteger("Limit"))
      .PutMember("RegionName", smithy::schema::Schema::CreateString("RegionName"))
      .Build();
}

}  // namespace
}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws

Aws::UniquePtr<smithy::schema::SerializableStruct> ListGlobalTablesRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<ListGlobalTablesRequestSerializable>("ListGlobalTablesRequestSerializable", *this);
}

Aws::String ListGlobalTablesRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext ListGlobalTablesRequest::GetSchemaSerdeContext() const {
  return {"ListGlobalTables", "2012-08-10"};
}

Aws::Http::HeaderValueCollection ListGlobalTablesRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DynamoDB_20120810.ListGlobalTables"));
  return headers;
}
