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
#include <aws/ec2-protocol/model/XmlTimestampsResponse.h>
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

XmlTimestampsResponse::XmlTimestampsResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result) { *this = result; }

XmlTimestampsResponse& XmlTimestampsResponse::operator=(const Aws::AmazonWebServiceResult<XmlDocument>& result) {
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
class XmlTimestampsResponseDeserializable final : public smithy::schema::SerializableStruct {
 public:
  explicit XmlTimestampsResponseDeserializable(XmlTimestampsResponse& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  XmlTimestampsResponse& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void XmlTimestampsResponseDeserializable::From(const smithy::schema::Schema& memberSchema,
                                               smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "normal") {
    auto value0 = deserializer.ReadTimestamp(memberSchema);
    if (value0.has_value()) {
      m_obj.SetNormal(*value0);
    }
    return;
  }
  if (memberName == "dateTime") {
    auto value0 = deserializer.ReadTimestamp(memberSchema);
    if (value0.has_value()) {
      m_obj.SetDateTime(*value0);
    }
    return;
  }
  if (memberName == "dateTimeOnTarget") {
    auto value0 = deserializer.ReadTimestamp(memberSchema);
    if (value0.has_value()) {
      m_obj.SetDateTimeOnTarget(*value0);
    }
    return;
  }
  if (memberName == "epochSeconds") {
    auto value0 = deserializer.ReadTimestamp(memberSchema);
    if (value0.has_value()) {
      m_obj.SetEpochSeconds(*value0);
    }
    return;
  }
  if (memberName == "epochSecondsOnTarget") {
    auto value0 = deserializer.ReadTimestamp(memberSchema);
    if (value0.has_value()) {
      m_obj.SetEpochSecondsOnTarget(*value0);
    }
    return;
  }
  if (memberName == "httpDate") {
    auto value0 = deserializer.ReadTimestamp(memberSchema);
    if (value0.has_value()) {
      m_obj.SetHttpDate(*value0);
    }
    return;
  }
  if (memberName == "httpDateOnTarget") {
    auto value0 = deserializer.ReadTimestamp(memberSchema);
    if (value0.has_value()) {
      m_obj.SetHttpDateOnTarget(*value0);
    }
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> XmlTimestampsResponseDeserializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("XmlTimestampsResponse")
      .PutMember("normal", smithy::schema::Schema::CreateTimestamp("normal"))
      .PutMember(
          "dateTime", smithy::schema::Schema::CreateTimestamp("dateTime"),
          {{smithy::schema::TimestampFormatTrait::KEY(), Aws::MakeShared<smithy::schema::TimestampFormatTrait>(
                                                             "SchemaSerdeTrait", smithy::schema::TimestampFormatTrait::Format::DATE_TIME)}})
      .PutMember(
          "dateTimeOnTarget", smithy::schema::Schema::CreateTimestamp("dateTimeOnTarget"),
          {{smithy::schema::TimestampFormatTrait::KEY(), Aws::MakeShared<smithy::schema::TimestampFormatTrait>(
                                                             "SchemaSerdeTrait", smithy::schema::TimestampFormatTrait::Format::DATE_TIME)}})
      .PutMember("epochSeconds", smithy::schema::Schema::CreateTimestamp("epochSeconds"),
                 {{smithy::schema::TimestampFormatTrait::KEY(),
                   Aws::MakeShared<smithy::schema::TimestampFormatTrait>("SchemaSerdeTrait",
                                                                         smithy::schema::TimestampFormatTrait::Format::EPOCH_SECONDS)}})
      .PutMember("epochSecondsOnTarget", smithy::schema::Schema::CreateTimestamp("epochSecondsOnTarget"),
                 {{smithy::schema::TimestampFormatTrait::KEY(),
                   Aws::MakeShared<smithy::schema::TimestampFormatTrait>("SchemaSerdeTrait",
                                                                         smithy::schema::TimestampFormatTrait::Format::EPOCH_SECONDS)}})
      .PutMember(
          "httpDate", smithy::schema::Schema::CreateTimestamp("httpDate"),
          {{smithy::schema::TimestampFormatTrait::KEY(), Aws::MakeShared<smithy::schema::TimestampFormatTrait>(
                                                             "SchemaSerdeTrait", smithy::schema::TimestampFormatTrait::Format::HTTP_DATE)}})
      .PutMember(
          "httpDateOnTarget", smithy::schema::Schema::CreateTimestamp("httpDateOnTarget"),
          {{smithy::schema::TimestampFormatTrait::KEY(), Aws::MakeShared<smithy::schema::TimestampFormatTrait>(
                                                             "SchemaSerdeTrait", smithy::schema::TimestampFormatTrait::Format::HTTP_DATE)}})
      .Build();
}

}  // namespace

Aws::UniquePtr<smithy::schema::SerializableStruct> XmlTimestampsResponse::GetSchemaSerdeOutput() {
  return Aws::MakeUnique<XmlTimestampsResponseDeserializable>("XmlTimestampsResponseDeserializable", *this);
}
