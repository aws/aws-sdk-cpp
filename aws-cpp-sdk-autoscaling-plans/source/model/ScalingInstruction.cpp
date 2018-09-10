﻿/*
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

#include <aws/autoscaling-plans/model/ScalingInstruction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AutoScalingPlans
{
namespace Model
{

ScalingInstruction::ScalingInstruction() : 
    m_serviceNamespace(ServiceNamespace::NOT_SET),
    m_serviceNamespaceHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_scalableDimension(ScalableDimension::NOT_SET),
    m_scalableDimensionHasBeenSet(false),
    m_minCapacity(0),
    m_minCapacityHasBeenSet(false),
    m_maxCapacity(0),
    m_maxCapacityHasBeenSet(false),
    m_targetTrackingConfigurationsHasBeenSet(false)
{
}

ScalingInstruction::ScalingInstruction(JsonView jsonValue) : 
    m_serviceNamespace(ServiceNamespace::NOT_SET),
    m_serviceNamespaceHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_scalableDimension(ScalableDimension::NOT_SET),
    m_scalableDimensionHasBeenSet(false),
    m_minCapacity(0),
    m_minCapacityHasBeenSet(false),
    m_maxCapacity(0),
    m_maxCapacityHasBeenSet(false),
    m_targetTrackingConfigurationsHasBeenSet(false)
{
  *this = jsonValue;
}

ScalingInstruction& ScalingInstruction::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("TargetTrackingConfigurations"))
  {
    Array<JsonView> targetTrackingConfigurationsJsonList = jsonValue.GetArray("TargetTrackingConfigurations");
    for(unsigned targetTrackingConfigurationsIndex = 0; targetTrackingConfigurationsIndex < targetTrackingConfigurationsJsonList.GetLength(); ++targetTrackingConfigurationsIndex)
    {
      m_targetTrackingConfigurations.push_back(targetTrackingConfigurationsJsonList[targetTrackingConfigurationsIndex].AsObject());
    }
    m_targetTrackingConfigurationsHasBeenSet = true;
  }

  return *this;
}

JsonValue ScalingInstruction::Jsonize() const
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

  if(m_targetTrackingConfigurationsHasBeenSet)
  {
   Array<JsonValue> targetTrackingConfigurationsJsonList(m_targetTrackingConfigurations.size());
   for(unsigned targetTrackingConfigurationsIndex = 0; targetTrackingConfigurationsIndex < targetTrackingConfigurationsJsonList.GetLength(); ++targetTrackingConfigurationsIndex)
   {
     targetTrackingConfigurationsJsonList[targetTrackingConfigurationsIndex].AsObject(m_targetTrackingConfigurations[targetTrackingConfigurationsIndex].Jsonize());
   }
   payload.WithArray("TargetTrackingConfigurations", std::move(targetTrackingConfigurationsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace AutoScalingPlans
} // namespace Aws
