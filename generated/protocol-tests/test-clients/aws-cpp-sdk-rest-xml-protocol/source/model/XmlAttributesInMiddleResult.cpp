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
#include <aws/rest-xml-protocol/model/XmlAttributesInMiddleResult.h>
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

XmlAttributesInMiddleResult::XmlAttributesInMiddleResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) { *this = result; }

XmlAttributesInMiddleResult& XmlAttributesInMiddleResult::operator=(const Aws::AmazonWebServiceResult<XmlDocument>& result) {
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
class XmlAttributesInMiddleResult_XmlAttributesInMiddlePayloadResponseSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit XmlAttributesInMiddleResult_XmlAttributesInMiddlePayloadResponseSchemaSerdeDeser(XmlAttributesInMiddlePayloadResponse& obj)
      : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  XmlAttributesInMiddlePayloadResponse& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class XmlAttributesInMiddleResultDeserializable final : public smithy::schema::SerializableStruct {
 public:
  explicit XmlAttributesInMiddleResultDeserializable(XmlAttributesInMiddleResult& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  XmlAttributesInMiddleResult& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void XmlAttributesInMiddleResult_XmlAttributesInMiddlePayloadResponseSchemaSerdeDeser::From(
    const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) {
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
  if (memberName == "baz") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetBaz(*value0);
    }
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema>
XmlAttributesInMiddleResult_XmlAttributesInMiddlePayloadResponseSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("XmlAttributesInMiddlePayloadResponse")
      .PutMember("foo", smithy::schema::Schema::CreateString("foo"))
      .PutMember("attr", smithy::schema::Schema::CreateString("attr"),
                 {{smithy::schema::XmlNameTrait::KEY(), Aws::MakeShared<smithy::schema::XmlNameTrait>("SchemaSerdeTrait", "test")},
                  {smithy::schema::XmlAttributeTrait::KEY(), Aws::MakeShared<smithy::schema::XmlAttributeTrait>("SchemaSerdeTrait")}})
      .PutMember("baz", smithy::schema::Schema::CreateString("baz"))
      .Build();
}

void XmlAttributesInMiddleResultDeserializable::From(const smithy::schema::Schema& memberSchema,
                                                     smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "payload") {
    XmlAttributesInMiddlePayloadResponse nested0;
    XmlAttributesInMiddleResult_XmlAttributesInMiddlePayloadResponseSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetPayload(std::move(nested0));
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> XmlAttributesInMiddleResultDeserializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("XmlAttributesInMiddleResult")
      .PutMember("payload", XmlAttributesInMiddleResult_XmlAttributesInMiddlePayloadResponseSchemaSerdeDeser::BuildSchema(),
                 {{smithy::schema::XmlNameTrait::KEY(),
                   Aws::MakeShared<smithy::schema::XmlNameTrait>("SchemaSerdeTrait", "XmlAttributesInMiddlePayloadResponse")},
                  {smithy::schema::HttpPayloadTrait::KEY(), Aws::MakeShared<smithy::schema::HttpPayloadTrait>("SchemaSerdeTrait")}})
      .Build();
}

}  // namespace

Aws::UniquePtr<smithy::schema::SerializableStruct> XmlAttributesInMiddleResult::GetSchemaSerdeOutput() {
  return Aws::MakeUnique<XmlAttributesInMiddleResultDeserializable>("XmlAttributesInMiddleResultDeserializable", *this);
}
