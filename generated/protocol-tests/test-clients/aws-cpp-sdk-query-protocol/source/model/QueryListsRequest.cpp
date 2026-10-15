/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/query-protocol/model/QueryListsRequest.h>
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

using namespace Aws::QueryProtocol::Model;
using namespace Aws::Utils;

namespace {
class QueryListsRequest_GreetingStructSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit QueryListsRequest_GreetingStructSchemaSerdeSer(const GreetingStruct& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const GreetingStruct& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class QueryListsRequest_NestedStructWithListSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit QueryListsRequest_NestedStructWithListSchemaSerdeSer(const NestedStructWithList& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const NestedStructWithList& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class QueryListsRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit QueryListsRequestSerializable(const QueryListsRequest& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const QueryListsRequest& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void QueryListsRequest_GreetingStructSchemaSerdeSer::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.HiHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("hi").value();
    serializer.WriteString(memberSchema, m_obj.GetHi());
  }
}

std::shared_ptr<const smithy::schema::Schema> QueryListsRequest_GreetingStructSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("GreetingStruct").PutMember("hi", smithy::schema::Schema::CreateString("hi")).Build();
}

void QueryListsRequest_NestedStructWithListSchemaSerdeSer::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.ListArgHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ListArg").value();
    serializer.WriteList(memberSchema, m_obj.GetListArg().size(), [&](smithy::schema::ShapeSerializer& listSerializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      for (const auto& item0 : m_obj.GetListArg()) {
        listSerializer0.WriteString(itemSchema0, item0);
      }
    });
  }
}

std::shared_ptr<const smithy::schema::Schema> QueryListsRequest_NestedStructWithListSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("NestedStructWithList")
      .PutMember(
          "ListArg",
          smithy::schema::Schema::ListBuilder("StringList").PutMember("member", smithy::schema::Schema::CreateString("member")).Build())
      .Build();
}

void QueryListsRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.ListArgHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ListArg").value();
    serializer.WriteList(memberSchema, m_obj.GetListArg().size(), [&](smithy::schema::ShapeSerializer& listSerializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      for (const auto& item0 : m_obj.GetListArg()) {
        listSerializer0.WriteString(itemSchema0, item0);
      }
    });
  }
  if (m_obj.ComplexListArgHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ComplexListArg").value();
    serializer.WriteList(memberSchema, m_obj.GetComplexListArg().size(), [&](smithy::schema::ShapeSerializer& listSerializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      for (const auto& item0 : m_obj.GetComplexListArg()) {
        QueryListsRequest_GreetingStructSchemaSerdeSer nested1(item0);
        listSerializer0.WriteStruct(itemSchema0, nested1);
      }
    });
  }
  if (m_obj.FlattenedListArgHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("FlattenedListArg").value();
    serializer.WriteList(memberSchema, m_obj.GetFlattenedListArg().size(), [&](smithy::schema::ShapeSerializer& listSerializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      for (const auto& item0 : m_obj.GetFlattenedListArg()) {
        listSerializer0.WriteString(itemSchema0, item0);
      }
    });
  }
  if (m_obj.ListArgWithXmlNameMemberHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ListArgWithXmlNameMember").value();
    serializer.WriteList(memberSchema, m_obj.GetListArgWithXmlNameMember().size(), [&](smithy::schema::ShapeSerializer& listSerializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      for (const auto& item0 : m_obj.GetListArgWithXmlNameMember()) {
        listSerializer0.WriteString(itemSchema0, item0);
      }
    });
  }
  if (m_obj.FlattenedListArgWithXmlNameHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("FlattenedListArgWithXmlName").value();
    serializer.WriteList(memberSchema, m_obj.GetFlattenedListArgWithXmlName().size(),
                         [&](smithy::schema::ShapeSerializer& listSerializer0) {
                           const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
                           for (const auto& item0 : m_obj.GetFlattenedListArgWithXmlName()) {
                             listSerializer0.WriteString(itemSchema0, item0);
                           }
                         });
  }
  if (m_obj.NestedWithListHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("NestedWithList").value();
    QueryListsRequest_NestedStructWithListSchemaSerdeSer nested0(m_obj.GetNestedWithList());
    serializer.WriteStruct(memberSchema, nested0);
  }
}

std::shared_ptr<const smithy::schema::Schema> QueryListsRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("QueryListsRequest")
      .PutMember(
          "ListArg",
          smithy::schema::Schema::ListBuilder("StringList").PutMember("member", smithy::schema::Schema::CreateString("member")).Build())
      .PutMember("ComplexListArg", smithy::schema::Schema::ListBuilder("GreetingList")
                                       .PutMember("member", QueryListsRequest_GreetingStructSchemaSerdeSer::BuildSchema())
                                       .Build())
      .PutMember(
          "FlattenedListArg",
          smithy::schema::Schema::ListBuilder("StringList").PutMember("member", smithy::schema::Schema::CreateString("member")).Build(),
          {{smithy::schema::XmlFlattenedTrait::KEY(), Aws::MakeShared<smithy::schema::XmlFlattenedTrait>("SchemaSerdeTrait")}})
      .PutMember(
          "ListArgWithXmlNameMember",
          smithy::schema::Schema::ListBuilder("ListWithXmlName")
              .PutMember("member", smithy::schema::Schema::CreateString("member"),
                         {{smithy::schema::XmlNameTrait::KEY(), Aws::MakeShared<smithy::schema::XmlNameTrait>("SchemaSerdeTrait", "item")}})
              .Build(),
          {{smithy::schema::XmlListItemNameTrait::KEY(),
            Aws::MakeShared<smithy::schema::XmlListItemNameTrait>("SchemaSerdeTrait", "item")}})
      .PutMember(
          "FlattenedListArgWithXmlName",
          smithy::schema::Schema::ListBuilder("ListWithXmlName")
              .PutMember("member", smithy::schema::Schema::CreateString("member"),
                         {{smithy::schema::XmlNameTrait::KEY(), Aws::MakeShared<smithy::schema::XmlNameTrait>("SchemaSerdeTrait", "item")}})
              .Build(),
          {{smithy::schema::XmlNameTrait::KEY(), Aws::MakeShared<smithy::schema::XmlNameTrait>("SchemaSerdeTrait", "Hi")},
           {smithy::schema::XmlFlattenedTrait::KEY(), Aws::MakeShared<smithy::schema::XmlFlattenedTrait>("SchemaSerdeTrait")},
           {smithy::schema::XmlListItemNameTrait::KEY(),
            Aws::MakeShared<smithy::schema::XmlListItemNameTrait>("SchemaSerdeTrait", "item")}})
      .PutMember("NestedWithList", QueryListsRequest_NestedStructWithListSchemaSerdeSer::BuildSchema())
      .Build();
}

}  // namespace

Aws::UniquePtr<smithy::schema::SerializableStruct> QueryListsRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<QueryListsRequestSerializable>("QueryListsRequestSerializable", *this);
}

Aws::String QueryListsRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext QueryListsRequest::GetSchemaSerdeContext() const { return {"QueryLists", "2020-01-08"}; }

void QueryListsRequest::DumpBodyToUrl(Aws::Http::URI& uri) const { uri.SetQueryString(SerializePayload()); }
