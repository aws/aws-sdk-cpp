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
#include <aws/rest-json-protocol/model/TestBodyStructureRequest.h>
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
class TestBodyStructureRequest_TestConfigSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit TestBodyStructureRequest_TestConfigSchemaSerdeSer(const TestConfig& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const TestConfig& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class TestBodyStructureRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit TestBodyStructureRequestSerializable(const TestBodyStructureRequest& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const TestBodyStructureRequest& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void TestBodyStructureRequest_TestConfigSchemaSerdeSer::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.TimeoutHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("timeout").value();
    serializer.WriteInteger(memberSchema, m_obj.GetTimeout());
  }
}

std::shared_ptr<const smithy::schema::Schema> TestBodyStructureRequest_TestConfigSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("TestConfig")
      .PutMember("timeout", smithy::schema::Schema::CreateInteger("timeout"))
      .Build();
}

void TestBodyStructureRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.TestIdHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("testId").value();
    serializer.WriteString(memberSchema, m_obj.GetTestId());
  }
  if (m_obj.TestConfigHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("testConfig").value();
    TestBodyStructureRequest_TestConfigSchemaSerdeSer nested0(m_obj.GetTestConfig());
    serializer.WriteStruct(memberSchema, nested0);
  }
}

std::shared_ptr<const smithy::schema::Schema> TestBodyStructureRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("TestBodyStructureRequest")
      .PutMember(
          "testId", smithy::schema::Schema::CreateString("testId"),
          {{smithy::schema::HttpHeaderTrait::KEY(), Aws::MakeShared<smithy::schema::HttpHeaderTrait>("SchemaSerdeTrait", "x-amz-test-id")}})
      .PutMember("testConfig", TestBodyStructureRequest_TestConfigSchemaSerdeSer::BuildSchema())
      .Build();
}

}  // namespace

Aws::UniquePtr<smithy::schema::SerializableStruct> TestBodyStructureRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<TestBodyStructureRequestSerializable>("TestBodyStructureRequestSerializable", *this);
}

Aws::String TestBodyStructureRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext TestBodyStructureRequest::GetSchemaSerdeContext() const {
  return {"TestBodyStructure", "2019-12-16", "/body", ""};
}

Aws::Http::HeaderValueCollection TestBodyStructureRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  return headers;
}
