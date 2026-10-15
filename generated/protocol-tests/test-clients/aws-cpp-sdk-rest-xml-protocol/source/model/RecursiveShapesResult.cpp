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
#include <aws/rest-xml-protocol/model/RecursiveShapesResult.h>
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

RecursiveShapesResult::RecursiveShapesResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) { *this = result; }

RecursiveShapesResult& RecursiveShapesResult::operator=(const Aws::AmazonWebServiceResult<XmlDocument>& result) {
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
class RecursiveShapesResult_RecursiveShapesInputOutputNested1SchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit RecursiveShapesResult_RecursiveShapesInputOutputNested1SchemaSerdeDeser(RecursiveShapesInputOutputNested1& obj)
      : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  RecursiveShapesInputOutputNested1& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class RecursiveShapesResult_RecursiveShapesInputOutputNested2SchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit RecursiveShapesResult_RecursiveShapesInputOutputNested2SchemaSerdeDeser(RecursiveShapesInputOutputNested2& obj)
      : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  RecursiveShapesInputOutputNested2& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class RecursiveShapesResultDeserializable final : public smithy::schema::SerializableStruct {
 public:
  explicit RecursiveShapesResultDeserializable(RecursiveShapesResult& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  RecursiveShapesResult& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void RecursiveShapesResult_RecursiveShapesInputOutputNested1SchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
                                                                                   smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "foo") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetFoo(*value0);
    }
    return;
  }
  if (memberName == "nested") {
    RecursiveShapesInputOutputNested2 nested0;
    RecursiveShapesResult_RecursiveShapesInputOutputNested2SchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetNested(std::move(nested0));
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> RecursiveShapesResult_RecursiveShapesInputOutputNested1SchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("RecursiveShapesInputOutputNested1")
      .PutMember("foo", smithy::schema::Schema::CreateString("foo"))
      .PutMember("nested", smithy::schema::Schema::StructureBuilder("RecursiveShapesInputOutputNested2").Build())
      .Build();
}

void RecursiveShapesResult_RecursiveShapesInputOutputNested2SchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
                                                                                   smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "bar") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetBar(*value0);
    }
    return;
  }
  if (memberName == "recursiveMember") {
    RecursiveShapesInputOutputNested1 nested0;
    RecursiveShapesResult_RecursiveShapesInputOutputNested1SchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetRecursiveMember(std::move(nested0));
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> RecursiveShapesResult_RecursiveShapesInputOutputNested2SchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("RecursiveShapesInputOutputNested2")
      .PutMember("bar", smithy::schema::Schema::CreateString("bar"))
      .PutMember("recursiveMember", smithy::schema::Schema::StructureBuilder("RecursiveShapesInputOutputNested1").Build())
      .Build();
}

void RecursiveShapesResultDeserializable::From(const smithy::schema::Schema& memberSchema,
                                               smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "nested") {
    RecursiveShapesInputOutputNested1 nested0;
    RecursiveShapesResult_RecursiveShapesInputOutputNested1SchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetNested(std::move(nested0));
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> RecursiveShapesResultDeserializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("RecursiveShapesResult")
      .PutMember("nested", smithy::schema::Schema::StructureBuilder("RecursiveShapesInputOutputNested1").Build())
      .Build();
}

}  // namespace

Aws::UniquePtr<smithy::schema::SerializableStruct> RecursiveShapesResult::GetSchemaSerdeOutput() {
  return Aws::MakeUnique<RecursiveShapesResultDeserializable>("RecursiveShapesResultDeserializable", *this);
}
