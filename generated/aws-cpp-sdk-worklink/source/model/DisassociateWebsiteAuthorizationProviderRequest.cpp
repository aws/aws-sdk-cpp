/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/worklink/model/DisassociateWebsiteAuthorizationProviderRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkLink::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DisassociateWebsiteAuthorizationProviderRequest::DisassociateWebsiteAuthorizationProviderRequest() : 
    m_fleetArnHasBeenSet(false),
    m_authorizationProviderIdHasBeenSet(false)
{
}

Aws::String DisassociateWebsiteAuthorizationProviderRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_fleetArnHasBeenSet)
  {
   payload.WithString("FleetArn", m_fleetArn);

  }

  if(m_authorizationProviderIdHasBeenSet)
  {
   payload.WithString("AuthorizationProviderId", m_authorizationProviderId);

  }

  return payload.View().WriteReadable();
}




