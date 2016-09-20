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
#include <aws/codedeploy/model/DeploymentGroupInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeDeploy
{
namespace Model
{

DeploymentGroupInfo::DeploymentGroupInfo() : 
    m_applicationNameHasBeenSet(false),
    m_deploymentGroupIdHasBeenSet(false),
    m_deploymentGroupNameHasBeenSet(false),
    m_deploymentConfigNameHasBeenSet(false),
    m_ec2TagFiltersHasBeenSet(false),
    m_onPremisesInstanceTagFiltersHasBeenSet(false),
    m_autoScalingGroupsHasBeenSet(false),
    m_serviceRoleArnHasBeenSet(false),
    m_targetRevisionHasBeenSet(false),
    m_triggerConfigurationsHasBeenSet(false),
    m_alarmConfigurationHasBeenSet(false),
    m_autoRollbackConfigurationHasBeenSet(false)
{
}

DeploymentGroupInfo::DeploymentGroupInfo(const JsonValue& jsonValue) : 
    m_applicationNameHasBeenSet(false),
    m_deploymentGroupIdHasBeenSet(false),
    m_deploymentGroupNameHasBeenSet(false),
    m_deploymentConfigNameHasBeenSet(false),
    m_ec2TagFiltersHasBeenSet(false),
    m_onPremisesInstanceTagFiltersHasBeenSet(false),
    m_autoScalingGroupsHasBeenSet(false),
    m_serviceRoleArnHasBeenSet(false),
    m_targetRevisionHasBeenSet(false),
    m_triggerConfigurationsHasBeenSet(false),
    m_alarmConfigurationHasBeenSet(false),
    m_autoRollbackConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

DeploymentGroupInfo& DeploymentGroupInfo::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("applicationName"))
  {
    m_applicationName = jsonValue.GetString("applicationName");

    m_applicationNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("deploymentGroupId"))
  {
    m_deploymentGroupId = jsonValue.GetString("deploymentGroupId");

    m_deploymentGroupIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("deploymentGroupName"))
  {
    m_deploymentGroupName = jsonValue.GetString("deploymentGroupName");

    m_deploymentGroupNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("deploymentConfigName"))
  {
    m_deploymentConfigName = jsonValue.GetString("deploymentConfigName");

    m_deploymentConfigNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ec2TagFilters"))
  {
    Array<JsonValue> ec2TagFiltersJsonList = jsonValue.GetArray("ec2TagFilters");
    for(unsigned ec2TagFiltersIndex = 0; ec2TagFiltersIndex < ec2TagFiltersJsonList.GetLength(); ++ec2TagFiltersIndex)
    {
      m_ec2TagFilters.push_back(ec2TagFiltersJsonList[ec2TagFiltersIndex].AsObject());
    }
    m_ec2TagFiltersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("onPremisesInstanceTagFilters"))
  {
    Array<JsonValue> onPremisesInstanceTagFiltersJsonList = jsonValue.GetArray("onPremisesInstanceTagFilters");
    for(unsigned onPremisesInstanceTagFiltersIndex = 0; onPremisesInstanceTagFiltersIndex < onPremisesInstanceTagFiltersJsonList.GetLength(); ++onPremisesInstanceTagFiltersIndex)
    {
      m_onPremisesInstanceTagFilters.push_back(onPremisesInstanceTagFiltersJsonList[onPremisesInstanceTagFiltersIndex].AsObject());
    }
    m_onPremisesInstanceTagFiltersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("autoScalingGroups"))
  {
    Array<JsonValue> autoScalingGroupsJsonList = jsonValue.GetArray("autoScalingGroups");
    for(unsigned autoScalingGroupsIndex = 0; autoScalingGroupsIndex < autoScalingGroupsJsonList.GetLength(); ++autoScalingGroupsIndex)
    {
      m_autoScalingGroups.push_back(autoScalingGroupsJsonList[autoScalingGroupsIndex].AsObject());
    }
    m_autoScalingGroupsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("serviceRoleArn"))
  {
    m_serviceRoleArn = jsonValue.GetString("serviceRoleArn");

    m_serviceRoleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("targetRevision"))
  {
    m_targetRevision = jsonValue.GetObject("targetRevision");

    m_targetRevisionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("triggerConfigurations"))
  {
    Array<JsonValue> triggerConfigurationsJsonList = jsonValue.GetArray("triggerConfigurations");
    for(unsigned triggerConfigurationsIndex = 0; triggerConfigurationsIndex < triggerConfigurationsJsonList.GetLength(); ++triggerConfigurationsIndex)
    {
      m_triggerConfigurations.push_back(triggerConfigurationsJsonList[triggerConfigurationsIndex].AsObject());
    }
    m_triggerConfigurationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("alarmConfiguration"))
  {
    m_alarmConfiguration = jsonValue.GetObject("alarmConfiguration");

    m_alarmConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("autoRollbackConfiguration"))
  {
    m_autoRollbackConfiguration = jsonValue.GetObject("autoRollbackConfiguration");

    m_autoRollbackConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue DeploymentGroupInfo::Jsonize() const
{
  JsonValue payload;

  if(m_applicationNameHasBeenSet)
  {
   payload.WithString("applicationName", m_applicationName);

  }

  if(m_deploymentGroupIdHasBeenSet)
  {
   payload.WithString("deploymentGroupId", m_deploymentGroupId);

  }

  if(m_deploymentGroupNameHasBeenSet)
  {
   payload.WithString("deploymentGroupName", m_deploymentGroupName);

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
     autoScalingGroupsJsonList[autoScalingGroupsIndex].AsObject(m_autoScalingGroups[autoScalingGroupsIndex].Jsonize());
   }
   payload.WithArray("autoScalingGroups", std::move(autoScalingGroupsJsonList));

  }

  if(m_serviceRoleArnHasBeenSet)
  {
   payload.WithString("serviceRoleArn", m_serviceRoleArn);

  }

  if(m_targetRevisionHasBeenSet)
  {
   payload.WithObject("targetRevision", m_targetRevision.Jsonize());

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

  return payload;
}

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws