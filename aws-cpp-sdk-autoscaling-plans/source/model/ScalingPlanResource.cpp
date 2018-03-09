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

#include <aws/autoscaling-plans/model/ScalingPlanResource.h>
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

ScalingPlanResource::ScalingPlanResource() : 
    m_scalingPlanNameHasBeenSet(false),
    m_scalingPlanVersion(0),
    m_scalingPlanVersionHasBeenSet(false),
    m_serviceNamespace(ServiceNamespace::NOT_SET),
    m_serviceNamespaceHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_scalableDimension(ScalableDimension::NOT_SET),
    m_scalableDimensionHasBeenSet(false),
    m_scalingPoliciesHasBeenSet(false),
    m_scalingStatusCode(ScalingStatusCode::NOT_SET),
    m_scalingStatusCodeHasBeenSet(false),
    m_scalingStatusMessageHasBeenSet(false)
{
}

ScalingPlanResource::ScalingPlanResource(const JsonValue& jsonValue) : 
    m_scalingPlanNameHasBeenSet(false),
    m_scalingPlanVersion(0),
    m_scalingPlanVersionHasBeenSet(false),
    m_serviceNamespace(ServiceNamespace::NOT_SET),
    m_serviceNamespaceHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_scalableDimension(ScalableDimension::NOT_SET),
    m_scalableDimensionHasBeenSet(false),
    m_scalingPoliciesHasBeenSet(false),
    m_scalingStatusCode(ScalingStatusCode::NOT_SET),
    m_scalingStatusCodeHasBeenSet(false),
    m_scalingStatusMessageHasBeenSet(false)
{
  *this = jsonValue;
}

ScalingPlanResource& ScalingPlanResource::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("ScalingPlanName"))
  {
    m_scalingPlanName = jsonValue.GetString("ScalingPlanName");

    m_scalingPlanNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ScalingPlanVersion"))
  {
    m_scalingPlanVersion = jsonValue.GetInt64("ScalingPlanVersion");

    m_scalingPlanVersionHasBeenSet = true;
  }

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

  if(jsonValue.ValueExists("ScalingPolicies"))
  {
    Array<JsonValue> scalingPoliciesJsonList = jsonValue.GetArray("ScalingPolicies");
    for(unsigned scalingPoliciesIndex = 0; scalingPoliciesIndex < scalingPoliciesJsonList.GetLength(); ++scalingPoliciesIndex)
    {
      m_scalingPolicies.push_back(scalingPoliciesJsonList[scalingPoliciesIndex].AsObject());
    }
    m_scalingPoliciesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ScalingStatusCode"))
  {
    m_scalingStatusCode = ScalingStatusCodeMapper::GetScalingStatusCodeForName(jsonValue.GetString("ScalingStatusCode"));

    m_scalingStatusCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ScalingStatusMessage"))
  {
    m_scalingStatusMessage = jsonValue.GetString("ScalingStatusMessage");

    m_scalingStatusMessageHasBeenSet = true;
  }

  return *this;
}

JsonValue ScalingPlanResource::Jsonize() const
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

  if(m_scalingPoliciesHasBeenSet)
  {
   Array<JsonValue> scalingPoliciesJsonList(m_scalingPolicies.size());
   for(unsigned scalingPoliciesIndex = 0; scalingPoliciesIndex < scalingPoliciesJsonList.GetLength(); ++scalingPoliciesIndex)
   {
     scalingPoliciesJsonList[scalingPoliciesIndex].AsObject(m_scalingPolicies[scalingPoliciesIndex].Jsonize());
   }
   payload.WithArray("ScalingPolicies", std::move(scalingPoliciesJsonList));

  }

  if(m_scalingStatusCodeHasBeenSet)
  {
   payload.WithString("ScalingStatusCode", ScalingStatusCodeMapper::GetNameForScalingStatusCode(m_scalingStatusCode));
  }

  if(m_scalingStatusMessageHasBeenSet)
  {
   payload.WithString("ScalingStatusMessage", m_scalingStatusMessage);

  }

  return payload;
}

} // namespace Model
} // namespace AutoScalingPlans
} // namespace Aws
