/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisvideo/model/UpdateSignalingChannelRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::KinesisVideo::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateSignalingChannelRequest::UpdateSignalingChannelRequest() : 
    m_channelARNHasBeenSet(false),
    m_currentVersionHasBeenSet(false),
    m_singleMasterConfigurationHasBeenSet(false)
{
}

Aws::String UpdateSignalingChannelRequest::SerializePayload() const
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

  if(m_singleMasterConfigurationHasBeenSet)
  {
   payload.WithObject("SingleMasterConfiguration", m_singleMasterConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}




