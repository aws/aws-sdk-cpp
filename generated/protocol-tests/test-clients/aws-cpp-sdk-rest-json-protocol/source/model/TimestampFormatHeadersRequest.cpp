/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/rest-json-protocol/model/TimestampFormatHeadersRequest.h>
#include <smithy/client/schema/ClientProtocol.h>
#include <smithy/client/schema/DocumentConversion.h>
#include <smithy/client/schema/HttpTraits.h>
#include <smithy/client/schema/JsonTraits.h>
#include <smithy/client/schema/MapSerializer.h>
#include <smithy/client/schema/Schema.h>
#include <smithy/client/schema/SchemaBuilder.h>
#include <smithy/client/schema/SerdeTraits.h>
#include <smithy/client/schema/SerializableStruct.h>
#include <smithy/client/schema/ShapeSerializer.h>

#include <numeric>
#include <utility>

using namespace Aws::RestJsonProtocol::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace {
class TimestampFormatHeadersRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit TimestampFormatHeadersRequestSerializable(const TimestampFormatHeadersRequest& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const TimestampFormatHeadersRequest& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void TimestampFormatHeadersRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.MemberEpochSecondsHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("memberEpochSeconds").value();
    serializer.WriteTimestamp(memberSchema, m_obj.GetMemberEpochSeconds());
  }
  if (m_obj.MemberHttpDateHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("memberHttpDate").value();
    serializer.WriteTimestamp(memberSchema, m_obj.GetMemberHttpDate());
  }
  if (m_obj.MemberDateTimeHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("memberDateTime").value();
    serializer.WriteTimestamp(memberSchema, m_obj.GetMemberDateTime());
  }
  if (m_obj.DefaultFormatHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("defaultFormat").value();
    serializer.WriteTimestamp(memberSchema, m_obj.GetDefaultFormat());
  }
  if (m_obj.TargetEpochSecondsHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("targetEpochSeconds").value();
    serializer.WriteTimestamp(memberSchema, m_obj.GetTargetEpochSeconds());
  }
  if (m_obj.TargetHttpDateHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("targetHttpDate").value();
    serializer.WriteTimestamp(memberSchema, m_obj.GetTargetHttpDate());
  }
  if (m_obj.TargetDateTimeHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("targetDateTime").value();
    serializer.WriteTimestamp(memberSchema, m_obj.GetTargetDateTime());
  }
}

std::shared_ptr<const smithy::schema::Schema> TimestampFormatHeadersRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("TimestampFormatHeadersRequest")
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

Aws::UniquePtr<smithy::schema::SerializableStruct> TimestampFormatHeadersRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<TimestampFormatHeadersRequestSerializable>("TimestampFormatHeadersRequestSerializable", *this);
}

Aws::String TimestampFormatHeadersRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext TimestampFormatHeadersRequest::GetSchemaSerdeContext() const {
  return {"TimestampFormatHeaders", "2019-12-16", "/TimestampFormatHeaders", ""};
}

Aws::Http::HeaderValueCollection TimestampFormatHeadersRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  return headers;
}
