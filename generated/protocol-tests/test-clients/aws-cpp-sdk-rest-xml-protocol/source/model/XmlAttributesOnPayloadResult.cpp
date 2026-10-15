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
#include <aws/rest-xml-protocol/model/XmlAttributesOnPayloadResult.h>
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

XmlAttributesOnPayloadResult::XmlAttributesOnPayloadResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) { *this = result; }

XmlAttributesOnPayloadResult& XmlAttributesOnPayloadResult::operator=(const Aws::AmazonWebServiceResult<XmlDocument>& result) {
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
class XmlAttributesOnPayloadResult_XmlAttributesPayloadResponseSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit XmlAttributesOnPayloadResult_XmlAttributesPayloadResponseSchemaSerdeDeser(XmlAttributesPayloadResponse& obj)
      : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  XmlAttributesPayloadResponse& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class XmlAttributesOnPayloadResultDeserializable final : public smithy::schema::SerializableStruct {
 public:
  explicit XmlAttributesOnPayloadResultDeserializable(XmlAttributesOnPayloadResult& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  XmlAttributesOnPayloadResult& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void XmlAttributesOnPayloadResult_XmlAttributesPayloadResponseSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
                                                                                     smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "foo") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetFoo(*value0);
    }
    return;
  }
  if (memberName == "attr") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetAttr(*value0);
    }
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> XmlAttributesOnPayloadResult_XmlAttributesPayloadResponseSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("XmlAttributesPayloadResponse")
      .PutMember("foo", smithy::schema::Schema::CreateString("foo"))
      .PutMember("attr", smithy::schema::Schema::CreateString("attr"),
                 {{smithy::schema::XmlNameTrait::KEY(), Aws::MakeShared<smithy::schema::XmlNameTrait>("SchemaSerdeTrait", "test")},
                  {smithy::schema::XmlAttributeTrait::KEY(), Aws::MakeShared<smithy::schema::XmlAttributeTrait>("SchemaSerdeTrait")}})
      .Build();
}

void XmlAttributesOnPayloadResultDeserializable::From(const smithy::schema::Schema& memberSchema,
                                                      smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "payload") {
    XmlAttributesPayloadResponse nested0;
    XmlAttributesOnPayloadResult_XmlAttributesPayloadResponseSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetPayload(std::move(nested0));
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> XmlAttributesOnPayloadResultDeserializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("XmlAttributesOnPayloadResult")
      .PutMember("payload", XmlAttributesOnPayloadResult_XmlAttributesPayloadResponseSchemaSerdeDeser::BuildSchema(),
                 {{smithy::schema::XmlNameTrait::KEY(),
                   Aws::MakeShared<smithy::schema::XmlNameTrait>("SchemaSerdeTrait", "XmlAttributesPayloadResponse")},
                  {smithy::schema::HttpPayloadTrait::KEY(), Aws::MakeShared<smithy::schema::HttpPayloadTrait>("SchemaSerdeTrait")}})
      .Build();
}

}  // namespace

Aws::UniquePtr<smithy::schema::SerializableStruct> XmlAttributesOnPayloadResult::GetSchemaSerdeOutput() {
  return Aws::MakeUnique<XmlAttributesOnPayloadResultDeserializable>("XmlAttributesOnPayloadResultDeserializable", *this);
}
