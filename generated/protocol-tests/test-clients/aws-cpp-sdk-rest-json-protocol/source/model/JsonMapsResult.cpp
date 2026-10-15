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
#include <aws/rest-json-protocol/model/JsonMapsResult.h>
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

JsonMapsResult::JsonMapsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

JsonMapsResult& JsonMapsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
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
class JsonMapsResult_GreetingStructSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit JsonMapsResult_GreetingStructSchemaSerdeDeser(GreetingStruct& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  GreetingStruct& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class JsonMapsResultDeserializable final : public smithy::schema::SerializableStruct {
 public:
  explicit JsonMapsResultDeserializable(JsonMapsResult& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  JsonMapsResult& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void JsonMapsResult_GreetingStructSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
                                                         smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "hi") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetHi(*value0);
    }
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> JsonMapsResult_GreetingStructSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("GreetingStruct").PutMember("hi", smithy::schema::Schema::CreateString("hi")).Build();
}

void JsonMapsResultDeserializable::From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "denseStructMap") {
    Aws::Map<Aws::String, GreetingStruct> map0;
    deserializer.ReadMap(memberSchema, [&](const Aws::String& key0, smithy::schema::ShapeDeserializer& valueDeserializer0) {
      GreetingStruct nested1;
      JsonMapsResult_GreetingStructSchemaSerdeDeser{nested1}.Deserialize(valueDeserializer0);
      map0[key0] = std::move(nested1);
    });
    m_obj.SetDenseStructMap(std::move(map0));
    return;
  }
  if (memberName == "denseNumberMap") {
    Aws::Map<Aws::String, int> map0;
    deserializer.ReadMap(memberSchema, [&](const Aws::String& key0, smithy::schema::ShapeDeserializer& valueDeserializer0) {
      const smithy::schema::Schema& valueSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("value").value();
      auto value1 = valueDeserializer0.ReadInteger(valueSchema0);
      if (value1.has_value()) {
        map0[key0] = *value1;
      }
    });
    m_obj.SetDenseNumberMap(std::move(map0));
    return;
  }
  if (memberName == "denseBooleanMap") {
    Aws::Map<Aws::String, bool> map0;
    deserializer.ReadMap(memberSchema, [&](const Aws::String& key0, smithy::schema::ShapeDeserializer& valueDeserializer0) {
      const smithy::schema::Schema& valueSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("value").value();
      auto value1 = valueDeserializer0.ReadBoolean(valueSchema0);
      if (value1.has_value()) {
        map0[key0] = *value1;
      }
    });
    m_obj.SetDenseBooleanMap(std::move(map0));
    return;
  }
  if (memberName == "denseStringMap") {
    Aws::Map<Aws::String, Aws::String> map0;
    deserializer.ReadMap(memberSchema, [&](const Aws::String& key0, smithy::schema::ShapeDeserializer& valueDeserializer0) {
      const smithy::schema::Schema& valueSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("value").value();
      auto value1 = valueDeserializer0.ReadString(valueSchema0);
      if (value1.has_value()) {
        map0[key0] = *value1;
      }
    });
    m_obj.SetDenseStringMap(std::move(map0));
    return;
  }
  if (memberName == "denseSetMap") {
    Aws::Map<Aws::String, Aws::Vector<Aws::String>> map0;
    deserializer.ReadMap(memberSchema, [&](const Aws::String& key0, smithy::schema::ShapeDeserializer& valueDeserializer0) {
      const smithy::schema::Schema& valueSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("value").value();
      Aws::Vector<Aws::String> list1;
      valueDeserializer0.ReadList(valueSchema0, [&](smithy::schema::ShapeDeserializer& itemDeserializer1) {
        const smithy::schema::Schema& itemSchema1 = *valueSchema0.GetMemberTarget().value()->GetMember("member").value();
        auto value2 = itemDeserializer1.ReadString(itemSchema1);
        if (value2.has_value()) {
          list1.push_back(*value2);
        }
      });
      map0[key0] = std::move(list1);
    });
    m_obj.SetDenseSetMap(std::move(map0));
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> JsonMapsResultDeserializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("JsonMapsResult")
      .PutMember("denseStructMap", smithy::schema::Schema::MapBuilder("DenseStructMap")
                                       .PutMember("key", smithy::schema::Schema::CreateString("key"))
                                       .PutMember("value", JsonMapsResult_GreetingStructSchemaSerdeDeser::BuildSchema())
                                       .Build())
      .PutMember("denseNumberMap", smithy::schema::Schema::MapBuilder("DenseNumberMap")
                                       .PutMember("key", smithy::schema::Schema::CreateString("key"))
                                       .PutMember("value", smithy::schema::Schema::CreateInteger("value"))
                                       .Build())
      .PutMember("denseBooleanMap", smithy::schema::Schema::MapBuilder("DenseBooleanMap")
                                        .PutMember("key", smithy::schema::Schema::CreateString("key"))
                                        .PutMember("value", smithy::schema::Schema::CreateBoolean("value"))
                                        .Build())
      .PutMember("denseStringMap", smithy::schema::Schema::MapBuilder("DenseStringMap")
                                       .PutMember("key", smithy::schema::Schema::CreateString("key"))
                                       .PutMember("value", smithy::schema::Schema::CreateString("value"))
                                       .Build())
      .PutMember("denseSetMap", smithy::schema::Schema::MapBuilder("DenseSetMap")
                                    .PutMember("key", smithy::schema::Schema::CreateString("key"))
                                    .PutMember("value", smithy::schema::Schema::ListBuilder("StringSet")
                                                            .PutMember("member", smithy::schema::Schema::CreateString("member"))
                                                            .Build())
                                    .Build())
      .Build();
}

}  // namespace

Aws::UniquePtr<smithy::schema::SerializableStruct> JsonMapsResult::GetSchemaSerdeOutput() {
  return Aws::MakeUnique<JsonMapsResultDeserializable>("JsonMapsResultDeserializable", *this);
}
