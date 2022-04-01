/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/worklink/model/AssociateWebsiteAuthorizationProviderRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkLink::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AssociateWebsiteAuthorizationProviderRequest::AssociateWebsiteAuthorizationProviderRequest() : 
    m_fleetArnHasBeenSet(false),
    m_authorizationProviderType(AuthorizationProviderType::NOT_SET),
    m_authorizationProviderTypeHasBeenSet(false),
    m_domainNameHasBeenSet(false)
{
}

Aws::String AssociateWebsiteAuthorizationProviderRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_fleetArnHasBeenSet)
  {
   payload.WithString("FleetArn", m_fleetArn);

  }

  if(m_authorizationProviderTypeHasBeenSet)
  {
   payload.WithString("AuthorizationProviderType", AuthorizationProviderTypeMapper::GetNameForAuthorizationProviderType(m_authorizationProviderType));
  }

  if(m_domainNameHasBeenSet)
  {
   payload.WithString("DomainName", m_domainName);

  }

  return payload.View().WriteReadable();
}




