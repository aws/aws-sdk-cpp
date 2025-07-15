/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/ServiceRevision.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ECS
{
namespace Model
{

ServiceRevision::ServiceRevision(JsonView jsonValue)
{
  *this = jsonValue;
}

ServiceRevision& ServiceRevision::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("serviceRevisionArn"))
  {
    m_serviceRevisionArn = jsonValue.GetString("serviceRevisionArn");
    m_serviceRevisionArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("serviceArn"))
  {
    m_serviceArn = jsonValue.GetString("serviceArn");
    m_serviceArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("clusterArn"))
  {
    m_clusterArn = jsonValue.GetString("clusterArn");
    m_clusterArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("taskDefinition"))
  {
    m_taskDefinition = jsonValue.GetString("taskDefinition");
    m_taskDefinitionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("capacityProviderStrategy"))
  {
    Aws::Utils::Array<JsonView> capacityProviderStrategyJsonList = jsonValue.GetArray("capacityProviderStrategy");
    for(unsigned capacityProviderStrategyIndex = 0; capacityProviderStrategyIndex < capacityProviderStrategyJsonList.GetLength(); ++capacityProviderStrategyIndex)
    {
      m_capacityProviderStrategy.push_back(capacityProviderStrategyJsonList[capacityProviderStrategyIndex].AsObject());
    }
    m_capacityProviderStrategyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("launchType"))
  {
    m_launchType = LaunchTypeMapper::GetLaunchTypeForName(jsonValue.GetString("launchType"));
    m_launchTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("platformVersion"))
  {
    m_platformVersion = jsonValue.GetString("platformVersion");
    m_platformVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("platformFamily"))
  {
    m_platformFamily = jsonValue.GetString("platformFamily");
    m_platformFamilyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("loadBalancers"))
  {
    Aws::Utils::Array<JsonView> loadBalancersJsonList = jsonValue.GetArray("loadBalancers");
    for(unsigned loadBalancersIndex = 0; loadBalancersIndex < loadBalancersJsonList.GetLength(); ++loadBalancersIndex)
    {
      m_loadBalancers.push_back(loadBalancersJsonList[loadBalancersIndex].AsObject());
    }
    m_loadBalancersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("serviceRegistries"))
  {
    Aws::Utils::Array<JsonView> serviceRegistriesJsonList = jsonValue.GetArray("serviceRegistries");
    for(unsigned serviceRegistriesIndex = 0; serviceRegistriesIndex < serviceRegistriesJsonList.GetLength(); ++serviceRegistriesIndex)
    {
      m_serviceRegistries.push_back(serviceRegistriesJsonList[serviceRegistriesIndex].AsObject());
    }
    m_serviceRegistriesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("networkConfiguration"))
  {
    m_networkConfiguration = jsonValue.GetObject("networkConfiguration");
    m_networkConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("containerImages"))
  {
    Aws::Utils::Array<JsonView> containerImagesJsonList = jsonValue.GetArray("containerImages");
    for(unsigned containerImagesIndex = 0; containerImagesIndex < containerImagesJsonList.GetLength(); ++containerImagesIndex)
    {
      m_containerImages.push_back(containerImagesJsonList[containerImagesIndex].AsObject());
    }
    m_containerImagesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("guardDutyEnabled"))
  {
    m_guardDutyEnabled = jsonValue.GetBool("guardDutyEnabled");
    m_guardDutyEnabledHasBeenSet = true;
  }
  if(jsonValue.ValueExists("serviceConnectConfiguration"))
  {
    m_serviceConnectConfiguration = jsonValue.GetObject("serviceConnectConfiguration");
    m_serviceConnectConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("volumeConfigurations"))
  {
    Aws::Utils::Array<JsonView> volumeConfigurationsJsonList = jsonValue.GetArray("volumeConfigurations");
    for(unsigned volumeConfigurationsIndex = 0; volumeConfigurationsIndex < volumeConfigurationsJsonList.GetLength(); ++volumeConfigurationsIndex)
    {
      m_volumeConfigurations.push_back(volumeConfigurationsJsonList[volumeConfigurationsIndex].AsObject());
    }
    m_volumeConfigurationsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("fargateEphemeralStorage"))
  {
    m_fargateEphemeralStorage = jsonValue.GetObject("fargateEphemeralStorage");
    m_fargateEphemeralStorageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("vpcLatticeConfigurations"))
  {
    Aws::Utils::Array<JsonView> vpcLatticeConfigurationsJsonList = jsonValue.GetArray("vpcLatticeConfigurations");
    for(unsigned vpcLatticeConfigurationsIndex = 0; vpcLatticeConfigurationsIndex < vpcLatticeConfigurationsJsonList.GetLength(); ++vpcLatticeConfigurationsIndex)
    {
      m_vpcLatticeConfigurations.push_back(vpcLatticeConfigurationsJsonList[vpcLatticeConfigurationsIndex].AsObject());
    }
    m_vpcLatticeConfigurationsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("resolvedConfiguration"))
  {
    m_resolvedConfiguration = jsonValue.GetObject("resolvedConfiguration");
    m_resolvedConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue ServiceRevision::Jsonize() const
{
  JsonValue payload;

  if(m_serviceRevisionArnHasBeenSet)
  {
   payload.WithString("serviceRevisionArn", m_serviceRevisionArn);

  }

  if(m_serviceArnHasBeenSet)
  {
   payload.WithString("serviceArn", m_serviceArn);

  }

  if(m_clusterArnHasBeenSet)
  {
   payload.WithString("clusterArn", m_clusterArn);

  }

  if(m_taskDefinitionHasBeenSet)
  {
   payload.WithString("taskDefinition", m_taskDefinition);

  }

  if(m_capacityProviderStrategyHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> capacityProviderStrategyJsonList(m_capacityProviderStrategy.size());
   for(unsigned capacityProviderStrategyIndex = 0; capacityProviderStrategyIndex < capacityProviderStrategyJsonList.GetLength(); ++capacityProviderStrategyIndex)
   {
     capacityProviderStrategyJsonList[capacityProviderStrategyIndex].AsObject(m_capacityProviderStrategy[capacityProviderStrategyIndex].Jsonize());
   }
   payload.WithArray("capacityProviderStrategy", std::move(capacityProviderStrategyJsonList));

  }

  if(m_launchTypeHasBeenSet)
  {
   payload.WithString("launchType", LaunchTypeMapper::GetNameForLaunchType(m_launchType));
  }

  if(m_platformVersionHasBeenSet)
  {
   payload.WithString("platformVersion", m_platformVersion);

  }

  if(m_platformFamilyHasBeenSet)
  {
   payload.WithString("platformFamily", m_platformFamily);

  }

  if(m_loadBalancersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> loadBalancersJsonList(m_loadBalancers.size());
   for(unsigned loadBalancersIndex = 0; loadBalancersIndex < loadBalancersJsonList.GetLength(); ++loadBalancersIndex)
   {
     loadBalancersJsonList[loadBalancersIndex].AsObject(m_loadBalancers[loadBalancersIndex].Jsonize());
   }
   payload.WithArray("loadBalancers", std::move(loadBalancersJsonList));

  }

  if(m_serviceRegistriesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> serviceRegistriesJsonList(m_serviceRegistries.size());
   for(unsigned serviceRegistriesIndex = 0; serviceRegistriesIndex < serviceRegistriesJsonList.GetLength(); ++serviceRegistriesIndex)
   {
     serviceRegistriesJsonList[serviceRegistriesIndex].AsObject(m_serviceRegistries[serviceRegistriesIndex].Jsonize());
   }
   payload.WithArray("serviceRegistries", std::move(serviceRegistriesJsonList));

  }

  if(m_networkConfigurationHasBeenSet)
  {
   payload.WithObject("networkConfiguration", m_networkConfiguration.Jsonize());

  }

  if(m_containerImagesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> containerImagesJsonList(m_containerImages.size());
   for(unsigned containerImagesIndex = 0; containerImagesIndex < containerImagesJsonList.GetLength(); ++containerImagesIndex)
   {
     containerImagesJsonList[containerImagesIndex].AsObject(m_containerImages[containerImagesIndex].Jsonize());
   }
   payload.WithArray("containerImages", std::move(containerImagesJsonList));

  }

  if(m_guardDutyEnabledHasBeenSet)
  {
   payload.WithBool("guardDutyEnabled", m_guardDutyEnabled);

  }

  if(m_serviceConnectConfigurationHasBeenSet)
  {
   payload.WithObject("serviceConnectConfiguration", m_serviceConnectConfiguration.Jsonize());

  }

  if(m_volumeConfigurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> volumeConfigurationsJsonList(m_volumeConfigurations.size());
   for(unsigned volumeConfigurationsIndex = 0; volumeConfigurationsIndex < volumeConfigurationsJsonList.GetLength(); ++volumeConfigurationsIndex)
   {
     volumeConfigurationsJsonList[volumeConfigurationsIndex].AsObject(m_volumeConfigurations[volumeConfigurationsIndex].Jsonize());
   }
   payload.WithArray("volumeConfigurations", std::move(volumeConfigurationsJsonList));

  }

  if(m_fargateEphemeralStorageHasBeenSet)
  {
   payload.WithObject("fargateEphemeralStorage", m_fargateEphemeralStorage.Jsonize());

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_vpcLatticeConfigurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> vpcLatticeConfigurationsJsonList(m_vpcLatticeConfigurations.size());
   for(unsigned vpcLatticeConfigurationsIndex = 0; vpcLatticeConfigurationsIndex < vpcLatticeConfigurationsJsonList.GetLength(); ++vpcLatticeConfigurationsIndex)
   {
     vpcLatticeConfigurationsJsonList[vpcLatticeConfigurationsIndex].AsObject(m_vpcLatticeConfigurations[vpcLatticeConfigurationsIndex].Jsonize());
   }
   payload.WithArray("vpcLatticeConfigurations", std::move(vpcLatticeConfigurationsJsonList));

  }

  if(m_resolvedConfigurationHasBeenSet)
  {
   payload.WithObject("resolvedConfiguration", m_resolvedConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws
