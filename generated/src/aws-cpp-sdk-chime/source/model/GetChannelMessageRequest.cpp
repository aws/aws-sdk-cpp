/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/GetChannelMessageRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Chime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetChannelMessageRequest::GetChannelMessageRequest() : 
    m_channelArnHasBeenSet(false),
    m_messageIdHasBeenSet(false),
    m_chimeBearerHasBeenSet(false)
{
}

Aws::String GetChannelMessageRequest::SerializePayload() const
{
  return {};
}

Aws::Http::HeaderValueCollection GetChannelMessageRequest::GetRequestSpecificHeaders() const
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




