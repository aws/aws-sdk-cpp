/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguruprofiler/model/AddNotificationChannelsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeGuruProfiler::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AddNotificationChannelsRequest::AddNotificationChannelsRequest() : 
    m_channelsHasBeenSet(false),
    m_profilingGroupNameHasBeenSet(false)
{
}

Aws::String AddNotificationChannelsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_channelsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> channelsJsonList(m_channels.size());
   for(unsigned channelsIndex = 0; channelsIndex < channelsJsonList.GetLength(); ++channelsIndex)
   {
     channelsJsonList[channelsIndex].AsObject(m_channels[channelsIndex].Jsonize());
   }
   payload.WithArray("channels", std::move(channelsJsonList));

  }

  return payload.View().WriteReadable();
}




