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
#include <aws/rest-xml-protocol/model/InputAndOutputWithHeadersRequest.h>
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
class InputAndOutputWithHeadersRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit InputAndOutputWithHeadersRequestSerializable(const InputAndOutputWithHeadersRequest& obj)
      : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const InputAndOutputWithHeadersRequest& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void InputAndOutputWithHeadersRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.HeaderStringHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("headerString").value();
    serializer.WriteString(memberSchema, m_obj.GetHeaderString());
  }
  if (m_obj.HeaderByteHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("headerByte").value();
    serializer.WriteInteger(memberSchema, m_obj.GetHeaderByte());
  }
  if (m_obj.HeaderShortHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("headerShort").value();
    serializer.WriteInteger(memberSchema, m_obj.GetHeaderShort());
  }
  if (m_obj.HeaderIntegerHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("headerInteger").value();
    serializer.WriteInteger(memberSchema, m_obj.GetHeaderInteger());
  }
  if (m_obj.HeaderLongHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("headerLong").value();
    serializer.WriteLong(memberSchema, m_obj.GetHeaderLong());
  }
  if (m_obj.HeaderFloatHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("headerFloat").value();
    serializer.WriteDouble(memberSchema, m_obj.GetHeaderFloat());
  }
  if (m_obj.HeaderDoubleHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("headerDouble").value();
    serializer.WriteDouble(memberSchema, m_obj.GetHeaderDouble());
  }
  if (m_obj.HeaderTrueBoolHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("headerTrueBool").value();
    serializer.WriteBoolean(memberSchema, m_obj.GetHeaderTrueBool());
  }
  if (m_obj.HeaderFalseBoolHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("headerFalseBool").value();
    serializer.WriteBoolean(memberSchema, m_obj.GetHeaderFalseBool());
  }
  if (m_obj.HeaderStringListHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("headerStringList").value();
    serializer.WriteList(memberSchema, m_obj.GetHeaderStringList().size(), [&](smithy::schema::ShapeSerializer& listSerializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      for (const auto& item0 : m_obj.GetHeaderStringList()) {
        listSerializer0.WriteString(itemSchema0, item0);
      }
    });
  }
  if (m_obj.HeaderStringSetHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("headerStringSet").value();
    serializer.WriteList(memberSchema, m_obj.GetHeaderStringSet().size(), [&](smithy::schema::ShapeSerializer& listSerializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      for (const auto& item0 : m_obj.GetHeaderStringSet()) {
        listSerializer0.WriteString(itemSchema0, item0);
      }
    });
  }
  if (m_obj.HeaderIntegerListHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("headerIntegerList").value();
    serializer.WriteList(memberSchema, m_obj.GetHeaderIntegerList().size(), [&](smithy::schema::ShapeSerializer& listSerializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      for (const auto& item0 : m_obj.GetHeaderIntegerList()) {
        listSerializer0.WriteInteger(itemSchema0, item0);
      }
    });
  }
  if (m_obj.HeaderBooleanListHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("headerBooleanList").value();
    serializer.WriteList(memberSchema, m_obj.GetHeaderBooleanList().size(), [&](smithy::schema::ShapeSerializer& listSerializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      for (const auto& item0 : m_obj.GetHeaderBooleanList()) {
        listSerializer0.WriteBoolean(itemSchema0, item0);
      }
    });
  }
  if (m_obj.HeaderTimestampListHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("headerTimestampList").value();
    serializer.WriteList(memberSchema, m_obj.GetHeaderTimestampList().size(), [&](smithy::schema::ShapeSerializer& listSerializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      for (const auto& item0 : m_obj.GetHeaderTimestampList()) {
        listSerializer0.WriteTimestamp(itemSchema0, item0);
      }
    });
  }
  if (m_obj.HeaderEnumHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("headerEnum").value();
    serializer.WriteString(memberSchema, FooEnumMapper::GetNameForFooEnum(m_obj.GetHeaderEnum()));
  }
  if (m_obj.HeaderEnumListHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("headerEnumList").value();
    serializer.WriteList(memberSchema, m_obj.GetHeaderEnumList().size(), [&](smithy::schema::ShapeSerializer& listSerializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      for (const auto& item0 : m_obj.GetHeaderEnumList()) {
        listSerializer0.WriteString(itemSchema0, FooEnumMapper::GetNameForFooEnum(item0));
      }
    });
  }
}

std::shared_ptr<const smithy::schema::Schema> InputAndOutputWithHeadersRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("InputAndOutputWithHeadersRequest")
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

Aws::UniquePtr<smithy::schema::SerializableStruct> InputAndOutputWithHeadersRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<InputAndOutputWithHeadersRequestSerializable>("InputAndOutputWithHeadersRequestSerializable", *this);
}

Aws::String InputAndOutputWithHeadersRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext InputAndOutputWithHeadersRequest::GetSchemaSerdeContext() const {
  return {"InputAndOutputWithHeaders", "2019-12-16", "/InputAndOutputWithHeaders", ""};
}

Aws::Http::HeaderValueCollection InputAndOutputWithHeadersRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  return headers;
}
