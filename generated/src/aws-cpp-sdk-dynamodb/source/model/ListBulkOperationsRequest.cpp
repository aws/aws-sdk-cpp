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
#include <aws/dynamodb/model/ListBulkOperationsRequest.h>
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
class ListBulkOperationsRequestSchemaCache {
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
        Aws::New<std::shared_ptr<const smithy::schema::Schema>>("ListBulkOperationsRequestSchemaCache", Adapter::BuildSchema());
    Aws::Utils::ComponentRegistry::RegisterComponent("ListBulkOperationsRequestSchemaCache", built, &Release);
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
std::atomic<std::shared_ptr<const smithy::schema::Schema>*> ListBulkOperationsRequestSchemaCache<Adapter>::s_schema{nullptr};
template <typename Adapter>
std::mutex ListBulkOperationsRequestSchemaCache<Adapter>::s_mutex;

class ListBulkOperationsRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit ListBulkOperationsRequestSerializable(const ListBulkOperationsRequest& obj)
      : m_obj(obj), m_schema(ListBulkOperationsRequestSchemaCache<ListBulkOperationsRequestSerializable>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const ListBulkOperationsRequest& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void ListBulkOperationsRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.MaxResultsHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("MaxResults").value();
    serializer.WriteInteger(memberSchema, m_obj.GetMaxResults());
  }
  if (m_obj.NextTokenHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("NextToken").value();
    serializer.WriteString(memberSchema, m_obj.GetNextToken());
  }
}

std::shared_ptr<const smithy::schema::Schema> ListBulkOperationsRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("ListBulkOperationsRequest")
      .PutMember("MaxResults", smithy::schema::Schema::CreateInteger("MaxResults"))
      .PutMember("NextToken", smithy::schema::Schema::CreateString("NextToken"))
      .Build();
}

}  // namespace
}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws

Aws::UniquePtr<smithy::schema::SerializableStruct> ListBulkOperationsRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<ListBulkOperationsRequestSerializable>("ListBulkOperationsRequestSerializable", *this);
}

Aws::String ListBulkOperationsRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext ListBulkOperationsRequest::GetSchemaSerdeContext() const {
  return {"ListBulkOperations", "2012-08-10"};
}

Aws::Http::HeaderValueCollection ListBulkOperationsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DynamoDB_20120810.ListBulkOperations"));
  return headers;
}
