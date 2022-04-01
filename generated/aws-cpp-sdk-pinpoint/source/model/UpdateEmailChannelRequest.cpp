/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/UpdateEmailChannelRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Pinpoint::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateEmailChannelRequest::UpdateEmailChannelRequest() : 
    m_applicationIdHasBeenSet(false),
    m_emailChannelRequestHasBeenSet(false)
{
}

Aws::String UpdateEmailChannelRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_emailChannelRequestHasBeenSet)
  {
   payload = m_emailChannelRequest.Jsonize();
  }

  return payload.View().WriteReadable();
}




