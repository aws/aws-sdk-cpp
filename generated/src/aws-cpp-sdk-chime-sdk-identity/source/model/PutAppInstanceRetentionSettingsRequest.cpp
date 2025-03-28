﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-identity/model/PutAppInstanceRetentionSettingsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ChimeSDKIdentity::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String PutAppInstanceRetentionSettingsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_appInstanceRetentionSettingsHasBeenSet)
  {
   payload.WithObject("AppInstanceRetentionSettings", m_appInstanceRetentionSettings.Jsonize());

  }

  return payload.View().WriteReadable();
}




