/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/CreateChannelModeratorRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Chime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateChannelModeratorRequest::CreateChannelModeratorRequest() : 
    m_channelArnHasBeenSet(false),
    m_channelModeratorArnHasBeenSet(false)
{
}

Aws::String CreateChannelModeratorRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_channelModeratorArnHasBeenSet)
  {
   payload.WithString("ChannelModeratorArn", m_channelModeratorArn);

  }

  return payload.View().WriteReadable();
}




