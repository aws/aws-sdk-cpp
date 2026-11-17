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
#include <aws/rest-xml-protocol/model/XmlEmptyMapsRequest.h>
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
class XmlEmptyMapsRequest_GreetingStructSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit XmlEmptyMapsRequest_GreetingStructSchemaSerdeSer(const GreetingStruct& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const GreetingStruct& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class XmlEmptyMapsRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit XmlEmptyMapsRequestSerializable(const XmlEmptyMapsRequest& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const XmlEmptyMapsRequest& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void XmlEmptyMapsRequest_GreetingStructSchemaSerdeSer::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.HiHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("hi").value();
    serializer.WriteString(memberSchema, m_obj.GetHi());
  }
}

std::shared_ptr<const smithy::schema::Schema> XmlEmptyMapsRequest_GreetingStructSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("GreetingStruct").PutMember("hi", smithy::schema::Schema::CreateString("hi")).Build();
}

void XmlEmptyMapsRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.MyMapHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("myMap").value();
    serializer.WriteMap(memberSchema, m_obj.GetMyMap().size(), [&](smithy::schema::MapSerializer& mapSerializer0) {
      const smithy::schema::Schema& valueSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("value").value();
      for (const auto& entry0 : m_obj.GetMyMap()) {
        mapSerializer0.WriteEntry(entry0.first, [&](smithy::schema::ShapeSerializer& valueSerializer0) {
          XmlEmptyMapsRequest_GreetingStructSchemaSerdeSer nested1(entry0.second);
          valueSerializer0.WriteStruct(valueSchema0, nested1);
        });
      }
    });
  }
}

std::shared_ptr<const smithy::schema::Schema> XmlEmptyMapsRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("XmlEmptyMapsRequest")
      .PutMember("myMap", smithy::schema::Schema::MapBuilder("XmlMapsInputOutputMap")
                              .PutMember("key", smithy::schema::Schema::CreateString("key"))
                              .PutMember("value", XmlEmptyMapsRequest_GreetingStructSchemaSerdeSer::BuildSchema())
                              .Build())
      .Build();
}

}  // namespace

Aws::UniquePtr<smithy::schema::SerializableStruct> XmlEmptyMapsRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<XmlEmptyMapsRequestSerializable>("XmlEmptyMapsRequestSerializable", *this);
}

Aws::String XmlEmptyMapsRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext XmlEmptyMapsRequest::GetSchemaSerdeContext() const {
  return {"XmlEmptyMaps", "2019-12-16", "/XmlEmptyMaps", ""};
}
