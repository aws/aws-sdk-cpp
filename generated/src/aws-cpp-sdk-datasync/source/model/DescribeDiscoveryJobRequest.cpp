/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/DescribeDiscoveryJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DataSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeDiscoveryJobRequest::DescribeDiscoveryJobRequest() : 
    m_discoveryJobArnHasBeenSet(false)
{
}

Aws::String DescribeDiscoveryJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_discoveryJobArnHasBeenSet)
  {
   payload.WithString("DiscoveryJobArn", m_discoveryJobArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeDiscoveryJobRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "FmrsService.DescribeDiscoveryJob"));
  return headers;

}




