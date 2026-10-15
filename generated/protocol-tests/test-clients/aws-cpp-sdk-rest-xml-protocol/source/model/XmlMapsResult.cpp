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
#include <aws/rest-xml-protocol/model/XmlMapsResult.h>
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

XmlMapsResult::XmlMapsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) { *this = result; }

XmlMapsResult& XmlMapsResult::operator=(const Aws::AmazonWebServiceResult<XmlDocument>& result) {
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
class XmlMapsResult_GreetingStructSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit XmlMapsResult_GreetingStructSchemaSerdeDeser(GreetingStruct& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  GreetingStruct& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class XmlMapsResultDeserializable final : public smithy::schema::SerializableStruct {
 public:
  explicit XmlMapsResultDeserializable(XmlMapsResult& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  XmlMapsResult& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void XmlMapsResult_GreetingStructSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
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

std::shared_ptr<const smithy::schema::Schema> XmlMapsResult_GreetingStructSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("GreetingStruct").PutMember("hi", smithy::schema::Schema::CreateString("hi")).Build();
}

void XmlMapsResultDeserializable::From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "myMap") {
    Aws::Map<Aws::String, GreetingStruct> map0;
    deserializer.ReadMap(memberSchema, [&](const Aws::String& key0, smithy::schema::ShapeDeserializer& valueDeserializer0) {
      GreetingStruct nested1;
      XmlMapsResult_GreetingStructSchemaSerdeDeser{nested1}.Deserialize(valueDeserializer0);
      map0[key0] = std::move(nested1);
    });
    m_obj.SetMyMap(std::move(map0));
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> XmlMapsResultDeserializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("XmlMapsResult")
      .PutMember("myMap", smithy::schema::Schema::MapBuilder("XmlMapsInputOutputMap")
                              .PutMember("key", smithy::schema::Schema::CreateString("key"))
                              .PutMember("value", XmlMapsResult_GreetingStructSchemaSerdeDeser::BuildSchema())
                              .Build())
      .Build();
}

}  // namespace

Aws::UniquePtr<smithy::schema::SerializableStruct> XmlMapsResult::GetSchemaSerdeOutput() {
  return Aws::MakeUnique<XmlMapsResultDeserializable>("XmlMapsResultDeserializable", *this);
}
