/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/EnvironmentBlueprintConfigurationItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

EnvironmentBlueprintConfigurationItem::EnvironmentBlueprintConfigurationItem() : 
    m_createdAtHasBeenSet(false),
    m_domainIdHasBeenSet(false),
    m_enabledRegionsHasBeenSet(false),
    m_environmentBlueprintIdHasBeenSet(false),
    m_manageAccessRoleArnHasBeenSet(false),
    m_provisioningRoleArnHasBeenSet(false),
    m_regionalParametersHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
}

EnvironmentBlueprintConfigurationItem::EnvironmentBlueprintConfigurationItem(JsonView jsonValue) : 
    m_createdAtHasBeenSet(false),
    m_domainIdHasBeenSet(false),
    m_enabledRegionsHasBeenSet(false),
    m_environmentBlueprintIdHasBeenSet(false),
    m_manageAccessRoleArnHasBeenSet(false),
    m_provisioningRoleArnHasBeenSet(false),
    m_regionalParametersHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
  *this = jsonValue;
}

EnvironmentBlueprintConfigurationItem& EnvironmentBlueprintConfigurationItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("domainId"))
  {
    m_domainId = jsonValue.GetString("domainId");

    m_domainIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("enabledRegions"))
  {
    Aws::Utils::Array<JsonView> enabledRegionsJsonList = jsonValue.GetArray("enabledRegions");
    for(unsigned enabledRegionsIndex = 0; enabledRegionsIndex < enabledRegionsJsonList.GetLength(); ++enabledRegionsIndex)
    {
      m_enabledRegions.push_back(enabledRegionsJsonList[enabledRegionsIndex].AsString());
    }
    m_enabledRegionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("environmentBlueprintId"))
  {
    m_environmentBlueprintId = jsonValue.GetString("environmentBlueprintId");

    m_environmentBlueprintIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("manageAccessRoleArn"))
  {
    m_manageAccessRoleArn = jsonValue.GetString("manageAccessRoleArn");

    m_manageAccessRoleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("provisioningRoleArn"))
  {
    m_provisioningRoleArn = jsonValue.GetString("provisioningRoleArn");

    m_provisioningRoleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("regionalParameters"))
  {
    Aws::Map<Aws::String, JsonView> regionalParametersJsonMap = jsonValue.GetObject("regionalParameters").GetAllObjects();
    for(auto& regionalParametersItem : regionalParametersJsonMap)
    {
      Aws::Map<Aws::String, JsonView> regionalParameterJsonMap = regionalParametersItem.second.GetAllObjects();
      Aws::Map<Aws::String, Aws::String> regionalParameterMap;
      for(auto& regionalParameterItem : regionalParameterJsonMap)
      {
        regionalParameterMap[regionalParameterItem.first] = regionalParameterItem.second.AsString();
      }
      m_regionalParameters[regionalParametersItem.first] = std::move(regionalParameterMap);
    }
    m_regionalParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetString("updatedAt");

    m_updatedAtHasBeenSet = true;
  }

  return *this;
}

JsonValue EnvironmentBlueprintConfigurationItem::Jsonize() const
{
  JsonValue payload;

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_domainIdHasBeenSet)
  {
   payload.WithString("domainId", m_domainId);

  }

  if(m_enabledRegionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> enabledRegionsJsonList(m_enabledRegions.size());
   for(unsigned enabledRegionsIndex = 0; enabledRegionsIndex < enabledRegionsJsonList.GetLength(); ++enabledRegionsIndex)
   {
     enabledRegionsJsonList[enabledRegionsIndex].AsString(m_enabledRegions[enabledRegionsIndex]);
   }
   payload.WithArray("enabledRegions", std::move(enabledRegionsJsonList));

  }

  if(m_environmentBlueprintIdHasBeenSet)
  {
   payload.WithString("environmentBlueprintId", m_environmentBlueprintId);

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

  if(m_updatedAtHasBeenSet)
  {
   payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
