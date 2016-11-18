/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
    m_autoRollbackConfigurationHasBeenSet(false)
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
   Array<JsonValue> ec2TagFiltersJsonList(m_ec2TagFilters.size());
   for(unsigned ec2TagFiltersIndex = 0; ec2TagFiltersIndex < ec2TagFiltersJsonList.GetLength(); ++ec2TagFiltersIndex)
   {
     ec2TagFiltersJsonList[ec2TagFiltersIndex].AsObject(m_ec2TagFilters[ec2TagFiltersIndex].Jsonize());
   }
   payload.WithArray("ec2TagFilters", std::move(ec2TagFiltersJsonList));

  }

  if(m_onPremisesInstanceTagFiltersHasBeenSet)
  {
   Array<JsonValue> onPremisesInstanceTagFiltersJsonList(m_onPremisesInstanceTagFilters.size());
   for(unsigned onPremisesInstanceTagFiltersIndex = 0; onPremisesInstanceTagFiltersIndex < onPremisesInstanceTagFiltersJsonList.GetLength(); ++onPremisesInstanceTagFiltersIndex)
   {
     onPremisesInstanceTagFiltersJsonList[onPremisesInstanceTagFiltersIndex].AsObject(m_onPremisesInstanceTagFilters[onPremisesInstanceTagFiltersIndex].Jsonize());
   }
   payload.WithArray("onPremisesInstanceTagFilters", std::move(onPremisesInstanceTagFiltersJsonList));

  }

  if(m_autoScalingGroupsHasBeenSet)
  {
   Array<JsonValue> autoScalingGroupsJsonList(m_autoScalingGroups.size());
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
   Array<JsonValue> triggerConfigurationsJsonList(m_triggerConfigurations.size());
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

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateDeploymentGroupRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodeDeploy_20141006.UpdateDeploymentGroup"));
  return headers;

}



