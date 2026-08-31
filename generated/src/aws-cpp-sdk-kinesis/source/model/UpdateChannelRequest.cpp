/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kinesis/model/UpdateChannelRequest.h>

#include <utility>

using namespace Aws::Kinesis::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateChannelRequest::SerializePayload() const {
  JsonValue payload;

  if (m_channelARNHasBeenSet) {
    payload.WithString("ChannelARN", m_channelARN);
  }

  if (m_s3DestinationConfigurationHasBeenSet) {
    payload.WithObject("S3DestinationConfiguration", m_s3DestinationConfiguration.Jsonize());
  }

  if (m_s3TablesDestinationConfigurationHasBeenSet) {
    payload.WithObject("S3TablesDestinationConfiguration", m_s3TablesDestinationConfiguration.Jsonize());
  }

  if (m_loggingConfigurationHasBeenSet) {
    payload.WithObject("LoggingConfiguration", m_loggingConfiguration.Jsonize());
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateChannelRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Kinesis_20131202.UpdateChannel"));
  return headers;
}

UpdateChannelRequest::EndpointParameters UpdateChannelRequest::GetEndpointContextParams() const {
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
