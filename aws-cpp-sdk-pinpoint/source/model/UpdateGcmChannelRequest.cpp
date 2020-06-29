/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/UpdateGcmChannelRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Pinpoint::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateGcmChannelRequest::UpdateGcmChannelRequest() : 
    m_applicationIdHasBeenSet(false),
    m_gCMChannelRequestHasBeenSet(false)
{
}

Aws::String UpdateGcmChannelRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_gCMChannelRequestHasBeenSet)
  {
   payload = m_gCMChannelRequest.Jsonize();
  }

  return payload.View().WriteReadable();
}




