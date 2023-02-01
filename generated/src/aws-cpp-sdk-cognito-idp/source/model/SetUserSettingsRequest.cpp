/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/SetUserSettingsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CognitoIdentityProvider::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SetUserSettingsRequest::SetUserSettingsRequest() : 
    m_accessTokenHasBeenSet(false),
    m_mFAOptionsHasBeenSet(false)
{
}

Aws::String SetUserSettingsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_accessTokenHasBeenSet)
  {
   payload.WithString("AccessToken", m_accessToken);

  }

  if(m_mFAOptionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> mFAOptionsJsonList(m_mFAOptions.size());
   for(unsigned mFAOptionsIndex = 0; mFAOptionsIndex < mFAOptionsJsonList.GetLength(); ++mFAOptionsIndex)
   {
     mFAOptionsJsonList[mFAOptionsIndex].AsObject(m_mFAOptions[mFAOptionsIndex].Jsonize());
   }
   payload.WithArray("MFAOptions", std::move(mFAOptionsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection SetUserSettingsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSCognitoIdentityProviderService.SetUserSettings"));
  return headers;

}




