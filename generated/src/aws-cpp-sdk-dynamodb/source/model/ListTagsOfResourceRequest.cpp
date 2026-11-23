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
#include <aws/dynamodb/model/ListTagsOfResourceRequest.h>
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
class ListTagsOfResourceRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit ListTagsOfResourceRequestSerializable(const ListTagsOfResourceRequest& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const ListTagsOfResourceRequest& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void ListTagsOfResourceRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.ResourceArnHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ResourceArn").value();
    serializer.WriteString(memberSchema, m_obj.GetResourceArn());
  }
  if (m_obj.NextTokenHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("NextToken").value();
    serializer.WriteString(memberSchema, m_obj.GetNextToken());
  }
}

std::shared_ptr<const smithy::schema::Schema> ListTagsOfResourceRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("ListTagsOfResourceRequest")
      .PutMember("ResourceArn", smithy::schema::Schema::CreateString("ResourceArn"))
      .PutMember("NextToken", smithy::schema::Schema::CreateString("NextToken"))
      .Build();
}

}  // namespace
}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws

Aws::UniquePtr<smithy::schema::SerializableStruct> ListTagsOfResourceRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<ListTagsOfResourceRequestSerializable>("ListTagsOfResourceRequestSerializable", *this);
}

Aws::String ListTagsOfResourceRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext ListTagsOfResourceRequest::GetSchemaSerdeContext() const {
  return {"ListTagsOfResource", "2012-08-10"};
}

Aws::Http::HeaderValueCollection ListTagsOfResourceRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DynamoDB_20120810.ListTagsOfResource"));
  return headers;
}

ListTagsOfResourceRequest::EndpointParameters ListTagsOfResourceRequest::GetEndpointContextParams() const {
  EndpointParameters parameters;
  // Operation context parameters
  if (ResourceArnHasBeenSet()) {
    parameters.emplace_back(Aws::String("ResourceArn"), this->GetResourceArn(),
                            Aws::Endpoint::EndpointParameter::ParameterOrigin::OPERATION_CONTEXT);
  }
  return parameters;
}
