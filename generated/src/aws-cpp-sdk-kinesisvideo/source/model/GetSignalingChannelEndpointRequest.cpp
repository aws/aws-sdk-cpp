/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisvideo/model/GetSignalingChannelEndpointRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::KinesisVideo::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetSignalingChannelEndpointRequest::GetSignalingChannelEndpointRequest() : 
    m_channelARNHasBeenSet(false),
    m_singleMasterChannelEndpointConfigurationHasBeenSet(false)
{
}

Aws::String GetSignalingChannelEndpointRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_channelARNHasBeenSet)
  {
   payload.WithString("ChannelARN", m_channelARN);

  }

  if(m_singleMasterChannelEndpointConfigurationHasBeenSet)
  {
   payload.WithObject("SingleMasterChannelEndpointConfiguration", m_singleMasterChannelEndpointConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}




