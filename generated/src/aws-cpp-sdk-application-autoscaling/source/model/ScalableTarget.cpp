﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-autoscaling/model/ScalableTarget.h>
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

ScalableTarget::ScalableTarget(JsonView jsonValue)
{
  *this = jsonValue;
}

ScalableTarget& ScalableTarget::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ServiceNamespace"))
  {
    m_serviceNamespace = ServiceNamespaceMapper::GetServiceNamespaceForName(jsonValue.GetString("ServiceNamespace"));
    m_serviceNamespaceHasBeenSet = true;
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
  if(jsonValue.ValueExists("MinCapacity"))
  {
    m_minCapacity = jsonValue.GetInteger("MinCapacity");
    m_minCapacityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MaxCapacity"))
  {
    m_maxCapacity = jsonValue.GetInteger("MaxCapacity");
    m_maxCapacityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PredictedCapacity"))
  {
    m_predictedCapacity = jsonValue.GetInteger("PredictedCapacity");
    m_predictedCapacityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RoleARN"))
  {
    m_roleARN = jsonValue.GetString("RoleARN");
    m_roleARNHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SuspendedState"))
  {
    m_suspendedState = jsonValue.GetObject("SuspendedState");
    m_suspendedStateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ScalableTargetARN"))
  {
    m_scalableTargetARN = jsonValue.GetString("ScalableTargetARN");
    m_scalableTargetARNHasBeenSet = true;
  }
  return *this;
}

JsonValue ScalableTarget::Jsonize() const
{
  JsonValue payload;

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

  if(m_minCapacityHasBeenSet)
  {
   payload.WithInteger("MinCapacity", m_minCapacity);

  }

  if(m_maxCapacityHasBeenSet)
  {
   payload.WithInteger("MaxCapacity", m_maxCapacity);

  }

  if(m_predictedCapacityHasBeenSet)
  {
   payload.WithInteger("PredictedCapacity", m_predictedCapacity);

  }

  if(m_roleARNHasBeenSet)
  {
   payload.WithString("RoleARN", m_roleARN);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_suspendedStateHasBeenSet)
  {
   payload.WithObject("SuspendedState", m_suspendedState.Jsonize());

  }

  if(m_scalableTargetARNHasBeenSet)
  {
   payload.WithString("ScalableTargetARN", m_scalableTargetARN);

  }

  return payload;
}

} // namespace Model
} // namespace ApplicationAutoScaling
} // namespace Aws
