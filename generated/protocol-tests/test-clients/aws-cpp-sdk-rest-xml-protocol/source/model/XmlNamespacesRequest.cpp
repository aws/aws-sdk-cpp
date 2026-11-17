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
#include <aws/rest-xml-protocol/model/XmlNamespacesRequest.h>
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
class XmlNamespacesRequest_XmlNamespaceNestedSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit XmlNamespacesRequest_XmlNamespaceNestedSchemaSerdeSer(const XmlNamespaceNested& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const XmlNamespaceNested& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class XmlNamespacesRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit XmlNamespacesRequestSerializable(const XmlNamespacesRequest& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const XmlNamespacesRequest& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void XmlNamespacesRequest_XmlNamespaceNestedSchemaSerdeSer::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.FooHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("foo").value();
    serializer.WriteString(memberSchema, m_obj.GetFoo());
  }
  if (m_obj.ValuesHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("values").value();
    serializer.WriteList(memberSchema, m_obj.GetValues().size(), [&](smithy::schema::ShapeSerializer& listSerializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      for (const auto& item0 : m_obj.GetValues()) {
        listSerializer0.WriteString(itemSchema0, item0);
      }
    });
  }
}

std::shared_ptr<const smithy::schema::Schema> XmlNamespacesRequest_XmlNamespaceNestedSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("XmlNamespaceNested")
      .PutMember("foo", smithy::schema::Schema::CreateString("foo"),
                 {{smithy::schema::XmlNamespaceTrait::KEY(),
                   Aws::MakeShared<smithy::schema::XmlNamespaceTrait>("SchemaSerdeTrait", "http://baz.com", "baz")}})
      .PutMember("values",
                 smithy::schema::Schema::ListBuilder("XmlNamespacedList")
                     .PutMember("member", smithy::schema::Schema::CreateString("member"),
                                {{smithy::schema::XmlNamespaceTrait::KEY(),
                                  Aws::MakeShared<smithy::schema::XmlNamespaceTrait>("SchemaSerdeTrait", "http://bux.com")}})
                     .Build(),
                 {{smithy::schema::XmlNamespaceTrait::KEY(),
                   Aws::MakeShared<smithy::schema::XmlNamespaceTrait>("SchemaSerdeTrait", "http://qux.com")}})
      .Build();
}

void XmlNamespacesRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.NestedHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("nested").value();
    XmlNamespacesRequest_XmlNamespaceNestedSchemaSerdeSer nested0(m_obj.GetNested());
    serializer.WriteStruct(memberSchema, nested0);
  }
}

std::shared_ptr<const smithy::schema::Schema> XmlNamespacesRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("XmlNamespacesRequest")
      .PutMember("nested", XmlNamespacesRequest_XmlNamespaceNestedSchemaSerdeSer::BuildSchema())
      .Build();
}

}  // namespace

Aws::UniquePtr<smithy::schema::SerializableStruct> XmlNamespacesRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<XmlNamespacesRequestSerializable>("XmlNamespacesRequestSerializable", *this);
}

Aws::String XmlNamespacesRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext XmlNamespacesRequest::GetSchemaSerdeContext() const {
  return {"XmlNamespaces", "2019-12-16", "/XmlNamespaces", ""};
}
