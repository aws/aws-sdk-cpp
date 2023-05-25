/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigatewayv2/model/CreateDomainNameRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ApiGatewayV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateDomainNameRequest::CreateDomainNameRequest() : 
    m_domainNameHasBeenSet(false),
    m_domainNameConfigurationsHasBeenSet(false),
    m_mutualTlsAuthenticationHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateDomainNameRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_domainNameHasBeenSet)
  {
   payload.WithString("domainName", m_domainName);

  }

  if(m_domainNameConfigurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> domainNameConfigurationsJsonList(m_domainNameConfigurations.size());
   for(unsigned domainNameConfigurationsIndex = 0; domainNameConfigurationsIndex < domainNameConfigurationsJsonList.GetLength(); ++domainNameConfigurationsIndex)
   {
     domainNameConfigurationsJsonList[domainNameConfigurationsIndex].AsObject(m_domainNameConfigurations[domainNameConfigurationsIndex].Jsonize());
   }
   payload.WithArray("domainNameConfigurations", std::move(domainNameConfigurationsJsonList));

  }

  if(m_mutualTlsAuthenticationHasBeenSet)
  {
   payload.WithObject("mutualTlsAuthentication", m_mutualTlsAuthentication.Jsonize());

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

  return payload.View().WriteReadable();
}




