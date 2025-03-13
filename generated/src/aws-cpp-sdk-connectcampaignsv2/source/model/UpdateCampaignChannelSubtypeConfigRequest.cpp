/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaignsv2/model/UpdateCampaignChannelSubtypeConfigRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ConnectCampaignsV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateCampaignChannelSubtypeConfigRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_channelSubtypeConfigHasBeenSet)
  {
   payload.WithObject("channelSubtypeConfig", m_channelSubtypeConfig.Jsonize());

  }

  return payload.View().WriteReadable();
}




