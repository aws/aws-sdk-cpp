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
#include <aws/rest-xml-protocol/model/XmlAttributesInMiddleRequest.h>
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
class XmlAttributesInMiddleRequestSchemaCache {
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
        Aws::New<std::shared_ptr<const smithy::schema::Schema>>("XmlAttributesInMiddleRequestSchemaCache", Adapter::BuildSchema());
    Aws::Utils::ComponentRegistry::RegisterComponent("XmlAttributesInMiddleRequestSchemaCache", built, &Release);
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
std::atomic<std::shared_ptr<const smithy::schema::Schema>*> XmlAttributesInMiddleRequestSchemaCache<Adapter>::s_schema{nullptr};
template <typename Adapter>
std::mutex XmlAttributesInMiddleRequestSchemaCache<Adapter>::s_mutex;

class XmlAttributesInMiddleRequest_XmlAttributesInMiddlePayloadRequestSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit XmlAttributesInMiddleRequest_XmlAttributesInMiddlePayloadRequestSchemaSerdeSer(const XmlAttributesInMiddlePayloadRequest& obj)
      : m_obj(obj),
        m_schema(XmlAttributesInMiddleRequestSchemaCache<
                 XmlAttributesInMiddleRequest_XmlAttributesInMiddlePayloadRequestSchemaSerdeSer>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const XmlAttributesInMiddlePayloadRequest& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class XmlAttributesInMiddleRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit XmlAttributesInMiddleRequestSerializable(const XmlAttributesInMiddleRequest& obj)
      : m_obj(obj), m_schema(XmlAttributesInMiddleRequestSchemaCache<XmlAttributesInMiddleRequestSerializable>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const XmlAttributesInMiddleRequest& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void XmlAttributesInMiddleRequest_XmlAttributesInMiddlePayloadRequestSchemaSerdeSer::SerializeMembers(
    smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.FooHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("foo").value();
    serializer.WriteString(memberSchema, m_obj.GetFoo());
  }
  if (m_obj.AttrHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("attr").value();
    serializer.WriteString(memberSchema, m_obj.GetAttr());
  }
  if (m_obj.BazHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("baz").value();
    serializer.WriteString(memberSchema, m_obj.GetBaz());
  }
}

std::shared_ptr<const smithy::schema::Schema>
XmlAttributesInMiddleRequest_XmlAttributesInMiddlePayloadRequestSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("XmlAttributesInMiddlePayloadRequest")
      .PutMember("foo", smithy::schema::Schema::CreateString("foo"))
      .PutMember("attr", smithy::schema::Schema::CreateString("attr"),
                 {{smithy::schema::XmlNameTrait::KEY(), Aws::MakeShared<smithy::schema::XmlNameTrait>("SchemaSerdeTrait", "test")},
                  {smithy::schema::XmlAttributeTrait::KEY(), Aws::MakeShared<smithy::schema::XmlAttributeTrait>("SchemaSerdeTrait")}})
      .PutMember("baz", smithy::schema::Schema::CreateString("baz"))
      .Build();
}

void XmlAttributesInMiddleRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.PayloadHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("payload").value();
    XmlAttributesInMiddleRequest_XmlAttributesInMiddlePayloadRequestSchemaSerdeSer nested0(m_obj.GetPayload());
    serializer.WriteStruct(memberSchema, nested0);
  }
}

std::shared_ptr<const smithy::schema::Schema> XmlAttributesInMiddleRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("XmlAttributesInMiddleRequest")
      .PutMember(
          "payload",
          XmlAttributesInMiddleRequestSchemaCache<XmlAttributesInMiddleRequest_XmlAttributesInMiddlePayloadRequestSchemaSerdeSer>::Get(),
          {{smithy::schema::XmlNameTrait::KEY(),
            Aws::MakeShared<smithy::schema::XmlNameTrait>("SchemaSerdeTrait", "XmlAttributesInMiddlePayloadRequest")},
           {smithy::schema::HttpPayloadTrait::KEY(), Aws::MakeShared<smithy::schema::HttpPayloadTrait>("SchemaSerdeTrait")}})
      .Build();
}

}  // namespace
}  // namespace Model
}  // namespace RestXmlProtocol
}  // namespace Aws

Aws::UniquePtr<smithy::schema::SerializableStruct> XmlAttributesInMiddleRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<XmlAttributesInMiddleRequestSerializable>("XmlAttributesInMiddleRequestSerializable", *this);
}

Aws::String XmlAttributesInMiddleRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext XmlAttributesInMiddleRequest::GetSchemaSerdeContext() const {
  return {"XmlAttributesInMiddle", "2019-12-16", "/XmlAttributesInMiddle", ""};
}
