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
#include <aws/rest-xml-protocol/model/InputAndOutputWithHeadersResult.h>
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

InputAndOutputWithHeadersResult::InputAndOutputWithHeadersResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) { *this = result; }

InputAndOutputWithHeadersResult& InputAndOutputWithHeadersResult::operator=(const Aws::AmazonWebServiceResult<XmlDocument>& result) {
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
class InputAndOutputWithHeadersResultDeserializable final : public smithy::schema::SerializableStruct {
 public:
  explicit InputAndOutputWithHeadersResultDeserializable(InputAndOutputWithHeadersResult& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  InputAndOutputWithHeadersResult& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void InputAndOutputWithHeadersResultDeserializable::From(const smithy::schema::Schema& memberSchema,
                                                         smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "headerString") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetHeaderString(*value0);
    }
    return;
  }
  if (memberName == "headerByte") {
    auto value0 = deserializer.ReadInteger(memberSchema);
    if (value0.has_value()) {
      m_obj.SetHeaderByte(*value0);
    }
    return;
  }
  if (memberName == "headerShort") {
    auto value0 = deserializer.ReadInteger(memberSchema);
    if (value0.has_value()) {
      m_obj.SetHeaderShort(*value0);
    }
    return;
  }
  if (memberName == "headerInteger") {
    auto value0 = deserializer.ReadInteger(memberSchema);
    if (value0.has_value()) {
      m_obj.SetHeaderInteger(*value0);
    }
    return;
  }
  if (memberName == "headerLong") {
    auto value0 = deserializer.ReadLong(memberSchema);
    if (value0.has_value()) {
      m_obj.SetHeaderLong(*value0);
    }
    return;
  }
  if (memberName == "headerFloat") {
    auto value0 = deserializer.ReadDouble(memberSchema);
    if (value0.has_value()) {
      m_obj.SetHeaderFloat(*value0);
    }
    return;
  }
  if (memberName == "headerDouble") {
    auto value0 = deserializer.ReadDouble(memberSchema);
    if (value0.has_value()) {
      m_obj.SetHeaderDouble(*value0);
    }
    return;
  }
  if (memberName == "headerTrueBool") {
    auto value0 = deserializer.ReadBoolean(memberSchema);
    if (value0.has_value()) {
      m_obj.SetHeaderTrueBool(*value0);
    }
    return;
  }
  if (memberName == "headerFalseBool") {
    auto value0 = deserializer.ReadBoolean(memberSchema);
    if (value0.has_value()) {
      m_obj.SetHeaderFalseBool(*value0);
    }
    return;
  }
  if (memberName == "headerStringList") {
    Aws::Vector<Aws::String> list0;
    deserializer.ReadList(memberSchema, [&](smithy::schema::ShapeDeserializer& itemDeserializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      auto value1 = itemDeserializer0.ReadString(itemSchema0);
      if (value1.has_value()) {
        list0.push_back(*value1);
      }
    });
    m_obj.SetHeaderStringList(std::move(list0));
    return;
  }
  if (memberName == "headerStringSet") {
    Aws::Vector<Aws::String> list0;
    deserializer.ReadList(memberSchema, [&](smithy::schema::ShapeDeserializer& itemDeserializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      auto value1 = itemDeserializer0.ReadString(itemSchema0);
      if (value1.has_value()) {
        list0.push_back(*value1);
      }
    });
    m_obj.SetHeaderStringSet(std::move(list0));
    return;
  }
  if (memberName == "headerIntegerList") {
    Aws::Vector<int> list0;
    deserializer.ReadList(memberSchema, [&](smithy::schema::ShapeDeserializer& itemDeserializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      auto value1 = itemDeserializer0.ReadInteger(itemSchema0);
      if (value1.has_value()) {
        list0.push_back(*value1);
      }
    });
    m_obj.SetHeaderIntegerList(std::move(list0));
    return;
  }
  if (memberName == "headerBooleanList") {
    Aws::Vector<bool> list0;
    deserializer.ReadList(memberSchema, [&](smithy::schema::ShapeDeserializer& itemDeserializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      auto value1 = itemDeserializer0.ReadBoolean(itemSchema0);
      if (value1.has_value()) {
        list0.push_back(*value1);
      }
    });
    m_obj.SetHeaderBooleanList(std::move(list0));
    return;
  }
  if (memberName == "headerTimestampList") {
    Aws::Vector<Aws::Utils::DateTime> list0;
    deserializer.ReadList(memberSchema, [&](smithy::schema::ShapeDeserializer& itemDeserializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      auto value1 = itemDeserializer0.ReadTimestamp(itemSchema0);
      if (value1.has_value()) {
        list0.push_back(*value1);
      }
    });
    m_obj.SetHeaderTimestampList(std::move(list0));
    return;
  }
  if (memberName == "headerEnum") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetHeaderEnum(FooEnumMapper::GetFooEnumForName(*value0));
    }
    return;
  }
  if (memberName == "headerEnumList") {
    Aws::Vector<FooEnum> list0;
    deserializer.ReadList(memberSchema, [&](smithy::schema::ShapeDeserializer& itemDeserializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      auto value1 = itemDeserializer0.ReadString(itemSchema0);
      if (value1.has_value()) {
        list0.push_back(FooEnumMapper::GetFooEnumForName(*value1));
      }
    });
    m_obj.SetHeaderEnumList(std::move(list0));
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> InputAndOutputWithHeadersResultDeserializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("InputAndOutputWithHeadersResult")
      .PutMember(
          "headerString", smithy::schema::Schema::CreateString("headerString"),
          {{smithy::schema::HttpHeaderTrait::KEY(), Aws::MakeShared<smithy::schema::HttpHeaderTrait>("SchemaSerdeTrait", "X-String")}})
      .PutMember("headerByte", smithy::schema::Schema::CreateInteger("headerByte"),
                 {{smithy::schema::HttpHeaderTrait::KEY(), Aws::MakeShared<smithy::schema::HttpHeaderTrait>("SchemaSerdeTrait", "X-Byte")}})
      .PutMember(
          "headerShort", smithy::schema::Schema::CreateInteger("headerShort"),
          {{smithy::schema::HttpHeaderTrait::KEY(), Aws::MakeShared<smithy::schema::HttpHeaderTrait>("SchemaSerdeTrait", "X-Short")}})
      .PutMember(
          "headerInteger", smithy::schema::Schema::CreateInteger("headerInteger"),
          {{smithy::schema::HttpHeaderTrait::KEY(), Aws::MakeShared<smithy::schema::HttpHeaderTrait>("SchemaSerdeTrait", "X-Integer")}})
      .PutMember("headerLong", smithy::schema::Schema::CreateLong("headerLong"),
                 {{smithy::schema::HttpHeaderTrait::KEY(), Aws::MakeShared<smithy::schema::HttpHeaderTrait>("SchemaSerdeTrait", "X-Long")}})
      .PutMember(
          "headerFloat", smithy::schema::Schema::CreateDouble("headerFloat"),
          {{smithy::schema::HttpHeaderTrait::KEY(), Aws::MakeShared<smithy::schema::HttpHeaderTrait>("SchemaSerdeTrait", "X-Float")}})
      .PutMember(
          "headerDouble", smithy::schema::Schema::CreateDouble("headerDouble"),
          {{smithy::schema::HttpHeaderTrait::KEY(), Aws::MakeShared<smithy::schema::HttpHeaderTrait>("SchemaSerdeTrait", "X-Double")}})
      .PutMember(
          "headerTrueBool", smithy::schema::Schema::CreateBoolean("headerTrueBool"),
          {{smithy::schema::HttpHeaderTrait::KEY(), Aws::MakeShared<smithy::schema::HttpHeaderTrait>("SchemaSerdeTrait", "X-Boolean1")}})
      .PutMember(
          "headerFalseBool", smithy::schema::Schema::CreateBoolean("headerFalseBool"),
          {{smithy::schema::HttpHeaderTrait::KEY(), Aws::MakeShared<smithy::schema::HttpHeaderTrait>("SchemaSerdeTrait", "X-Boolean2")}})
      .PutMember(
          "headerStringList",
          smithy::schema::Schema::ListBuilder("StringList").PutMember("member", smithy::schema::Schema::CreateString("member")).Build(),
          {{smithy::schema::HttpHeaderTrait::KEY(), Aws::MakeShared<smithy::schema::HttpHeaderTrait>("SchemaSerdeTrait", "X-StringList")}})
      .PutMember(
          "headerStringSet",
          smithy::schema::Schema::ListBuilder("StringSet").PutMember("member", smithy::schema::Schema::CreateString("member")).Build(),
          {{smithy::schema::HttpHeaderTrait::KEY(), Aws::MakeShared<smithy::schema::HttpHeaderTrait>("SchemaSerdeTrait", "X-StringSet")}})
      .PutMember(
          "headerIntegerList",
          smithy::schema::Schema::ListBuilder("IntegerList").PutMember("member", smithy::schema::Schema::CreateInteger("member")).Build(),
          {{smithy::schema::HttpHeaderTrait::KEY(), Aws::MakeShared<smithy::schema::HttpHeaderTrait>("SchemaSerdeTrait", "X-IntegerList")}})
      .PutMember(
          "headerBooleanList",
          smithy::schema::Schema::ListBuilder("BooleanList").PutMember("member", smithy::schema::Schema::CreateBoolean("member")).Build(),
          {{smithy::schema::HttpHeaderTrait::KEY(), Aws::MakeShared<smithy::schema::HttpHeaderTrait>("SchemaSerdeTrait", "X-BooleanList")}})
      .PutMember("headerTimestampList",
                 smithy::schema::Schema::ListBuilder("TimestampList")
                     .PutMember("member", smithy::schema::Schema::CreateTimestamp("member"))
                     .Build(),
                 {{smithy::schema::HttpHeaderTrait::KEY(),
                   Aws::MakeShared<smithy::schema::HttpHeaderTrait>("SchemaSerdeTrait", "X-TimestampList")}})
      .PutMember("headerEnum", smithy::schema::Schema::CreateEnum("headerEnum"),
                 {{smithy::schema::HttpHeaderTrait::KEY(), Aws::MakeShared<smithy::schema::HttpHeaderTrait>("SchemaSerdeTrait", "X-Enum")}})
      .PutMember(
          "headerEnumList",
          smithy::schema::Schema::ListBuilder("FooEnumList").PutMember("member", smithy::schema::Schema::CreateEnum("member")).Build(),
          {{smithy::schema::HttpHeaderTrait::KEY(), Aws::MakeShared<smithy::schema::HttpHeaderTrait>("SchemaSerdeTrait", "X-EnumList")}})
      .Build();
}

}  // namespace

Aws::UniquePtr<smithy::schema::SerializableStruct> InputAndOutputWithHeadersResult::GetSchemaSerdeOutput() {
  return Aws::MakeUnique<InputAndOutputWithHeadersResultDeserializable>("InputAndOutputWithHeadersResultDeserializable", *this);
}
