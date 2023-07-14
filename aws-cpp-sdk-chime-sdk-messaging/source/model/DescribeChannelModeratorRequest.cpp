/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-messaging/model/DescribeChannelModeratorRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ChimeSDKMessaging::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeChannelModeratorRequest::DescribeChannelModeratorRequest() : 
    m_channelArnHasBeenSet(false),
    m_channelModeratorArnHasBeenSet(false),
    m_chimeBearerHasBeenSet(false)
{
}

Aws::String DescribeChannelModeratorRequest::SerializePayload() const
{
  return {};
}

Aws::Http::HeaderValueCollection DescribeChannelModeratorRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_chimeBearerHasBeenSet)
  {
    ss << m_chimeBearer;
    headers.emplace("x-amz-chime-bearer",  ss.str());
    ss.str("");
  }

  return headers;

}




