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
#include <aws/rest-xml-protocol/model/HttpPayloadWithXmlNameResult.h>
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

HttpPayloadWithXmlNameResult::HttpPayloadWithXmlNameResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) { *this = result; }

HttpPayloadWithXmlNameResult& HttpPayloadWithXmlNameResult::operator=(const Aws::AmazonWebServiceResult<XmlDocument>& result) {
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
class HttpPayloadWithXmlNameResult_PayloadWithXmlNameSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit HttpPayloadWithXmlNameResult_PayloadWithXmlNameSchemaSerdeDeser(PayloadWithXmlName& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  PayloadWithXmlName& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class HttpPayloadWithXmlNameResultDeserializable final : public smithy::schema::SerializableStruct {
 public:
  explicit HttpPayloadWithXmlNameResultDeserializable(HttpPayloadWithXmlNameResult& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  HttpPayloadWithXmlNameResult& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void HttpPayloadWithXmlNameResult_PayloadWithXmlNameSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
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

std::shared_ptr<const smithy::schema::Schema> HttpPayloadWithXmlNameResult_PayloadWithXmlNameSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("PayloadWithXmlName")
      .PutMember("name", smithy::schema::Schema::CreateString("name"))
      .Build();
}

void HttpPayloadWithXmlNameResultDeserializable::From(const smithy::schema::Schema& memberSchema,
                                                      smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "nested") {
    PayloadWithXmlName nested0;
    HttpPayloadWithXmlNameResult_PayloadWithXmlNameSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetNested(std::move(nested0));
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> HttpPayloadWithXmlNameResultDeserializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("HttpPayloadWithXmlNameResult")
      .PutMember("nested", HttpPayloadWithXmlNameResult_PayloadWithXmlNameSchemaSerdeDeser::BuildSchema(),
                 {{smithy::schema::XmlNameTrait::KEY(), Aws::MakeShared<smithy::schema::XmlNameTrait>("SchemaSerdeTrait", "Hello")},
                  {smithy::schema::HttpPayloadTrait::KEY(), Aws::MakeShared<smithy::schema::HttpPayloadTrait>("SchemaSerdeTrait")}})
      .Build();
}

}  // namespace

Aws::UniquePtr<smithy::schema::SerializableStruct> HttpPayloadWithXmlNameResult::GetSchemaSerdeOutput() {
  return Aws::MakeUnique<HttpPayloadWithXmlNameResultDeserializable>("HttpPayloadWithXmlNameResultDeserializable", *this);
}
