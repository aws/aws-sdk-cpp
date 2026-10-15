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
#include <aws/rest-xml-protocol/model/EndpointWithHostLabelHeaderOperationRequest.h>
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
class EndpointWithHostLabelHeaderOperationRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit EndpointWithHostLabelHeaderOperationRequestSerializable(const EndpointWithHostLabelHeaderOperationRequest& obj)
      : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const EndpointWithHostLabelHeaderOperationRequest& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void EndpointWithHostLabelHeaderOperationRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.AccountIdHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("accountId").value();
    serializer.WriteString(memberSchema, m_obj.GetAccountId());
  }
}

std::shared_ptr<const smithy::schema::Schema> EndpointWithHostLabelHeaderOperationRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("EndpointWithHostLabelHeaderOperationRequest")
      .PutMember("accountId", smithy::schema::Schema::CreateString("accountId"),
                 {{smithy::schema::HttpHeaderTrait::KEY(),
                   Aws::MakeShared<smithy::schema::HttpHeaderTrait>("SchemaSerdeTrait", "X-Amz-Account-Id")},
                  {smithy::schema::HostLabelTrait::KEY(), Aws::MakeShared<smithy::schema::HostLabelTrait>("SchemaSerdeTrait")}})
      .Build();
}

}  // namespace

Aws::UniquePtr<smithy::schema::SerializableStruct> EndpointWithHostLabelHeaderOperationRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<EndpointWithHostLabelHeaderOperationRequestSerializable>("EndpointWithHostLabelHeaderOperationRequestSerializable",
                                                                                  *this);
}

Aws::String EndpointWithHostLabelHeaderOperationRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext EndpointWithHostLabelHeaderOperationRequest::GetSchemaSerdeContext() const {
  return {"EndpointWithHostLabelHeaderOperation", "2019-12-16", "/EndpointWithHostLabelHeaderOperation", "{accountId}."};
}

Aws::Http::HeaderValueCollection EndpointWithHostLabelHeaderOperationRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  return headers;
}
