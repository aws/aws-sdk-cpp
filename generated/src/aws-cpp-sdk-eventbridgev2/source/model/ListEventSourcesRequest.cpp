/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/eventbridgev2/model/ListEventSourcesRequest.h>

#include <utility>

using namespace Aws::EventBridgeV2::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String ListEventSourcesRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_eventBusArnHasBeenSet) {
    mapSize++;
  }
  if (m_namePrefixHasBeenSet) {
    mapSize++;
  }
  if (m_nextTokenHasBeenSet) {
    mapSize++;
  }
  if (m_maxResultsHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_eventBusArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("EventBusArn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_eventBusArn.c_str()));
  }

  if (m_namePrefixHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("NamePrefix"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_namePrefix.c_str()));
  }

  if (m_nextTokenHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("NextToken"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_nextToken.c_str()));
  }

  if (m_maxResultsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("MaxResults"));
    (m_maxResults >= 0) ? encoder.WriteUInt(m_maxResults) : encoder.WriteNegInt(m_maxResults);
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection ListEventSourcesRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}

ListEventSourcesRequest::EndpointParameters ListEventSourcesRequest::GetEndpointContextParams() const {
  EndpointParameters parameters;
  // Operation context parameters
  if (EventBusArnHasBeenSet()) {
    parameters.emplace_back(Aws::String("EventBusArn"), this->GetEventBusArn(),
                            Aws::Endpoint::EndpointParameter::ParameterOrigin::OPERATION_CONTEXT);
  }
  return parameters;
}
