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
#include <aws/rest-json-protocol/model/ConstantQueryStringRequest.h>
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
class ConstantQueryStringRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit ConstantQueryStringRequestSerializable(const ConstantQueryStringRequest& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const ConstantQueryStringRequest& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void ConstantQueryStringRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.HelloHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("hello").value();
    serializer.WriteString(memberSchema, m_obj.GetHello());
  }
}

std::shared_ptr<const smithy::schema::Schema> ConstantQueryStringRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("ConstantQueryStringRequest")
      .PutMember("hello", smithy::schema::Schema::CreateString("hello"),
                 {{smithy::schema::HttpLabelTrait::KEY(), Aws::MakeShared<smithy::schema::HttpLabelTrait>("SchemaSerdeTrait")}})
      .Build();
}

}  // namespace

Aws::UniquePtr<smithy::schema::SerializableStruct> ConstantQueryStringRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<ConstantQueryStringRequestSerializable>("ConstantQueryStringRequestSerializable", *this);
}

Aws::String ConstantQueryStringRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext ConstantQueryStringRequest::GetSchemaSerdeContext() const {
  return {"ConstantQueryString", "2019-12-16", "/ConstantQueryString/{hello}?foo=bar&hello", ""};
}
