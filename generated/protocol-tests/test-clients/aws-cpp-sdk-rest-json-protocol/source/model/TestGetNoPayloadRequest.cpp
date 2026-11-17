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
#include <aws/rest-json-protocol/model/TestGetNoPayloadRequest.h>
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
class TestGetNoPayloadRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit TestGetNoPayloadRequestSerializable(const TestGetNoPayloadRequest& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const TestGetNoPayloadRequest& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void TestGetNoPayloadRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.TestIdHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("testId").value();
    serializer.WriteString(memberSchema, m_obj.GetTestId());
  }
}

std::shared_ptr<const smithy::schema::Schema> TestGetNoPayloadRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("TestGetNoPayloadRequest")
      .PutMember(
          "testId", smithy::schema::Schema::CreateString("testId"),
          {{smithy::schema::HttpHeaderTrait::KEY(), Aws::MakeShared<smithy::schema::HttpHeaderTrait>("SchemaSerdeTrait", "X-Amz-Test-Id")}})
      .Build();
}

}  // namespace

Aws::UniquePtr<smithy::schema::SerializableStruct> TestGetNoPayloadRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<TestGetNoPayloadRequestSerializable>("TestGetNoPayloadRequestSerializable", *this);
}

Aws::String TestGetNoPayloadRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext TestGetNoPayloadRequest::GetSchemaSerdeContext() const {
  return {"TestGetNoPayload", "2019-12-16", "/no_payload", ""};
}

Aws::Http::HeaderValueCollection TestGetNoPayloadRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  return headers;
}
