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
#include <aws/query-protocol/model/XmlListsResult.h>
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

XmlListsResult::XmlListsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) { *this = result; }

XmlListsResult& XmlListsResult::operator=(const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::QueryProtocol::Model::XmlListsResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId());
  }
  return *this;
}

namespace {
class XmlListsResult_StructureListMemberSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit XmlListsResult_StructureListMemberSchemaSerdeDeser(StructureListMember& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  StructureListMember& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class XmlListsResultDeserializable final : public smithy::schema::SerializableStruct {
 public:
  explicit XmlListsResultDeserializable(XmlListsResult& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  XmlListsResult& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void XmlListsResult_StructureListMemberSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
                                                              smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "a") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetA(*value0);
    }
    return;
  }
  if (memberName == "b") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetB(*value0);
    }
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> XmlListsResult_StructureListMemberSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("StructureListMember")
      .PutMember("a", smithy::schema::Schema::CreateString("a"),
                 {{smithy::schema::XmlNameTrait::KEY(), Aws::MakeShared<smithy::schema::XmlNameTrait>("SchemaSerdeTrait", "value")}})
      .PutMember("b", smithy::schema::Schema::CreateString("b"),
                 {{smithy::schema::XmlNameTrait::KEY(), Aws::MakeShared<smithy::schema::XmlNameTrait>("SchemaSerdeTrait", "other")}})
      .Build();
}

void XmlListsResultDeserializable::From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "stringList") {
    Aws::Vector<Aws::String> list0;
    deserializer.ReadList(memberSchema, [&](smithy::schema::ShapeDeserializer& itemDeserializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      auto value1 = itemDeserializer0.ReadString(itemSchema0);
      if (value1.has_value()) {
        list0.push_back(*value1);
      }
    });
    m_obj.SetStringList(std::move(list0));
    return;
  }
  if (memberName == "stringSet") {
    Aws::Vector<Aws::String> list0;
    deserializer.ReadList(memberSchema, [&](smithy::schema::ShapeDeserializer& itemDeserializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      auto value1 = itemDeserializer0.ReadString(itemSchema0);
      if (value1.has_value()) {
        list0.push_back(*value1);
      }
    });
    m_obj.SetStringSet(std::move(list0));
    return;
  }
  if (memberName == "integerList") {
    Aws::Vector<int> list0;
    deserializer.ReadList(memberSchema, [&](smithy::schema::ShapeDeserializer& itemDeserializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      auto value1 = itemDeserializer0.ReadInteger(itemSchema0);
      if (value1.has_value()) {
        list0.push_back(*value1);
      }
    });
    m_obj.SetIntegerList(std::move(list0));
    return;
  }
  if (memberName == "booleanList") {
    Aws::Vector<bool> list0;
    deserializer.ReadList(memberSchema, [&](smithy::schema::ShapeDeserializer& itemDeserializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      auto value1 = itemDeserializer0.ReadBoolean(itemSchema0);
      if (value1.has_value()) {
        list0.push_back(*value1);
      }
    });
    m_obj.SetBooleanList(std::move(list0));
    return;
  }
  if (memberName == "timestampList") {
    Aws::Vector<Aws::Utils::DateTime> list0;
    deserializer.ReadList(memberSchema, [&](smithy::schema::ShapeDeserializer& itemDeserializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      auto value1 = itemDeserializer0.ReadTimestamp(itemSchema0);
      if (value1.has_value()) {
        list0.push_back(*value1);
      }
    });
    m_obj.SetTimestampList(std::move(list0));
    return;
  }
  if (memberName == "enumList") {
    Aws::Vector<FooEnum> list0;
    deserializer.ReadList(memberSchema, [&](smithy::schema::ShapeDeserializer& itemDeserializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      auto value1 = itemDeserializer0.ReadString(itemSchema0);
      if (value1.has_value()) {
        list0.push_back(FooEnumMapper::GetFooEnumForName(*value1));
      }
    });
    m_obj.SetEnumList(std::move(list0));
    return;
  }
  if (memberName == "intEnumList") {
    Aws::Vector<int> list0;
    deserializer.ReadList(memberSchema, [&](smithy::schema::ShapeDeserializer& itemDeserializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      auto value1 = itemDeserializer0.ReadInteger(itemSchema0);
      if (value1.has_value()) {
        list0.push_back(*value1);
      }
    });
    m_obj.SetIntEnumList(std::move(list0));
    return;
  }
  if (memberName == "nestedStringList") {
    Aws::Vector<Aws::Vector<Aws::String>> list0;
    deserializer.ReadList(memberSchema, [&](smithy::schema::ShapeDeserializer& itemDeserializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      Aws::Vector<Aws::String> list1;
      itemDeserializer0.ReadList(itemSchema0, [&](smithy::schema::ShapeDeserializer& itemDeserializer1) {
        const smithy::schema::Schema& itemSchema1 = *itemSchema0.GetMemberTarget().value()->GetMember("member").value();
        auto value2 = itemDeserializer1.ReadString(itemSchema1);
        if (value2.has_value()) {
          list1.push_back(*value2);
        }
      });
      list0.push_back(std::move(list1));
    });
    m_obj.SetNestedStringList(std::move(list0));
    return;
  }
  if (memberName == "renamedListMembers") {
    Aws::Vector<Aws::String> list0;
    deserializer.ReadList(memberSchema, [&](smithy::schema::ShapeDeserializer& itemDeserializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      auto value1 = itemDeserializer0.ReadString(itemSchema0);
      if (value1.has_value()) {
        list0.push_back(*value1);
      }
    });
    m_obj.SetRenamedListMembers(std::move(list0));
    return;
  }
  if (memberName == "flattenedList") {
    Aws::Vector<Aws::String> list0;
    deserializer.ReadList(memberSchema, [&](smithy::schema::ShapeDeserializer& itemDeserializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      auto value1 = itemDeserializer0.ReadString(itemSchema0);
      if (value1.has_value()) {
        list0.push_back(*value1);
      }
    });
    m_obj.SetFlattenedList(std::move(list0));
    return;
  }
  if (memberName == "flattenedList2") {
    Aws::Vector<Aws::String> list0;
    deserializer.ReadList(memberSchema, [&](smithy::schema::ShapeDeserializer& itemDeserializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      auto value1 = itemDeserializer0.ReadString(itemSchema0);
      if (value1.has_value()) {
        list0.push_back(*value1);
      }
    });
    m_obj.SetFlattenedList2(std::move(list0));
    return;
  }
  if (memberName == "flattenedListWithMemberNamespace") {
    Aws::Vector<Aws::String> list0;
    deserializer.ReadList(memberSchema, [&](smithy::schema::ShapeDeserializer& itemDeserializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      auto value1 = itemDeserializer0.ReadString(itemSchema0);
      if (value1.has_value()) {
        list0.push_back(*value1);
      }
    });
    m_obj.SetFlattenedListWithMemberNamespace(std::move(list0));
    return;
  }
  if (memberName == "flattenedListWithNamespace") {
    Aws::Vector<Aws::String> list0;
    deserializer.ReadList(memberSchema, [&](smithy::schema::ShapeDeserializer& itemDeserializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      auto value1 = itemDeserializer0.ReadString(itemSchema0);
      if (value1.has_value()) {
        list0.push_back(*value1);
      }
    });
    m_obj.SetFlattenedListWithNamespace(std::move(list0));
    return;
  }
  if (memberName == "structureList") {
    Aws::Vector<StructureListMember> list0;
    deserializer.ReadList(memberSchema, [&](smithy::schema::ShapeDeserializer& itemDeserializer0) {
      StructureListMember nested1;
      XmlListsResult_StructureListMemberSchemaSerdeDeser{nested1}.Deserialize(itemDeserializer0);
      list0.push_back(std::move(nested1));
    });
    m_obj.SetStructureList(std::move(list0));
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> XmlListsResultDeserializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("XmlListsResult")
      .PutMember(
          "stringList",
          smithy::schema::Schema::ListBuilder("StringList").PutMember("member", smithy::schema::Schema::CreateString("member")).Build())
      .PutMember(
          "stringSet",
          smithy::schema::Schema::ListBuilder("StringSet").PutMember("member", smithy::schema::Schema::CreateString("member")).Build())
      .PutMember(
          "integerList",
          smithy::schema::Schema::ListBuilder("IntegerList").PutMember("member", smithy::schema::Schema::CreateInteger("member")).Build())
      .PutMember(
          "booleanList",
          smithy::schema::Schema::ListBuilder("BooleanList").PutMember("member", smithy::schema::Schema::CreateBoolean("member")).Build())
      .PutMember("timestampList", smithy::schema::Schema::ListBuilder("TimestampList")
                                      .PutMember("member", smithy::schema::Schema::CreateTimestamp("member"))
                                      .Build())
      .PutMember(
          "enumList",
          smithy::schema::Schema::ListBuilder("FooEnumList").PutMember("member", smithy::schema::Schema::CreateEnum("member")).Build())
      .PutMember("intEnumList", smithy::schema::Schema::ListBuilder("IntegerEnumList")
                                    .PutMember("member", smithy::schema::Schema::CreateIntEnum("member"))
                                    .Build())
      .PutMember("nestedStringList", smithy::schema::Schema::ListBuilder("NestedStringList")
                                         .PutMember("member", smithy::schema::Schema::ListBuilder("StringList")
                                                                  .PutMember("member", smithy::schema::Schema::CreateString("member"))
                                                                  .Build())
                                         .Build())
      .PutMember(
          "renamedListMembers",
          smithy::schema::Schema::ListBuilder("RenamedListMembers")
              .PutMember("member", smithy::schema::Schema::CreateString("member"),
                         {{smithy::schema::XmlNameTrait::KEY(), Aws::MakeShared<smithy::schema::XmlNameTrait>("SchemaSerdeTrait", "item")}})
              .Build(),
          {{smithy::schema::XmlNameTrait::KEY(), Aws::MakeShared<smithy::schema::XmlNameTrait>("SchemaSerdeTrait", "renamed")},
           {smithy::schema::XmlListItemNameTrait::KEY(),
            Aws::MakeShared<smithy::schema::XmlListItemNameTrait>("SchemaSerdeTrait", "item")}})
      .PutMember(
          "flattenedList",
          smithy::schema::Schema::ListBuilder("RenamedListMembers")
              .PutMember("member", smithy::schema::Schema::CreateString("member"),
                         {{smithy::schema::XmlNameTrait::KEY(), Aws::MakeShared<smithy::schema::XmlNameTrait>("SchemaSerdeTrait", "item")}})
              .Build(),
          {{smithy::schema::XmlFlattenedTrait::KEY(), Aws::MakeShared<smithy::schema::XmlFlattenedTrait>("SchemaSerdeTrait")},
           {smithy::schema::XmlListItemNameTrait::KEY(),
            Aws::MakeShared<smithy::schema::XmlListItemNameTrait>("SchemaSerdeTrait", "item")}})
      .PutMember(
          "flattenedList2",
          smithy::schema::Schema::ListBuilder("RenamedListMembers")
              .PutMember("member", smithy::schema::Schema::CreateString("member"),
                         {{smithy::schema::XmlNameTrait::KEY(), Aws::MakeShared<smithy::schema::XmlNameTrait>("SchemaSerdeTrait", "item")}})
              .Build(),
          {{smithy::schema::XmlNameTrait::KEY(), Aws::MakeShared<smithy::schema::XmlNameTrait>("SchemaSerdeTrait", "customName")},
           {smithy::schema::XmlFlattenedTrait::KEY(), Aws::MakeShared<smithy::schema::XmlFlattenedTrait>("SchemaSerdeTrait")},
           {smithy::schema::XmlListItemNameTrait::KEY(),
            Aws::MakeShared<smithy::schema::XmlListItemNameTrait>("SchemaSerdeTrait", "item")}})
      .PutMember("flattenedListWithMemberNamespace",
                 smithy::schema::Schema::ListBuilder("ListWithMemberNamespace")
                     .PutMember("member", smithy::schema::Schema::CreateString("member"),
                                {{smithy::schema::XmlNamespaceTrait::KEY(), Aws::MakeShared<smithy::schema::XmlNamespaceTrait>(
                                                                                "SchemaSerdeTrait", "https://xml-member.example.com")}})
                     .Build(),
                 {{smithy::schema::XmlFlattenedTrait::KEY(), Aws::MakeShared<smithy::schema::XmlFlattenedTrait>("SchemaSerdeTrait")}})
      .PutMember("flattenedListWithNamespace",
                 smithy::schema::Schema::ListBuilder("ListWithNamespace")
                     .PutMember("member", smithy::schema::Schema::CreateString("member"))
                     .Build(),
                 {{smithy::schema::XmlFlattenedTrait::KEY(), Aws::MakeShared<smithy::schema::XmlFlattenedTrait>("SchemaSerdeTrait")}})
      .PutMember(
          "structureList",
          smithy::schema::Schema::ListBuilder("StructureList")
              .PutMember("member", XmlListsResult_StructureListMemberSchemaSerdeDeser::BuildSchema(),
                         {{smithy::schema::XmlNameTrait::KEY(), Aws::MakeShared<smithy::schema::XmlNameTrait>("SchemaSerdeTrait", "item")}})
              .Build(),
          {{smithy::schema::XmlNameTrait::KEY(), Aws::MakeShared<smithy::schema::XmlNameTrait>("SchemaSerdeTrait", "myStructureList")},
           {smithy::schema::XmlListItemNameTrait::KEY(),
            Aws::MakeShared<smithy::schema::XmlListItemNameTrait>("SchemaSerdeTrait", "item")}})
      .Build();
}

}  // namespace

Aws::UniquePtr<smithy::schema::SerializableStruct> XmlListsResult::GetSchemaSerdeOutput() {
  return Aws::MakeUnique<XmlListsResultDeserializable>("XmlListsResultDeserializable", *this);
}
