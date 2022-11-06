/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/UpdateContainerServiceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateContainerServiceRequest::UpdateContainerServiceRequest() : 
    m_serviceNameHasBeenSet(false),
    m_power(ContainerServicePowerName::NOT_SET),
    m_powerHasBeenSet(false),
    m_scale(0),
    m_scaleHasBeenSet(false),
    m_isDisabled(false),
    m_isDisabledHasBeenSet(false),
    m_publicDomainNamesHasBeenSet(false),
    m_privateRegistryAccessHasBeenSet(false)
{
}

Aws::String UpdateContainerServiceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_serviceNameHasBeenSet)
  {
   payload.WithString("serviceName", m_serviceName);

  }

  if(m_powerHasBeenSet)
  {
   payload.WithString("power", ContainerServicePowerNameMapper::GetNameForContainerServicePowerName(m_power));
  }

  if(m_scaleHasBeenSet)
  {
   payload.WithInteger("scale", m_scale);

  }

  if(m_isDisabledHasBeenSet)
  {
   payload.WithBool("isDisabled", m_isDisabled);

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

  if(m_privateRegistryAccessHasBeenSet)
  {
   payload.WithObject("privateRegistryAccess", m_privateRegistryAccess.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateContainerServiceRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Lightsail_20161128.UpdateContainerService"));
  return headers;

}




