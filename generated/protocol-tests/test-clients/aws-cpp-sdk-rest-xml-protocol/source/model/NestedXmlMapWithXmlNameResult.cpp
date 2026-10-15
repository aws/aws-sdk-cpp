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
#include <aws/rest-xml-protocol/model/NestedXmlMapWithXmlNameResult.h>
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

NestedXmlMapWithXmlNameResult::NestedXmlMapWithXmlNameResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) { *this = result; }

NestedXmlMapWithXmlNameResult& NestedXmlMapWithXmlNameResult::operator=(const Aws::AmazonWebServiceResult<XmlDocument>& result) {
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
class NestedXmlMapWithXmlNameResultDeserializable final : public smithy::schema::SerializableStruct {
 public:
  explicit NestedXmlMapWithXmlNameResultDeserializable(NestedXmlMapWithXmlNameResult& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  NestedXmlMapWithXmlNameResult& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void NestedXmlMapWithXmlNameResultDeserializable::From(const smithy::schema::Schema& memberSchema,
                                                       smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "nestedXmlMapWithXmlNameMap") {
    Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>> map0;
    deserializer.ReadMap(memberSchema, [&](const Aws::String& key0, smithy::schema::ShapeDeserializer& valueDeserializer0) {
      const smithy::schema::Schema& valueSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("value").value();
      Aws::Map<Aws::String, Aws::String> map1;
      valueDeserializer0.ReadMap(valueSchema0, [&](const Aws::String& key1, smithy::schema::ShapeDeserializer& valueDeserializer1) {
        const smithy::schema::Schema& valueSchema1 = *valueSchema0.GetMemberTarget().value()->GetMember("value").value();
        auto value2 = valueDeserializer1.ReadString(valueSchema1);
        if (value2.has_value()) {
          map1[key1] = *value2;
        }
      });
      map0[key0] = std::move(map1);
    });
    m_obj.SetNestedXmlMapWithXmlNameMap(std::move(map0));
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> NestedXmlMapWithXmlNameResultDeserializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("NestedXmlMapWithXmlNameResult")
      .PutMember("nestedXmlMapWithXmlNameMap",
                 smithy::schema::Schema::MapBuilder("NestedXmlMapWithXmlNameMap")
                     .PutMember("key", smithy::schema::Schema::CreateString("key"),
                                {{smithy::schema::XmlNameTrait::KEY(),
                                  Aws::MakeShared<smithy::schema::XmlNameTrait>("SchemaSerdeTrait", "OuterKey")}})
                     .PutMember("value",
                                smithy::schema::Schema::MapBuilder("NestedXmlMapWithXmlNameInnerMap")
                                    .PutMember("key", smithy::schema::Schema::CreateString("key"),
                                               {{smithy::schema::XmlNameTrait::KEY(),
                                                 Aws::MakeShared<smithy::schema::XmlNameTrait>("SchemaSerdeTrait", "InnerKey")}})
                                    .PutMember("value", smithy::schema::Schema::CreateString("value"),
                                               {{smithy::schema::XmlNameTrait::KEY(),
                                                 Aws::MakeShared<smithy::schema::XmlNameTrait>("SchemaSerdeTrait", "InnerValue")}})
                                    .Build(),
                                {{smithy::schema::XmlMapKeyNameTrait::KEY(),
                                  Aws::MakeShared<smithy::schema::XmlMapKeyNameTrait>("SchemaSerdeTrait", "InnerKey")},
                                 {smithy::schema::XmlMapValueNameTrait::KEY(),
                                  Aws::MakeShared<smithy::schema::XmlMapValueNameTrait>("SchemaSerdeTrait", "InnerValue")}})
                     .Build(),
                 {{smithy::schema::XmlMapKeyNameTrait::KEY(),
                   Aws::MakeShared<smithy::schema::XmlMapKeyNameTrait>("SchemaSerdeTrait", "OuterKey")}})
      .Build();
}

}  // namespace

Aws::UniquePtr<smithy::schema::SerializableStruct> NestedXmlMapWithXmlNameResult::GetSchemaSerdeOutput() {
  return Aws::MakeUnique<NestedXmlMapWithXmlNameResultDeserializable>("NestedXmlMapWithXmlNameResultDeserializable", *this);
}
