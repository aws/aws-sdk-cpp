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
#include <aws/rest-xml-protocol/model/TimestampFormatHeadersResult.h>
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

TimestampFormatHeadersResult::TimestampFormatHeadersResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) { *this = result; }

TimestampFormatHeadersResult& TimestampFormatHeadersResult::operator=(const Aws::AmazonWebServiceResult<XmlDocument>& result) {
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
class TimestampFormatHeadersResultDeserializable final : public smithy::schema::SerializableStruct {
 public:
  explicit TimestampFormatHeadersResultDeserializable(TimestampFormatHeadersResult& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  TimestampFormatHeadersResult& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void TimestampFormatHeadersResultDeserializable::From(const smithy::schema::Schema& memberSchema,
                                                      smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "memberEpochSeconds") {
    auto value0 = deserializer.ReadTimestamp(memberSchema);
    if (value0.has_value()) {
      m_obj.SetMemberEpochSeconds(*value0);
    }
    return;
  }
  if (memberName == "memberHttpDate") {
    auto value0 = deserializer.ReadTimestamp(memberSchema);
    if (value0.has_value()) {
      m_obj.SetMemberHttpDate(*value0);
    }
    return;
  }
  if (memberName == "memberDateTime") {
    auto value0 = deserializer.ReadTimestamp(memberSchema);
    if (value0.has_value()) {
      m_obj.SetMemberDateTime(*value0);
    }
    return;
  }
  if (memberName == "defaultFormat") {
    auto value0 = deserializer.ReadTimestamp(memberSchema);
    if (value0.has_value()) {
      m_obj.SetDefaultFormat(*value0);
    }
    return;
  }
  if (memberName == "targetEpochSeconds") {
    auto value0 = deserializer.ReadTimestamp(memberSchema);
    if (value0.has_value()) {
      m_obj.SetTargetEpochSeconds(*value0);
    }
    return;
  }
  if (memberName == "targetHttpDate") {
    auto value0 = deserializer.ReadTimestamp(memberSchema);
    if (value0.has_value()) {
      m_obj.SetTargetHttpDate(*value0);
    }
    return;
  }
  if (memberName == "targetDateTime") {
    auto value0 = deserializer.ReadTimestamp(memberSchema);
    if (value0.has_value()) {
      m_obj.SetTargetDateTime(*value0);
    }
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> TimestampFormatHeadersResultDeserializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("TimestampFormatHeadersResult")
      .PutMember("memberEpochSeconds", smithy::schema::Schema::CreateTimestamp("memberEpochSeconds"),
                 {{smithy::schema::TimestampFormatTrait::KEY(),
                   Aws::MakeShared<smithy::schema::TimestampFormatTrait>("SchemaSerdeTrait",
                                                                         smithy::schema::TimestampFormatTrait::Format::EPOCH_SECONDS)},
                  {smithy::schema::HttpHeaderTrait::KEY(),
                   Aws::MakeShared<smithy::schema::HttpHeaderTrait>("SchemaSerdeTrait", "X-memberEpochSeconds")}})
      .PutMember(
          "memberHttpDate", smithy::schema::Schema::CreateTimestamp("memberHttpDate"),
          {{smithy::schema::TimestampFormatTrait::KEY(), Aws::MakeShared<smithy::schema::TimestampFormatTrait>(
                                                             "SchemaSerdeTrait", smithy::schema::TimestampFormatTrait::Format::HTTP_DATE)},
           {smithy::schema::HttpHeaderTrait::KEY(),
            Aws::MakeShared<smithy::schema::HttpHeaderTrait>("SchemaSerdeTrait", "X-memberHttpDate")}})
      .PutMember(
          "memberDateTime", smithy::schema::Schema::CreateTimestamp("memberDateTime"),
          {{smithy::schema::TimestampFormatTrait::KEY(), Aws::MakeShared<smithy::schema::TimestampFormatTrait>(
                                                             "SchemaSerdeTrait", smithy::schema::TimestampFormatTrait::Format::DATE_TIME)},
           {smithy::schema::HttpHeaderTrait::KEY(),
            Aws::MakeShared<smithy::schema::HttpHeaderTrait>("SchemaSerdeTrait", "X-memberDateTime")}})
      .PutMember("defaultFormat", smithy::schema::Schema::CreateTimestamp("defaultFormat"),
                 {{smithy::schema::HttpHeaderTrait::KEY(),
                   Aws::MakeShared<smithy::schema::HttpHeaderTrait>("SchemaSerdeTrait", "X-defaultFormat")}})
      .PutMember("targetEpochSeconds", smithy::schema::Schema::CreateTimestamp("targetEpochSeconds"),
                 {{smithy::schema::TimestampFormatTrait::KEY(),
                   Aws::MakeShared<smithy::schema::TimestampFormatTrait>("SchemaSerdeTrait",
                                                                         smithy::schema::TimestampFormatTrait::Format::EPOCH_SECONDS)},
                  {smithy::schema::HttpHeaderTrait::KEY(),
                   Aws::MakeShared<smithy::schema::HttpHeaderTrait>("SchemaSerdeTrait", "X-targetEpochSeconds")}})
      .PutMember(
          "targetHttpDate", smithy::schema::Schema::CreateTimestamp("targetHttpDate"),
          {{smithy::schema::TimestampFormatTrait::KEY(), Aws::MakeShared<smithy::schema::TimestampFormatTrait>(
                                                             "SchemaSerdeTrait", smithy::schema::TimestampFormatTrait::Format::HTTP_DATE)},
           {smithy::schema::HttpHeaderTrait::KEY(),
            Aws::MakeShared<smithy::schema::HttpHeaderTrait>("SchemaSerdeTrait", "X-targetHttpDate")}})
      .PutMember(
          "targetDateTime", smithy::schema::Schema::CreateTimestamp("targetDateTime"),
          {{smithy::schema::TimestampFormatTrait::KEY(), Aws::MakeShared<smithy::schema::TimestampFormatTrait>(
                                                             "SchemaSerdeTrait", smithy::schema::TimestampFormatTrait::Format::DATE_TIME)},
           {smithy::schema::HttpHeaderTrait::KEY(),
            Aws::MakeShared<smithy::schema::HttpHeaderTrait>("SchemaSerdeTrait", "X-targetDateTime")}})
      .Build();
}

}  // namespace

Aws::UniquePtr<smithy::schema::SerializableStruct> TimestampFormatHeadersResult::GetSchemaSerdeOutput() {
  return Aws::MakeUnique<TimestampFormatHeadersResultDeserializable>("TimestampFormatHeadersResultDeserializable", *this);
}
