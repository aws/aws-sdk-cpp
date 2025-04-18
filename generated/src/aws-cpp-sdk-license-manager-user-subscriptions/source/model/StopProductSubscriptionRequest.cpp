﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager-user-subscriptions/model/StopProductSubscriptionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LicenseManagerUserSubscriptions::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StopProductSubscriptionRequest::SerializePayload() const
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

  if(m_productHasBeenSet)
  {
   payload.WithString("Product", m_product);

  }

  if(m_productUserArnHasBeenSet)
  {
   payload.WithString("ProductUserArn", m_productUserArn);

  }

  if(m_usernameHasBeenSet)
  {
   payload.WithString("Username", m_username);

  }

  return payload.View().WriteReadable();
}




