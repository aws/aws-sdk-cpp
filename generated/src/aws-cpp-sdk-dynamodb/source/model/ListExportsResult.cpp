/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/dynamodb/model/ListExportsResult.h>
#include <smithy/client/schema/DocumentConversion.h>
#include <smithy/client/schema/HttpTraits.h>
#include <smithy/client/schema/JsonTraits.h>
#include <smithy/client/schema/Schema.h>
#include <smithy/client/schema/SchemaBuilder.h>
#include <smithy/client/schema/SerdeTraits.h>
#include <smithy/client/schema/SerializableStruct.h>
#include <smithy/client/schema/ShapeDeserializer.h>

#include <utility>

using namespace Aws::DynamoDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListExportsResult::ListExportsResult(const Aws::AmazonWebServiceResult<Aws::String>& result) { *this = result; }

ListExportsResult& ListExportsResult::operator=(const Aws::AmazonWebServiceResult<Aws::String>& result) {
  m_HttpResponseCode = result.GetResponseCode();

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}

namespace Aws {
namespace DynamoDB {
namespace Model {
namespace {
class ListExportsResult_ExportSummarySchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit ListExportsResult_ExportSummarySchemaSerdeDeser(ExportSummary& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  ExportSummary& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class ListExportsResultDeserializable final : public smithy::schema::SerializableStruct {
 public:
  explicit ListExportsResultDeserializable(ListExportsResult& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  ListExportsResult& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void ListExportsResult_ExportSummarySchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
                                                           smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "ExportArn") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetExportArn(*value0);
    }
    return;
  }
  if (memberName == "ExportStatus") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetExportStatus(ExportStatusMapper::GetExportStatusForName(*value0));
    }
    return;
  }
  if (memberName == "ExportType") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetExportType(ExportTypeMapper::GetExportTypeForName(*value0));
    }
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> ListExportsResult_ExportSummarySchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("ExportSummary")
      .PutMember("ExportArn", smithy::schema::Schema::CreateString("ExportArn"))
      .PutMember("ExportStatus", smithy::schema::Schema::CreateEnum("ExportStatus"))
      .PutMember("ExportType", smithy::schema::Schema::CreateEnum("ExportType"))
      .Build();
}

void ListExportsResultDeserializable::From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "ExportSummaries") {
    Aws::Vector<ExportSummary> list0;
    deserializer.ReadList(memberSchema, [&](smithy::schema::ShapeDeserializer& itemDeserializer0) {
      ExportSummary nested1;
      ListExportsResult_ExportSummarySchemaSerdeDeser{nested1}.Deserialize(itemDeserializer0);
      list0.push_back(std::move(nested1));
    });
    m_obj.SetExportSummaries(std::move(list0));
    return;
  }
  if (memberName == "NextToken") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetNextToken(*value0);
    }
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> ListExportsResultDeserializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("ListExportsResult")
      .PutMember("ExportSummaries", smithy::schema::Schema::ListBuilder("ExportSummaries")
                                        .PutMember("member", ListExportsResult_ExportSummarySchemaSerdeDeser::BuildSchema())
                                        .Build())
      .PutMember("NextToken", smithy::schema::Schema::CreateString("NextToken"))
      .Build();
}

}  // namespace
}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws

Aws::UniquePtr<smithy::schema::SerializableStruct> ListExportsResult::GetSchemaSerdeOutput() {
  return Aws::MakeUnique<ListExportsResultDeserializable>("ListExportsResultDeserializable", *this);
}
