/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/component-registry/ComponentRegistry.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/rest-json-protocol/model/PostUnionWithJsonNameRequest.h>
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

#include <atomic>
#include <mutex>
#include <numeric>
#include <utility>

using namespace Aws::RestJsonProtocol::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace RestJsonProtocol {
namespace Model {
namespace {
template <typename Adapter>
class PostUnionWithJsonNameRequestSchemaCache {
 public:
  static std::shared_ptr<const smithy::schema::Schema> Get() {
    if (std::shared_ptr<const smithy::schema::Schema>* cached = s_schema.load(std::memory_order_acquire)) {
      return *cached;
    }
    std::lock_guard<std::mutex> lock(s_mutex);
    if (std::shared_ptr<const smithy::schema::Schema>* cached = s_schema.load(std::memory_order_relaxed)) {
      return *cached;
    }
    std::shared_ptr<const smithy::schema::Schema>* built =
        Aws::New<std::shared_ptr<const smithy::schema::Schema>>("PostUnionWithJsonNameRequestSchemaCache", Adapter::BuildSchema());
    Aws::Utils::ComponentRegistry::RegisterComponent("PostUnionWithJsonNameRequestSchemaCache", built, &Release);
    s_schema.store(built, std::memory_order_release);
    return *built;
  }

 private:
  static void Release(void* schema, int64_t) {
    s_schema.store(nullptr, std::memory_order_release);
    Aws::Delete(static_cast<std::shared_ptr<const smithy::schema::Schema>*>(schema));
  }

  static std::atomic<std::shared_ptr<const smithy::schema::Schema>*> s_schema;
  static std::mutex s_mutex;
};
template <typename Adapter>
std::atomic<std::shared_ptr<const smithy::schema::Schema>*> PostUnionWithJsonNameRequestSchemaCache<Adapter>::s_schema{nullptr};
template <typename Adapter>
std::mutex PostUnionWithJsonNameRequestSchemaCache<Adapter>::s_mutex;

class PostUnionWithJsonNameRequest_UnionWithJsonNameSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit PostUnionWithJsonNameRequest_UnionWithJsonNameSchemaSerdeSer(const UnionWithJsonName& obj)
      : m_obj(obj),
        m_schema(PostUnionWithJsonNameRequestSchemaCache<PostUnionWithJsonNameRequest_UnionWithJsonNameSchemaSerdeSer>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const UnionWithJsonName& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class PostUnionWithJsonNameRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit PostUnionWithJsonNameRequestSerializable(const PostUnionWithJsonNameRequest& obj)
      : m_obj(obj), m_schema(PostUnionWithJsonNameRequestSchemaCache<PostUnionWithJsonNameRequestSerializable>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const PostUnionWithJsonNameRequest& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void PostUnionWithJsonNameRequest_UnionWithJsonNameSchemaSerdeSer::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.FooHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("foo").value();
    serializer.WriteString(memberSchema, m_obj.GetFoo());
  }
  if (m_obj.BarHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("bar").value();
    serializer.WriteString(memberSchema, m_obj.GetBar());
  }
  if (m_obj.BazHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("baz").value();
    serializer.WriteString(memberSchema, m_obj.GetBaz());
  }
}

std::shared_ptr<const smithy::schema::Schema> PostUnionWithJsonNameRequest_UnionWithJsonNameSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::UnionBuilder("UnionWithJsonName")
      .PutMember("foo", smithy::schema::Schema::CreateString("foo"),
                 {{smithy::schema::JsonNameTrait::KEY(), Aws::MakeShared<smithy::schema::JsonNameTrait>("SchemaSerdeTrait", "FOO")}})
      .PutMember("bar", smithy::schema::Schema::CreateString("bar"))
      .PutMember("baz", smithy::schema::Schema::CreateString("baz"),
                 {{smithy::schema::JsonNameTrait::KEY(), Aws::MakeShared<smithy::schema::JsonNameTrait>("SchemaSerdeTrait", "_baz")}})
      .Build();
}

void PostUnionWithJsonNameRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.ValueHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("value").value();
    PostUnionWithJsonNameRequest_UnionWithJsonNameSchemaSerdeSer nested0(m_obj.GetValue());
    serializer.WriteStruct(memberSchema, nested0);
  }
}

std::shared_ptr<const smithy::schema::Schema> PostUnionWithJsonNameRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("PostUnionWithJsonNameRequest")
      .PutMember("value", PostUnionWithJsonNameRequestSchemaCache<PostUnionWithJsonNameRequest_UnionWithJsonNameSchemaSerdeSer>::Get())
      .Build();
}

}  // namespace
}  // namespace Model
}  // namespace RestJsonProtocol
}  // namespace Aws

Aws::UniquePtr<smithy::schema::SerializableStruct> PostUnionWithJsonNameRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<PostUnionWithJsonNameRequestSerializable>("PostUnionWithJsonNameRequestSerializable", *this);
}

Aws::String PostUnionWithJsonNameRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext PostUnionWithJsonNameRequest::GetSchemaSerdeContext() const {
  return {"PostUnionWithJsonName", "2019-12-16", "/PostUnionWithJsonName", ""};
}
