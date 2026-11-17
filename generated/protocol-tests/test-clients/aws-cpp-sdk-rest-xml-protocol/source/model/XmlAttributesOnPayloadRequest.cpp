/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/rest-xml-protocol/model/XmlAttributesOnPayloadRequest.h>
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

#include <numeric>
#include <utility>

using namespace Aws::RestXmlProtocol::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws::Http;

namespace {
class XmlAttributesOnPayloadRequest_XmlAttributesPayloadRequestSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit XmlAttributesOnPayloadRequest_XmlAttributesPayloadRequestSchemaSerdeSer(const XmlAttributesPayloadRequest& obj)
      : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const XmlAttributesPayloadRequest& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class XmlAttributesOnPayloadRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit XmlAttributesOnPayloadRequestSerializable(const XmlAttributesOnPayloadRequest& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const XmlAttributesOnPayloadRequest& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void XmlAttributesOnPayloadRequest_XmlAttributesPayloadRequestSchemaSerdeSer::SerializeMembers(
    smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.FooHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("foo").value();
    serializer.WriteString(memberSchema, m_obj.GetFoo());
  }
  if (m_obj.AttrHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("attr").value();
    serializer.WriteString(memberSchema, m_obj.GetAttr());
  }
}

std::shared_ptr<const smithy::schema::Schema> XmlAttributesOnPayloadRequest_XmlAttributesPayloadRequestSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("XmlAttributesPayloadRequest")
      .PutMember("foo", smithy::schema::Schema::CreateString("foo"))
      .PutMember("attr", smithy::schema::Schema::CreateString("attr"),
                 {{smithy::schema::XmlNameTrait::KEY(), Aws::MakeShared<smithy::schema::XmlNameTrait>("SchemaSerdeTrait", "test")},
                  {smithy::schema::XmlAttributeTrait::KEY(), Aws::MakeShared<smithy::schema::XmlAttributeTrait>("SchemaSerdeTrait")}})
      .Build();
}

void XmlAttributesOnPayloadRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.PayloadHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("payload").value();
    XmlAttributesOnPayloadRequest_XmlAttributesPayloadRequestSchemaSerdeSer nested0(m_obj.GetPayload());
    serializer.WriteStruct(memberSchema, nested0);
  }
}

std::shared_ptr<const smithy::schema::Schema> XmlAttributesOnPayloadRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("XmlAttributesOnPayloadRequest")
      .PutMember("payload", XmlAttributesOnPayloadRequest_XmlAttributesPayloadRequestSchemaSerdeSer::BuildSchema(),
                 {{smithy::schema::XmlNameTrait::KEY(),
                   Aws::MakeShared<smithy::schema::XmlNameTrait>("SchemaSerdeTrait", "XmlAttributesPayloadRequest")},
                  {smithy::schema::HttpPayloadTrait::KEY(), Aws::MakeShared<smithy::schema::HttpPayloadTrait>("SchemaSerdeTrait")}})
      .Build();
}

}  // namespace

Aws::UniquePtr<smithy::schema::SerializableStruct> XmlAttributesOnPayloadRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<XmlAttributesOnPayloadRequestSerializable>("XmlAttributesOnPayloadRequestSerializable", *this);
}

Aws::String XmlAttributesOnPayloadRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext XmlAttributesOnPayloadRequest::GetSchemaSerdeContext() const {
  return {"XmlAttributesOnPayload", "2019-12-16", "/XmlAttributesOnPayload", ""};
}
