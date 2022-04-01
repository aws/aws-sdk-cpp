/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling-plans/model/GetScalingPlanResourceForecastDataRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AutoScalingPlans::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetScalingPlanResourceForecastDataRequest::GetScalingPlanResourceForecastDataRequest() : 
    m_scalingPlanNameHasBeenSet(false),
    m_scalingPlanVersion(0),
    m_scalingPlanVersionHasBeenSet(false),
    m_serviceNamespace(ServiceNamespace::NOT_SET),
    m_serviceNamespaceHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_scalableDimension(ScalableDimension::NOT_SET),
    m_scalableDimensionHasBeenSet(false),
    m_forecastDataType(ForecastDataType::NOT_SET),
    m_forecastDataTypeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
}

Aws::String GetScalingPlanResourceForecastDataRequest::SerializePayload() const
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

  if(m_serviceNamespaceHasBeenSet)
  {
   payload.WithString("ServiceNamespace", ServiceNamespaceMapper::GetNameForServiceNamespace(m_serviceNamespace));
  }

  if(m_resourceIdHasBeenSet)
  {
   payload.WithString("ResourceId", m_resourceId);

  }

  if(m_scalableDimensionHasBeenSet)
  {
   payload.WithString("ScalableDimension", ScalableDimensionMapper::GetNameForScalableDimension(m_scalableDimension));
  }

  if(m_forecastDataTypeHasBeenSet)
  {
   payload.WithString("ForecastDataType", ForecastDataTypeMapper::GetNameForForecastDataType(m_forecastDataType));
  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("StartTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("EndTime", m_endTime.SecondsWithMSPrecision());
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetScalingPlanResourceForecastDataRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AnyScaleScalingPlannerFrontendService.GetScalingPlanResourceForecastData"));
  return headers;

}




