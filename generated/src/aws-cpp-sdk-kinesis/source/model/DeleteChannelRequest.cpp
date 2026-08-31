/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kinesis/model/DeleteChannelRequest.h>

#include <utility>

using namespace Aws::Kinesis::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DeleteChannelRequest::SerializePayload() const {
  JsonValue payload;

  if (m_channelARNHasBeenSet) {
    payload.WithString("ChannelARN", m_channelARN);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteChannelRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Kinesis_20131202.DeleteChannel"));
  return headers;
}

DeleteChannelRequest::EndpointParameters DeleteChannelRequest::GetEndpointContextParams() const {
  EndpointParameters parameters;
  // Static context parameters
  parameters.emplace_back(Aws::String("OperationType"), "control", Aws::Endpoint::EndpointParameter::ParameterOrigin::STATIC_CONTEXT);
  // Operation context parameters
  if (ChannelARNHasBeenSet()) {
    parameters.emplace_back(Aws::String("ChannelARN"), this->GetChannelARN(),
                            Aws::Endpoint::EndpointParameter::ParameterOrigin::OPERATION_CONTEXT);
  }
  return parameters;
}
