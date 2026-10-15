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
#include <aws/rest-xml-protocol/model/XmlMapsXmlNameResult.h>
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

XmlMapsXmlNameResult::XmlMapsXmlNameResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) { *this = result; }

XmlMapsXmlNameResult& XmlMapsXmlNameResult::operator=(const Aws::AmazonWebServiceResult<XmlDocument>& result) {
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
class XmlMapsXmlNameResult_GreetingStructSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit XmlMapsXmlNameResult_GreetingStructSchemaSerdeDeser(GreetingStruct& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  GreetingStruct& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class XmlMapsXmlNameResultDeserializable final : public smithy::schema::SerializableStruct {
 public:
  explicit XmlMapsXmlNameResultDeserializable(XmlMapsXmlNameResult& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  XmlMapsXmlNameResult& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void XmlMapsXmlNameResult_GreetingStructSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
                                                               smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "hi") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetHi(*value0);
    }
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> XmlMapsXmlNameResult_GreetingStructSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("GreetingStruct").PutMember("hi", smithy::schema::Schema::CreateString("hi")).Build();
}

void XmlMapsXmlNameResultDeserializable::From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "myMap") {
    Aws::Map<Aws::String, GreetingStruct> map0;
    deserializer.ReadMap(memberSchema, [&](const Aws::String& key0, smithy::schema::ShapeDeserializer& valueDeserializer0) {
      GreetingStruct nested1;
      XmlMapsXmlNameResult_GreetingStructSchemaSerdeDeser{nested1}.Deserialize(valueDeserializer0);
      map0[key0] = std::move(nested1);
    });
    m_obj.SetMyMap(std::move(map0));
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> XmlMapsXmlNameResultDeserializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("XmlMapsXmlNameResult")
      .PutMember(
          "myMap",
          smithy::schema::Schema::MapBuilder("XmlMapsXmlNameInputOutputMap")
              .PutMember(
                  "key", smithy::schema::Schema::CreateString("key"),
                  {{smithy::schema::XmlNameTrait::KEY(), Aws::MakeShared<smithy::schema::XmlNameTrait>("SchemaSerdeTrait", "Attribute")}})
              .PutMember(
                  "value", XmlMapsXmlNameResult_GreetingStructSchemaSerdeDeser::BuildSchema(),
                  {{smithy::schema::XmlNameTrait::KEY(), Aws::MakeShared<smithy::schema::XmlNameTrait>("SchemaSerdeTrait", "Setting")}})
              .Build(),
          {{smithy::schema::XmlMapKeyNameTrait::KEY(),
            Aws::MakeShared<smithy::schema::XmlMapKeyNameTrait>("SchemaSerdeTrait", "Attribute")},
           {smithy::schema::XmlMapValueNameTrait::KEY(),
            Aws::MakeShared<smithy::schema::XmlMapValueNameTrait>("SchemaSerdeTrait", "Setting")}})
      .Build();
}

}  // namespace

Aws::UniquePtr<smithy::schema::SerializableStruct> XmlMapsXmlNameResult::GetSchemaSerdeOutput() {
  return Aws::MakeUnique<XmlMapsXmlNameResultDeserializable>("XmlMapsXmlNameResultDeserializable", *this);
}
