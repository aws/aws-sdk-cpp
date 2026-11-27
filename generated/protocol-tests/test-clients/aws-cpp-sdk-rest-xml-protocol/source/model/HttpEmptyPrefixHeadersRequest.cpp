/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/component-registry/ComponentRegistry.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/rest-xml-protocol/model/HttpEmptyPrefixHeadersRequest.h>
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
#include <utility>

using namespace Aws::RestXmlProtocol::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws::Http;

namespace Aws {
namespace RestXmlProtocol {
namespace Model {
namespace {
template <typename Adapter>
class HttpEmptyPrefixHeadersRequestSchemaCache {
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
        Aws::New<std::shared_ptr<const smithy::schema::Schema>>("HttpEmptyPrefixHeadersRequestSchemaCache", Adapter::BuildSchema());
    Aws::Utils::ComponentRegistry::RegisterComponent("HttpEmptyPrefixHeadersRequestSchemaCache", built, &Release);
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
std::atomic<std::shared_ptr<const smithy::schema::Schema>*> HttpEmptyPrefixHeadersRequestSchemaCache<Adapter>::s_schema{nullptr};
template <typename Adapter>
std::mutex HttpEmptyPrefixHeadersRequestSchemaCache<Adapter>::s_mutex;

class HttpEmptyPrefixHeadersRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit HttpEmptyPrefixHeadersRequestSerializable(const HttpEmptyPrefixHeadersRequest& obj)
      : m_obj(obj), m_schema(HttpEmptyPrefixHeadersRequestSchemaCache<HttpEmptyPrefixHeadersRequestSerializable>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const HttpEmptyPrefixHeadersRequest& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void HttpEmptyPrefixHeadersRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.PrefixHeadersHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("prefixHeaders").value();
    serializer.WriteMap(memberSchema, m_obj.GetPrefixHeaders().size(), [&](smithy::schema::MapSerializer& mapSerializer0) {
      const smithy::schema::Schema& valueSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("value").value();
      for (const auto& entry0 : m_obj.GetPrefixHeaders()) {
        mapSerializer0.WriteEntry(entry0.first, [&](smithy::schema::ShapeSerializer& valueSerializer0) {
          valueSerializer0.WriteString(valueSchema0, entry0.second);
        });
      }
    });
  }
  if (m_obj.SpecificHeaderHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("specificHeader").value();
    serializer.WriteString(memberSchema, m_obj.GetSpecificHeader());
  }
}

std::shared_ptr<const smithy::schema::Schema> HttpEmptyPrefixHeadersRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("HttpEmptyPrefixHeadersRequest")
      .PutMember("prefixHeaders",
                 smithy::schema::Schema::MapBuilder("StringMap")
                     .PutMember("key", smithy::schema::Schema::CreateString("key"))
                     .PutMember("value", smithy::schema::Schema::CreateString("value"))
                     .Build(),
                 {{smithy::schema::HttpPrefixHeadersTrait::KEY(),
                   Aws::MakeShared<smithy::schema::HttpPrefixHeadersTrait>("SchemaSerdeTrait", "")}})
      .PutMember("specificHeader", smithy::schema::Schema::CreateString("specificHeader"),
                 {{smithy::schema::HttpHeaderTrait::KEY(), Aws::MakeShared<smithy::schema::HttpHeaderTrait>("SchemaSerdeTrait", "hello")}})
      .Build();
}

}  // namespace
}  // namespace Model
}  // namespace RestXmlProtocol
}  // namespace Aws

Aws::UniquePtr<smithy::schema::SerializableStruct> HttpEmptyPrefixHeadersRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<HttpEmptyPrefixHeadersRequestSerializable>("HttpEmptyPrefixHeadersRequestSerializable", *this);
}

Aws::String HttpEmptyPrefixHeadersRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext HttpEmptyPrefixHeadersRequest::GetSchemaSerdeContext() const {
  return {"HttpEmptyPrefixHeaders", "2019-12-16", "/HttpEmptyPrefixHeaders", ""};
}

Aws::Http::HeaderValueCollection HttpEmptyPrefixHeadersRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  return headers;
}
