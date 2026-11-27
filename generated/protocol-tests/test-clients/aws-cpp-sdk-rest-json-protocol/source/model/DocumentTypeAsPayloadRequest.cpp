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
#include <aws/rest-json-protocol/model/DocumentTypeAsPayloadRequest.h>
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

using namespace Aws::RestJsonProtocol::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace RestJsonProtocol {
namespace Model {
namespace {
template <typename Adapter>
class DocumentTypeAsPayloadRequestSchemaCache {
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
        Aws::New<std::shared_ptr<const smithy::schema::Schema>>("DocumentTypeAsPayloadRequestSchemaCache", Adapter::BuildSchema());
    Aws::Utils::ComponentRegistry::RegisterComponent("DocumentTypeAsPayloadRequestSchemaCache", built, &Release);
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
std::atomic<std::shared_ptr<const smithy::schema::Schema>*> DocumentTypeAsPayloadRequestSchemaCache<Adapter>::s_schema{nullptr};
template <typename Adapter>
std::mutex DocumentTypeAsPayloadRequestSchemaCache<Adapter>::s_mutex;

class DocumentTypeAsPayloadRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit DocumentTypeAsPayloadRequestSerializable(const DocumentTypeAsPayloadRequest& obj)
      : m_obj(obj), m_schema(DocumentTypeAsPayloadRequestSchemaCache<DocumentTypeAsPayloadRequestSerializable>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const DocumentTypeAsPayloadRequest& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void DocumentTypeAsPayloadRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.DocumentValueHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("documentValue").value();
    serializer.WriteDocument(memberSchema, *smithy::schema::ToSchemaDocument(m_obj.GetDocumentValue()));
  }
}

std::shared_ptr<const smithy::schema::Schema> DocumentTypeAsPayloadRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("DocumentTypeAsPayloadRequest")
      .PutMember("documentValue", smithy::schema::Schema::CreateDocument("documentValue"),
                 {{smithy::schema::HttpPayloadTrait::KEY(), Aws::MakeShared<smithy::schema::HttpPayloadTrait>("SchemaSerdeTrait")}})
      .Build();
}

}  // namespace
}  // namespace Model
}  // namespace RestJsonProtocol
}  // namespace Aws

Aws::UniquePtr<smithy::schema::SerializableStruct> DocumentTypeAsPayloadRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<DocumentTypeAsPayloadRequestSerializable>("DocumentTypeAsPayloadRequestSerializable", *this);
}

Aws::String DocumentTypeAsPayloadRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext DocumentTypeAsPayloadRequest::GetSchemaSerdeContext() const {
  return {"DocumentTypeAsPayload", "2019-12-16", "/DocumentTypeAsPayload", ""};
}
