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
#include <aws/query-protocol/model/XmlEnumsResult.h>
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

XmlEnumsResult::XmlEnumsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) { *this = result; }

XmlEnumsResult& XmlEnumsResult::operator=(const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::QueryProtocol::Model::XmlEnumsResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId());
  }
  return *this;
}

namespace {
class XmlEnumsResultDeserializable final : public smithy::schema::SerializableStruct {
 public:
  explicit XmlEnumsResultDeserializable(XmlEnumsResult& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  XmlEnumsResult& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void XmlEnumsResultDeserializable::From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "fooEnum1") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetFooEnum1(FooEnumMapper::GetFooEnumForName(*value0));
    }
    return;
  }
  if (memberName == "fooEnum2") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetFooEnum2(FooEnumMapper::GetFooEnumForName(*value0));
    }
    return;
  }
  if (memberName == "fooEnum3") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetFooEnum3(FooEnumMapper::GetFooEnumForName(*value0));
    }
    return;
  }
  if (memberName == "fooEnumList") {
    Aws::Vector<FooEnum> list0;
    deserializer.ReadList(memberSchema, [&](smithy::schema::ShapeDeserializer& itemDeserializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      auto value1 = itemDeserializer0.ReadString(itemSchema0);
      if (value1.has_value()) {
        list0.push_back(FooEnumMapper::GetFooEnumForName(*value1));
      }
    });
    m_obj.SetFooEnumList(std::move(list0));
    return;
  }
  if (memberName == "fooEnumSet") {
    Aws::Vector<FooEnum> list0;
    deserializer.ReadList(memberSchema, [&](smithy::schema::ShapeDeserializer& itemDeserializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      auto value1 = itemDeserializer0.ReadString(itemSchema0);
      if (value1.has_value()) {
        list0.push_back(FooEnumMapper::GetFooEnumForName(*value1));
      }
    });
    m_obj.SetFooEnumSet(std::move(list0));
    return;
  }
  if (memberName == "fooEnumMap") {
    Aws::Map<Aws::String, FooEnum> map0;
    deserializer.ReadMap(memberSchema, [&](const Aws::String& key0, smithy::schema::ShapeDeserializer& valueDeserializer0) {
      const smithy::schema::Schema& valueSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("value").value();
      auto value1 = valueDeserializer0.ReadString(valueSchema0);
      if (value1.has_value()) {
        map0[key0] = FooEnumMapper::GetFooEnumForName(*value1);
      }
    });
    m_obj.SetFooEnumMap(std::move(map0));
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> XmlEnumsResultDeserializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("XmlEnumsResult")
      .PutMember("fooEnum1", smithy::schema::Schema::CreateEnum("fooEnum1"))
      .PutMember("fooEnum2", smithy::schema::Schema::CreateEnum("fooEnum2"))
      .PutMember("fooEnum3", smithy::schema::Schema::CreateEnum("fooEnum3"))
      .PutMember(
          "fooEnumList",
          smithy::schema::Schema::ListBuilder("FooEnumList").PutMember("member", smithy::schema::Schema::CreateEnum("member")).Build())
      .PutMember(
          "fooEnumSet",
          smithy::schema::Schema::ListBuilder("FooEnumSet").PutMember("member", smithy::schema::Schema::CreateEnum("member")).Build())
      .PutMember("fooEnumMap", smithy::schema::Schema::MapBuilder("FooEnumMap")
                                   .PutMember("key", smithy::schema::Schema::CreateString("key"))
                                   .PutMember("value", smithy::schema::Schema::CreateEnum("value"))
                                   .Build())
      .Build();
}

}  // namespace

Aws::UniquePtr<smithy::schema::SerializableStruct> XmlEnumsResult::GetSchemaSerdeOutput() {
  return Aws::MakeUnique<XmlEnumsResultDeserializable>("XmlEnumsResultDeserializable", *this);
}
