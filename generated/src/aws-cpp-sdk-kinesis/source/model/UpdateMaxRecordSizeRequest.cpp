/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kinesis/model/UpdateMaxRecordSizeRequest.h>

#include <utility>

using namespace Aws::Kinesis::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateMaxRecordSizeRequest::SerializePayload() const {
  JsonValue payload;

  if (m_streamARNHasBeenSet) {
    payload.WithString("StreamARN", m_streamARN);
  }

  if (m_maxRecordSizeInKiBHasBeenSet) {
    payload.WithInteger("MaxRecordSizeInKiB", m_maxRecordSizeInKiB);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateMaxRecordSizeRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Kinesis_20131202.UpdateMaxRecordSize"));
  return headers;
}

UpdateMaxRecordSizeRequest::EndpointParameters UpdateMaxRecordSizeRequest::GetEndpointContextParams() const {
  EndpointParameters parameters;
  // Static context parameters
  parameters.emplace_back(Aws::String("OperationType"), "control", Aws::Endpoint::EndpointParameter::ParameterOrigin::STATIC_CONTEXT);
  // Operation context parameters
  if (StreamARNHasBeenSet()) {
    parameters.emplace_back(Aws::String("StreamARN"), this->GetStreamARN(),
                            Aws::Endpoint::EndpointParameter::ParameterOrigin::OPERATION_CONTEXT);
  }
  return parameters;
}
