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
#include <aws/rest-json-protocol/model/DocumentTypeAsMapValueResult.h>
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

using namespace Aws::RestJsonProtocol::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DocumentTypeAsMapValueResult::DocumentTypeAsMapValueResult(const Aws::AmazonWebServiceResult<Aws::String>& result) { *this = result; }

DocumentTypeAsMapValueResult& DocumentTypeAsMapValueResult::operator=(const Aws::AmazonWebServiceResult<Aws::String>& result) {
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
namespace RestJsonProtocol {
namespace Model {
namespace {
template <typename Adapter>
class DocumentTypeAsMapValueResultSchemaCache {
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
        Aws::New<std::shared_ptr<const smithy::schema::Schema>>("DocumentTypeAsMapValueResultSchemaCache", Adapter::BuildSchema());
    Aws::Utils::ComponentRegistry::RegisterComponent("DocumentTypeAsMapValueResultSchemaCache", built, &Release);
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
std::atomic<std::shared_ptr<const smithy::schema::Schema>*> DocumentTypeAsMapValueResultSchemaCache<Adapter>::s_schema{nullptr};
template <typename Adapter>
std::mutex DocumentTypeAsMapValueResultSchemaCache<Adapter>::s_mutex;

class DocumentTypeAsMapValueResultDeserializable final : public smithy::schema::SerializableStruct {
 public:
  explicit DocumentTypeAsMapValueResultDeserializable(DocumentTypeAsMapValueResult& obj)
      : m_obj(obj), m_schema(DocumentTypeAsMapValueResultSchemaCache<DocumentTypeAsMapValueResultDeserializable>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  DocumentTypeAsMapValueResult& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void DocumentTypeAsMapValueResultDeserializable::From(const smithy::schema::Schema& memberSchema,
                                                      smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "docValuedMap") {
    Aws::Map<Aws::String, Aws::Utils::Document> map0;
    deserializer.ReadMap(memberSchema, [&](const Aws::String& key0, smithy::schema::ShapeDeserializer& valueDeserializer0) {
      const smithy::schema::Schema& valueSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("value").value();
      auto value1 = valueDeserializer0.ReadDocument(valueSchema0);
      if (value1) {
        map0[key0] = smithy::schema::ToUtilsDocument(*value1);
      }
    });
    m_obj.SetDocValuedMap(std::move(map0));
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> DocumentTypeAsMapValueResultDeserializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("DocumentTypeAsMapValueResult")
      .PutMember("docValuedMap", smithy::schema::Schema::MapBuilder("DocumentValuedMap")
                                     .PutMember("key", smithy::schema::Schema::CreateString("key"))
                                     .PutMember("value", smithy::schema::Schema::CreateDocument("value"))
                                     .Build())
      .Build();
}

}  // namespace
}  // namespace Model
}  // namespace RestJsonProtocol
}  // namespace Aws

Aws::UniquePtr<smithy::schema::SerializableStruct> DocumentTypeAsMapValueResult::GetSchemaSerdeOutput() {
  return Aws::MakeUnique<DocumentTypeAsMapValueResultDeserializable>("DocumentTypeAsMapValueResultDeserializable", *this);
}
