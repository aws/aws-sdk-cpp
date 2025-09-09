/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/PutEnvironmentBlueprintConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DataZone::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String PutEnvironmentBlueprintConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_enabledRegionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> enabledRegionsJsonList(m_enabledRegions.size());
   for(unsigned enabledRegionsIndex = 0; enabledRegionsIndex < enabledRegionsJsonList.GetLength(); ++enabledRegionsIndex)
   {
     enabledRegionsJsonList[enabledRegionsIndex].AsString(m_enabledRegions[enabledRegionsIndex]);
   }
   payload.WithArray("enabledRegions", std::move(enabledRegionsJsonList));

  }

  if(m_environmentRolePermissionBoundaryHasBeenSet)
  {
   payload.WithString("environmentRolePermissionBoundary", m_environmentRolePermissionBoundary);

  }

  if(m_globalParametersHasBeenSet)
  {
   JsonValue globalParametersJsonMap;
   for(auto& globalParametersItem : m_globalParameters)
   {
     globalParametersJsonMap.WithString(globalParametersItem.first, globalParametersItem.second);
   }
   payload.WithObject("globalParameters", std::move(globalParametersJsonMap));

  }

  if(m_manageAccessRoleArnHasBeenSet)
  {
   payload.WithString("manageAccessRoleArn", m_manageAccessRoleArn);

  }

  if(m_provisioningConfigurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> provisioningConfigurationsJsonList(m_provisioningConfigurations.size());
   for(unsigned provisioningConfigurationsIndex = 0; provisioningConfigurationsIndex < provisioningConfigurationsJsonList.GetLength(); ++provisioningConfigurationsIndex)
   {
     provisioningConfigurationsJsonList[provisioningConfigurationsIndex].AsObject(m_provisioningConfigurations[provisioningConfigurationsIndex].Jsonize());
   }
   payload.WithArray("provisioningConfigurations", std::move(provisioningConfigurationsJsonList));

  }

  if(m_provisioningRoleArnHasBeenSet)
  {
   payload.WithString("provisioningRoleArn", m_provisioningRoleArn);

  }

  if(m_regionalParametersHasBeenSet)
  {
   JsonValue regionalParametersJsonMap;
   for(auto& regionalParametersItem : m_regionalParameters)
   {
     JsonValue regionalParameterJsonMap;
     for(auto& regionalParameterItem : regionalParametersItem.second)
     {
       regionalParameterJsonMap.WithString(regionalParameterItem.first, regionalParameterItem.second);
     }
     regionalParametersJsonMap.WithObject(regionalParametersItem.first, std::move(regionalParameterJsonMap));
   }
   payload.WithObject("regionalParameters", std::move(regionalParametersJsonMap));

  }

  return payload.View().WriteReadable();
}




