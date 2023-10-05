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

PutEnvironmentBlueprintConfigurationRequest::PutEnvironmentBlueprintConfigurationRequest() : 
    m_domainIdentifierHasBeenSet(false),
    m_enabledRegionsHasBeenSet(false),
    m_environmentBlueprintIdentifierHasBeenSet(false),
    m_manageAccessRoleArnHasBeenSet(false),
    m_provisioningRoleArnHasBeenSet(false),
    m_regionalParametersHasBeenSet(false)
{
}

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

  if(m_manageAccessRoleArnHasBeenSet)
  {
   payload.WithString("manageAccessRoleArn", m_manageAccessRoleArn);

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




