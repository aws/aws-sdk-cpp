/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-autoscaling/model/ScheduledAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ApplicationAutoScaling
{
namespace Model
{

ScheduledAction::ScheduledAction() : 
    m_scheduledActionNameHasBeenSet(false),
    m_scheduledActionARNHasBeenSet(false),
    m_serviceNamespace(ServiceNamespace::NOT_SET),
    m_serviceNamespaceHasBeenSet(false),
    m_scheduleHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_scalableDimension(ScalableDimension::NOT_SET),
    m_scalableDimensionHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_scalableTargetActionHasBeenSet(false),
    m_creationTimeHasBeenSet(false)
{
}

ScheduledAction::ScheduledAction(JsonView jsonValue) : 
    m_scheduledActionNameHasBeenSet(false),
    m_scheduledActionARNHasBeenSet(false),
    m_serviceNamespace(ServiceNamespace::NOT_SET),
    m_serviceNamespaceHasBeenSet(false),
    m_scheduleHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_scalableDimension(ScalableDimension::NOT_SET),
    m_scalableDimensionHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_scalableTargetActionHasBeenSet(false),
    m_creationTimeHasBeenSet(false)
{
  *this = jsonValue;
}

ScheduledAction& ScheduledAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ScheduledActionName"))
  {
    m_scheduledActionName = jsonValue.GetString("ScheduledActionName");

    m_scheduledActionNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ScheduledActionARN"))
  {
    m_scheduledActionARN = jsonValue.GetString("ScheduledActionARN");

    m_scheduledActionARNHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServiceNamespace"))
  {
    m_serviceNamespace = ServiceNamespaceMapper::GetServiceNamespaceForName(jsonValue.GetString("ServiceNamespace"));

    m_serviceNamespaceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Schedule"))
  {
    m_schedule = jsonValue.GetString("Schedule");

    m_scheduleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceId"))
  {
    m_resourceId = jsonValue.GetString("ResourceId");

    m_resourceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ScalableDimension"))
  {
    m_scalableDimension = ScalableDimensionMapper::GetScalableDimensionForName(jsonValue.GetString("ScalableDimension"));

    m_scalableDimensionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetDouble("StartTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndTime"))
  {
    m_endTime = jsonValue.GetDouble("EndTime");

    m_endTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ScalableTargetAction"))
  {
    m_scalableTargetAction = jsonValue.GetObject("ScalableTargetAction");

    m_scalableTargetActionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue ScheduledAction::Jsonize() const
{
  JsonValue payload;

  if(m_scheduledActionNameHasBeenSet)
  {
   payload.WithString("ScheduledActionName", m_scheduledActionName);

  }

  if(m_scheduledActionARNHasBeenSet)
  {
   payload.WithString("ScheduledActionARN", m_scheduledActionARN);

  }

  if(m_serviceNamespaceHasBeenSet)
  {
   payload.WithString("ServiceNamespace", ServiceNamespaceMapper::GetNameForServiceNamespace(m_serviceNamespace));
  }

  if(m_scheduleHasBeenSet)
  {
   payload.WithString("Schedule", m_schedule);

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

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace ApplicationAutoScaling
} // namespace Aws
