/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront-keyvaluestore/model/GetKeyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudFrontKeyValueStore::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetKeyRequest::GetKeyRequest() : 
    m_kvsARNHasBeenSet(false),
    m_keyHasBeenSet(false)
{
}

Aws::String GetKeyRequest::SerializePayload() const
{
  return {};
}



GetKeyRequest::EndpointParameters GetKeyRequest::GetEndpointContextParams() const
{
    EndpointParameters parameters;
    // Operation context parameters
    if (KvsARNHasBeenSet()) {
        parameters.emplace_back(Aws::String("KvsARN"), this->GetKvsARN(), Aws::Endpoint::EndpointParameter::ParameterOrigin::OPERATION_CONTEXT);
    }
    return parameters;
}


