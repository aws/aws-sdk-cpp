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
#include <aws/json-protocol/model/JsonEnumsRequest.h>
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
class JsonEnumsRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit JsonEnumsRequestSerializable(const JsonEnumsRequest& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const JsonEnumsRequest& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void JsonEnumsRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.FooEnum1HasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("fooEnum1").value();
    serializer.WriteString(memberSchema, FooEnumMapper::GetNameForFooEnum(m_obj.GetFooEnum1()));
  }
  if (m_obj.FooEnum2HasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("fooEnum2").value();
    serializer.WriteString(memberSchema, FooEnumMapper::GetNameForFooEnum(m_obj.GetFooEnum2()));
  }
  if (m_obj.FooEnum3HasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("fooEnum3").value();
    serializer.WriteString(memberSchema, FooEnumMapper::GetNameForFooEnum(m_obj.GetFooEnum3()));
  }
  if (m_obj.FooEnumListHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("fooEnumList").value();
    serializer.WriteList(memberSchema, m_obj.GetFooEnumList().size(), [&](smithy::schema::ShapeSerializer& listSerializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      for (const auto& item0 : m_obj.GetFooEnumList()) {
        listSerializer0.WriteString(itemSchema0, FooEnumMapper::GetNameForFooEnum(item0));
      }
    });
  }
  if (m_obj.FooEnumSetHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("fooEnumSet").value();
    serializer.WriteList(memberSchema, m_obj.GetFooEnumSet().size(), [&](smithy::schema::ShapeSerializer& listSerializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      for (const auto& item0 : m_obj.GetFooEnumSet()) {
        listSerializer0.WriteString(itemSchema0, FooEnumMapper::GetNameForFooEnum(item0));
      }
    });
  }
  if (m_obj.FooEnumMapHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("fooEnumMap").value();
    serializer.WriteMap(memberSchema, m_obj.GetFooEnumMap().size(), [&](smithy::schema::MapSerializer& mapSerializer0) {
      const smithy::schema::Schema& valueSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("value").value();
      for (const auto& entry0 : m_obj.GetFooEnumMap()) {
        mapSerializer0.WriteEntry(entry0.first, [&](smithy::schema::ShapeSerializer& valueSerializer0) {
          valueSerializer0.WriteString(valueSchema0, FooEnumMapper::GetNameForFooEnum(entry0.second));
        });
      }
    });
  }
}

std::shared_ptr<const smithy::schema::Schema> JsonEnumsRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("JsonEnumsRequest")
      .PutMember("fooEnum1", smithy::schema::Schema::CreateEnum("fooEnum1"))
      .PutMember("fooEnum2", smithy::schema::Schema::CreateEnum("fooEnum2"))
      .PutMember("fooEnum3", smithy::schema::Schema::CreateEnum("fooEnum3"))
      .PutMember(
          "fooEnumList",
          smithy::schema::Schema::ListBuilder("FooEnumList").PutMember("member", smithy::schema::Schema::CreateEnum("member")).Build())
      .PutMember(
          "fooEnumSet",
          smithy::schema::Schema::ListBuilder("FooEnumSet").PutMember("member", smithy::schema::Schema::CreateEnum("member")).Build())
      .PutMember("fooEnumMap", smithy::schema::Schema::MapBuilder("FooEnumMap")
                                   .PutMember("key", smithy::schema::Schema::CreateString("key"))
                                   .PutMember("value", smithy::schema::Schema::CreateEnum("value"))
                                   .Build())
      .Build();
}

}  // namespace

Aws::UniquePtr<smithy::schema::SerializableStruct> JsonEnumsRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<JsonEnumsRequestSerializable>("JsonEnumsRequestSerializable", *this);
}

Aws::String JsonEnumsRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext JsonEnumsRequest::GetSchemaSerdeContext() const { return {"JsonEnums", "2018-01-01"}; }

Aws::Http::HeaderValueCollection JsonEnumsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "JsonProtocol.JsonEnums"));
  return headers;
}
