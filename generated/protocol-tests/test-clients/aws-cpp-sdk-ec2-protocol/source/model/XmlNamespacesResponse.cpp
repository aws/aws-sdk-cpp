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
#include <aws/ec2-protocol/model/XmlNamespacesResponse.h>
#include <smithy/client/schema/DocumentConversion.h>
#include <smithy/client/schema/HttpTraits.h>
#include <smithy/client/schema/Schema.h>
#include <smithy/client/schema/SchemaBuilder.h>
#include <smithy/client/schema/SerdeTraits.h>
#include <smithy/client/schema/SerializableStruct.h>
#include <smithy/client/schema/ShapeDeserializer.h>
#include <smithy/client/schema/XmlTraits.h>

#include <utility>

using namespace Aws::EC2Protocol::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

XmlNamespacesResponse::XmlNamespacesResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result) { *this = result; }

XmlNamespacesResponse& XmlNamespacesResponse::operator=(const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull()) {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
      m_responseMetadataHasBeenSet = true;
    }
  }
  return *this;
}

namespace {
class XmlNamespacesResponse_XmlNamespaceNestedSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit XmlNamespacesResponse_XmlNamespaceNestedSchemaSerdeDeser(XmlNamespaceNested& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  XmlNamespaceNested& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class XmlNamespacesResponseDeserializable final : public smithy::schema::SerializableStruct {
 public:
  explicit XmlNamespacesResponseDeserializable(XmlNamespacesResponse& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  XmlNamespacesResponse& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void XmlNamespacesResponse_XmlNamespaceNestedSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
                                                                    smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "foo") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetFoo(*value0);
    }
    return;
  }
  if (memberName == "values") {
    Aws::Vector<Aws::String> list0;
    deserializer.ReadList(memberSchema, [&](smithy::schema::ShapeDeserializer& itemDeserializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      auto value1 = itemDeserializer0.ReadString(itemSchema0);
      if (value1.has_value()) {
        list0.push_back(*value1);
      }
    });
    m_obj.SetValues(std::move(list0));
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> XmlNamespacesResponse_XmlNamespaceNestedSchemaSerdeDeser::BuildSchema() {
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

void XmlNamespacesResponseDeserializable::From(const smithy::schema::Schema& memberSchema,
                                               smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "nested") {
    XmlNamespaceNested nested0;
    XmlNamespacesResponse_XmlNamespaceNestedSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetNested(std::move(nested0));
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> XmlNamespacesResponseDeserializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("XmlNamespacesResponse")
      .PutMember("nested", XmlNamespacesResponse_XmlNamespaceNestedSchemaSerdeDeser::BuildSchema())
      .Build();
}

}  // namespace

Aws::UniquePtr<smithy::schema::SerializableStruct> XmlNamespacesResponse::GetSchemaSerdeOutput() {
  return Aws::MakeUnique<XmlNamespacesResponseDeserializable>("XmlNamespacesResponseDeserializable", *this);
}
