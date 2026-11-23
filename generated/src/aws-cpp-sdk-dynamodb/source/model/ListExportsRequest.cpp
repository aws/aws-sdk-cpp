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
#include <aws/dynamodb/model/ListExportsRequest.h>
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
class ListExportsRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit ListExportsRequestSerializable(const ListExportsRequest& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const ListExportsRequest& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void ListExportsRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.TableArnHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("TableArn").value();
    serializer.WriteString(memberSchema, m_obj.GetTableArn());
  }
  if (m_obj.MaxResultsHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("MaxResults").value();
    serializer.WriteInteger(memberSchema, m_obj.GetMaxResults());
  }
  if (m_obj.NextTokenHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("NextToken").value();
    serializer.WriteString(memberSchema, m_obj.GetNextToken());
  }
}

std::shared_ptr<const smithy::schema::Schema> ListExportsRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("ListExportsRequest")
      .PutMember("TableArn", smithy::schema::Schema::CreateString("TableArn"))
      .PutMember("MaxResults", smithy::schema::Schema::CreateInteger("MaxResults"))
      .PutMember("NextToken", smithy::schema::Schema::CreateString("NextToken"))
      .Build();
}

}  // namespace
}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws

Aws::UniquePtr<smithy::schema::SerializableStruct> ListExportsRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<ListExportsRequestSerializable>("ListExportsRequestSerializable", *this);
}

Aws::String ListExportsRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext ListExportsRequest::GetSchemaSerdeContext() const { return {"ListExports", "2012-08-10"}; }

Aws::Http::HeaderValueCollection ListExportsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DynamoDB_20120810.ListExports"));
  return headers;
}

ListExportsRequest::EndpointParameters ListExportsRequest::GetEndpointContextParams() const {
  EndpointParameters parameters;
  // Operation context parameters
  if (TableArnHasBeenSet()) {
    parameters.emplace_back(Aws::String("ResourceArn"), this->GetTableArn(),
                            Aws::Endpoint::EndpointParameter::ParameterOrigin::OPERATION_CONTEXT);
  }
  return parameters;
}
