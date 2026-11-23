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
#include <aws/dynamodb/model/DescribeLimitsResult.h>
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

DescribeLimitsResult::DescribeLimitsResult(const Aws::AmazonWebServiceResult<Aws::String>& result) { *this = result; }

DescribeLimitsResult& DescribeLimitsResult::operator=(const Aws::AmazonWebServiceResult<Aws::String>& result) {
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
class DescribeLimitsResultDeserializable final : public smithy::schema::SerializableStruct {
 public:
  explicit DescribeLimitsResultDeserializable(DescribeLimitsResult& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  DescribeLimitsResult& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void DescribeLimitsResultDeserializable::From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "AccountMaxReadCapacityUnits") {
    auto value0 = deserializer.ReadLong(memberSchema);
    if (value0.has_value()) {
      m_obj.SetAccountMaxReadCapacityUnits(*value0);
    }
    return;
  }
  if (memberName == "AccountMaxWriteCapacityUnits") {
    auto value0 = deserializer.ReadLong(memberSchema);
    if (value0.has_value()) {
      m_obj.SetAccountMaxWriteCapacityUnits(*value0);
    }
    return;
  }
  if (memberName == "TableMaxReadCapacityUnits") {
    auto value0 = deserializer.ReadLong(memberSchema);
    if (value0.has_value()) {
      m_obj.SetTableMaxReadCapacityUnits(*value0);
    }
    return;
  }
  if (memberName == "TableMaxWriteCapacityUnits") {
    auto value0 = deserializer.ReadLong(memberSchema);
    if (value0.has_value()) {
      m_obj.SetTableMaxWriteCapacityUnits(*value0);
    }
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> DescribeLimitsResultDeserializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("DescribeLimitsResult")
      .PutMember("AccountMaxReadCapacityUnits", smithy::schema::Schema::CreateLong("AccountMaxReadCapacityUnits"))
      .PutMember("AccountMaxWriteCapacityUnits", smithy::schema::Schema::CreateLong("AccountMaxWriteCapacityUnits"))
      .PutMember("TableMaxReadCapacityUnits", smithy::schema::Schema::CreateLong("TableMaxReadCapacityUnits"))
      .PutMember("TableMaxWriteCapacityUnits", smithy::schema::Schema::CreateLong("TableMaxWriteCapacityUnits"))
      .Build();
}

}  // namespace
}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws

Aws::UniquePtr<smithy::schema::SerializableStruct> DescribeLimitsResult::GetSchemaSerdeOutput() {
  return Aws::MakeUnique<DescribeLimitsResultDeserializable>("DescribeLimitsResultDeserializable", *this);
}
