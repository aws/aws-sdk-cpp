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
#include <aws/dynamodb/model/DescribeExportRequest.h>
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

using namespace Aws::DynamoDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DynamoDB {
namespace Model {
namespace {
class DescribeExportRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit DescribeExportRequestSerializable(const DescribeExportRequest& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const DescribeExportRequest& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void DescribeExportRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.ExportArnHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ExportArn").value();
    serializer.WriteString(memberSchema, m_obj.GetExportArn());
  }
}

std::shared_ptr<const smithy::schema::Schema> DescribeExportRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("DescribeExportRequest")
      .PutMember("ExportArn", smithy::schema::Schema::CreateString("ExportArn"))
      .Build();
}

}  // namespace
}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws

Aws::UniquePtr<smithy::schema::SerializableStruct> DescribeExportRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<DescribeExportRequestSerializable>("DescribeExportRequestSerializable", *this);
}

Aws::String DescribeExportRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext DescribeExportRequest::GetSchemaSerdeContext() const { return {"DescribeExport", "2012-08-10"}; }

Aws::Http::HeaderValueCollection DescribeExportRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DynamoDB_20120810.DescribeExport"));
  return headers;
}

DescribeExportRequest::EndpointParameters DescribeExportRequest::GetEndpointContextParams() const {
  EndpointParameters parameters;
  // Operation context parameters
  if (ExportArnHasBeenSet()) {
    parameters.emplace_back(Aws::String("ResourceArn"), this->GetExportArn(),
                            Aws::Endpoint::EndpointParameter::ParameterOrigin::OPERATION_CONTEXT);
  }
  return parameters;
}
