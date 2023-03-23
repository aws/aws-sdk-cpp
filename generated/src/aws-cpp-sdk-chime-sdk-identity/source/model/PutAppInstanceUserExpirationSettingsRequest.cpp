/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-identity/model/PutAppInstanceUserExpirationSettingsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ChimeSDKIdentity::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutAppInstanceUserExpirationSettingsRequest::PutAppInstanceUserExpirationSettingsRequest() : 
    m_appInstanceUserArnHasBeenSet(false),
    m_expirationSettingsHasBeenSet(false)
{
}

Aws::String PutAppInstanceUserExpirationSettingsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_expirationSettingsHasBeenSet)
  {
   payload.WithObject("ExpirationSettings", m_expirationSettings.Jsonize());

  }

  return payload.View().WriteReadable();
}




