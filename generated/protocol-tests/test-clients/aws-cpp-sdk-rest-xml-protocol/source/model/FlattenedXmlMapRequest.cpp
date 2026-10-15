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
#include <aws/rest-xml-protocol/model/FlattenedXmlMapRequest.h>
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
class FlattenedXmlMapRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit FlattenedXmlMapRequestSerializable(const FlattenedXmlMapRequest& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const FlattenedXmlMapRequest& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void FlattenedXmlMapRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.MyMapHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("myMap").value();
    serializer.WriteMap(memberSchema, m_obj.GetMyMap().size(), [&](smithy::schema::MapSerializer& mapSerializer0) {
      const smithy::schema::Schema& valueSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("value").value();
      for (const auto& entry0 : m_obj.GetMyMap()) {
        mapSerializer0.WriteEntry(entry0.first, [&](smithy::schema::ShapeSerializer& valueSerializer0) {
          valueSerializer0.WriteString(valueSchema0, FooEnumMapper::GetNameForFooEnum(entry0.second));
        });
      }
    });
  }
}

std::shared_ptr<const smithy::schema::Schema> FlattenedXmlMapRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("FlattenedXmlMapRequest")
      .PutMember("myMap",
                 smithy::schema::Schema::MapBuilder("FooEnumMap")
                     .PutMember("key", smithy::schema::Schema::CreateString("key"))
                     .PutMember("value", smithy::schema::Schema::CreateEnum("value"))
                     .Build(),
                 {{smithy::schema::XmlFlattenedTrait::KEY(), Aws::MakeShared<smithy::schema::XmlFlattenedTrait>("SchemaSerdeTrait")}})
      .Build();
}

}  // namespace

Aws::UniquePtr<smithy::schema::SerializableStruct> FlattenedXmlMapRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<FlattenedXmlMapRequestSerializable>("FlattenedXmlMapRequestSerializable", *this);
}

Aws::String FlattenedXmlMapRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext FlattenedXmlMapRequest::GetSchemaSerdeContext() const {
  return {"FlattenedXmlMap", "2019-12-16", "/FlattenedXmlMap", ""};
}
