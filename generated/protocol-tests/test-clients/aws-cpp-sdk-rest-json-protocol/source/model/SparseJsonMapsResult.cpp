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
#include <aws/rest-json-protocol/model/SparseJsonMapsResult.h>
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

SparseJsonMapsResult::SparseJsonMapsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

SparseJsonMapsResult& SparseJsonMapsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
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
class SparseJsonMapsResult_GreetingStructSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit SparseJsonMapsResult_GreetingStructSchemaSerdeDeser(GreetingStruct& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  GreetingStruct& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class SparseJsonMapsResultDeserializable final : public smithy::schema::SerializableStruct {
 public:
  explicit SparseJsonMapsResultDeserializable(SparseJsonMapsResult& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  SparseJsonMapsResult& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void SparseJsonMapsResult_GreetingStructSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
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

std::shared_ptr<const smithy::schema::Schema> SparseJsonMapsResult_GreetingStructSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("GreetingStruct").PutMember("hi", smithy::schema::Schema::CreateString("hi")).Build();
}

void SparseJsonMapsResultDeserializable::From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "sparseStructMap") {
    Aws::Map<Aws::String, Aws::Crt::Optional<GreetingStruct>> map0;
    deserializer.ReadMap(memberSchema, [&](const Aws::String& key0, smithy::schema::ShapeDeserializer& valueDeserializer0) {
      const smithy::schema::Schema& valueSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("value").value();
      if (valueDeserializer0.IsNull()) {
        valueDeserializer0.ReadString(valueSchema0);
        map0[key0];
      } else {
        GreetingStruct nested1;
        SparseJsonMapsResult_GreetingStructSchemaSerdeDeser{nested1}.Deserialize(valueDeserializer0);
        map0[key0] = std::move(nested1);
      }
    });
    m_obj.SetSparseStructMap(std::move(map0));
    return;
  }
  if (memberName == "sparseNumberMap") {
    Aws::Map<Aws::String, Aws::Crt::Optional<int>> map0;
    deserializer.ReadMap(memberSchema, [&](const Aws::String& key0, smithy::schema::ShapeDeserializer& valueDeserializer0) {
      const smithy::schema::Schema& valueSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("value").value();
      if (valueDeserializer0.IsNull()) {
        valueDeserializer0.ReadString(valueSchema0);
        map0[key0];
      } else {
        auto value1 = valueDeserializer0.ReadInteger(valueSchema0);
        if (value1.has_value()) {
          map0[key0] = *value1;
        }
      }
    });
    m_obj.SetSparseNumberMap(std::move(map0));
    return;
  }
  if (memberName == "sparseBooleanMap") {
    Aws::Map<Aws::String, Aws::Crt::Optional<bool>> map0;
    deserializer.ReadMap(memberSchema, [&](const Aws::String& key0, smithy::schema::ShapeDeserializer& valueDeserializer0) {
      const smithy::schema::Schema& valueSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("value").value();
      if (valueDeserializer0.IsNull()) {
        valueDeserializer0.ReadString(valueSchema0);
        map0[key0];
      } else {
        auto value1 = valueDeserializer0.ReadBoolean(valueSchema0);
        if (value1.has_value()) {
          map0[key0] = *value1;
        }
      }
    });
    m_obj.SetSparseBooleanMap(std::move(map0));
    return;
  }
  if (memberName == "sparseStringMap") {
    Aws::Map<Aws::String, Aws::Crt::Optional<Aws::String>> map0;
    deserializer.ReadMap(memberSchema, [&](const Aws::String& key0, smithy::schema::ShapeDeserializer& valueDeserializer0) {
      const smithy::schema::Schema& valueSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("value").value();
      if (valueDeserializer0.IsNull()) {
        valueDeserializer0.ReadString(valueSchema0);
        map0[key0];
      } else {
        auto value1 = valueDeserializer0.ReadString(valueSchema0);
        if (value1.has_value()) {
          map0[key0] = *value1;
        }
      }
    });
    m_obj.SetSparseStringMap(std::move(map0));
    return;
  }
  if (memberName == "sparseSetMap") {
    Aws::Map<Aws::String, Aws::Crt::Optional<Aws::Vector<Aws::String>>> map0;
    deserializer.ReadMap(memberSchema, [&](const Aws::String& key0, smithy::schema::ShapeDeserializer& valueDeserializer0) {
      const smithy::schema::Schema& valueSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("value").value();
      if (valueDeserializer0.IsNull()) {
        valueDeserializer0.ReadString(valueSchema0);
        map0[key0];
      } else {
        Aws::Vector<Aws::String> list1;
        valueDeserializer0.ReadList(valueSchema0, [&](smithy::schema::ShapeDeserializer& itemDeserializer1) {
          const smithy::schema::Schema& itemSchema1 = *valueSchema0.GetMemberTarget().value()->GetMember("member").value();
          auto value2 = itemDeserializer1.ReadString(itemSchema1);
          if (value2.has_value()) {
            list1.push_back(*value2);
          }
        });
        map0[key0] = std::move(list1);
      }
    });
    m_obj.SetSparseSetMap(std::move(map0));
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> SparseJsonMapsResultDeserializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("SparseJsonMapsResult")
      .PutMember("sparseStructMap",
                 smithy::schema::Schema::MapBuilder("SparseStructMap")
                     .PutMember("key", smithy::schema::Schema::CreateString("key"))
                     .PutMember("value", SparseJsonMapsResult_GreetingStructSchemaSerdeDeser::BuildSchema())
                     .Build(),
                 {{smithy::schema::SparseTrait::KEY(), Aws::MakeShared<smithy::schema::SparseTrait>("SchemaSerdeTrait")}})
      .PutMember("sparseNumberMap",
                 smithy::schema::Schema::MapBuilder("SparseNumberMap")
                     .PutMember("key", smithy::schema::Schema::CreateString("key"))
                     .PutMember("value", smithy::schema::Schema::CreateInteger("value"))
                     .Build(),
                 {{smithy::schema::SparseTrait::KEY(), Aws::MakeShared<smithy::schema::SparseTrait>("SchemaSerdeTrait")}})
      .PutMember("sparseBooleanMap",
                 smithy::schema::Schema::MapBuilder("SparseBooleanMap")
                     .PutMember("key", smithy::schema::Schema::CreateString("key"))
                     .PutMember("value", smithy::schema::Schema::CreateBoolean("value"))
                     .Build(),
                 {{smithy::schema::SparseTrait::KEY(), Aws::MakeShared<smithy::schema::SparseTrait>("SchemaSerdeTrait")}})
      .PutMember("sparseStringMap",
                 smithy::schema::Schema::MapBuilder("SparseStringMap")
                     .PutMember("key", smithy::schema::Schema::CreateString("key"))
                     .PutMember("value", smithy::schema::Schema::CreateString("value"))
                     .Build(),
                 {{smithy::schema::SparseTrait::KEY(), Aws::MakeShared<smithy::schema::SparseTrait>("SchemaSerdeTrait")}})
      .PutMember("sparseSetMap",
                 smithy::schema::Schema::MapBuilder("SparseSetMap")
                     .PutMember("key", smithy::schema::Schema::CreateString("key"))
                     .PutMember("value", smithy::schema::Schema::ListBuilder("StringSet")
                                             .PutMember("member", smithy::schema::Schema::CreateString("member"))
                                             .Build())
                     .Build(),
                 {{smithy::schema::SparseTrait::KEY(), Aws::MakeShared<smithy::schema::SparseTrait>("SchemaSerdeTrait")}})
      .Build();
}

}  // namespace

Aws::UniquePtr<smithy::schema::SerializableStruct> SparseJsonMapsResult::GetSchemaSerdeOutput() {
  return Aws::MakeUnique<SparseJsonMapsResultDeserializable>("SparseJsonMapsResultDeserializable", *this);
}
