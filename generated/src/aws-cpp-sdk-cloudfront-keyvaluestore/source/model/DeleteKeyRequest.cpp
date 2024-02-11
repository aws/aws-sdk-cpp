/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront-keyvaluestore/model/DeleteKeyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CloudFrontKeyValueStore::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteKeyRequest::DeleteKeyRequest() : 
    m_kvsARNHasBeenSet(false),
    m_keyHasBeenSet(false),
    m_ifMatchHasBeenSet(false)
{
}

Aws::String DeleteKeyRequest::SerializePayload() const
{
  return {};
}

Aws::Http::HeaderValueCollection DeleteKeyRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_ifMatchHasBeenSet)
  {
    ss << m_ifMatch;
    headers.emplace("if-match",  ss.str());
    ss.str("");
  }

  return headers;

}



DeleteKeyRequest::EndpointParameters DeleteKeyRequest::GetEndpointContextParams() const
{
    EndpointParameters parameters;
    // Operation context parameters
    if (KvsARNHasBeenSet()) {
        parameters.emplace_back(Aws::String("KvsARN"), this->GetKvsARN(), Aws::Endpoint::EndpointParameter::ParameterOrigin::OPERATION_CONTEXT);
    }
    return parameters;
}


