/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotanalytics/model/UpdateChannelRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTAnalytics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateChannelRequest::UpdateChannelRequest() : 
    m_channelNameHasBeenSet(false),
    m_channelStorageHasBeenSet(false),
    m_retentionPeriodHasBeenSet(false)
{
}

Aws::String UpdateChannelRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_channelStorageHasBeenSet)
  {
   payload.WithObject("channelStorage", m_channelStorage.Jsonize());

  }

  if(m_retentionPeriodHasBeenSet)
  {
   payload.WithObject("retentionPeriod", m_retentionPeriod.Jsonize());

  }

  return payload.View().WriteReadable();
}




