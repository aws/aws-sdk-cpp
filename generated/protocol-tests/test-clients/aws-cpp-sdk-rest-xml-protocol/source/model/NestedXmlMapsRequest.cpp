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
#include <aws/rest-xml-protocol/model/NestedXmlMapsRequest.h>
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
class NestedXmlMapsRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit NestedXmlMapsRequestSerializable(const NestedXmlMapsRequest& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const NestedXmlMapsRequest& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void NestedXmlMapsRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.NestedMapHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("nestedMap").value();
    serializer.WriteMap(memberSchema, m_obj.GetNestedMap().size(), [&](smithy::schema::MapSerializer& mapSerializer0) {
      const smithy::schema::Schema& valueSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("value").value();
      for (const auto& entry0 : m_obj.GetNestedMap()) {
        mapSerializer0.WriteEntry(entry0.first, [&](smithy::schema::ShapeSerializer& valueSerializer0) {
          valueSerializer0.WriteMap(valueSchema0, entry0.second.size(), [&](smithy::schema::MapSerializer& mapSerializer1) {
            const smithy::schema::Schema& valueSchema1 = *valueSchema0.GetMemberTarget().value()->GetMember("value").value();
            for (const auto& entry1 : entry0.second) {
              mapSerializer1.WriteEntry(entry1.first, [&](smithy::schema::ShapeSerializer& valueSerializer1) {
                valueSerializer1.WriteString(valueSchema1, FooEnumMapper::GetNameForFooEnum(entry1.second));
              });
            }
          });
        });
      }
    });
  }
  if (m_obj.FlatNestedMapHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("flatNestedMap").value();
    serializer.WriteMap(memberSchema, m_obj.GetFlatNestedMap().size(), [&](smithy::schema::MapSerializer& mapSerializer0) {
      const smithy::schema::Schema& valueSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("value").value();
      for (const auto& entry0 : m_obj.GetFlatNestedMap()) {
        mapSerializer0.WriteEntry(entry0.first, [&](smithy::schema::ShapeSerializer& valueSerializer0) {
          valueSerializer0.WriteMap(valueSchema0, entry0.second.size(), [&](smithy::schema::MapSerializer& mapSerializer1) {
            const smithy::schema::Schema& valueSchema1 = *valueSchema0.GetMemberTarget().value()->GetMember("value").value();
            for (const auto& entry1 : entry0.second) {
              mapSerializer1.WriteEntry(entry1.first, [&](smithy::schema::ShapeSerializer& valueSerializer1) {
                valueSerializer1.WriteString(valueSchema1, FooEnumMapper::GetNameForFooEnum(entry1.second));
              });
            }
          });
        });
      }
    });
  }
}

std::shared_ptr<const smithy::schema::Schema> NestedXmlMapsRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("NestedXmlMapsRequest")
      .PutMember("nestedMap", smithy::schema::Schema::MapBuilder("NestedMap")
                                  .PutMember("key", smithy::schema::Schema::CreateString("key"))
                                  .PutMember("value", smithy::schema::Schema::MapBuilder("FooEnumMap")
                                                          .PutMember("key", smithy::schema::Schema::CreateString("key"))
                                                          .PutMember("value", smithy::schema::Schema::CreateEnum("value"))
                                                          .Build())
                                  .Build())
      .PutMember("flatNestedMap",
                 smithy::schema::Schema::MapBuilder("NestedMap")
                     .PutMember("key", smithy::schema::Schema::CreateString("key"))
                     .PutMember("value", smithy::schema::Schema::MapBuilder("FooEnumMap")
                                             .PutMember("key", smithy::schema::Schema::CreateString("key"))
                                             .PutMember("value", smithy::schema::Schema::CreateEnum("value"))
                                             .Build())
                     .Build(),
                 {{smithy::schema::XmlFlattenedTrait::KEY(), Aws::MakeShared<smithy::schema::XmlFlattenedTrait>("SchemaSerdeTrait")}})
      .Build();
}

}  // namespace

Aws::UniquePtr<smithy::schema::SerializableStruct> NestedXmlMapsRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<NestedXmlMapsRequestSerializable>("NestedXmlMapsRequestSerializable", *this);
}

Aws::String NestedXmlMapsRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext NestedXmlMapsRequest::GetSchemaSerdeContext() const {
  return {"NestedXmlMaps", "2019-12-16", "/NestedXmlMaps", ""};
}
