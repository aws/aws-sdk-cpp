/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/rest-xml-protocol/model/HttpPayloadWithXmlNamespaceAndPrefixResult.h>
#include <smithy/client/schema/DocumentConversion.h>
#include <smithy/client/schema/HttpTraits.h>
#include <smithy/client/schema/Schema.h>
#include <smithy/client/schema/SchemaBuilder.h>
#include <smithy/client/schema/SerdeTraits.h>
#include <smithy/client/schema/SerializableStruct.h>
#include <smithy/client/schema/ShapeDeserializer.h>
#include <smithy/client/schema/XmlTraits.h>

#include <utility>

using namespace Aws::RestXmlProtocol::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

HttpPayloadWithXmlNamespaceAndPrefixResult::HttpPayloadWithXmlNamespaceAndPrefixResult(
    const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  *this = result;
}

HttpPayloadWithXmlNamespaceAndPrefixResult& HttpPayloadWithXmlNamespaceAndPrefixResult::operator=(
    const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  AWS_UNREFERENCED_PARAM(result);

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}

namespace {
class HttpPayloadWithXmlNamespaceAndPrefixResult_PayloadWithXmlNamespaceAndPrefixSchemaSerdeDeser final
    : public smithy::schema::SerializableStruct {
 public:
  explicit HttpPayloadWithXmlNamespaceAndPrefixResult_PayloadWithXmlNamespaceAndPrefixSchemaSerdeDeser(
      PayloadWithXmlNamespaceAndPrefix& obj)
      : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  PayloadWithXmlNamespaceAndPrefix& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class HttpPayloadWithXmlNamespaceAndPrefixResultDeserializable final : public smithy::schema::SerializableStruct {
 public:
  explicit HttpPayloadWithXmlNamespaceAndPrefixResultDeserializable(HttpPayloadWithXmlNamespaceAndPrefixResult& obj)
      : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  HttpPayloadWithXmlNamespaceAndPrefixResult& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void HttpPayloadWithXmlNamespaceAndPrefixResult_PayloadWithXmlNamespaceAndPrefixSchemaSerdeDeser::From(
    const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "name") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetName(*value0);
    }
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema>
HttpPayloadWithXmlNamespaceAndPrefixResult_PayloadWithXmlNamespaceAndPrefixSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("PayloadWithXmlNamespaceAndPrefix")
      .PutMember("name", smithy::schema::Schema::CreateString("name"))
      .Build();
}

void HttpPayloadWithXmlNamespaceAndPrefixResultDeserializable::From(const smithy::schema::Schema& memberSchema,
                                                                    smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "nested") {
    PayloadWithXmlNamespaceAndPrefix nested0;
    HttpPayloadWithXmlNamespaceAndPrefixResult_PayloadWithXmlNamespaceAndPrefixSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetNested(std::move(nested0));
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> HttpPayloadWithXmlNamespaceAndPrefixResultDeserializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("HttpPayloadWithXmlNamespaceAndPrefixResult")
      .PutMember("nested", HttpPayloadWithXmlNamespaceAndPrefixResult_PayloadWithXmlNamespaceAndPrefixSchemaSerdeDeser::BuildSchema(),
                 {{smithy::schema::XmlNameTrait::KEY(),
                   Aws::MakeShared<smithy::schema::XmlNameTrait>("SchemaSerdeTrait", "PayloadWithXmlNamespaceAndPrefix")},
                  {smithy::schema::XmlNamespaceTrait::KEY(),
                   Aws::MakeShared<smithy::schema::XmlNamespaceTrait>("SchemaSerdeTrait", "http://foo.com", "baz")},
                  {smithy::schema::HttpPayloadTrait::KEY(), Aws::MakeShared<smithy::schema::HttpPayloadTrait>("SchemaSerdeTrait")}})
      .Build();
}

}  // namespace

Aws::UniquePtr<smithy::schema::SerializableStruct> HttpPayloadWithXmlNamespaceAndPrefixResult::GetSchemaSerdeOutput() {
  return Aws::MakeUnique<HttpPayloadWithXmlNamespaceAndPrefixResultDeserializable>(
      "HttpPayloadWithXmlNamespaceAndPrefixResultDeserializable", *this);
}
