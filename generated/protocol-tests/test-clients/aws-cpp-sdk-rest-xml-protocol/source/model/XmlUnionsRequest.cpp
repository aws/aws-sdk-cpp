/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/component-registry/ComponentRegistry.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/rest-xml-protocol/model/XmlUnionsRequest.h>
#include <smithy/client/schema/ClientProtocol.h>
#include <smithy/client/schema/DocumentConversion.h>
#include <smithy/client/schema/HttpTraits.h>
#include <smithy/client/schema/MapSerializer.h>
#include <smithy/client/schema/Schema.h>
#include <smithy/client/schema/SchemaBuilder.h>
#include <smithy/client/schema/SerdeTraits.h>
#include <smithy/client/schema/SerializableStruct.h>
#include <smithy/client/schema/ShapeSerializer.h>
#include <smithy/client/schema/XmlTraits.h>

#include <atomic>
#include <mutex>
#include <numeric>
#include <utility>

using namespace Aws::RestXmlProtocol::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws::Http;

namespace Aws {
namespace RestXmlProtocol {
namespace Model {
namespace {
template <typename Adapter>
class XmlUnionsRequestSchemaCache {
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
        Aws::New<std::shared_ptr<const smithy::schema::Schema>>("XmlUnionsRequestSchemaCache", Adapter::BuildSchema());
    Aws::Utils::ComponentRegistry::RegisterComponent("XmlUnionsRequestSchemaCache", built, &Release);
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
std::atomic<std::shared_ptr<const smithy::schema::Schema>*> XmlUnionsRequestSchemaCache<Adapter>::s_schema{nullptr};
template <typename Adapter>
std::mutex XmlUnionsRequestSchemaCache<Adapter>::s_mutex;

class XmlUnionsRequest_XmlUnionShapeSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit XmlUnionsRequest_XmlUnionShapeSchemaSerdeSer(const XmlUnionShape& obj)
      : m_obj(obj), m_schema(XmlUnionsRequestSchemaCache<XmlUnionsRequest_XmlUnionShapeSchemaSerdeSer>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const XmlUnionShape& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class XmlUnionsRequest_XmlNestedUnionStructSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit XmlUnionsRequest_XmlNestedUnionStructSchemaSerdeSer(const XmlNestedUnionStruct& obj)
      : m_obj(obj), m_schema(XmlUnionsRequestSchemaCache<XmlUnionsRequest_XmlNestedUnionStructSchemaSerdeSer>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const XmlNestedUnionStruct& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class XmlUnionsRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit XmlUnionsRequestSerializable(const XmlUnionsRequest& obj)
      : m_obj(obj), m_schema(XmlUnionsRequestSchemaCache<XmlUnionsRequestSerializable>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const XmlUnionsRequest& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void XmlUnionsRequest_XmlUnionShapeSchemaSerdeSer::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.StringValueHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("stringValue").value();
    serializer.WriteString(memberSchema, m_obj.GetStringValue());
  }
  if (m_obj.BooleanValueHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("booleanValue").value();
    serializer.WriteBoolean(memberSchema, m_obj.GetBooleanValue());
  }
  if (m_obj.ByteValueHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("byteValue").value();
    serializer.WriteInteger(memberSchema, m_obj.GetByteValue());
  }
  if (m_obj.ShortValueHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("shortValue").value();
    serializer.WriteInteger(memberSchema, m_obj.GetShortValue());
  }
  if (m_obj.IntegerValueHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("integerValue").value();
    serializer.WriteInteger(memberSchema, m_obj.GetIntegerValue());
  }
  if (m_obj.LongValueHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("longValue").value();
    serializer.WriteLong(memberSchema, m_obj.GetLongValue());
  }
  if (m_obj.FloatValueHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("floatValue").value();
    serializer.WriteDouble(memberSchema, m_obj.GetFloatValue());
  }
  if (m_obj.DoubleValueHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("doubleValue").value();
    serializer.WriteDouble(memberSchema, m_obj.GetDoubleValue());
  }
  if (m_obj.UnionValueHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("unionValue").value();
    XmlUnionsRequest_XmlUnionShapeSchemaSerdeSer nested0(m_obj.GetUnionValue());
    serializer.WriteStruct(memberSchema, nested0);
  }
  if (m_obj.StructValueHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("structValue").value();
    XmlUnionsRequest_XmlNestedUnionStructSchemaSerdeSer nested0(m_obj.GetStructValue());
    serializer.WriteStruct(memberSchema, nested0);
  }
}

std::shared_ptr<const smithy::schema::Schema> XmlUnionsRequest_XmlUnionShapeSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::UnionBuilder("XmlUnionShape")
      .PutMember("stringValue", smithy::schema::Schema::CreateString("stringValue"))
      .PutMember("booleanValue", smithy::schema::Schema::CreateBoolean("booleanValue"))
      .PutMember("byteValue", smithy::schema::Schema::CreateInteger("byteValue"))
      .PutMember("shortValue", smithy::schema::Schema::CreateInteger("shortValue"))
      .PutMember("integerValue", smithy::schema::Schema::CreateInteger("integerValue"))
      .PutMember("longValue", smithy::schema::Schema::CreateLong("longValue"))
      .PutMember("floatValue", smithy::schema::Schema::CreateDouble("floatValue"))
      .PutMember("doubleValue", smithy::schema::Schema::CreateDouble("doubleValue"))
      .PutMember("unionValue", smithy::schema::Schema::UnionBuilder("XmlUnionShape").Build())
      .PutMember("structValue", XmlUnionsRequestSchemaCache<XmlUnionsRequest_XmlNestedUnionStructSchemaSerdeSer>::Get())
      .Build();
}

void XmlUnionsRequest_XmlNestedUnionStructSchemaSerdeSer::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.StringValueHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("stringValue").value();
    serializer.WriteString(memberSchema, m_obj.GetStringValue());
  }
  if (m_obj.BooleanValueHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("booleanValue").value();
    serializer.WriteBoolean(memberSchema, m_obj.GetBooleanValue());
  }
  if (m_obj.ByteValueHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("byteValue").value();
    serializer.WriteInteger(memberSchema, m_obj.GetByteValue());
  }
  if (m_obj.ShortValueHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("shortValue").value();
    serializer.WriteInteger(memberSchema, m_obj.GetShortValue());
  }
  if (m_obj.IntegerValueHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("integerValue").value();
    serializer.WriteInteger(memberSchema, m_obj.GetIntegerValue());
  }
  if (m_obj.LongValueHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("longValue").value();
    serializer.WriteLong(memberSchema, m_obj.GetLongValue());
  }
  if (m_obj.FloatValueHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("floatValue").value();
    serializer.WriteDouble(memberSchema, m_obj.GetFloatValue());
  }
  if (m_obj.DoubleValueHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("doubleValue").value();
    serializer.WriteDouble(memberSchema, m_obj.GetDoubleValue());
  }
}

std::shared_ptr<const smithy::schema::Schema> XmlUnionsRequest_XmlNestedUnionStructSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("XmlNestedUnionStruct")
      .PutMember("stringValue", smithy::schema::Schema::CreateString("stringValue"))
      .PutMember("booleanValue", smithy::schema::Schema::CreateBoolean("booleanValue"))
      .PutMember("byteValue", smithy::schema::Schema::CreateInteger("byteValue"))
      .PutMember("shortValue", smithy::schema::Schema::CreateInteger("shortValue"))
      .PutMember("integerValue", smithy::schema::Schema::CreateInteger("integerValue"))
      .PutMember("longValue", smithy::schema::Schema::CreateLong("longValue"))
      .PutMember("floatValue", smithy::schema::Schema::CreateDouble("floatValue"))
      .PutMember("doubleValue", smithy::schema::Schema::CreateDouble("doubleValue"))
      .Build();
}

void XmlUnionsRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.UnionValueHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("unionValue").value();
    XmlUnionsRequest_XmlUnionShapeSchemaSerdeSer nested0(m_obj.GetUnionValue());
    serializer.WriteStruct(memberSchema, nested0);
  }
}

std::shared_ptr<const smithy::schema::Schema> XmlUnionsRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("XmlUnionsRequest")
      .PutMember("unionValue", smithy::schema::Schema::UnionBuilder("XmlUnionShape").Build())
      .Build();
}

}  // namespace
}  // namespace Model
}  // namespace RestXmlProtocol
}  // namespace Aws

Aws::UniquePtr<smithy::schema::SerializableStruct> XmlUnionsRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<XmlUnionsRequestSerializable>("XmlUnionsRequestSerializable", *this);
}

Aws::String XmlUnionsRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext XmlUnionsRequest::GetSchemaSerdeContext() const {
  return {"XmlUnions", "2019-12-16", "/XmlUnions", ""};
}
