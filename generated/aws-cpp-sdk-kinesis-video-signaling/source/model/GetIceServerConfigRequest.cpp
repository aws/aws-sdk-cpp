/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesis-video-signaling/model/GetIceServerConfigRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::KinesisVideoSignalingChannels::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetIceServerConfigRequest::GetIceServerConfigRequest() : 
    m_channelARNHasBeenSet(false),
    m_clientIdHasBeenSet(false),
    m_service(Service::NOT_SET),
    m_serviceHasBeenSet(false),
    m_usernameHasBeenSet(false)
{
}

Aws::String GetIceServerConfigRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_channelARNHasBeenSet)
  {
   payload.WithString("ChannelARN", m_channelARN);

  }

  if(m_clientIdHasBeenSet)
  {
   payload.WithString("ClientId", m_clientId);

  }

  if(m_serviceHasBeenSet)
  {
   payload.WithString("Service", ServiceMapper::GetNameForService(m_service));
  }

  if(m_usernameHasBeenSet)
  {
   payload.WithString("Username", m_username);

  }

  return payload.View().WriteReadable();
}




