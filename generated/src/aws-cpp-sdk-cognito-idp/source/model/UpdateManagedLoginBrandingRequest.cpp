/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/UpdateManagedLoginBrandingRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CognitoIdentityProvider::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateManagedLoginBrandingRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_userPoolIdHasBeenSet)
  {
   payload.WithString("UserPoolId", m_userPoolId);

  }

  if(m_managedLoginBrandingIdHasBeenSet)
  {
   payload.WithString("ManagedLoginBrandingId", m_managedLoginBrandingId);

  }

  if(m_useCognitoProvidedValuesHasBeenSet)
  {
   payload.WithBool("UseCognitoProvidedValues", m_useCognitoProvidedValues);

  }

  if(m_settingsHasBeenSet)
  {
    if(!m_settings.View().IsNull())
    {
       payload.WithObject("Settings", JsonValue(m_settings.View()));
    }
  }

  if(m_assetsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> assetsJsonList(m_assets.size());
   for(unsigned assetsIndex = 0; assetsIndex < assetsJsonList.GetLength(); ++assetsIndex)
   {
     assetsJsonList[assetsIndex].AsObject(m_assets[assetsIndex].Jsonize());
   }
   payload.WithArray("Assets", std::move(assetsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateManagedLoginBrandingRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSCognitoIdentityProviderService.UpdateManagedLoginBranding"));
  return headers;

}




