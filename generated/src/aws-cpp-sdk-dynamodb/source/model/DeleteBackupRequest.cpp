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
#include <aws/dynamodb/model/DeleteBackupRequest.h>
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
class DeleteBackupRequestSchemaCache {
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
        Aws::New<std::shared_ptr<const smithy::schema::Schema>>("DeleteBackupRequestSchemaCache", Adapter::BuildSchema());
    Aws::Utils::ComponentRegistry::RegisterComponent("DeleteBackupRequestSchemaCache", built, &Release);
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
std::atomic<std::shared_ptr<const smithy::schema::Schema>*> DeleteBackupRequestSchemaCache<Adapter>::s_schema{nullptr};
template <typename Adapter>
std::mutex DeleteBackupRequestSchemaCache<Adapter>::s_mutex;

class DeleteBackupRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit DeleteBackupRequestSerializable(const DeleteBackupRequest& obj)
      : m_obj(obj), m_schema(DeleteBackupRequestSchemaCache<DeleteBackupRequestSerializable>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const DeleteBackupRequest& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void DeleteBackupRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.BackupArnHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("BackupArn").value();
    serializer.WriteString(memberSchema, m_obj.GetBackupArn());
  }
}

std::shared_ptr<const smithy::schema::Schema> DeleteBackupRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("DeleteBackupRequest")
      .PutMember("BackupArn", smithy::schema::Schema::CreateString("BackupArn"))
      .Build();
}

}  // namespace
}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws

Aws::UniquePtr<smithy::schema::SerializableStruct> DeleteBackupRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<DeleteBackupRequestSerializable>("DeleteBackupRequestSerializable", *this);
}

Aws::String DeleteBackupRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext DeleteBackupRequest::GetSchemaSerdeContext() const { return {"DeleteBackup", "2012-08-10"}; }

Aws::Http::HeaderValueCollection DeleteBackupRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DynamoDB_20120810.DeleteBackup"));
  return headers;
}

DeleteBackupRequest::EndpointParameters DeleteBackupRequest::GetEndpointContextParams() const {
  EndpointParameters parameters;
  // Operation context parameters
  if (BackupArnHasBeenSet()) {
    parameters.emplace_back(Aws::String("ResourceArn"), this->GetBackupArn(),
                            Aws::Endpoint::EndpointParameter::ParameterOrigin::OPERATION_CONTEXT);
  }
  return parameters;
}
