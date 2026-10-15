/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/rest-json-protocol/model/PostUnionWithJsonNameResult.h>
#include <smithy/client/schema/DocumentConversion.h>
#include <smithy/client/schema/HttpTraits.h>
#include <smithy/client/schema/JsonTraits.h>
#include <smithy/client/schema/Schema.h>
#include <smithy/client/schema/SchemaBuilder.h>
#include <smithy/client/schema/SerdeTraits.h>
#include <smithy/client/schema/SerializableStruct.h>
#include <smithy/client/schema/ShapeDeserializer.h>

#include <utility>

using namespace Aws::RestJsonProtocol::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

PostUnionWithJsonNameResult::PostUnionWithJsonNameResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

PostUnionWithJsonNameResult& PostUnionWithJsonNameResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  AWS_UNREFERENCED_PARAM(result);

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}

namespace {
class PostUnionWithJsonNameResult_UnionWithJsonNameSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit PostUnionWithJsonNameResult_UnionWithJsonNameSchemaSerdeDeser(UnionWithJsonName& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  UnionWithJsonName& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class PostUnionWithJsonNameResultDeserializable final : public smithy::schema::SerializableStruct {
 public:
  explicit PostUnionWithJsonNameResultDeserializable(PostUnionWithJsonNameResult& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  PostUnionWithJsonNameResult& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void PostUnionWithJsonNameResult_UnionWithJsonNameSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
                                                                         smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "foo") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetFoo(*value0);
    }
    return;
  }
  if (memberName == "bar") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetBar(*value0);
    }
    return;
  }
  if (memberName == "baz") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetBaz(*value0);
    }
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> PostUnionWithJsonNameResult_UnionWithJsonNameSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::UnionBuilder("UnionWithJsonName")
      .PutMember("foo", smithy::schema::Schema::CreateString("foo"),
                 {{smithy::schema::JsonNameTrait::KEY(), Aws::MakeShared<smithy::schema::JsonNameTrait>("SchemaSerdeTrait", "FOO")}})
      .PutMember("bar", smithy::schema::Schema::CreateString("bar"))
      .PutMember("baz", smithy::schema::Schema::CreateString("baz"),
                 {{smithy::schema::JsonNameTrait::KEY(), Aws::MakeShared<smithy::schema::JsonNameTrait>("SchemaSerdeTrait", "_baz")}})
      .Build();
}

void PostUnionWithJsonNameResultDeserializable::From(const smithy::schema::Schema& memberSchema,
                                                     smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "value") {
    UnionWithJsonName nested0;
    PostUnionWithJsonNameResult_UnionWithJsonNameSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetValue(std::move(nested0));
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> PostUnionWithJsonNameResultDeserializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("PostUnionWithJsonNameResult")
      .PutMember("value", PostUnionWithJsonNameResult_UnionWithJsonNameSchemaSerdeDeser::BuildSchema())
      .Build();
}

}  // namespace

Aws::UniquePtr<smithy::schema::SerializableStruct> PostUnionWithJsonNameResult::GetSchemaSerdeOutput() {
  return Aws::MakeUnique<PostUnionWithJsonNameResultDeserializable>("PostUnionWithJsonNameResultDeserializable", *this);
}
