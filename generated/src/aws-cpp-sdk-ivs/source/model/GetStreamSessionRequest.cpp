/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs/model/GetStreamSessionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IVS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetStreamSessionRequest::GetStreamSessionRequest() : 
    m_channelArnHasBeenSet(false),
    m_streamIdHasBeenSet(false)
{
}

Aws::String GetStreamSessionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_channelArnHasBeenSet)
  {
   payload.WithString("channelArn", m_channelArn);

  }

  if(m_streamIdHasBeenSet)
  {
   payload.WithString("streamId", m_streamId);

  }

  return payload.View().WriteReadable();
}




