/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling-plans/model/DescribeScalingPlansRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AutoScalingPlans::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeScalingPlansRequest::DescribeScalingPlansRequest() : 
    m_scalingPlanNamesHasBeenSet(false),
    m_scalingPlanVersion(0),
    m_scalingPlanVersionHasBeenSet(false),
    m_applicationSourcesHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String DescribeScalingPlansRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_scalingPlanNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> scalingPlanNamesJsonList(m_scalingPlanNames.size());
   for(unsigned scalingPlanNamesIndex = 0; scalingPlanNamesIndex < scalingPlanNamesJsonList.GetLength(); ++scalingPlanNamesIndex)
   {
     scalingPlanNamesJsonList[scalingPlanNamesIndex].AsString(m_scalingPlanNames[scalingPlanNamesIndex]);
   }
   payload.WithArray("ScalingPlanNames", std::move(scalingPlanNamesJsonList));

  }

  if(m_scalingPlanVersionHasBeenSet)
  {
   payload.WithInt64("ScalingPlanVersion", m_scalingPlanVersion);

  }

  if(m_applicationSourcesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> applicationSourcesJsonList(m_applicationSources.size());
   for(unsigned applicationSourcesIndex = 0; applicationSourcesIndex < applicationSourcesJsonList.GetLength(); ++applicationSourcesIndex)
   {
     applicationSourcesJsonList[applicationSourcesIndex].AsObject(m_applicationSources[applicationSourcesIndex].Jsonize());
   }
   payload.WithArray("ApplicationSources", std::move(applicationSourcesJsonList));

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeScalingPlansRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AnyScaleScalingPlannerFrontendService.DescribeScalingPlans"));
  return headers;

}




