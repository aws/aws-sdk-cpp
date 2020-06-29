/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-autoscaling/model/PutScheduledActionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ApplicationAutoScaling::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutScheduledActionRequest::PutScheduledActionRequest() : 
    m_serviceNamespace(ServiceNamespace::NOT_SET),
    m_serviceNamespaceHasBeenSet(false),
    m_scheduleHasBeenSet(false),
    m_scheduledActionNameHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_scalableDimension(ScalableDimension::NOT_SET),
    m_scalableDimensionHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_scalableTargetActionHasBeenSet(false)
{
}

Aws::String PutScheduledActionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_serviceNamespaceHasBeenSet)
  {
   payload.WithString("ServiceNamespace", ServiceNamespaceMapper::GetNameForServiceNamespace(m_serviceNamespace));
  }

  if(m_scheduleHasBeenSet)
  {
   payload.WithString("Schedule", m_schedule);

  }

  if(m_scheduledActionNameHasBeenSet)
  {
   payload.WithString("ScheduledActionName", m_scheduledActionName);

  }

  if(m_resourceIdHasBeenSet)
  {
   payload.WithString("ResourceId", m_resourceId);

  }

  if(m_scalableDimensionHasBeenSet)
  {
   payload.WithString("ScalableDimension", ScalableDimensionMapper::GetNameForScalableDimension(m_scalableDimension));
  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("StartTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("EndTime", m_endTime.SecondsWithMSPrecision());
  }

  if(m_scalableTargetActionHasBeenSet)
  {
   payload.WithObject("ScalableTargetAction", m_scalableTargetAction.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutScheduledActionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AnyScaleFrontendService.PutScheduledAction"));
  return headers;

}




