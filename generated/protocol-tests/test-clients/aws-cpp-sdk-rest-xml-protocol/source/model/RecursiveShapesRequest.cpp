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
#include <aws/rest-xml-protocol/model/RecursiveShapesRequest.h>
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
class RecursiveShapesRequest_RecursiveShapesInputOutputNested1SchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit RecursiveShapesRequest_RecursiveShapesInputOutputNested1SchemaSerdeSer(const RecursiveShapesInputOutputNested1& obj)
      : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const RecursiveShapesInputOutputNested1& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class RecursiveShapesRequest_RecursiveShapesInputOutputNested2SchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit RecursiveShapesRequest_RecursiveShapesInputOutputNested2SchemaSerdeSer(const RecursiveShapesInputOutputNested2& obj)
      : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const RecursiveShapesInputOutputNested2& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class RecursiveShapesRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit RecursiveShapesRequestSerializable(const RecursiveShapesRequest& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const RecursiveShapesRequest& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void RecursiveShapesRequest_RecursiveShapesInputOutputNested1SchemaSerdeSer::SerializeMembers(
    smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.FooHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("foo").value();
    serializer.WriteString(memberSchema, m_obj.GetFoo());
  }
  if (m_obj.NestedHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("nested").value();
    RecursiveShapesRequest_RecursiveShapesInputOutputNested2SchemaSerdeSer nested0(m_obj.GetNested());
    serializer.WriteStruct(memberSchema, nested0);
  }
}

std::shared_ptr<const smithy::schema::Schema> RecursiveShapesRequest_RecursiveShapesInputOutputNested1SchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("RecursiveShapesInputOutputNested1")
      .PutMember("foo", smithy::schema::Schema::CreateString("foo"))
      .PutMember("nested", smithy::schema::Schema::StructureBuilder("RecursiveShapesInputOutputNested2").Build())
      .Build();
}

void RecursiveShapesRequest_RecursiveShapesInputOutputNested2SchemaSerdeSer::SerializeMembers(
    smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.BarHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("bar").value();
    serializer.WriteString(memberSchema, m_obj.GetBar());
  }
  if (m_obj.RecursiveMemberHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("recursiveMember").value();
    RecursiveShapesRequest_RecursiveShapesInputOutputNested1SchemaSerdeSer nested0(m_obj.GetRecursiveMember());
    serializer.WriteStruct(memberSchema, nested0);
  }
}

std::shared_ptr<const smithy::schema::Schema> RecursiveShapesRequest_RecursiveShapesInputOutputNested2SchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("RecursiveShapesInputOutputNested2")
      .PutMember("bar", smithy::schema::Schema::CreateString("bar"))
      .PutMember("recursiveMember", smithy::schema::Schema::StructureBuilder("RecursiveShapesInputOutputNested1").Build())
      .Build();
}

void RecursiveShapesRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.NestedHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("nested").value();
    RecursiveShapesRequest_RecursiveShapesInputOutputNested1SchemaSerdeSer nested0(m_obj.GetNested());
    serializer.WriteStruct(memberSchema, nested0);
  }
}

std::shared_ptr<const smithy::schema::Schema> RecursiveShapesRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("RecursiveShapesRequest")
      .PutMember("nested", smithy::schema::Schema::StructureBuilder("RecursiveShapesInputOutputNested1").Build())
      .Build();
}

}  // namespace

Aws::UniquePtr<smithy::schema::SerializableStruct> RecursiveShapesRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<RecursiveShapesRequestSerializable>("RecursiveShapesRequestSerializable", *this);
}

Aws::String RecursiveShapesRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext RecursiveShapesRequest::GetSchemaSerdeContext() const {
  return {"RecursiveShapes", "2019-12-16", "/RecursiveShapes", ""};
}
