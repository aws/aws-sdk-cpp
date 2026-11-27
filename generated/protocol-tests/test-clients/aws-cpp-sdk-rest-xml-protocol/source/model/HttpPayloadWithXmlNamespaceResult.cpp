/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/component-registry/ComponentRegistry.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/rest-xml-protocol/model/HttpPayloadWithXmlNamespaceResult.h>
#include <smithy/client/schema/DocumentConversion.h>
#include <smithy/client/schema/HttpTraits.h>
#include <smithy/client/schema/Schema.h>
#include <smithy/client/schema/SchemaBuilder.h>
#include <smithy/client/schema/SerdeTraits.h>
#include <smithy/client/schema/SerializableStruct.h>
#include <smithy/client/schema/ShapeDeserializer.h>
#include <smithy/client/schema/XmlTraits.h>

#include <atomic>
#include <mutex>
#include <utility>

using namespace Aws::RestXmlProtocol::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

HttpPayloadWithXmlNamespaceResult::HttpPayloadWithXmlNamespaceResult(const Aws::AmazonWebServiceResult<Aws::String>& result) {
  *this = result;
}

HttpPayloadWithXmlNamespaceResult& HttpPayloadWithXmlNamespaceResult::operator=(const Aws::AmazonWebServiceResult<Aws::String>& result) {
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
namespace RestXmlProtocol {
namespace Model {
namespace {
template <typename Adapter>
class HttpPayloadWithXmlNamespaceResultSchemaCache {
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
        Aws::New<std::shared_ptr<const smithy::schema::Schema>>("HttpPayloadWithXmlNamespaceResultSchemaCache", Adapter::BuildSchema());
    Aws::Utils::ComponentRegistry::RegisterComponent("HttpPayloadWithXmlNamespaceResultSchemaCache", built, &Release);
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
std::atomic<std::shared_ptr<const smithy::schema::Schema>*> HttpPayloadWithXmlNamespaceResultSchemaCache<Adapter>::s_schema{nullptr};
template <typename Adapter>
std::mutex HttpPayloadWithXmlNamespaceResultSchemaCache<Adapter>::s_mutex;

class HttpPayloadWithXmlNamespaceResult_PayloadWithXmlNamespaceSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit HttpPayloadWithXmlNamespaceResult_PayloadWithXmlNamespaceSchemaSerdeDeser(PayloadWithXmlNamespace& obj)
      : m_obj(obj),
        m_schema(HttpPayloadWithXmlNamespaceResultSchemaCache<
                 HttpPayloadWithXmlNamespaceResult_PayloadWithXmlNamespaceSchemaSerdeDeser>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  PayloadWithXmlNamespace& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class HttpPayloadWithXmlNamespaceResultDeserializable final : public smithy::schema::SerializableStruct {
 public:
  explicit HttpPayloadWithXmlNamespaceResultDeserializable(HttpPayloadWithXmlNamespaceResult& obj)
      : m_obj(obj), m_schema(HttpPayloadWithXmlNamespaceResultSchemaCache<HttpPayloadWithXmlNamespaceResultDeserializable>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  HttpPayloadWithXmlNamespaceResult& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void HttpPayloadWithXmlNamespaceResult_PayloadWithXmlNamespaceSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
                                                                                     smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "name") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetName(*value0);
    }
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> HttpPayloadWithXmlNamespaceResult_PayloadWithXmlNamespaceSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("PayloadWithXmlNamespace")
      .PutMember("name", smithy::schema::Schema::CreateString("name"))
      .Build();
}

void HttpPayloadWithXmlNamespaceResultDeserializable::From(const smithy::schema::Schema& memberSchema,
                                                           smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "nested") {
    PayloadWithXmlNamespace nested0;
    HttpPayloadWithXmlNamespaceResult_PayloadWithXmlNamespaceSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetNested(std::move(nested0));
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> HttpPayloadWithXmlNamespaceResultDeserializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("HttpPayloadWithXmlNamespaceResult")
      .PutMember(
          "nested",
          HttpPayloadWithXmlNamespaceResultSchemaCache<HttpPayloadWithXmlNamespaceResult_PayloadWithXmlNamespaceSchemaSerdeDeser>::Get(),
          {{smithy::schema::XmlNameTrait::KEY(),
            Aws::MakeShared<smithy::schema::XmlNameTrait>("SchemaSerdeTrait", "PayloadWithXmlNamespace")},
           {smithy::schema::XmlNamespaceTrait::KEY(),
            Aws::MakeShared<smithy::schema::XmlNamespaceTrait>("SchemaSerdeTrait", "http://foo.com")},
           {smithy::schema::HttpPayloadTrait::KEY(), Aws::MakeShared<smithy::schema::HttpPayloadTrait>("SchemaSerdeTrait")}})
      .Build();
}

}  // namespace
}  // namespace Model
}  // namespace RestXmlProtocol
}  // namespace Aws

Aws::UniquePtr<smithy::schema::SerializableStruct> HttpPayloadWithXmlNamespaceResult::GetSchemaSerdeOutput() {
  return Aws::MakeUnique<HttpPayloadWithXmlNamespaceResultDeserializable>("HttpPayloadWithXmlNamespaceResultDeserializable", *this);
}
