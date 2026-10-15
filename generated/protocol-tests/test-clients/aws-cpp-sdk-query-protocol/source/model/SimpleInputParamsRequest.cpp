/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/query-protocol/model/SimpleInputParamsRequest.h>
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

using namespace Aws::QueryProtocol::Model;
using namespace Aws::Utils;

namespace {
class SimpleInputParamsRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit SimpleInputParamsRequestSerializable(const SimpleInputParamsRequest& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const SimpleInputParamsRequest& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void SimpleInputParamsRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.FooHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("Foo").value();
    serializer.WriteString(memberSchema, m_obj.GetFoo());
  }
  if (m_obj.BarHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("Bar").value();
    serializer.WriteString(memberSchema, m_obj.GetBar());
  }
  if (m_obj.BazHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("Baz").value();
    serializer.WriteBoolean(memberSchema, m_obj.GetBaz());
  }
  if (m_obj.BamHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("Bam").value();
    serializer.WriteInteger(memberSchema, m_obj.GetBam());
  }
  if (m_obj.FloatValueHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("FloatValue").value();
    serializer.WriteDouble(memberSchema, m_obj.GetFloatValue());
  }
  if (m_obj.BooHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("Boo").value();
    serializer.WriteDouble(memberSchema, m_obj.GetBoo());
  }
  if (m_obj.QuxHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("Qux").value();
    serializer.WriteBlob(memberSchema, m_obj.GetQux());
  }
  if (m_obj.FooEnumHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("FooEnum").value();
    serializer.WriteString(memberSchema, FooEnumMapper::GetNameForFooEnum(m_obj.GetFooEnum()));
  }
  if (m_obj.IntegerEnumHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("IntegerEnum").value();
    serializer.WriteInteger(memberSchema, m_obj.GetIntegerEnum());
  }
}

std::shared_ptr<const smithy::schema::Schema> SimpleInputParamsRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("SimpleInputParamsRequest")
      .PutMember("Foo", smithy::schema::Schema::CreateString("Foo"))
      .PutMember("Bar", smithy::schema::Schema::CreateString("Bar"))
      .PutMember("Baz", smithy::schema::Schema::CreateBoolean("Baz"))
      .PutMember("Bam", smithy::schema::Schema::CreateInteger("Bam"))
      .PutMember("FloatValue", smithy::schema::Schema::CreateDouble("FloatValue"))
      .PutMember("Boo", smithy::schema::Schema::CreateDouble("Boo"))
      .PutMember("Qux", smithy::schema::Schema::CreateBlob("Qux"))
      .PutMember("FooEnum", smithy::schema::Schema::CreateEnum("FooEnum"))
      .PutMember("IntegerEnum", smithy::schema::Schema::CreateIntEnum("IntegerEnum"))
      .Build();
}

}  // namespace

Aws::UniquePtr<smithy::schema::SerializableStruct> SimpleInputParamsRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<SimpleInputParamsRequestSerializable>("SimpleInputParamsRequestSerializable", *this);
}

Aws::String SimpleInputParamsRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext SimpleInputParamsRequest::GetSchemaSerdeContext() const {
  return {"SimpleInputParams", "2020-01-08"};
}

void SimpleInputParamsRequest::DumpBodyToUrl(Aws::Http::URI& uri) const { uri.SetQueryString(SerializePayload()); }
