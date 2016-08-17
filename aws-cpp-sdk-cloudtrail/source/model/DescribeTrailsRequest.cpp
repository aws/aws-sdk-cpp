/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   Array<JsonValue> trailNameListJsonList(m_trailNameList.size());
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

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeTrailsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "com.amazonaws.cloudtrail.v20131101.CloudTrail_20131101.DescribeTrails"));
  return headers;

}



