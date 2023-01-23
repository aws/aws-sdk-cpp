/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesis-video-signaling/model/SendAlexaOfferToMasterRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::KinesisVideoSignalingChannels::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SendAlexaOfferToMasterRequest::SendAlexaOfferToMasterRequest() : 
    m_channelARNHasBeenSet(false),
    m_senderClientIdHasBeenSet(false),
    m_messagePayloadHasBeenSet(false)
{
}

Aws::String SendAlexaOfferToMasterRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_channelARNHasBeenSet)
  {
   payload.WithString("ChannelARN", m_channelARN);

  }

  if(m_senderClientIdHasBeenSet)
  {
   payload.WithString("SenderClientId", m_senderClientId);

  }

  if(m_messagePayloadHasBeenSet)
  {
   payload.WithString("MessagePayload", m_messagePayload);

  }

  return payload.View().WriteReadable();
}




