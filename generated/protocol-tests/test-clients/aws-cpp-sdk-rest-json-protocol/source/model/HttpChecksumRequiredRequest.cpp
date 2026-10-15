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
#include <aws/rest-json-protocol/model/HttpChecksumRequiredRequest.h>
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
class HttpChecksumRequiredRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit HttpChecksumRequiredRequestSerializable(const HttpChecksumRequiredRequest& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const HttpChecksumRequiredRequest& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void HttpChecksumRequiredRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.FooHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("foo").value();
    serializer.WriteString(memberSchema, m_obj.GetFoo());
  }
}

std::shared_ptr<const smithy::schema::Schema> HttpChecksumRequiredRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("HttpChecksumRequiredRequest")
      .PutMember("foo", smithy::schema::Schema::CreateString("foo"))
      .Build();
}

}  // namespace

Aws::UniquePtr<smithy::schema::SerializableStruct> HttpChecksumRequiredRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<HttpChecksumRequiredRequestSerializable>("HttpChecksumRequiredRequestSerializable", *this);
}

Aws::String HttpChecksumRequiredRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext HttpChecksumRequiredRequest::GetSchemaSerdeContext() const {
  return {"HttpChecksumRequired", "2019-12-16", "/HttpChecksumRequired", ""};
}
