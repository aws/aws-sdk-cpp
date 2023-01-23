/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager-user-subscriptions/model/AssociateUserRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LicenseManagerUserSubscriptions::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AssociateUserRequest::AssociateUserRequest() : 
    m_domainHasBeenSet(false),
    m_identityProviderHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_usernameHasBeenSet(false)
{
}

Aws::String AssociateUserRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_domainHasBeenSet)
  {
   payload.WithString("Domain", m_domain);

  }

  if(m_identityProviderHasBeenSet)
  {
   payload.WithObject("IdentityProvider", m_identityProvider.Jsonize());

  }

  if(m_instanceIdHasBeenSet)
  {
   payload.WithString("InstanceId", m_instanceId);

  }

  if(m_usernameHasBeenSet)
  {
   payload.WithString("Username", m_username);

  }

  return payload.View().WriteReadable();
}




