/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/grafana/model/UpdateWorkspaceAuthenticationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ManagedGrafana::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateWorkspaceAuthenticationRequest::UpdateWorkspaceAuthenticationRequest() : 
    m_authenticationProvidersHasBeenSet(false),
    m_samlConfigurationHasBeenSet(false),
    m_workspaceIdHasBeenSet(false)
{
}

Aws::String UpdateWorkspaceAuthenticationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_authenticationProvidersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> authenticationProvidersJsonList(m_authenticationProviders.size());
   for(unsigned authenticationProvidersIndex = 0; authenticationProvidersIndex < authenticationProvidersJsonList.GetLength(); ++authenticationProvidersIndex)
   {
     authenticationProvidersJsonList[authenticationProvidersIndex].AsString(AuthenticationProviderTypesMapper::GetNameForAuthenticationProviderTypes(m_authenticationProviders[authenticationProvidersIndex]));
   }
   payload.WithArray("authenticationProviders", std::move(authenticationProvidersJsonList));

  }

  if(m_samlConfigurationHasBeenSet)
  {
   payload.WithObject("samlConfiguration", m_samlConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}




