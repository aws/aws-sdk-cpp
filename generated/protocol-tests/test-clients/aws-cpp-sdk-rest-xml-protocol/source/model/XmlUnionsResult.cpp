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
#include <aws/rest-xml-protocol/model/XmlUnionsResult.h>
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

XmlUnionsResult::XmlUnionsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) { *this = result; }

XmlUnionsResult& XmlUnionsResult::operator=(const Aws::AmazonWebServiceResult<XmlDocument>& result) {
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
class XmlUnionsResult_XmlUnionShapeSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit XmlUnionsResult_XmlUnionShapeSchemaSerdeDeser(XmlUnionShape& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  XmlUnionShape& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class XmlUnionsResult_XmlNestedUnionStructSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit XmlUnionsResult_XmlNestedUnionStructSchemaSerdeDeser(XmlNestedUnionStruct& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  XmlNestedUnionStruct& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class XmlUnionsResultDeserializable final : public smithy::schema::SerializableStruct {
 public:
  explicit XmlUnionsResultDeserializable(XmlUnionsResult& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  XmlUnionsResult& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void XmlUnionsResult_XmlUnionShapeSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
                                                         smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "stringValue") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetStringValue(*value0);
    }
    return;
  }
  if (memberName == "booleanValue") {
    auto value0 = deserializer.ReadBoolean(memberSchema);
    if (value0.has_value()) {
      m_obj.SetBooleanValue(*value0);
    }
    return;
  }
  if (memberName == "byteValue") {
    auto value0 = deserializer.ReadInteger(memberSchema);
    if (value0.has_value()) {
      m_obj.SetByteValue(*value0);
    }
    return;
  }
  if (memberName == "shortValue") {
    auto value0 = deserializer.ReadInteger(memberSchema);
    if (value0.has_value()) {
      m_obj.SetShortValue(*value0);
    }
    return;
  }
  if (memberName == "integerValue") {
    auto value0 = deserializer.ReadInteger(memberSchema);
    if (value0.has_value()) {
      m_obj.SetIntegerValue(*value0);
    }
    return;
  }
  if (memberName == "longValue") {
    auto value0 = deserializer.ReadLong(memberSchema);
    if (value0.has_value()) {
      m_obj.SetLongValue(*value0);
    }
    return;
  }
  if (memberName == "floatValue") {
    auto value0 = deserializer.ReadDouble(memberSchema);
    if (value0.has_value()) {
      m_obj.SetFloatValue(*value0);
    }
    return;
  }
  if (memberName == "doubleValue") {
    auto value0 = deserializer.ReadDouble(memberSchema);
    if (value0.has_value()) {
      m_obj.SetDoubleValue(*value0);
    }
    return;
  }
  if (memberName == "unionValue") {
    XmlUnionShape nested0;
    XmlUnionsResult_XmlUnionShapeSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetUnionValue(std::move(nested0));
    return;
  }
  if (memberName == "structValue") {
    XmlNestedUnionStruct nested0;
    XmlUnionsResult_XmlNestedUnionStructSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetStructValue(std::move(nested0));
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> XmlUnionsResult_XmlUnionShapeSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::UnionBuilder("XmlUnionShape")
      .PutMember("stringValue", smithy::schema::Schema::CreateString("stringValue"))
      .PutMember("booleanValue", smithy::schema::Schema::CreateBoolean("booleanValue"))
      .PutMember("byteValue", smithy::schema::Schema::CreateInteger("byteValue"))
      .PutMember("shortValue", smithy::schema::Schema::CreateInteger("shortValue"))
      .PutMember("integerValue", smithy::schema::Schema::CreateInteger("integerValue"))
      .PutMember("longValue", smithy::schema::Schema::CreateLong("longValue"))
      .PutMember("floatValue", smithy::schema::Schema::CreateDouble("floatValue"))
      .PutMember("doubleValue", smithy::schema::Schema::CreateDouble("doubleValue"))
      .PutMember("unionValue", smithy::schema::Schema::UnionBuilder("XmlUnionShape").Build())
      .PutMember("structValue", XmlUnionsResult_XmlNestedUnionStructSchemaSerdeDeser::BuildSchema())
      .Build();
}

void XmlUnionsResult_XmlNestedUnionStructSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
                                                                smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "stringValue") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetStringValue(*value0);
    }
    return;
  }
  if (memberName == "booleanValue") {
    auto value0 = deserializer.ReadBoolean(memberSchema);
    if (value0.has_value()) {
      m_obj.SetBooleanValue(*value0);
    }
    return;
  }
  if (memberName == "byteValue") {
    auto value0 = deserializer.ReadInteger(memberSchema);
    if (value0.has_value()) {
      m_obj.SetByteValue(*value0);
    }
    return;
  }
  if (memberName == "shortValue") {
    auto value0 = deserializer.ReadInteger(memberSchema);
    if (value0.has_value()) {
      m_obj.SetShortValue(*value0);
    }
    return;
  }
  if (memberName == "integerValue") {
    auto value0 = deserializer.ReadInteger(memberSchema);
    if (value0.has_value()) {
      m_obj.SetIntegerValue(*value0);
    }
    return;
  }
  if (memberName == "longValue") {
    auto value0 = deserializer.ReadLong(memberSchema);
    if (value0.has_value()) {
      m_obj.SetLongValue(*value0);
    }
    return;
  }
  if (memberName == "floatValue") {
    auto value0 = deserializer.ReadDouble(memberSchema);
    if (value0.has_value()) {
      m_obj.SetFloatValue(*value0);
    }
    return;
  }
  if (memberName == "doubleValue") {
    auto value0 = deserializer.ReadDouble(memberSchema);
    if (value0.has_value()) {
      m_obj.SetDoubleValue(*value0);
    }
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> XmlUnionsResult_XmlNestedUnionStructSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("XmlNestedUnionStruct")
      .PutMember("stringValue", smithy::schema::Schema::CreateString("stringValue"))
      .PutMember("booleanValue", smithy::schema::Schema::CreateBoolean("booleanValue"))
      .PutMember("byteValue", smithy::schema::Schema::CreateInteger("byteValue"))
      .PutMember("shortValue", smithy::schema::Schema::CreateInteger("shortValue"))
      .PutMember("integerValue", smithy::schema::Schema::CreateInteger("integerValue"))
      .PutMember("longValue", smithy::schema::Schema::CreateLong("longValue"))
      .PutMember("floatValue", smithy::schema::Schema::CreateDouble("floatValue"))
      .PutMember("doubleValue", smithy::schema::Schema::CreateDouble("doubleValue"))
      .Build();
}

void XmlUnionsResultDeserializable::From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "unionValue") {
    XmlUnionShape nested0;
    XmlUnionsResult_XmlUnionShapeSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetUnionValue(std::move(nested0));
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> XmlUnionsResultDeserializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("XmlUnionsResult")
      .PutMember("unionValue", smithy::schema::Schema::UnionBuilder("XmlUnionShape").Build())
      .Build();
}

}  // namespace

Aws::UniquePtr<smithy::schema::SerializableStruct> XmlUnionsResult::GetSchemaSerdeOutput() {
  return Aws::MakeUnique<XmlUnionsResultDeserializable>("XmlUnionsResultDeserializable", *this);
}
