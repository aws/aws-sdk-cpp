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
#include <aws/json-protocol/model/JsonUnionsRequest.h>
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

using namespace Aws::JsonProtocol::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace {
class JsonUnionsRequest_MyUnionSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit JsonUnionsRequest_MyUnionSchemaSerdeSer(const MyUnion& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const MyUnion& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class JsonUnionsRequest_GreetingStructSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit JsonUnionsRequest_GreetingStructSchemaSerdeSer(const GreetingStruct& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const GreetingStruct& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class JsonUnionsRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit JsonUnionsRequestSerializable(const JsonUnionsRequest& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const JsonUnionsRequest& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void JsonUnionsRequest_MyUnionSchemaSerdeSer::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.StringValueHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("stringValue").value();
    serializer.WriteString(memberSchema, m_obj.GetStringValue());
  }
  if (m_obj.BooleanValueHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("booleanValue").value();
    serializer.WriteBoolean(memberSchema, m_obj.GetBooleanValue());
  }
  if (m_obj.NumberValueHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("numberValue").value();
    serializer.WriteInteger(memberSchema, m_obj.GetNumberValue());
  }
  if (m_obj.BlobValueHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("blobValue").value();
    serializer.WriteBlob(memberSchema, m_obj.GetBlobValue());
  }
  if (m_obj.TimestampValueHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("timestampValue").value();
    serializer.WriteTimestamp(memberSchema, m_obj.GetTimestampValue());
  }
  if (m_obj.EnumValueHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("enumValue").value();
    serializer.WriteString(memberSchema, FooEnumMapper::GetNameForFooEnum(m_obj.GetEnumValue()));
  }
  if (m_obj.ListValueHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("listValue").value();
    serializer.WriteList(memberSchema, m_obj.GetListValue().size(), [&](smithy::schema::ShapeSerializer& listSerializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      for (const auto& item0 : m_obj.GetListValue()) {
        listSerializer0.WriteString(itemSchema0, item0);
      }
    });
  }
  if (m_obj.MapValueHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("mapValue").value();
    serializer.WriteMap(memberSchema, m_obj.GetMapValue().size(), [&](smithy::schema::MapSerializer& mapSerializer0) {
      const smithy::schema::Schema& valueSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("value").value();
      for (const auto& entry0 : m_obj.GetMapValue()) {
        mapSerializer0.WriteEntry(entry0.first, [&](smithy::schema::ShapeSerializer& valueSerializer0) {
          valueSerializer0.WriteString(valueSchema0, entry0.second);
        });
      }
    });
  }
  if (m_obj.StructureValueHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("structureValue").value();
    JsonUnionsRequest_GreetingStructSchemaSerdeSer nested0(m_obj.GetStructureValue());
    serializer.WriteStruct(memberSchema, nested0);
  }
}

std::shared_ptr<const smithy::schema::Schema> JsonUnionsRequest_MyUnionSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::UnionBuilder("MyUnion")
      .PutMember("stringValue", smithy::schema::Schema::CreateString("stringValue"))
      .PutMember("booleanValue", smithy::schema::Schema::CreateBoolean("booleanValue"))
      .PutMember("numberValue", smithy::schema::Schema::CreateInteger("numberValue"))
      .PutMember("blobValue", smithy::schema::Schema::CreateBlob("blobValue"))
      .PutMember("timestampValue", smithy::schema::Schema::CreateTimestamp("timestampValue"))
      .PutMember("enumValue", smithy::schema::Schema::CreateEnum("enumValue"))
      .PutMember(
          "listValue",
          smithy::schema::Schema::ListBuilder("StringList").PutMember("member", smithy::schema::Schema::CreateString("member")).Build())
      .PutMember("mapValue", smithy::schema::Schema::MapBuilder("StringMap")
                                 .PutMember("key", smithy::schema::Schema::CreateString("key"))
                                 .PutMember("value", smithy::schema::Schema::CreateString("value"))
                                 .Build())
      .PutMember("structureValue", JsonUnionsRequest_GreetingStructSchemaSerdeSer::BuildSchema())
      .Build();
}

void JsonUnionsRequest_GreetingStructSchemaSerdeSer::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.HiHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("hi").value();
    serializer.WriteString(memberSchema, m_obj.GetHi());
  }
}

std::shared_ptr<const smithy::schema::Schema> JsonUnionsRequest_GreetingStructSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("GreetingStruct").PutMember("hi", smithy::schema::Schema::CreateString("hi")).Build();
}

void JsonUnionsRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.ContentsHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("contents").value();
    JsonUnionsRequest_MyUnionSchemaSerdeSer nested0(m_obj.GetContents());
    serializer.WriteStruct(memberSchema, nested0);
  }
}

std::shared_ptr<const smithy::schema::Schema> JsonUnionsRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("JsonUnionsRequest")
      .PutMember("contents", JsonUnionsRequest_MyUnionSchemaSerdeSer::BuildSchema())
      .Build();
}

}  // namespace

Aws::UniquePtr<smithy::schema::SerializableStruct> JsonUnionsRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<JsonUnionsRequestSerializable>("JsonUnionsRequestSerializable", *this);
}

Aws::String JsonUnionsRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext JsonUnionsRequest::GetSchemaSerdeContext() const { return {"JsonUnions", "2018-01-01"}; }

Aws::Http::HeaderValueCollection JsonUnionsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "JsonProtocol.JsonUnions"));
  return headers;
}
