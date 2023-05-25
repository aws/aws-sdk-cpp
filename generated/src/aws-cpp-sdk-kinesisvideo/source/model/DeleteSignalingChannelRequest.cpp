/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisvideo/model/DeleteSignalingChannelRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::KinesisVideo::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteSignalingChannelRequest::DeleteSignalingChannelRequest() : 
    m_channelARNHasBeenSet(false),
    m_currentVersionHasBeenSet(false)
{
}

Aws::String DeleteSignalingChannelRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_channelARNHasBeenSet)
  {
   payload.WithString("ChannelARN", m_channelARN);

  }

  if(m_currentVersionHasBeenSet)
  {
   payload.WithString("CurrentVersion", m_currentVersion);

  }

  return payload.View().WriteReadable();
}




