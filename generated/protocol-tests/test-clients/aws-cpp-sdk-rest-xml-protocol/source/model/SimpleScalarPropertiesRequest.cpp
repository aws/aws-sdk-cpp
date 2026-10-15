/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/rest-xml-protocol/model/SimpleScalarPropertiesRequest.h>
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

#include <numeric>
#include <utility>

using namespace Aws::RestXmlProtocol::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws::Http;

namespace {
class SimpleScalarPropertiesRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit SimpleScalarPropertiesRequestSerializable(const SimpleScalarPropertiesRequest& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const SimpleScalarPropertiesRequest& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void SimpleScalarPropertiesRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.FooHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("foo").value();
    serializer.WriteString(memberSchema, m_obj.GetFoo());
  }
  if (m_obj.StringValueHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("stringValue").value();
    serializer.WriteString(memberSchema, m_obj.GetStringValue());
  }
  if (m_obj.TrueBooleanValueHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("trueBooleanValue").value();
    serializer.WriteBoolean(memberSchema, m_obj.GetTrueBooleanValue());
  }
  if (m_obj.FalseBooleanValueHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("falseBooleanValue").value();
    serializer.WriteBoolean(memberSchema, m_obj.GetFalseBooleanValue());
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

std::shared_ptr<const smithy::schema::Schema> SimpleScalarPropertiesRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("SimpleScalarPropertiesRequest")
      .PutMember("foo", smithy::schema::Schema::CreateString("foo"),
                 {{smithy::schema::HttpHeaderTrait::KEY(), Aws::MakeShared<smithy::schema::HttpHeaderTrait>("SchemaSerdeTrait", "X-Foo")}})
      .PutMember("stringValue", smithy::schema::Schema::CreateString("stringValue"))
      .PutMember("trueBooleanValue", smithy::schema::Schema::CreateBoolean("trueBooleanValue"))
      .PutMember("falseBooleanValue", smithy::schema::Schema::CreateBoolean("falseBooleanValue"))
      .PutMember("byteValue", smithy::schema::Schema::CreateInteger("byteValue"))
      .PutMember("shortValue", smithy::schema::Schema::CreateInteger("shortValue"))
      .PutMember("integerValue", smithy::schema::Schema::CreateInteger("integerValue"))
      .PutMember("longValue", smithy::schema::Schema::CreateLong("longValue"))
      .PutMember("floatValue", smithy::schema::Schema::CreateDouble("floatValue"))
      .PutMember(
          "doubleValue", smithy::schema::Schema::CreateDouble("doubleValue"),
          {{smithy::schema::XmlNameTrait::KEY(), Aws::MakeShared<smithy::schema::XmlNameTrait>("SchemaSerdeTrait", "DoubleDribble")}})
      .Build();
}

}  // namespace

Aws::UniquePtr<smithy::schema::SerializableStruct> SimpleScalarPropertiesRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<SimpleScalarPropertiesRequestSerializable>("SimpleScalarPropertiesRequestSerializable", *this);
}

Aws::String SimpleScalarPropertiesRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext SimpleScalarPropertiesRequest::GetSchemaSerdeContext() const {
  return {"SimpleScalarProperties", "2019-12-16", "/SimpleScalarProperties", ""};
}

Aws::Http::HeaderValueCollection SimpleScalarPropertiesRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  return headers;
}
