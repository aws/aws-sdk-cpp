/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_autoRollbackConfigurationHasBeenSet(false),
    m_deploymentStyleHasBeenSet(false),
    m_outdatedInstancesStrategy(OutdatedInstancesStrategy::NOT_SET),
    m_outdatedInstancesStrategyHasBeenSet(false),
    m_blueGreenDeploymentConfigurationHasBeenSet(false),
    m_loadBalancerInfoHasBeenSet(false),
    m_lastSuccessfulDeploymentHasBeenSet(false),
    m_lastAttemptedDeploymentHasBeenSet(false),
    m_ec2TagSetHasBeenSet(false),
    m_onPremisesTagSetHasBeenSet(false),
    m_computePlatform(ComputePlatform::NOT_SET),
    m_computePlatformHasBeenSet(false),
    m_ecsServicesHasBeenSet(false)
{
}

DeploymentGroupInfo::DeploymentGroupInfo(JsonView jsonValue) : 
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
    m_autoRollbackConfigurationHasBeenSet(false),
    m_deploymentStyleHasBeenSet(false),
    m_outdatedInstancesStrategy(OutdatedInstancesStrategy::NOT_SET),
    m_outdatedInstancesStrategyHasBeenSet(false),
    m_blueGreenDeploymentConfigurationHasBeenSet(false),
    m_loadBalancerInfoHasBeenSet(false),
    m_lastSuccessfulDeploymentHasBeenSet(false),
    m_lastAttemptedDeploymentHasBeenSet(false),
    m_ec2TagSetHasBeenSet(false),
    m_onPremisesTagSetHasBeenSet(false),
    m_computePlatform(ComputePlatform::NOT_SET),
    m_computePlatformHasBeenSet(false),
    m_ecsServicesHasBeenSet(false)
{
  *this = jsonValue;
}

DeploymentGroupInfo& DeploymentGroupInfo::operator =(JsonView jsonValue)
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
    Aws::Utils::Array<JsonView> ec2TagFiltersJsonList = jsonValue.GetArray("ec2TagFilters");
    for(unsigned ec2TagFiltersIndex = 0; ec2TagFiltersIndex < ec2TagFiltersJsonList.GetLength(); ++ec2TagFiltersIndex)
    {
      m_ec2TagFilters.push_back(ec2TagFiltersJsonList[ec2TagFiltersIndex].AsObject());
    }
    m_ec2TagFiltersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("onPremisesInstanceTagFilters"))
  {
    Aws::Utils::Array<JsonView> onPremisesInstanceTagFiltersJsonList = jsonValue.GetArray("onPremisesInstanceTagFilters");
    for(unsigned onPremisesInstanceTagFiltersIndex = 0; onPremisesInstanceTagFiltersIndex < onPremisesInstanceTagFiltersJsonList.GetLength(); ++onPremisesInstanceTagFiltersIndex)
    {
      m_onPremisesInstanceTagFilters.push_back(onPremisesInstanceTagFiltersJsonList[onPremisesInstanceTagFiltersIndex].AsObject());
    }
    m_onPremisesInstanceTagFiltersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("autoScalingGroups"))
  {
    Aws::Utils::Array<JsonView> autoScalingGroupsJsonList = jsonValue.GetArray("autoScalingGroups");
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
    Aws::Utils::Array<JsonView> triggerConfigurationsJsonList = jsonValue.GetArray("triggerConfigurations");
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

  if(jsonValue.ValueExists("deploymentStyle"))
  {
    m_deploymentStyle = jsonValue.GetObject("deploymentStyle");

    m_deploymentStyleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("outdatedInstancesStrategy"))
  {
    m_outdatedInstancesStrategy = OutdatedInstancesStrategyMapper::GetOutdatedInstancesStrategyForName(jsonValue.GetString("outdatedInstancesStrategy"));

    m_outdatedInstancesStrategyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("blueGreenDeploymentConfiguration"))
  {
    m_blueGreenDeploymentConfiguration = jsonValue.GetObject("blueGreenDeploymentConfiguration");

    m_blueGreenDeploymentConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("loadBalancerInfo"))
  {
    m_loadBalancerInfo = jsonValue.GetObject("loadBalancerInfo");

    m_loadBalancerInfoHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastSuccessfulDeployment"))
  {
    m_lastSuccessfulDeployment = jsonValue.GetObject("lastSuccessfulDeployment");

    m_lastSuccessfulDeploymentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastAttemptedDeployment"))
  {
    m_lastAttemptedDeployment = jsonValue.GetObject("lastAttemptedDeployment");

    m_lastAttemptedDeploymentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ec2TagSet"))
  {
    m_ec2TagSet = jsonValue.GetObject("ec2TagSet");

    m_ec2TagSetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("onPremisesTagSet"))
  {
    m_onPremisesTagSet = jsonValue.GetObject("onPremisesTagSet");

    m_onPremisesTagSetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("computePlatform"))
  {
    m_computePlatform = ComputePlatformMapper::GetComputePlatformForName(jsonValue.GetString("computePlatform"));

    m_computePlatformHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ecsServices"))
  {
    Aws::Utils::Array<JsonView> ecsServicesJsonList = jsonValue.GetArray("ecsServices");
    for(unsigned ecsServicesIndex = 0; ecsServicesIndex < ecsServicesJsonList.GetLength(); ++ecsServicesIndex)
    {
      m_ecsServices.push_back(ecsServicesJsonList[ecsServicesIndex].AsObject());
    }
    m_ecsServicesHasBeenSet = true;
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

  if(m_deploymentStyleHasBeenSet)
  {
   payload.WithObject("deploymentStyle", m_deploymentStyle.Jsonize());

  }

  if(m_outdatedInstancesStrategyHasBeenSet)
  {
   payload.WithString("outdatedInstancesStrategy", OutdatedInstancesStrategyMapper::GetNameForOutdatedInstancesStrategy(m_outdatedInstancesStrategy));
  }

  if(m_blueGreenDeploymentConfigurationHasBeenSet)
  {
   payload.WithObject("blueGreenDeploymentConfiguration", m_blueGreenDeploymentConfiguration.Jsonize());

  }

  if(m_loadBalancerInfoHasBeenSet)
  {
   payload.WithObject("loadBalancerInfo", m_loadBalancerInfo.Jsonize());

  }

  if(m_lastSuccessfulDeploymentHasBeenSet)
  {
   payload.WithObject("lastSuccessfulDeployment", m_lastSuccessfulDeployment.Jsonize());

  }

  if(m_lastAttemptedDeploymentHasBeenSet)
  {
   payload.WithObject("lastAttemptedDeployment", m_lastAttemptedDeployment.Jsonize());

  }

  if(m_ec2TagSetHasBeenSet)
  {
   payload.WithObject("ec2TagSet", m_ec2TagSet.Jsonize());

  }

  if(m_onPremisesTagSetHasBeenSet)
  {
   payload.WithObject("onPremisesTagSet", m_onPremisesTagSet.Jsonize());

  }

  if(m_computePlatformHasBeenSet)
  {
   payload.WithString("computePlatform", ComputePlatformMapper::GetNameForComputePlatform(m_computePlatform));
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

  return payload;
}

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
