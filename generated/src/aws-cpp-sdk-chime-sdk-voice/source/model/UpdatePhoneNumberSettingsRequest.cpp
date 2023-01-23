/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/model/UpdatePhoneNumberSettingsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ChimeSDKVoice::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdatePhoneNumberSettingsRequest::UpdatePhoneNumberSettingsRequest() : 
    m_callingNameHasBeenSet(false)
{
}

Aws::String UpdatePhoneNumberSettingsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_callingNameHasBeenSet)
  {
   payload.WithString("CallingName", m_callingName);

  }

  return payload.View().WriteReadable();
}




