/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/eventbridgev2/model/DeleteResourcePolicyRequest.h>

#include <utility>

using namespace Aws::EventBridgeV2::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String DeleteResourcePolicyRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_resourceArnHasBeenSet) {
    mapSize++;
  }
  if (m_policyNameHasBeenSet) {
    mapSize++;
  }
  if (m_expectedRevisionIdHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_resourceArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ResourceArn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_resourceArn.c_str()));
  }

  if (m_policyNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("PolicyName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_policyName.c_str()));
  }

  if (m_expectedRevisionIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ExpectedRevisionId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_expectedRevisionId.c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection DeleteResourcePolicyRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}

DeleteResourcePolicyRequest::EndpointParameters DeleteResourcePolicyRequest::GetEndpointContextParams() const {
  EndpointParameters parameters;
  // Operation context parameters
  if (ResourceArnHasBeenSet()) {
    parameters.emplace_back(Aws::String("EventBusArn"), this->GetResourceArn(),
                            Aws::Endpoint::EndpointParameter::ParameterOrigin::OPERATION_CONTEXT);
  }
  return parameters;
}
