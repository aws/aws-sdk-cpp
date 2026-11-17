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
#include <aws/rest-xml-protocol/model/HttpPayloadWithMemberXmlNameRequest.h>
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
class HttpPayloadWithMemberXmlNameRequest_PayloadWithXmlNameSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit HttpPayloadWithMemberXmlNameRequest_PayloadWithXmlNameSchemaSerdeSer(const PayloadWithXmlName& obj)
      : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const PayloadWithXmlName& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class HttpPayloadWithMemberXmlNameRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit HttpPayloadWithMemberXmlNameRequestSerializable(const HttpPayloadWithMemberXmlNameRequest& obj)
      : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const HttpPayloadWithMemberXmlNameRequest& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void HttpPayloadWithMemberXmlNameRequest_PayloadWithXmlNameSchemaSerdeSer::SerializeMembers(
    smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.NameHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("name").value();
    serializer.WriteString(memberSchema, m_obj.GetName());
  }
}

std::shared_ptr<const smithy::schema::Schema> HttpPayloadWithMemberXmlNameRequest_PayloadWithXmlNameSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("PayloadWithXmlName")
      .PutMember("name", smithy::schema::Schema::CreateString("name"))
      .Build();
}

void HttpPayloadWithMemberXmlNameRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.NestedHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("nested").value();
    HttpPayloadWithMemberXmlNameRequest_PayloadWithXmlNameSchemaSerdeSer nested0(m_obj.GetNested());
    serializer.WriteStruct(memberSchema, nested0);
  }
}

std::shared_ptr<const smithy::schema::Schema> HttpPayloadWithMemberXmlNameRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("HttpPayloadWithMemberXmlNameRequest")
      .PutMember("nested", HttpPayloadWithMemberXmlNameRequest_PayloadWithXmlNameSchemaSerdeSer::BuildSchema(),
                 {{smithy::schema::XmlNameTrait::KEY(), Aws::MakeShared<smithy::schema::XmlNameTrait>("SchemaSerdeTrait", "Hola")},
                  {smithy::schema::HttpPayloadTrait::KEY(), Aws::MakeShared<smithy::schema::HttpPayloadTrait>("SchemaSerdeTrait")}})
      .Build();
}

}  // namespace

Aws::UniquePtr<smithy::schema::SerializableStruct> HttpPayloadWithMemberXmlNameRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<HttpPayloadWithMemberXmlNameRequestSerializable>("HttpPayloadWithMemberXmlNameRequestSerializable", *this);
}

Aws::String HttpPayloadWithMemberXmlNameRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext HttpPayloadWithMemberXmlNameRequest::GetSchemaSerdeContext() const {
  return {"HttpPayloadWithMemberXmlName", "2019-12-16", "/HttpPayloadWithMemberXmlName", ""};
}
