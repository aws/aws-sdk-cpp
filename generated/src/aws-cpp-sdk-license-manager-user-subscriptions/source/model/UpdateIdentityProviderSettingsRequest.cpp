/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager-user-subscriptions/model/UpdateIdentityProviderSettingsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LicenseManagerUserSubscriptions::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateIdentityProviderSettingsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_identityProviderHasBeenSet)
  {
   payload.WithObject("IdentityProvider", m_identityProvider.Jsonize());

  }

  if(m_productHasBeenSet)
  {
   payload.WithString("Product", m_product);

  }

  if(m_identityProviderArnHasBeenSet)
  {
   payload.WithString("IdentityProviderArn", m_identityProviderArn);

  }

  if(m_updateSettingsHasBeenSet)
  {
   payload.WithObject("UpdateSettings", m_updateSettings.Jsonize());

  }

  return payload.View().WriteReadable();
}




