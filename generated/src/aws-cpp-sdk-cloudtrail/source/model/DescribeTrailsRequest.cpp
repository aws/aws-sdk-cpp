/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail/model/DescribeTrailsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudTrail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeTrailsRequest::DescribeTrailsRequest() : 
    m_trailNameListHasBeenSet(false),
    m_includeShadowTrails(false),
    m_includeShadowTrailsHasBeenSet(false)
{
}

Aws::String DescribeTrailsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_trailNameListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> trailNameListJsonList(m_trailNameList.size());
   for(unsigned trailNameListIndex = 0; trailNameListIndex < trailNameListJsonList.GetLength(); ++trailNameListIndex)
   {
     trailNameListJsonList[trailNameListIndex].AsString(m_trailNameList[trailNameListIndex]);
   }
   payload.WithArray("trailNameList", std::move(trailNameListJsonList));

  }

  if(m_includeShadowTrailsHasBeenSet)
  {
   payload.WithBool("includeShadowTrails", m_includeShadowTrails);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeTrailsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "com.amazonaws.cloudtrail.v20131101.CloudTrail_20131101.DescribeTrails"));
  return headers;

}




