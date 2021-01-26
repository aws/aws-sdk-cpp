/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/UpdateBaiduChannelRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Pinpoint::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateBaiduChannelRequest::UpdateBaiduChannelRequest() : 
    m_applicationIdHasBeenSet(false),
    m_baiduChannelRequestHasBeenSet(false)
{
}

Aws::String UpdateBaiduChannelRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_baiduChannelRequestHasBeenSet)
  {
   payload = m_baiduChannelRequest.Jsonize();
  }

  return payload.View().WriteReadable();
}




