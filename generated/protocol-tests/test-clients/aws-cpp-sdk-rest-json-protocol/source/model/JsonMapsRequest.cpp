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
#include <aws/rest-json-protocol/model/JsonMapsRequest.h>
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

using namespace Aws::RestJsonProtocol::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace {
class JsonMapsRequest_GreetingStructSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit JsonMapsRequest_GreetingStructSchemaSerdeSer(const GreetingStruct& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const GreetingStruct& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class JsonMapsRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit JsonMapsRequestSerializable(const JsonMapsRequest& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const JsonMapsRequest& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void JsonMapsRequest_GreetingStructSchemaSerdeSer::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.HiHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("hi").value();
    serializer.WriteString(memberSchema, m_obj.GetHi());
  }
}

std::shared_ptr<const smithy::schema::Schema> JsonMapsRequest_GreetingStructSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("GreetingStruct").PutMember("hi", smithy::schema::Schema::CreateString("hi")).Build();
}

void JsonMapsRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.DenseStructMapHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("denseStructMap").value();
    serializer.WriteMap(memberSchema, m_obj.GetDenseStructMap().size(), [&](smithy::schema::MapSerializer& mapSerializer0) {
      const smithy::schema::Schema& valueSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("value").value();
      for (const auto& entry0 : m_obj.GetDenseStructMap()) {
        mapSerializer0.WriteEntry(entry0.first, [&](smithy::schema::ShapeSerializer& valueSerializer0) {
          JsonMapsRequest_GreetingStructSchemaSerdeSer nested1(entry0.second);
          valueSerializer0.WriteStruct(valueSchema0, nested1);
        });
      }
    });
  }
  if (m_obj.DenseNumberMapHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("denseNumberMap").value();
    serializer.WriteMap(memberSchema, m_obj.GetDenseNumberMap().size(), [&](smithy::schema::MapSerializer& mapSerializer0) {
      const smithy::schema::Schema& valueSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("value").value();
      for (const auto& entry0 : m_obj.GetDenseNumberMap()) {
        mapSerializer0.WriteEntry(entry0.first, [&](smithy::schema::ShapeSerializer& valueSerializer0) {
          valueSerializer0.WriteInteger(valueSchema0, entry0.second);
        });
      }
    });
  }
  if (m_obj.DenseBooleanMapHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("denseBooleanMap").value();
    serializer.WriteMap(memberSchema, m_obj.GetDenseBooleanMap().size(), [&](smithy::schema::MapSerializer& mapSerializer0) {
      const smithy::schema::Schema& valueSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("value").value();
      for (const auto& entry0 : m_obj.GetDenseBooleanMap()) {
        mapSerializer0.WriteEntry(entry0.first, [&](smithy::schema::ShapeSerializer& valueSerializer0) {
          valueSerializer0.WriteBoolean(valueSchema0, entry0.second);
        });
      }
    });
  }
  if (m_obj.DenseStringMapHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("denseStringMap").value();
    serializer.WriteMap(memberSchema, m_obj.GetDenseStringMap().size(), [&](smithy::schema::MapSerializer& mapSerializer0) {
      const smithy::schema::Schema& valueSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("value").value();
      for (const auto& entry0 : m_obj.GetDenseStringMap()) {
        mapSerializer0.WriteEntry(entry0.first, [&](smithy::schema::ShapeSerializer& valueSerializer0) {
          valueSerializer0.WriteString(valueSchema0, entry0.second);
        });
      }
    });
  }
  if (m_obj.DenseSetMapHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("denseSetMap").value();
    serializer.WriteMap(memberSchema, m_obj.GetDenseSetMap().size(), [&](smithy::schema::MapSerializer& mapSerializer0) {
      const smithy::schema::Schema& valueSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("value").value();
      for (const auto& entry0 : m_obj.GetDenseSetMap()) {
        mapSerializer0.WriteEntry(entry0.first, [&](smithy::schema::ShapeSerializer& valueSerializer0) {
          valueSerializer0.WriteList(valueSchema0, entry0.second.size(), [&](smithy::schema::ShapeSerializer& listSerializer1) {
            const smithy::schema::Schema& itemSchema1 = *valueSchema0.GetMemberTarget().value()->GetMember("member").value();
            for (const auto& item1 : entry0.second) {
              listSerializer1.WriteString(itemSchema1, item1);
            }
          });
        });
      }
    });
  }
}

std::shared_ptr<const smithy::schema::Schema> JsonMapsRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("JsonMapsRequest")
      .PutMember("denseStructMap", smithy::schema::Schema::MapBuilder("DenseStructMap")
                                       .PutMember("key", smithy::schema::Schema::CreateString("key"))
                                       .PutMember("value", JsonMapsRequest_GreetingStructSchemaSerdeSer::BuildSchema())
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

Aws::UniquePtr<smithy::schema::SerializableStruct> JsonMapsRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<JsonMapsRequestSerializable>("JsonMapsRequestSerializable", *this);
}

Aws::String JsonMapsRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext JsonMapsRequest::GetSchemaSerdeContext() const {
  return {"JsonMaps", "2019-12-16", "/JsonMaps", ""};
}
