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
#include <aws/dynamodb/model/TagResourceRequest.h>
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
class TagResourceRequest_TagSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit TagResourceRequest_TagSchemaSerdeSer(const Tag& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const Tag& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class TagResourceRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit TagResourceRequestSerializable(const TagResourceRequest& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const TagResourceRequest& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void TagResourceRequest_TagSchemaSerdeSer::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.KeyHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("Key").value();
    serializer.WriteString(memberSchema, m_obj.GetKey());
  }
  if (m_obj.ValueHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("Value").value();
    serializer.WriteString(memberSchema, m_obj.GetValue());
  }
}

std::shared_ptr<const smithy::schema::Schema> TagResourceRequest_TagSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("Tag")
      .PutMember("Key", smithy::schema::Schema::CreateString("Key"))
      .PutMember("Value", smithy::schema::Schema::CreateString("Value"))
      .Build();
}

void TagResourceRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.ResourceArnHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ResourceArn").value();
    serializer.WriteString(memberSchema, m_obj.GetResourceArn());
  }
  if (m_obj.TagsHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("Tags").value();
    serializer.WriteList(memberSchema, m_obj.GetTags().size(), [&](smithy::schema::ShapeSerializer& listSerializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      for (const auto& item0 : m_obj.GetTags()) {
        TagResourceRequest_TagSchemaSerdeSer nested1(item0);
        listSerializer0.WriteStruct(itemSchema0, nested1);
      }
    });
  }
}

std::shared_ptr<const smithy::schema::Schema> TagResourceRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("TagResourceRequest")
      .PutMember("ResourceArn", smithy::schema::Schema::CreateString("ResourceArn"))
      .PutMember(
          "Tags",
          smithy::schema::Schema::ListBuilder("TagList").PutMember("member", TagResourceRequest_TagSchemaSerdeSer::BuildSchema()).Build())
      .Build();
}

}  // namespace
}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws

Aws::UniquePtr<smithy::schema::SerializableStruct> TagResourceRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<TagResourceRequestSerializable>("TagResourceRequestSerializable", *this);
}

Aws::String TagResourceRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext TagResourceRequest::GetSchemaSerdeContext() const { return {"TagResource", "2012-08-10"}; }

Aws::Http::HeaderValueCollection TagResourceRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DynamoDB_20120810.TagResource"));
  return headers;
}

TagResourceRequest::EndpointParameters TagResourceRequest::GetEndpointContextParams() const {
  EndpointParameters parameters;
  // Operation context parameters
  if (ResourceArnHasBeenSet()) {
    parameters.emplace_back(Aws::String("ResourceArn"), this->GetResourceArn(),
                            Aws::Endpoint::EndpointParameter::ParameterOrigin::OPERATION_CONTEXT);
  }
  return parameters;
}
