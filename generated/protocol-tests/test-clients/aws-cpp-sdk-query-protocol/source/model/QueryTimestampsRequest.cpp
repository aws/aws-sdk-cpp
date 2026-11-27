/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/component-registry/ComponentRegistry.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/query-protocol/model/QueryTimestampsRequest.h>
#include <smithy/client/schema/ClientProtocol.h>
#include <smithy/client/schema/DocumentConversion.h>
#include <smithy/client/schema/HttpTraits.h>
#include <smithy/client/schema/MapSerializer.h>
#include <smithy/client/schema/Schema.h>
#include <smithy/client/schema/SchemaBuilder.h>
#include <smithy/client/schema/SerdeTraits.h>
#include <smithy/client/schema/SerializableStruct.h>
#include <smithy/client/schema/ShapeSerializer.h>
#include <smithy/client/schema/XmlTraits.h>

#include <atomic>
#include <mutex>
#include <numeric>

using namespace Aws::QueryProtocol::Model;
using namespace Aws::Utils;

namespace Aws {
namespace QueryProtocol {
namespace Model {
namespace {
template <typename Adapter>
class QueryTimestampsRequestSchemaCache {
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
        Aws::New<std::shared_ptr<const smithy::schema::Schema>>("QueryTimestampsRequestSchemaCache", Adapter::BuildSchema());
    Aws::Utils::ComponentRegistry::RegisterComponent("QueryTimestampsRequestSchemaCache", built, &Release);
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
std::atomic<std::shared_ptr<const smithy::schema::Schema>*> QueryTimestampsRequestSchemaCache<Adapter>::s_schema{nullptr};
template <typename Adapter>
std::mutex QueryTimestampsRequestSchemaCache<Adapter>::s_mutex;

class QueryTimestampsRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit QueryTimestampsRequestSerializable(const QueryTimestampsRequest& obj)
      : m_obj(obj), m_schema(QueryTimestampsRequestSchemaCache<QueryTimestampsRequestSerializable>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const QueryTimestampsRequest& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void QueryTimestampsRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.NormalFormatHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("normalFormat").value();
    serializer.WriteTimestamp(memberSchema, m_obj.GetNormalFormat());
  }
  if (m_obj.EpochMemberHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("epochMember").value();
    serializer.WriteTimestamp(memberSchema, m_obj.GetEpochMember());
  }
  if (m_obj.EpochTargetHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("epochTarget").value();
    serializer.WriteTimestamp(memberSchema, m_obj.GetEpochTarget());
  }
}

std::shared_ptr<const smithy::schema::Schema> QueryTimestampsRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("QueryTimestampsRequest")
      .PutMember("normalFormat", smithy::schema::Schema::CreateTimestamp("normalFormat"))
      .PutMember("epochMember", smithy::schema::Schema::CreateTimestamp("epochMember"),
                 {{smithy::schema::TimestampFormatTrait::KEY(),
                   Aws::MakeShared<smithy::schema::TimestampFormatTrait>("SchemaSerdeTrait",
                                                                         smithy::schema::TimestampFormatTrait::Format::EPOCH_SECONDS)}})
      .PutMember("epochTarget", smithy::schema::Schema::CreateTimestamp("epochTarget"),
                 {{smithy::schema::TimestampFormatTrait::KEY(),
                   Aws::MakeShared<smithy::schema::TimestampFormatTrait>("SchemaSerdeTrait",
                                                                         smithy::schema::TimestampFormatTrait::Format::EPOCH_SECONDS)}})
      .Build();
}

}  // namespace
}  // namespace Model
}  // namespace QueryProtocol
}  // namespace Aws

Aws::UniquePtr<smithy::schema::SerializableStruct> QueryTimestampsRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<QueryTimestampsRequestSerializable>("QueryTimestampsRequestSerializable", *this);
}

Aws::String QueryTimestampsRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext QueryTimestampsRequest::GetSchemaSerdeContext() const { return {"QueryTimestamps", "2020-01-08"}; }

void QueryTimestampsRequest::DumpBodyToUrl(Aws::Http::URI& uri) const { uri.SetQueryString(SerializePayload()); }
