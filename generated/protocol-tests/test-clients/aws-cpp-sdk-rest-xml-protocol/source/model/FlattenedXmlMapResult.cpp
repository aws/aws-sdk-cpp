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
#include <aws/rest-xml-protocol/model/FlattenedXmlMapResult.h>
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

FlattenedXmlMapResult::FlattenedXmlMapResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) { *this = result; }

FlattenedXmlMapResult& FlattenedXmlMapResult::operator=(const Aws::AmazonWebServiceResult<XmlDocument>& result) {
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
class FlattenedXmlMapResultDeserializable final : public smithy::schema::SerializableStruct {
 public:
  explicit FlattenedXmlMapResultDeserializable(FlattenedXmlMapResult& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  FlattenedXmlMapResult& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void FlattenedXmlMapResultDeserializable::From(const smithy::schema::Schema& memberSchema,
                                               smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "myMap") {
    Aws::Map<Aws::String, FooEnum> map0;
    deserializer.ReadMap(memberSchema, [&](const Aws::String& key0, smithy::schema::ShapeDeserializer& valueDeserializer0) {
      const smithy::schema::Schema& valueSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("value").value();
      auto value1 = valueDeserializer0.ReadString(valueSchema0);
      if (value1.has_value()) {
        map0[key0] = FooEnumMapper::GetFooEnumForName(*value1);
      }
    });
    m_obj.SetMyMap(std::move(map0));
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> FlattenedXmlMapResultDeserializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("FlattenedXmlMapResult")
      .PutMember("myMap",
                 smithy::schema::Schema::MapBuilder("FooEnumMap")
                     .PutMember("key", smithy::schema::Schema::CreateString("key"))
                     .PutMember("value", smithy::schema::Schema::CreateEnum("value"))
                     .Build(),
                 {{smithy::schema::XmlFlattenedTrait::KEY(), Aws::MakeShared<smithy::schema::XmlFlattenedTrait>("SchemaSerdeTrait")}})
      .Build();
}

}  // namespace

Aws::UniquePtr<smithy::schema::SerializableStruct> FlattenedXmlMapResult::GetSchemaSerdeOutput() {
  return Aws::MakeUnique<FlattenedXmlMapResultDeserializable>("FlattenedXmlMapResultDeserializable", *this);
}
