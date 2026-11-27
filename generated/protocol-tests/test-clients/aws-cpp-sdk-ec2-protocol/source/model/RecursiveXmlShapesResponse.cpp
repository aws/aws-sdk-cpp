/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/component-registry/ComponentRegistry.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2-protocol/model/RecursiveXmlShapesResponse.h>
#include <smithy/client/schema/DocumentConversion.h>
#include <smithy/client/schema/HttpTraits.h>
#include <smithy/client/schema/Schema.h>
#include <smithy/client/schema/SchemaBuilder.h>
#include <smithy/client/schema/SerdeTraits.h>
#include <smithy/client/schema/SerializableStruct.h>
#include <smithy/client/schema/ShapeDeserializer.h>
#include <smithy/client/schema/XmlTraits.h>

#include <atomic>
#include <mutex>
#include <utility>

using namespace Aws::EC2Protocol::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

RecursiveXmlShapesResponse::RecursiveXmlShapesResponse(const Aws::AmazonWebServiceResult<Aws::String>& result) { *this = result; }

RecursiveXmlShapesResponse& RecursiveXmlShapesResponse::operator=(const Aws::AmazonWebServiceResult<Aws::String>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  const auto& headers = result.GetHeaderValueCollection();
  const auto requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_responseMetadata.SetRequestId(requestIdIter->second);
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::EC2Protocol::Model::RecursiveXmlShapesResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId());
  }
  return *this;
}

namespace Aws {
namespace EC2Protocol {
namespace Model {
namespace {
template <typename Adapter>
class RecursiveXmlShapesResponseSchemaCache {
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
        Aws::New<std::shared_ptr<const smithy::schema::Schema>>("RecursiveXmlShapesResponseSchemaCache", Adapter::BuildSchema());
    Aws::Utils::ComponentRegistry::RegisterComponent("RecursiveXmlShapesResponseSchemaCache", built, &Release);
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
std::atomic<std::shared_ptr<const smithy::schema::Schema>*> RecursiveXmlShapesResponseSchemaCache<Adapter>::s_schema{nullptr};
template <typename Adapter>
std::mutex RecursiveXmlShapesResponseSchemaCache<Adapter>::s_mutex;

class RecursiveXmlShapesResponse_RecursiveXmlShapesOutputNested1SchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit RecursiveXmlShapesResponse_RecursiveXmlShapesOutputNested1SchemaSerdeDeser(RecursiveXmlShapesOutputNested1& obj)
      : m_obj(obj),
        m_schema(RecursiveXmlShapesResponseSchemaCache<RecursiveXmlShapesResponse_RecursiveXmlShapesOutputNested1SchemaSerdeDeser>::Get()) {
  }
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  RecursiveXmlShapesOutputNested1& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class RecursiveXmlShapesResponse_RecursiveXmlShapesOutputNested2SchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit RecursiveXmlShapesResponse_RecursiveXmlShapesOutputNested2SchemaSerdeDeser(RecursiveXmlShapesOutputNested2& obj)
      : m_obj(obj),
        m_schema(RecursiveXmlShapesResponseSchemaCache<RecursiveXmlShapesResponse_RecursiveXmlShapesOutputNested2SchemaSerdeDeser>::Get()) {
  }
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  RecursiveXmlShapesOutputNested2& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class RecursiveXmlShapesResponseDeserializable final : public smithy::schema::SerializableStruct {
 public:
  explicit RecursiveXmlShapesResponseDeserializable(RecursiveXmlShapesResponse& obj)
      : m_obj(obj), m_schema(RecursiveXmlShapesResponseSchemaCache<RecursiveXmlShapesResponseDeserializable>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  RecursiveXmlShapesResponse& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void RecursiveXmlShapesResponse_RecursiveXmlShapesOutputNested1SchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
                                                                                      smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "foo") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetFoo(*value0);
    }
    return;
  }
  if (memberName == "nested") {
    RecursiveXmlShapesOutputNested2 nested0;
    RecursiveXmlShapesResponse_RecursiveXmlShapesOutputNested2SchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetNested(std::move(nested0));
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> RecursiveXmlShapesResponse_RecursiveXmlShapesOutputNested1SchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("RecursiveXmlShapesOutputNested1")
      .PutMember("foo", smithy::schema::Schema::CreateString("foo"))
      .PutMember("nested", smithy::schema::Schema::StructureBuilder("RecursiveXmlShapesOutputNested2").Build())
      .Build();
}

void RecursiveXmlShapesResponse_RecursiveXmlShapesOutputNested2SchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
                                                                                      smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "bar") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetBar(*value0);
    }
    return;
  }
  if (memberName == "recursiveMember") {
    RecursiveXmlShapesOutputNested1 nested0;
    RecursiveXmlShapesResponse_RecursiveXmlShapesOutputNested1SchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetRecursiveMember(std::move(nested0));
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> RecursiveXmlShapesResponse_RecursiveXmlShapesOutputNested2SchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("RecursiveXmlShapesOutputNested2")
      .PutMember("bar", smithy::schema::Schema::CreateString("bar"))
      .PutMember("recursiveMember", smithy::schema::Schema::StructureBuilder("RecursiveXmlShapesOutputNested1").Build())
      .Build();
}

void RecursiveXmlShapesResponseDeserializable::From(const smithy::schema::Schema& memberSchema,
                                                    smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "nested") {
    RecursiveXmlShapesOutputNested1 nested0;
    RecursiveXmlShapesResponse_RecursiveXmlShapesOutputNested1SchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetNested(std::move(nested0));
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> RecursiveXmlShapesResponseDeserializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("RecursiveXmlShapesResponse")
      .PutMember("nested", smithy::schema::Schema::StructureBuilder("RecursiveXmlShapesOutputNested1").Build())
      .Build();
}

}  // namespace
}  // namespace Model
}  // namespace EC2Protocol
}  // namespace Aws

Aws::UniquePtr<smithy::schema::SerializableStruct> RecursiveXmlShapesResponse::GetSchemaSerdeOutput() {
  return Aws::MakeUnique<RecursiveXmlShapesResponseDeserializable>("RecursiveXmlShapesResponseDeserializable", *this);
}
