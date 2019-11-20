/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/cloudtrail/model/PutInsightSelectorsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudTrail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutInsightSelectorsRequest::PutInsightSelectorsRequest() : 
    m_trailNameHasBeenSet(false),
    m_insightSelectorsHasBeenSet(false)
{
}

Aws::String PutInsightSelectorsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_trailNameHasBeenSet)
  {
   payload.WithString("TrailName", m_trailName);

  }

  if(m_insightSelectorsHasBeenSet)
  {
   Array<JsonValue> insightSelectorsJsonList(m_insightSelectors.size());
   for(unsigned insightSelectorsIndex = 0; insightSelectorsIndex < insightSelectorsJsonList.GetLength(); ++insightSelectorsIndex)
   {
     insightSelectorsJsonList[insightSelectorsIndex].AsObject(m_insightSelectors[insightSelectorsIndex].Jsonize());
   }
   payload.WithArray("InsightSelectors", std::move(insightSelectorsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutInsightSelectorsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "com.amazonaws.cloudtrail.v20131101.CloudTrail_20131101.PutInsightSelectors"));
  return headers;

}




