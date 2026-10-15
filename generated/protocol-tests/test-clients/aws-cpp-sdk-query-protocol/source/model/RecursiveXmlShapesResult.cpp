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
#include <aws/query-protocol/model/RecursiveXmlShapesResult.h>
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

RecursiveXmlShapesResult::RecursiveXmlShapesResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) { *this = result; }

RecursiveXmlShapesResult& RecursiveXmlShapesResult::operator=(const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::QueryProtocol::Model::RecursiveXmlShapesResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId());
  }
  return *this;
}

namespace {
class RecursiveXmlShapesResult_RecursiveXmlShapesOutputNested1SchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit RecursiveXmlShapesResult_RecursiveXmlShapesOutputNested1SchemaSerdeDeser(RecursiveXmlShapesOutputNested1& obj)
      : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  RecursiveXmlShapesOutputNested1& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class RecursiveXmlShapesResult_RecursiveXmlShapesOutputNested2SchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit RecursiveXmlShapesResult_RecursiveXmlShapesOutputNested2SchemaSerdeDeser(RecursiveXmlShapesOutputNested2& obj)
      : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  RecursiveXmlShapesOutputNested2& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class RecursiveXmlShapesResultDeserializable final : public smithy::schema::SerializableStruct {
 public:
  explicit RecursiveXmlShapesResultDeserializable(RecursiveXmlShapesResult& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  RecursiveXmlShapesResult& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void RecursiveXmlShapesResult_RecursiveXmlShapesOutputNested1SchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
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
    RecursiveXmlShapesOutputNested2 nested0;
    RecursiveXmlShapesResult_RecursiveXmlShapesOutputNested2SchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetNested(std::move(nested0));
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> RecursiveXmlShapesResult_RecursiveXmlShapesOutputNested1SchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("RecursiveXmlShapesOutputNested1")
      .PutMember("foo", smithy::schema::Schema::CreateString("foo"))
      .PutMember("nested", smithy::schema::Schema::StructureBuilder("RecursiveXmlShapesOutputNested2").Build())
      .Build();
}

void RecursiveXmlShapesResult_RecursiveXmlShapesOutputNested2SchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
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
    RecursiveXmlShapesOutputNested1 nested0;
    RecursiveXmlShapesResult_RecursiveXmlShapesOutputNested1SchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetRecursiveMember(std::move(nested0));
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> RecursiveXmlShapesResult_RecursiveXmlShapesOutputNested2SchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("RecursiveXmlShapesOutputNested2")
      .PutMember("bar", smithy::schema::Schema::CreateString("bar"))
      .PutMember("recursiveMember", smithy::schema::Schema::StructureBuilder("RecursiveXmlShapesOutputNested1").Build())
      .Build();
}

void RecursiveXmlShapesResultDeserializable::From(const smithy::schema::Schema& memberSchema,
                                                  smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "nested") {
    RecursiveXmlShapesOutputNested1 nested0;
    RecursiveXmlShapesResult_RecursiveXmlShapesOutputNested1SchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetNested(std::move(nested0));
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> RecursiveXmlShapesResultDeserializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("RecursiveXmlShapesResult")
      .PutMember("nested", smithy::schema::Schema::StructureBuilder("RecursiveXmlShapesOutputNested1").Build())
      .Build();
}

}  // namespace

Aws::UniquePtr<smithy::schema::SerializableStruct> RecursiveXmlShapesResult::GetSchemaSerdeOutput() {
  return Aws::MakeUnique<RecursiveXmlShapesResultDeserializable>("RecursiveXmlShapesResultDeserializable", *this);
}
