/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail/model/GetChannelRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudTrail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetChannelRequest::GetChannelRequest() : 
    m_channelHasBeenSet(false)
{
}

Aws::String GetChannelRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_channelHasBeenSet)
  {
   payload.WithString("Channel", m_channel);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetChannelRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "com.amazonaws.cloudtrail.v20131101.CloudTrail_20131101.GetChannel"));
  return headers;

}




