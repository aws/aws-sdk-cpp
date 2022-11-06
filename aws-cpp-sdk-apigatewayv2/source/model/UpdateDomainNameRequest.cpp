/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigatewayv2/model/UpdateDomainNameRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ApiGatewayV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateDomainNameRequest::UpdateDomainNameRequest() : 
    m_domainNameHasBeenSet(false),
    m_domainNameConfigurationsHasBeenSet(false),
    m_mutualTlsAuthenticationHasBeenSet(false)
{
}

Aws::String UpdateDomainNameRequest::SerializePayload() const
{
  JsonValue payload;

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

  return payload.View().WriteReadable();
}




