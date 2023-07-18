﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/UpdatePhoneNumberRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PinpointSMSVoiceV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdatePhoneNumberRequest::UpdatePhoneNumberRequest() : 
    m_phoneNumberIdHasBeenSet(false),
    m_twoWayEnabled(false),
    m_twoWayEnabledHasBeenSet(false),
    m_twoWayChannelArnHasBeenSet(false),
    m_selfManagedOptOutsEnabled(false),
    m_selfManagedOptOutsEnabledHasBeenSet(false),
    m_optOutListNameHasBeenSet(false),
    m_deletionProtectionEnabled(false),
    m_deletionProtectionEnabledHasBeenSet(false)
{
}

Aws::String UpdatePhoneNumberRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_phoneNumberIdHasBeenSet)
  {
   payload.WithString("PhoneNumberId", m_phoneNumberId);

  }

  if(m_twoWayEnabledHasBeenSet)
  {
   payload.WithBool("TwoWayEnabled", m_twoWayEnabled);

  }

  if(m_twoWayChannelArnHasBeenSet)
  {
   payload.WithString("TwoWayChannelArn", m_twoWayChannelArn);

  }

  if(m_selfManagedOptOutsEnabledHasBeenSet)
  {
   payload.WithBool("SelfManagedOptOutsEnabled", m_selfManagedOptOutsEnabled);

  }

  if(m_optOutListNameHasBeenSet)
  {
   payload.WithString("OptOutListName", m_optOutListName);

  }

  if(m_deletionProtectionEnabledHasBeenSet)
  {
   payload.WithBool("DeletionProtectionEnabled", m_deletionProtectionEnabled);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdatePhoneNumberRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PinpointSMSVoiceV2.UpdatePhoneNumber"));
  return headers;

}




