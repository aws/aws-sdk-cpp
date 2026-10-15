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
#include <aws/rest-json-protocol/model/ConstantAndVariableQueryStringRequest.h>
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
class ConstantAndVariableQueryStringRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit ConstantAndVariableQueryStringRequestSerializable(const ConstantAndVariableQueryStringRequest& obj)
      : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const ConstantAndVariableQueryStringRequest& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void ConstantAndVariableQueryStringRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.BazHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("baz").value();
    serializer.WriteString(memberSchema, m_obj.GetBaz());
  }
  if (m_obj.MaybeSetHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("maybeSet").value();
    serializer.WriteString(memberSchema, m_obj.GetMaybeSet());
  }
}

std::shared_ptr<const smithy::schema::Schema> ConstantAndVariableQueryStringRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("ConstantAndVariableQueryStringRequest")
      .PutMember("baz", smithy::schema::Schema::CreateString("baz"),
                 {{smithy::schema::HttpQueryTrait::KEY(), Aws::MakeShared<smithy::schema::HttpQueryTrait>("SchemaSerdeTrait", "baz")}})
      .PutMember("maybeSet", smithy::schema::Schema::CreateString("maybeSet"),
                 {{smithy::schema::HttpQueryTrait::KEY(), Aws::MakeShared<smithy::schema::HttpQueryTrait>("SchemaSerdeTrait", "maybeSet")}})
      .Build();
}

}  // namespace

Aws::UniquePtr<smithy::schema::SerializableStruct> ConstantAndVariableQueryStringRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<ConstantAndVariableQueryStringRequestSerializable>("ConstantAndVariableQueryStringRequestSerializable", *this);
}

Aws::String ConstantAndVariableQueryStringRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext ConstantAndVariableQueryStringRequest::GetSchemaSerdeContext() const {
  return {"ConstantAndVariableQueryString", "2019-12-16", "/ConstantAndVariableQueryString?foo=bar", ""};
}

void ConstantAndVariableQueryStringRequest::AddQueryStringParameters(Aws::Http::URI&) const {}
