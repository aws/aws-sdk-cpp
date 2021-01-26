/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/CreateChannelBanRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Chime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateChannelBanRequest::CreateChannelBanRequest() : 
    m_channelArnHasBeenSet(false),
    m_memberArnHasBeenSet(false)
{
}

Aws::String CreateChannelBanRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_memberArnHasBeenSet)
  {
   payload.WithString("MemberArn", m_memberArn);

  }

  return payload.View().WriteReadable();
}




