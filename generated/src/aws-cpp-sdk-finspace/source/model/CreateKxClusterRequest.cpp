/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace/model/CreateKxClusterRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::finspace::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateKxClusterRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_clusterNameHasBeenSet)
  {
   payload.WithString("clusterName", m_clusterName);

  }

  if(m_clusterTypeHasBeenSet)
  {
   payload.WithString("clusterType", KxClusterTypeMapper::GetNameForKxClusterType(m_clusterType));
  }

  if(m_tickerplantLogConfigurationHasBeenSet)
  {
   payload.WithObject("tickerplantLogConfiguration", m_tickerplantLogConfiguration.Jsonize());

  }

  if(m_databasesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> databasesJsonList(m_databases.size());
   for(unsigned databasesIndex = 0; databasesIndex < databasesJsonList.GetLength(); ++databasesIndex)
   {
     databasesJsonList[databasesIndex].AsObject(m_databases[databasesIndex].Jsonize());
   }
   payload.WithArray("databases", std::move(databasesJsonList));

  }

  if(m_cacheStorageConfigurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> cacheStorageConfigurationsJsonList(m_cacheStorageConfigurations.size());
   for(unsigned cacheStorageConfigurationsIndex = 0; cacheStorageConfigurationsIndex < cacheStorageConfigurationsJsonList.GetLength(); ++cacheStorageConfigurationsIndex)
   {
     cacheStorageConfigurationsJsonList[cacheStorageConfigurationsIndex].AsObject(m_cacheStorageConfigurations[cacheStorageConfigurationsIndex].Jsonize());
   }
   payload.WithArray("cacheStorageConfigurations", std::move(cacheStorageConfigurationsJsonList));

  }

  if(m_autoScalingConfigurationHasBeenSet)
  {
   payload.WithObject("autoScalingConfiguration", m_autoScalingConfiguration.Jsonize());

  }

  if(m_clusterDescriptionHasBeenSet)
  {
   payload.WithString("clusterDescription", m_clusterDescription);

  }

  if(m_capacityConfigurationHasBeenSet)
  {
   payload.WithObject("capacityConfiguration", m_capacityConfiguration.Jsonize());

  }

  if(m_releaseLabelHasBeenSet)
  {
   payload.WithString("releaseLabel", m_releaseLabel);

  }

  if(m_vpcConfigurationHasBeenSet)
  {
   payload.WithObject("vpcConfiguration", m_vpcConfiguration.Jsonize());

  }

  if(m_initializationScriptHasBeenSet)
  {
   payload.WithString("initializationScript", m_initializationScript);

  }

  if(m_commandLineArgumentsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> commandLineArgumentsJsonList(m_commandLineArguments.size());
   for(unsigned commandLineArgumentsIndex = 0; commandLineArgumentsIndex < commandLineArgumentsJsonList.GetLength(); ++commandLineArgumentsIndex)
   {
     commandLineArgumentsJsonList[commandLineArgumentsIndex].AsObject(m_commandLineArguments[commandLineArgumentsIndex].Jsonize());
   }
   payload.WithArray("commandLineArguments", std::move(commandLineArgumentsJsonList));

  }

  if(m_codeHasBeenSet)
  {
   payload.WithObject("code", m_code.Jsonize());

  }

  if(m_executionRoleHasBeenSet)
  {
   payload.WithString("executionRole", m_executionRole);

  }

  if(m_savedownStorageConfigurationHasBeenSet)
  {
   payload.WithObject("savedownStorageConfiguration", m_savedownStorageConfiguration.Jsonize());

  }

  if(m_azModeHasBeenSet)
  {
   payload.WithString("azMode", KxAzModeMapper::GetNameForKxAzMode(m_azMode));
  }

  if(m_availabilityZoneIdHasBeenSet)
  {
   payload.WithString("availabilityZoneId", m_availabilityZoneId);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  if(m_scalingGroupConfigurationHasBeenSet)
  {
   payload.WithObject("scalingGroupConfiguration", m_scalingGroupConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}




