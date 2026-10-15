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
#include <aws/rest-json-protocol/model/EndpointWithHostLabelOperationRequest.h>
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
class EndpointWithHostLabelOperationRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit EndpointWithHostLabelOperationRequestSerializable(const EndpointWithHostLabelOperationRequest& obj)
      : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const EndpointWithHostLabelOperationRequest& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void EndpointWithHostLabelOperationRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.LabelHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("label").value();
    serializer.WriteString(memberSchema, m_obj.GetLabel());
  }
}

std::shared_ptr<const smithy::schema::Schema> EndpointWithHostLabelOperationRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("EndpointWithHostLabelOperationRequest")
      .PutMember("label", smithy::schema::Schema::CreateString("label"),
                 {{smithy::schema::HostLabelTrait::KEY(), Aws::MakeShared<smithy::schema::HostLabelTrait>("SchemaSerdeTrait")}})
      .Build();
}

}  // namespace

Aws::UniquePtr<smithy::schema::SerializableStruct> EndpointWithHostLabelOperationRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<EndpointWithHostLabelOperationRequestSerializable>("EndpointWithHostLabelOperationRequestSerializable", *this);
}

Aws::String EndpointWithHostLabelOperationRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext EndpointWithHostLabelOperationRequest::GetSchemaSerdeContext() const {
  return {"EndpointWithHostLabelOperation", "2019-12-16", "/EndpointWithHostLabelOperation", "foo.{label}."};
}
