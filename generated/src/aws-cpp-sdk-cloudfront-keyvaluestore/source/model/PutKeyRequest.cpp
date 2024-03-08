/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront-keyvaluestore/model/PutKeyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CloudFrontKeyValueStore::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutKeyRequest::PutKeyRequest() : 
    m_keyHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_kvsARNHasBeenSet(false),
    m_ifMatchHasBeenSet(false)
{
}

Aws::String PutKeyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_valueHasBeenSet)
  {
   payload.WithString("Value", m_value);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutKeyRequest::GetRequestSpecificHeaders() const
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



PutKeyRequest::EndpointParameters PutKeyRequest::GetEndpointContextParams() const
{
    EndpointParameters parameters;
    // Operation context parameters
    if (KvsARNHasBeenSet()) {
        parameters.emplace_back(Aws::String("KvsARN"), this->GetKvsARN(), Aws::Endpoint::EndpointParameter::ParameterOrigin::OPERATION_CONTEXT);
    }
    return parameters;
}


