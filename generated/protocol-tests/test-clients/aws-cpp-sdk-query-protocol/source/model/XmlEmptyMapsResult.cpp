/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/query-protocol/model/XmlEmptyMapsResult.h>
#include <smithy/client/schema/DocumentConversion.h>
#include <smithy/client/schema/HttpTraits.h>
#include <smithy/client/schema/Schema.h>
#include <smithy/client/schema/SchemaBuilder.h>
#include <smithy/client/schema/SerdeTraits.h>
#include <smithy/client/schema/SerializableStruct.h>
#include <smithy/client/schema/ShapeDeserializer.h>
#include <smithy/client/schema/XmlTraits.h>

#include <utility>

using namespace Aws::QueryProtocol::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

XmlEmptyMapsResult::XmlEmptyMapsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) { *this = result; }

XmlEmptyMapsResult& XmlEmptyMapsResult::operator=(const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::QueryProtocol::Model::XmlEmptyMapsResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId());
  }
  return *this;
}

namespace {
class XmlEmptyMapsResult_GreetingStructSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit XmlEmptyMapsResult_GreetingStructSchemaSerdeDeser(GreetingStruct& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  GreetingStruct& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class XmlEmptyMapsResultDeserializable final : public smithy::schema::SerializableStruct {
 public:
  explicit XmlEmptyMapsResultDeserializable(XmlEmptyMapsResult& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  XmlEmptyMapsResult& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void XmlEmptyMapsResult_GreetingStructSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
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

std::shared_ptr<const smithy::schema::Schema> XmlEmptyMapsResult_GreetingStructSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("GreetingStruct").PutMember("hi", smithy::schema::Schema::CreateString("hi")).Build();
}

void XmlEmptyMapsResultDeserializable::From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "myMap") {
    Aws::Map<Aws::String, GreetingStruct> map0;
    deserializer.ReadMap(memberSchema, [&](const Aws::String& key0, smithy::schema::ShapeDeserializer& valueDeserializer0) {
      GreetingStruct nested1;
      XmlEmptyMapsResult_GreetingStructSchemaSerdeDeser{nested1}.Deserialize(valueDeserializer0);
      map0[key0] = std::move(nested1);
    });
    m_obj.SetMyMap(std::move(map0));
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> XmlEmptyMapsResultDeserializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("XmlEmptyMapsResult")
      .PutMember("myMap", smithy::schema::Schema::MapBuilder("XmlMapsOutputMap")
                              .PutMember("key", smithy::schema::Schema::CreateString("key"))
                              .PutMember("value", XmlEmptyMapsResult_GreetingStructSchemaSerdeDeser::BuildSchema())
                              .Build())
      .Build();
}

}  // namespace

Aws::UniquePtr<smithy::schema::SerializableStruct> XmlEmptyMapsResult::GetSchemaSerdeOutput() {
  return Aws::MakeUnique<XmlEmptyMapsResultDeserializable>("XmlEmptyMapsResultDeserializable", *this);
}
