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
#include <aws/ec2-protocol/model/SimpleScalarXmlPropertiesResponse.h>
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

SimpleScalarXmlPropertiesResponse::SimpleScalarXmlPropertiesResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  *this = result;
}

SimpleScalarXmlPropertiesResponse& SimpleScalarXmlPropertiesResponse::operator=(const Aws::AmazonWebServiceResult<XmlDocument>& result) {
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
class SimpleScalarXmlPropertiesResponseDeserializable final : public smithy::schema::SerializableStruct {
 public:
  explicit SimpleScalarXmlPropertiesResponseDeserializable(SimpleScalarXmlPropertiesResponse& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  SimpleScalarXmlPropertiesResponse& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void SimpleScalarXmlPropertiesResponseDeserializable::From(const smithy::schema::Schema& memberSchema,
                                                           smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "stringValue") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetStringValue(*value0);
    }
    return;
  }
  if (memberName == "emptyStringValue") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetEmptyStringValue(*value0);
    }
    return;
  }
  if (memberName == "trueBooleanValue") {
    auto value0 = deserializer.ReadBoolean(memberSchema);
    if (value0.has_value()) {
      m_obj.SetTrueBooleanValue(*value0);
    }
    return;
  }
  if (memberName == "falseBooleanValue") {
    auto value0 = deserializer.ReadBoolean(memberSchema);
    if (value0.has_value()) {
      m_obj.SetFalseBooleanValue(*value0);
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

std::shared_ptr<const smithy::schema::Schema> SimpleScalarXmlPropertiesResponseDeserializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("SimpleScalarXmlPropertiesResponse")
      .PutMember(
          "stringValue", smithy::schema::Schema::CreateString("stringValue"),
          {{smithy::schema::Ec2QueryNameTrait::KEY(), Aws::MakeShared<smithy::schema::Ec2QueryNameTrait>("SchemaSerdeTrait", "IgnoreMe")}})
      .PutMember("emptyStringValue", smithy::schema::Schema::CreateString("emptyStringValue"))
      .PutMember("trueBooleanValue", smithy::schema::Schema::CreateBoolean("trueBooleanValue"))
      .PutMember("falseBooleanValue", smithy::schema::Schema::CreateBoolean("falseBooleanValue"))
      .PutMember("byteValue", smithy::schema::Schema::CreateInteger("byteValue"))
      .PutMember("shortValue", smithy::schema::Schema::CreateInteger("shortValue"))
      .PutMember("integerValue", smithy::schema::Schema::CreateInteger("integerValue"))
      .PutMember("longValue", smithy::schema::Schema::CreateLong("longValue"))
      .PutMember("floatValue", smithy::schema::Schema::CreateDouble("floatValue"))
      .PutMember(
          "doubleValue", smithy::schema::Schema::CreateDouble("doubleValue"),
          {{smithy::schema::XmlNameTrait::KEY(), Aws::MakeShared<smithy::schema::XmlNameTrait>("SchemaSerdeTrait", "DoubleDribble")}})
      .Build();
}

}  // namespace

Aws::UniquePtr<smithy::schema::SerializableStruct> SimpleScalarXmlPropertiesResponse::GetSchemaSerdeOutput() {
  return Aws::MakeUnique<SimpleScalarXmlPropertiesResponseDeserializable>("SimpleScalarXmlPropertiesResponseDeserializable", *this);
}
