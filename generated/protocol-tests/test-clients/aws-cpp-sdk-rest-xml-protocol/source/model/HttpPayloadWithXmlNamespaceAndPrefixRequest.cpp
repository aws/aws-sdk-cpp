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
#include <aws/rest-xml-protocol/model/HttpPayloadWithXmlNamespaceAndPrefixRequest.h>
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
class HttpPayloadWithXmlNamespaceAndPrefixRequestSchemaCache {
 public:
  static std::shared_ptr<const smithy::schema::Schema> Get() {
    if (std::shared_ptr<const smithy::schema::Schema>* cached = s_schema.load(std::memory_order_acquire)) {
      return *cached;
    }
    std::lock_guard<std::mutex> lock(s_mutex);
    if (std::shared_ptr<const smithy::schema::Schema>* cached = s_schema.load(std::memory_order_relaxed)) {
      return *cached;
    }
    std::shared_ptr<const smithy::schema::Schema>* built = Aws::New<std::shared_ptr<const smithy::schema::Schema>>(
        "HttpPayloadWithXmlNamespaceAndPrefixRequestSchemaCache", Adapter::BuildSchema());
    Aws::Utils::ComponentRegistry::RegisterComponent("HttpPayloadWithXmlNamespaceAndPrefixRequestSchemaCache", built, &Release);
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
std::atomic<std::shared_ptr<const smithy::schema::Schema>*> HttpPayloadWithXmlNamespaceAndPrefixRequestSchemaCache<Adapter>::s_schema{
    nullptr};
template <typename Adapter>
std::mutex HttpPayloadWithXmlNamespaceAndPrefixRequestSchemaCache<Adapter>::s_mutex;

class HttpPayloadWithXmlNamespaceAndPrefixRequest_PayloadWithXmlNamespaceAndPrefixSchemaSerdeSer final
    : public smithy::schema::SerializableStruct {
 public:
  explicit HttpPayloadWithXmlNamespaceAndPrefixRequest_PayloadWithXmlNamespaceAndPrefixSchemaSerdeSer(
      const PayloadWithXmlNamespaceAndPrefix& obj)
      : m_obj(obj),
        m_schema(HttpPayloadWithXmlNamespaceAndPrefixRequestSchemaCache<
                 HttpPayloadWithXmlNamespaceAndPrefixRequest_PayloadWithXmlNamespaceAndPrefixSchemaSerdeSer>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const PayloadWithXmlNamespaceAndPrefix& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class HttpPayloadWithXmlNamespaceAndPrefixRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit HttpPayloadWithXmlNamespaceAndPrefixRequestSerializable(const HttpPayloadWithXmlNamespaceAndPrefixRequest& obj)
      : m_obj(obj),
        m_schema(HttpPayloadWithXmlNamespaceAndPrefixRequestSchemaCache<HttpPayloadWithXmlNamespaceAndPrefixRequestSerializable>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const HttpPayloadWithXmlNamespaceAndPrefixRequest& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void HttpPayloadWithXmlNamespaceAndPrefixRequest_PayloadWithXmlNamespaceAndPrefixSchemaSerdeSer::SerializeMembers(
    smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.NameHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("name").value();
    serializer.WriteString(memberSchema, m_obj.GetName());
  }
}

std::shared_ptr<const smithy::schema::Schema>
HttpPayloadWithXmlNamespaceAndPrefixRequest_PayloadWithXmlNamespaceAndPrefixSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("PayloadWithXmlNamespaceAndPrefix")
      .PutMember("name", smithy::schema::Schema::CreateString("name"))
      .Build();
}

void HttpPayloadWithXmlNamespaceAndPrefixRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.NestedHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("nested").value();
    HttpPayloadWithXmlNamespaceAndPrefixRequest_PayloadWithXmlNamespaceAndPrefixSchemaSerdeSer nested0(m_obj.GetNested());
    serializer.WriteStruct(memberSchema, nested0);
  }
}

std::shared_ptr<const smithy::schema::Schema> HttpPayloadWithXmlNamespaceAndPrefixRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("HttpPayloadWithXmlNamespaceAndPrefixRequest")
      .PutMember("nested",
                 HttpPayloadWithXmlNamespaceAndPrefixRequestSchemaCache<
                     HttpPayloadWithXmlNamespaceAndPrefixRequest_PayloadWithXmlNamespaceAndPrefixSchemaSerdeSer>::Get(),
                 {{smithy::schema::XmlNameTrait::KEY(),
                   Aws::MakeShared<smithy::schema::XmlNameTrait>("SchemaSerdeTrait", "PayloadWithXmlNamespaceAndPrefix")},
                  {smithy::schema::XmlNamespaceTrait::KEY(),
                   Aws::MakeShared<smithy::schema::XmlNamespaceTrait>("SchemaSerdeTrait", "http://foo.com", "baz")},
                  {smithy::schema::HttpPayloadTrait::KEY(), Aws::MakeShared<smithy::schema::HttpPayloadTrait>("SchemaSerdeTrait")}})
      .Build();
}

}  // namespace
}  // namespace Model
}  // namespace RestXmlProtocol
}  // namespace Aws

Aws::UniquePtr<smithy::schema::SerializableStruct> HttpPayloadWithXmlNamespaceAndPrefixRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<HttpPayloadWithXmlNamespaceAndPrefixRequestSerializable>("HttpPayloadWithXmlNamespaceAndPrefixRequestSerializable",
                                                                                  *this);
}

Aws::String HttpPayloadWithXmlNamespaceAndPrefixRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext HttpPayloadWithXmlNamespaceAndPrefixRequest::GetSchemaSerdeContext() const {
  return {"HttpPayloadWithXmlNamespaceAndPrefix", "2019-12-16", "/HttpPayloadWithXmlNamespaceAndPrefix", ""};
}
