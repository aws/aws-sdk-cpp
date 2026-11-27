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
#include <aws/json-protocol/model/PutAndGetInlineDocumentsResult.h>
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

using namespace Aws::JsonProtocol::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

PutAndGetInlineDocumentsResult::PutAndGetInlineDocumentsResult(const Aws::AmazonWebServiceResult<Aws::String>& result) { *this = result; }

PutAndGetInlineDocumentsResult& PutAndGetInlineDocumentsResult::operator=(const Aws::AmazonWebServiceResult<Aws::String>& result) {
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
namespace JsonProtocol {
namespace Model {
namespace {
template <typename Adapter>
class PutAndGetInlineDocumentsResultSchemaCache {
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
        Aws::New<std::shared_ptr<const smithy::schema::Schema>>("PutAndGetInlineDocumentsResultSchemaCache", Adapter::BuildSchema());
    Aws::Utils::ComponentRegistry::RegisterComponent("PutAndGetInlineDocumentsResultSchemaCache", built, &Release);
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
std::atomic<std::shared_ptr<const smithy::schema::Schema>*> PutAndGetInlineDocumentsResultSchemaCache<Adapter>::s_schema{nullptr};
template <typename Adapter>
std::mutex PutAndGetInlineDocumentsResultSchemaCache<Adapter>::s_mutex;

class PutAndGetInlineDocumentsResultDeserializable final : public smithy::schema::SerializableStruct {
 public:
  explicit PutAndGetInlineDocumentsResultDeserializable(PutAndGetInlineDocumentsResult& obj)
      : m_obj(obj), m_schema(PutAndGetInlineDocumentsResultSchemaCache<PutAndGetInlineDocumentsResultDeserializable>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  PutAndGetInlineDocumentsResult& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void PutAndGetInlineDocumentsResultDeserializable::From(const smithy::schema::Schema& memberSchema,
                                                        smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "inlineDocument") {
    auto value0 = deserializer.ReadDocument(memberSchema);
    if (value0) {
      m_obj.SetInlineDocument(smithy::schema::ToUtilsDocument(*value0));
    }
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> PutAndGetInlineDocumentsResultDeserializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("PutAndGetInlineDocumentsResult")
      .PutMember("inlineDocument", smithy::schema::Schema::CreateDocument("inlineDocument"))
      .Build();
}

}  // namespace
}  // namespace Model
}  // namespace JsonProtocol
}  // namespace Aws

Aws::UniquePtr<smithy::schema::SerializableStruct> PutAndGetInlineDocumentsResult::GetSchemaSerdeOutput() {
  return Aws::MakeUnique<PutAndGetInlineDocumentsResultDeserializable>("PutAndGetInlineDocumentsResultDeserializable", *this);
}
