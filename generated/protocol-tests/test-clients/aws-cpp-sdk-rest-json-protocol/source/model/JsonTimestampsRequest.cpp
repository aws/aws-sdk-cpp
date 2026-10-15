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
#include <aws/rest-json-protocol/model/JsonTimestampsRequest.h>
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
class JsonTimestampsRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit JsonTimestampsRequestSerializable(const JsonTimestampsRequest& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const JsonTimestampsRequest& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void JsonTimestampsRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.NormalHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("normal").value();
    serializer.WriteTimestamp(memberSchema, m_obj.GetNormal());
  }
  if (m_obj.DateTimeHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("dateTime").value();
    serializer.WriteTimestamp(memberSchema, m_obj.GetDateTime());
  }
  if (m_obj.DateTimeOnTargetHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("dateTimeOnTarget").value();
    serializer.WriteTimestamp(memberSchema, m_obj.GetDateTimeOnTarget());
  }
  if (m_obj.EpochSecondsHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("epochSeconds").value();
    serializer.WriteTimestamp(memberSchema, m_obj.GetEpochSeconds());
  }
  if (m_obj.EpochSecondsOnTargetHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("epochSecondsOnTarget").value();
    serializer.WriteTimestamp(memberSchema, m_obj.GetEpochSecondsOnTarget());
  }
  if (m_obj.HttpDateHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("httpDate").value();
    serializer.WriteTimestamp(memberSchema, m_obj.GetHttpDate());
  }
  if (m_obj.HttpDateOnTargetHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("httpDateOnTarget").value();
    serializer.WriteTimestamp(memberSchema, m_obj.GetHttpDateOnTarget());
  }
}

std::shared_ptr<const smithy::schema::Schema> JsonTimestampsRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("JsonTimestampsRequest")
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

Aws::UniquePtr<smithy::schema::SerializableStruct> JsonTimestampsRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<JsonTimestampsRequestSerializable>("JsonTimestampsRequestSerializable", *this);
}

Aws::String JsonTimestampsRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext JsonTimestampsRequest::GetSchemaSerdeContext() const {
  return {"JsonTimestamps", "2019-12-16", "/JsonTimestamps", ""};
}
