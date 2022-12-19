/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesis-video-webrtc-storage/model/JoinStorageSessionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::KinesisVideoWebRTCStorage::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

JoinStorageSessionRequest::JoinStorageSessionRequest() : 
    m_channelArnHasBeenSet(false)
{
}

Aws::String JoinStorageSessionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_channelArnHasBeenSet)
  {
   payload.WithString("channelArn", m_channelArn);

  }

  return payload.View().WriteReadable();
}




