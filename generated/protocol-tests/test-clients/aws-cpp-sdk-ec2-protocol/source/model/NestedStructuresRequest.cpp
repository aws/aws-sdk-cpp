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
#include <aws/ec2-protocol/model/NestedStructuresRequest.h>
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

using namespace Aws::EC2Protocol::Model;
using namespace Aws::Utils;

namespace {
class NestedStructuresRequest_StructArgSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit NestedStructuresRequest_StructArgSchemaSerdeSer(const StructArg& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const StructArg& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class NestedStructuresRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit NestedStructuresRequestSerializable(const NestedStructuresRequest& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const NestedStructuresRequest& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void NestedStructuresRequest_StructArgSchemaSerdeSer::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.StringArgHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("StringArg").value();
    serializer.WriteString(memberSchema, m_obj.GetStringArg());
  }
  if (m_obj.OtherArgHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("OtherArg").value();
    serializer.WriteBoolean(memberSchema, m_obj.GetOtherArg());
  }
  if (m_obj.RecursiveArgHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("RecursiveArg").value();
    NestedStructuresRequest_StructArgSchemaSerdeSer nested0(m_obj.GetRecursiveArg());
    serializer.WriteStruct(memberSchema, nested0);
  }
}

std::shared_ptr<const smithy::schema::Schema> NestedStructuresRequest_StructArgSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("StructArg")
      .PutMember("StringArg", smithy::schema::Schema::CreateString("StringArg"))
      .PutMember("OtherArg", smithy::schema::Schema::CreateBoolean("OtherArg"))
      .PutMember("RecursiveArg", smithy::schema::Schema::StructureBuilder("StructArg").Build())
      .Build();
}

void NestedStructuresRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.NestedHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("Nested").value();
    NestedStructuresRequest_StructArgSchemaSerdeSer nested0(m_obj.GetNested());
    serializer.WriteStruct(memberSchema, nested0);
  }
}

std::shared_ptr<const smithy::schema::Schema> NestedStructuresRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("NestedStructuresRequest")
      .PutMember("Nested", smithy::schema::Schema::StructureBuilder("StructArg").Build())
      .Build();
}

}  // namespace

Aws::UniquePtr<smithy::schema::SerializableStruct> NestedStructuresRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<NestedStructuresRequestSerializable>("NestedStructuresRequestSerializable", *this);
}

Aws::String NestedStructuresRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext NestedStructuresRequest::GetSchemaSerdeContext() const {
  return {"NestedStructures", "2020-01-08"};
}

void NestedStructuresRequest::DumpBodyToUrl(Aws::Http::URI& uri) const { uri.SetQueryString(SerializePayload()); }
