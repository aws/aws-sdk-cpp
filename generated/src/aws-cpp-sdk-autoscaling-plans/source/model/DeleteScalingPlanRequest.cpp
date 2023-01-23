/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling-plans/model/DeleteScalingPlanRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AutoScalingPlans::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteScalingPlanRequest::DeleteScalingPlanRequest() : 
    m_scalingPlanNameHasBeenSet(false),
    m_scalingPlanVersion(0),
    m_scalingPlanVersionHasBeenSet(false)
{
}

Aws::String DeleteScalingPlanRequest::SerializePayload() const
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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteScalingPlanRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AnyScaleScalingPlannerFrontendService.DeleteScalingPlan"));
  return headers;

}




