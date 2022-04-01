/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sms-voice/model/SendVoiceMessageRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PinpointSMSVoice::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SendVoiceMessageRequest::SendVoiceMessageRequest() : 
    m_callerIdHasBeenSet(false),
    m_configurationSetNameHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_destinationPhoneNumberHasBeenSet(false),
    m_originationPhoneNumberHasBeenSet(false)
{
}

Aws::String SendVoiceMessageRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_callerIdHasBeenSet)
  {
   payload.WithString("CallerId", m_callerId);

  }

  if(m_configurationSetNameHasBeenSet)
  {
   payload.WithString("ConfigurationSetName", m_configurationSetName);

  }

  if(m_contentHasBeenSet)
  {
   payload.WithObject("Content", m_content.Jsonize());

  }

  if(m_destinationPhoneNumberHasBeenSet)
  {
   payload.WithString("DestinationPhoneNumber", m_destinationPhoneNumber);

  }

  if(m_originationPhoneNumberHasBeenSet)
  {
   payload.WithString("OriginationPhoneNumber", m_originationPhoneNumber);

  }

  return payload.View().WriteReadable();
}




