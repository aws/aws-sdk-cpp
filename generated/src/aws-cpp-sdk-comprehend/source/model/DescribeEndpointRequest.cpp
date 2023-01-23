/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/DescribeEndpointRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Comprehend::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeEndpointRequest::DescribeEndpointRequest() : 
    m_endpointArnHasBeenSet(false)
{
}

Aws::String DescribeEndpointRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_endpointArnHasBeenSet)
  {
   payload.WithString("EndpointArn", m_endpointArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeEndpointRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Comprehend_20171127.DescribeEndpoint"));
  return headers;

}




