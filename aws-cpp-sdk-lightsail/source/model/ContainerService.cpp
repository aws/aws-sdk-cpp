/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/ContainerService.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Lightsail
{
namespace Model
{

ContainerService::ContainerService() : 
    m_containerServiceNameHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_resourceType(ResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_power(ContainerServicePowerName::NOT_SET),
    m_powerHasBeenSet(false),
    m_powerIdHasBeenSet(false),
    m_state(ContainerServiceState::NOT_SET),
    m_stateHasBeenSet(false),
    m_stateDetailHasBeenSet(false),
    m_scale(0),
    m_scaleHasBeenSet(false),
    m_currentDeploymentHasBeenSet(false),
    m_nextDeploymentHasBeenSet(false),
    m_isDisabled(false),
    m_isDisabledHasBeenSet(false),
    m_principalArnHasBeenSet(false),
    m_privateDomainNameHasBeenSet(false),
    m_publicDomainNamesHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_privateRegistryAccessHasBeenSet(false)
{
}

ContainerService::ContainerService(JsonView jsonValue) : 
    m_containerServiceNameHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_resourceType(ResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_power(ContainerServicePowerName::NOT_SET),
    m_powerHasBeenSet(false),
    m_powerIdHasBeenSet(false),
    m_state(ContainerServiceState::NOT_SET),
    m_stateHasBeenSet(false),
    m_stateDetailHasBeenSet(false),
    m_scale(0),
    m_scaleHasBeenSet(false),
    m_currentDeploymentHasBeenSet(false),
    m_nextDeploymentHasBeenSet(false),
    m_isDisabled(false),
    m_isDisabledHasBeenSet(false),
    m_principalArnHasBeenSet(false),
    m_privateDomainNameHasBeenSet(false),
    m_publicDomainNamesHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_privateRegistryAccessHasBeenSet(false)
{
  *this = jsonValue;
}

ContainerService& ContainerService::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("containerServiceName"))
  {
    m_containerServiceName = jsonValue.GetString("containerServiceName");

    m_containerServiceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("location"))
  {
    m_location = jsonValue.GetObject("location");

    m_locationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceType"))
  {
    m_resourceType = ResourceTypeMapper::GetResourceTypeForName(jsonValue.GetString("resourceType"));

    m_resourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("power"))
  {
    m_power = ContainerServicePowerNameMapper::GetContainerServicePowerNameForName(jsonValue.GetString("power"));

    m_powerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("powerId"))
  {
    m_powerId = jsonValue.GetString("powerId");

    m_powerIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("state"))
  {
    m_state = ContainerServiceStateMapper::GetContainerServiceStateForName(jsonValue.GetString("state"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stateDetail"))
  {
    m_stateDetail = jsonValue.GetObject("stateDetail");

    m_stateDetailHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scale"))
  {
    m_scale = jsonValue.GetInteger("scale");

    m_scaleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("currentDeployment"))
  {
    m_currentDeployment = jsonValue.GetObject("currentDeployment");

    m_currentDeploymentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("nextDeployment"))
  {
    m_nextDeployment = jsonValue.GetObject("nextDeployment");

    m_nextDeploymentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isDisabled"))
  {
    m_isDisabled = jsonValue.GetBool("isDisabled");

    m_isDisabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("principalArn"))
  {
    m_principalArn = jsonValue.GetString("principalArn");

    m_principalArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("privateDomainName"))
  {
    m_privateDomainName = jsonValue.GetString("privateDomainName");

    m_privateDomainNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("publicDomainNames"))
  {
    Aws::Map<Aws::String, JsonView> publicDomainNamesJsonMap = jsonValue.GetObject("publicDomainNames").GetAllObjects();
    for(auto& publicDomainNamesItem : publicDomainNamesJsonMap)
    {
      Aws::Utils::Array<JsonView> containerServicePublicDomainsListJsonList = publicDomainNamesItem.second.AsArray();
      Aws::Vector<Aws::String> containerServicePublicDomainsListList;
      containerServicePublicDomainsListList.reserve((size_t)containerServicePublicDomainsListJsonList.GetLength());
      for(unsigned containerServicePublicDomainsListIndex = 0; containerServicePublicDomainsListIndex < containerServicePublicDomainsListJsonList.GetLength(); ++containerServicePublicDomainsListIndex)
      {
        containerServicePublicDomainsListList.push_back(containerServicePublicDomainsListJsonList[containerServicePublicDomainsListIndex].AsString());
      }
      m_publicDomainNames[publicDomainNamesItem.first] = std::move(containerServicePublicDomainsListList);
    }
    m_publicDomainNamesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("url"))
  {
    m_url = jsonValue.GetString("url");

    m_urlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("privateRegistryAccess"))
  {
    m_privateRegistryAccess = jsonValue.GetObject("privateRegistryAccess");

    m_privateRegistryAccessHasBeenSet = true;
  }

  return *this;
}

JsonValue ContainerService::Jsonize() const
{
  JsonValue payload;

  if(m_containerServiceNameHasBeenSet)
  {
   payload.WithString("containerServiceName", m_containerServiceName);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_locationHasBeenSet)
  {
   payload.WithObject("location", m_location.Jsonize());

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("resourceType", ResourceTypeMapper::GetNameForResourceType(m_resourceType));
  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("tags", std::move(tagsJsonList));

  }

  if(m_powerHasBeenSet)
  {
   payload.WithString("power", ContainerServicePowerNameMapper::GetNameForContainerServicePowerName(m_power));
  }

  if(m_powerIdHasBeenSet)
  {
   payload.WithString("powerId", m_powerId);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("state", ContainerServiceStateMapper::GetNameForContainerServiceState(m_state));
  }

  if(m_stateDetailHasBeenSet)
  {
   payload.WithObject("stateDetail", m_stateDetail.Jsonize());

  }

  if(m_scaleHasBeenSet)
  {
   payload.WithInteger("scale", m_scale);

  }

  if(m_currentDeploymentHasBeenSet)
  {
   payload.WithObject("currentDeployment", m_currentDeployment.Jsonize());

  }

  if(m_nextDeploymentHasBeenSet)
  {
   payload.WithObject("nextDeployment", m_nextDeployment.Jsonize());

  }

  if(m_isDisabledHasBeenSet)
  {
   payload.WithBool("isDisabled", m_isDisabled);

  }

  if(m_principalArnHasBeenSet)
  {
   payload.WithString("principalArn", m_principalArn);

  }

  if(m_privateDomainNameHasBeenSet)
  {
   payload.WithString("privateDomainName", m_privateDomainName);

  }

  if(m_publicDomainNamesHasBeenSet)
  {
   JsonValue publicDomainNamesJsonMap;
   for(auto& publicDomainNamesItem : m_publicDomainNames)
   {
     Aws::Utils::Array<JsonValue> containerServicePublicDomainsListJsonList(publicDomainNamesItem.second.size());
     for(unsigned containerServicePublicDomainsListIndex = 0; containerServicePublicDomainsListIndex < containerServicePublicDomainsListJsonList.GetLength(); ++containerServicePublicDomainsListIndex)
     {
       containerServicePublicDomainsListJsonList[containerServicePublicDomainsListIndex].AsString(publicDomainNamesItem.second[containerServicePublicDomainsListIndex]);
     }
     publicDomainNamesJsonMap.WithArray(publicDomainNamesItem.first, std::move(containerServicePublicDomainsListJsonList));
   }
   payload.WithObject("publicDomainNames", std::move(publicDomainNamesJsonMap));

  }

  if(m_urlHasBeenSet)
  {
   payload.WithString("url", m_url);

  }

  if(m_privateRegistryAccessHasBeenSet)
  {
   payload.WithObject("privateRegistryAccess", m_privateRegistryAccess.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws
