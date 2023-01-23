/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/UpdateDeploymentGroupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeDeploy::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateDeploymentGroupRequest::UpdateDeploymentGroupRequest() : 
    m_applicationNameHasBeenSet(false),
    m_currentDeploymentGroupNameHasBeenSet(false),
    m_newDeploymentGroupNameHasBeenSet(false),
    m_deploymentConfigNameHasBeenSet(false),
    m_ec2TagFiltersHasBeenSet(false),
    m_onPremisesInstanceTagFiltersHasBeenSet(false),
    m_autoScalingGroupsHasBeenSet(false),
    m_serviceRoleArnHasBeenSet(false),
    m_triggerConfigurationsHasBeenSet(false),
    m_alarmConfigurationHasBeenSet(false),
    m_autoRollbackConfigurationHasBeenSet(false),
    m_outdatedInstancesStrategy(OutdatedInstancesStrategy::NOT_SET),
    m_outdatedInstancesStrategyHasBeenSet(false),
    m_deploymentStyleHasBeenSet(false),
    m_blueGreenDeploymentConfigurationHasBeenSet(false),
    m_loadBalancerInfoHasBeenSet(false),
    m_ec2TagSetHasBeenSet(false),
    m_ecsServicesHasBeenSet(false),
    m_onPremisesTagSetHasBeenSet(false)
{
}

Aws::String UpdateDeploymentGroupRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_applicationNameHasBeenSet)
  {
   payload.WithString("applicationName", m_applicationName);

  }

  if(m_currentDeploymentGroupNameHasBeenSet)
  {
   payload.WithString("currentDeploymentGroupName", m_currentDeploymentGroupName);

  }

  if(m_newDeploymentGroupNameHasBeenSet)
  {
   payload.WithString("newDeploymentGroupName", m_newDeploymentGroupName);

  }

  if(m_deploymentConfigNameHasBeenSet)
  {
   payload.WithString("deploymentConfigName", m_deploymentConfigName);

  }

  if(m_ec2TagFiltersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> ec2TagFiltersJsonList(m_ec2TagFilters.size());
   for(unsigned ec2TagFiltersIndex = 0; ec2TagFiltersIndex < ec2TagFiltersJsonList.GetLength(); ++ec2TagFiltersIndex)
   {
     ec2TagFiltersJsonList[ec2TagFiltersIndex].AsObject(m_ec2TagFilters[ec2TagFiltersIndex].Jsonize());
   }
   payload.WithArray("ec2TagFilters", std::move(ec2TagFiltersJsonList));

  }

  if(m_onPremisesInstanceTagFiltersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> onPremisesInstanceTagFiltersJsonList(m_onPremisesInstanceTagFilters.size());
   for(unsigned onPremisesInstanceTagFiltersIndex = 0; onPremisesInstanceTagFiltersIndex < onPremisesInstanceTagFiltersJsonList.GetLength(); ++onPremisesInstanceTagFiltersIndex)
   {
     onPremisesInstanceTagFiltersJsonList[onPremisesInstanceTagFiltersIndex].AsObject(m_onPremisesInstanceTagFilters[onPremisesInstanceTagFiltersIndex].Jsonize());
   }
   payload.WithArray("onPremisesInstanceTagFilters", std::move(onPremisesInstanceTagFiltersJsonList));

  }

  if(m_autoScalingGroupsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> autoScalingGroupsJsonList(m_autoScalingGroups.size());
   for(unsigned autoScalingGroupsIndex = 0; autoScalingGroupsIndex < autoScalingGroupsJsonList.GetLength(); ++autoScalingGroupsIndex)
   {
     autoScalingGroupsJsonList[autoScalingGroupsIndex].AsString(m_autoScalingGroups[autoScalingGroupsIndex]);
   }
   payload.WithArray("autoScalingGroups", std::move(autoScalingGroupsJsonList));

  }

  if(m_serviceRoleArnHasBeenSet)
  {
   payload.WithString("serviceRoleArn", m_serviceRoleArn);

  }

  if(m_triggerConfigurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> triggerConfigurationsJsonList(m_triggerConfigurations.size());
   for(unsigned triggerConfigurationsIndex = 0; triggerConfigurationsIndex < triggerConfigurationsJsonList.GetLength(); ++triggerConfigurationsIndex)
   {
     triggerConfigurationsJsonList[triggerConfigurationsIndex].AsObject(m_triggerConfigurations[triggerConfigurationsIndex].Jsonize());
   }
   payload.WithArray("triggerConfigurations", std::move(triggerConfigurationsJsonList));

  }

  if(m_alarmConfigurationHasBeenSet)
  {
   payload.WithObject("alarmConfiguration", m_alarmConfiguration.Jsonize());

  }

  if(m_autoRollbackConfigurationHasBeenSet)
  {
   payload.WithObject("autoRollbackConfiguration", m_autoRollbackConfiguration.Jsonize());

  }

  if(m_outdatedInstancesStrategyHasBeenSet)
  {
   payload.WithString("outdatedInstancesStrategy", OutdatedInstancesStrategyMapper::GetNameForOutdatedInstancesStrategy(m_outdatedInstancesStrategy));
  }

  if(m_deploymentStyleHasBeenSet)
  {
   payload.WithObject("deploymentStyle", m_deploymentStyle.Jsonize());

  }

  if(m_blueGreenDeploymentConfigurationHasBeenSet)
  {
   payload.WithObject("blueGreenDeploymentConfiguration", m_blueGreenDeploymentConfiguration.Jsonize());

  }

  if(m_loadBalancerInfoHasBeenSet)
  {
   payload.WithObject("loadBalancerInfo", m_loadBalancerInfo.Jsonize());

  }

  if(m_ec2TagSetHasBeenSet)
  {
   payload.WithObject("ec2TagSet", m_ec2TagSet.Jsonize());

  }

  if(m_ecsServicesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> ecsServicesJsonList(m_ecsServices.size());
   for(unsigned ecsServicesIndex = 0; ecsServicesIndex < ecsServicesJsonList.GetLength(); ++ecsServicesIndex)
   {
     ecsServicesJsonList[ecsServicesIndex].AsObject(m_ecsServices[ecsServicesIndex].Jsonize());
   }
   payload.WithArray("ecsServices", std::move(ecsServicesJsonList));

  }

  if(m_onPremisesTagSetHasBeenSet)
  {
   payload.WithObject("onPremisesTagSet", m_onPremisesTagSet.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateDeploymentGroupRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodeDeploy_20141006.UpdateDeploymentGroup"));
  return headers;

}




