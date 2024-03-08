/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront-keyvaluestore/model/DescribeKeyValueStoreRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudFrontKeyValueStore::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeKeyValueStoreRequest::DescribeKeyValueStoreRequest() : 
    m_kvsARNHasBeenSet(false)
{
}

Aws::String DescribeKeyValueStoreRequest::SerializePayload() const
{
  return {};
}



DescribeKeyValueStoreRequest::EndpointParameters DescribeKeyValueStoreRequest::GetEndpointContextParams() const
{
    EndpointParameters parameters;
    // Operation context parameters
    if (KvsARNHasBeenSet()) {
        parameters.emplace_back(Aws::String("KvsARN"), this->GetKvsARN(), Aws::Endpoint::EndpointParameter::ParameterOrigin::OPERATION_CONTEXT);
    }
    return parameters;
}


