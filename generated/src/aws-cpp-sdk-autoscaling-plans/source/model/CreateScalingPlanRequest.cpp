/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling-plans/model/CreateScalingPlanRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AutoScalingPlans::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateScalingPlanRequest::CreateScalingPlanRequest() : 
    m_scalingPlanNameHasBeenSet(false),
    m_applicationSourceHasBeenSet(false),
    m_scalingInstructionsHasBeenSet(false)
{
}

Aws::String CreateScalingPlanRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_scalingPlanNameHasBeenSet)
  {
   payload.WithString("ScalingPlanName", m_scalingPlanName);

  }

  if(m_applicationSourceHasBeenSet)
  {
   payload.WithObject("ApplicationSource", m_applicationSource.Jsonize());

  }

  if(m_scalingInstructionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> scalingInstructionsJsonList(m_scalingInstructions.size());
   for(unsigned scalingInstructionsIndex = 0; scalingInstructionsIndex < scalingInstructionsJsonList.GetLength(); ++scalingInstructionsIndex)
   {
     scalingInstructionsJsonList[scalingInstructionsIndex].AsObject(m_scalingInstructions[scalingInstructionsIndex].Jsonize());
   }
   payload.WithArray("ScalingInstructions", std::move(scalingInstructionsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateScalingPlanRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AnyScaleScalingPlannerFrontendService.CreateScalingPlan"));
  return headers;

}




