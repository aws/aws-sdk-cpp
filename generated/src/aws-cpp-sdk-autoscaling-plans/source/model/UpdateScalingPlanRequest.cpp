/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling-plans/model/UpdateScalingPlanRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AutoScalingPlans::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateScalingPlanRequest::UpdateScalingPlanRequest() : 
    m_scalingPlanNameHasBeenSet(false),
    m_scalingPlanVersion(0),
    m_scalingPlanVersionHasBeenSet(false),
    m_applicationSourceHasBeenSet(false),
    m_scalingInstructionsHasBeenSet(false)
{
}

Aws::String UpdateScalingPlanRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_scalingPlanNameHasBeenSet)
  {
   payload.WithString("ScalingPlanName", m_scalingPlanName);

  }

  if(m_scalingPlanVersionHasBeenSet)
  {
   payload.WithInt64("ScalingPlanVersion", m_scalingPlanVersion);

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

Aws::Http::HeaderValueCollection UpdateScalingPlanRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AnyScaleScalingPlannerFrontendService.UpdateScalingPlan"));
  return headers;

}




