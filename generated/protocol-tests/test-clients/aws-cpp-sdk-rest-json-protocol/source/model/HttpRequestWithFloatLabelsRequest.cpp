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
#include <aws/rest-json-protocol/model/HttpRequestWithFloatLabelsRequest.h>
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
class HttpRequestWithFloatLabelsRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit HttpRequestWithFloatLabelsRequestSerializable(const HttpRequestWithFloatLabelsRequest& obj)
      : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const HttpRequestWithFloatLabelsRequest& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void HttpRequestWithFloatLabelsRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.FloatHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("float").value();
    serializer.WriteDouble(memberSchema, m_obj.GetFloat());
  }
  if (m_obj.DoubleHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("double").value();
    serializer.WriteDouble(memberSchema, m_obj.GetDouble());
  }
}

std::shared_ptr<const smithy::schema::Schema> HttpRequestWithFloatLabelsRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("HttpRequestWithFloatLabelsRequest")
      .PutMember("float", smithy::schema::Schema::CreateDouble("float"),
                 {{smithy::schema::HttpLabelTrait::KEY(), Aws::MakeShared<smithy::schema::HttpLabelTrait>("SchemaSerdeTrait")}})
      .PutMember("double", smithy::schema::Schema::CreateDouble("double"),
                 {{smithy::schema::HttpLabelTrait::KEY(), Aws::MakeShared<smithy::schema::HttpLabelTrait>("SchemaSerdeTrait")}})
      .Build();
}

}  // namespace

Aws::UniquePtr<smithy::schema::SerializableStruct> HttpRequestWithFloatLabelsRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<HttpRequestWithFloatLabelsRequestSerializable>("HttpRequestWithFloatLabelsRequestSerializable", *this);
}

Aws::String HttpRequestWithFloatLabelsRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext HttpRequestWithFloatLabelsRequest::GetSchemaSerdeContext() const {
  return {"HttpRequestWithFloatLabels", "2019-12-16", "/FloatHttpLabels/{float}/{double}", ""};
}
