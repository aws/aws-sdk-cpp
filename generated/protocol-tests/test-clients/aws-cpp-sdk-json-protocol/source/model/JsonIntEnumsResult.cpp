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
#include <aws/json-protocol/model/JsonIntEnumsResult.h>
#include <smithy/client/schema/DocumentConversion.h>
#include <smithy/client/schema/HttpTraits.h>
#include <smithy/client/schema/JsonTraits.h>
#include <smithy/client/schema/Schema.h>
#include <smithy/client/schema/SchemaBuilder.h>
#include <smithy/client/schema/SerdeTraits.h>
#include <smithy/client/schema/SerializableStruct.h>
#include <smithy/client/schema/ShapeDeserializer.h>

#include <utility>

using namespace Aws::JsonProtocol::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

JsonIntEnumsResult::JsonIntEnumsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

JsonIntEnumsResult& JsonIntEnumsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
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
class JsonIntEnumsResultDeserializable final : public smithy::schema::SerializableStruct {
 public:
  explicit JsonIntEnumsResultDeserializable(JsonIntEnumsResult& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  JsonIntEnumsResult& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void JsonIntEnumsResultDeserializable::From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "intEnum1") {
    auto value0 = deserializer.ReadInteger(memberSchema);
    if (value0.has_value()) {
      m_obj.SetIntEnum1(*value0);
    }
    return;
  }
  if (memberName == "intEnum2") {
    auto value0 = deserializer.ReadInteger(memberSchema);
    if (value0.has_value()) {
      m_obj.SetIntEnum2(*value0);
    }
    return;
  }
  if (memberName == "intEnum3") {
    auto value0 = deserializer.ReadInteger(memberSchema);
    if (value0.has_value()) {
      m_obj.SetIntEnum3(*value0);
    }
    return;
  }
  if (memberName == "intEnumList") {
    Aws::Vector<int> list0;
    deserializer.ReadList(memberSchema, [&](smithy::schema::ShapeDeserializer& itemDeserializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      auto value1 = itemDeserializer0.ReadInteger(itemSchema0);
      if (value1.has_value()) {
        list0.push_back(*value1);
      }
    });
    m_obj.SetIntEnumList(std::move(list0));
    return;
  }
  if (memberName == "intEnumSet") {
    Aws::Vector<int> list0;
    deserializer.ReadList(memberSchema, [&](smithy::schema::ShapeDeserializer& itemDeserializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      auto value1 = itemDeserializer0.ReadInteger(itemSchema0);
      if (value1.has_value()) {
        list0.push_back(*value1);
      }
    });
    m_obj.SetIntEnumSet(std::move(list0));
    return;
  }
  if (memberName == "intEnumMap") {
    Aws::Map<Aws::String, int> map0;
    deserializer.ReadMap(memberSchema, [&](const Aws::String& key0, smithy::schema::ShapeDeserializer& valueDeserializer0) {
      const smithy::schema::Schema& valueSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("value").value();
      auto value1 = valueDeserializer0.ReadInteger(valueSchema0);
      if (value1.has_value()) {
        map0[key0] = *value1;
      }
    });
    m_obj.SetIntEnumMap(std::move(map0));
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> JsonIntEnumsResultDeserializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("JsonIntEnumsResult")
      .PutMember("intEnum1", smithy::schema::Schema::CreateIntEnum("intEnum1"))
      .PutMember("intEnum2", smithy::schema::Schema::CreateIntEnum("intEnum2"))
      .PutMember("intEnum3", smithy::schema::Schema::CreateIntEnum("intEnum3"))
      .PutMember("intEnumList", smithy::schema::Schema::ListBuilder("IntegerEnumList")
                                    .PutMember("member", smithy::schema::Schema::CreateIntEnum("member"))
                                    .Build())
      .PutMember("intEnumSet", smithy::schema::Schema::ListBuilder("IntegerEnumSet")
                                   .PutMember("member", smithy::schema::Schema::CreateIntEnum("member"))
                                   .Build())
      .PutMember("intEnumMap", smithy::schema::Schema::MapBuilder("IntegerEnumMap")
                                   .PutMember("key", smithy::schema::Schema::CreateString("key"))
                                   .PutMember("value", smithy::schema::Schema::CreateIntEnum("value"))
                                   .Build())
      .Build();
}

}  // namespace

Aws::UniquePtr<smithy::schema::SerializableStruct> JsonIntEnumsResult::GetSchemaSerdeOutput() {
  return Aws::MakeUnique<JsonIntEnumsResultDeserializable>("JsonIntEnumsResultDeserializable", *this);
}
