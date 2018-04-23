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

#include <aws/autoscaling-plans/model/UpdateScalingPlanRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AutoScalingPlans::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateScalingPlanRequest::UpdateScalingPlanRequest() : 
    m_applicationSourceHasBeenSet(false),
    m_scalingPlanNameHasBeenSet(false),
    m_scalingInstructionsHasBeenSet(false),
    m_scalingPlanVersion(0),
    m_scalingPlanVersionHasBeenSet(false)
{
}

Aws::String UpdateScalingPlanRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_applicationSourceHasBeenSet)
  {
   payload.WithObject("ApplicationSource", m_applicationSource.Jsonize());

  }

  if(m_scalingPlanNameHasBeenSet)
  {
   payload.WithString("ScalingPlanName", m_scalingPlanName);

  }

  if(m_scalingInstructionsHasBeenSet)
  {
   Array<JsonValue> scalingInstructionsJsonList(m_scalingInstructions.size());
   for(unsigned scalingInstructionsIndex = 0; scalingInstructionsIndex < scalingInstructionsJsonList.GetLength(); ++scalingInstructionsIndex)
   {
     scalingInstructionsJsonList[scalingInstructionsIndex].AsObject(m_scalingInstructions[scalingInstructionsIndex].Jsonize());
   }
   payload.WithArray("ScalingInstructions", std::move(scalingInstructionsJsonList));

  }

  if(m_scalingPlanVersionHasBeenSet)
  {
   payload.WithInt64("ScalingPlanVersion", m_scalingPlanVersion);

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateScalingPlanRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AnyScaleScalingPlannerFrontendService.UpdateScalingPlan"));
  return headers;

}




