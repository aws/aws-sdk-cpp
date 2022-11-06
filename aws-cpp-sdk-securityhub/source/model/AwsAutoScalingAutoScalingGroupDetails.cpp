/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsAutoScalingAutoScalingGroupDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsAutoScalingAutoScalingGroupDetails::AwsAutoScalingAutoScalingGroupDetails() : 
    m_launchConfigurationNameHasBeenSet(false),
    m_loadBalancerNamesHasBeenSet(false),
    m_healthCheckTypeHasBeenSet(false),
    m_healthCheckGracePeriod(0),
    m_healthCheckGracePeriodHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_mixedInstancesPolicyHasBeenSet(false),
    m_availabilityZonesHasBeenSet(false),
    m_launchTemplateHasBeenSet(false),
    m_capacityRebalance(false),
    m_capacityRebalanceHasBeenSet(false)
{
}

AwsAutoScalingAutoScalingGroupDetails::AwsAutoScalingAutoScalingGroupDetails(JsonView jsonValue) : 
    m_launchConfigurationNameHasBeenSet(false),
    m_loadBalancerNamesHasBeenSet(false),
    m_healthCheckTypeHasBeenSet(false),
    m_healthCheckGracePeriod(0),
    m_healthCheckGracePeriodHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_mixedInstancesPolicyHasBeenSet(false),
    m_availabilityZonesHasBeenSet(false),
    m_launchTemplateHasBeenSet(false),
    m_capacityRebalance(false),
    m_capacityRebalanceHasBeenSet(false)
{
  *this = jsonValue;
}

AwsAutoScalingAutoScalingGroupDetails& AwsAutoScalingAutoScalingGroupDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LaunchConfigurationName"))
  {
    m_launchConfigurationName = jsonValue.GetString("LaunchConfigurationName");

    m_launchConfigurationNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LoadBalancerNames"))
  {
    Aws::Utils::Array<JsonView> loadBalancerNamesJsonList = jsonValue.GetArray("LoadBalancerNames");
    for(unsigned loadBalancerNamesIndex = 0; loadBalancerNamesIndex < loadBalancerNamesJsonList.GetLength(); ++loadBalancerNamesIndex)
    {
      m_loadBalancerNames.push_back(loadBalancerNamesJsonList[loadBalancerNamesIndex].AsString());
    }
    m_loadBalancerNamesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HealthCheckType"))
  {
    m_healthCheckType = jsonValue.GetString("HealthCheckType");

    m_healthCheckTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HealthCheckGracePeriod"))
  {
    m_healthCheckGracePeriod = jsonValue.GetInteger("HealthCheckGracePeriod");

    m_healthCheckGracePeriodHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedTime"))
  {
    m_createdTime = jsonValue.GetString("CreatedTime");

    m_createdTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MixedInstancesPolicy"))
  {
    m_mixedInstancesPolicy = jsonValue.GetObject("MixedInstancesPolicy");

    m_mixedInstancesPolicyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AvailabilityZones"))
  {
    Aws::Utils::Array<JsonView> availabilityZonesJsonList = jsonValue.GetArray("AvailabilityZones");
    for(unsigned availabilityZonesIndex = 0; availabilityZonesIndex < availabilityZonesJsonList.GetLength(); ++availabilityZonesIndex)
    {
      m_availabilityZones.push_back(availabilityZonesJsonList[availabilityZonesIndex].AsObject());
    }
    m_availabilityZonesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LaunchTemplate"))
  {
    m_launchTemplate = jsonValue.GetObject("LaunchTemplate");

    m_launchTemplateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CapacityRebalance"))
  {
    m_capacityRebalance = jsonValue.GetBool("CapacityRebalance");

    m_capacityRebalanceHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsAutoScalingAutoScalingGroupDetails::Jsonize() const
{
  JsonValue payload;

  if(m_launchConfigurationNameHasBeenSet)
  {
   payload.WithString("LaunchConfigurationName", m_launchConfigurationName);

  }

  if(m_loadBalancerNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> loadBalancerNamesJsonList(m_loadBalancerNames.size());
   for(unsigned loadBalancerNamesIndex = 0; loadBalancerNamesIndex < loadBalancerNamesJsonList.GetLength(); ++loadBalancerNamesIndex)
   {
     loadBalancerNamesJsonList[loadBalancerNamesIndex].AsString(m_loadBalancerNames[loadBalancerNamesIndex]);
   }
   payload.WithArray("LoadBalancerNames", std::move(loadBalancerNamesJsonList));

  }

  if(m_healthCheckTypeHasBeenSet)
  {
   payload.WithString("HealthCheckType", m_healthCheckType);

  }

  if(m_healthCheckGracePeriodHasBeenSet)
  {
   payload.WithInteger("HealthCheckGracePeriod", m_healthCheckGracePeriod);

  }

  if(m_createdTimeHasBeenSet)
  {
   payload.WithString("CreatedTime", m_createdTime);

  }

  if(m_mixedInstancesPolicyHasBeenSet)
  {
   payload.WithObject("MixedInstancesPolicy", m_mixedInstancesPolicy.Jsonize());

  }

  if(m_availabilityZonesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> availabilityZonesJsonList(m_availabilityZones.size());
   for(unsigned availabilityZonesIndex = 0; availabilityZonesIndex < availabilityZonesJsonList.GetLength(); ++availabilityZonesIndex)
   {
     availabilityZonesJsonList[availabilityZonesIndex].AsObject(m_availabilityZones[availabilityZonesIndex].Jsonize());
   }
   payload.WithArray("AvailabilityZones", std::move(availabilityZonesJsonList));

  }

  if(m_launchTemplateHasBeenSet)
  {
   payload.WithObject("LaunchTemplate", m_launchTemplate.Jsonize());

  }

  if(m_capacityRebalanceHasBeenSet)
  {
   payload.WithBool("CapacityRebalance", m_capacityRebalance);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
