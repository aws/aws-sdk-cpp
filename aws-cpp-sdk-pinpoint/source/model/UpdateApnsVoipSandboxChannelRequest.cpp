/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/UpdateApnsVoipSandboxChannelRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Pinpoint::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateApnsVoipSandboxChannelRequest::UpdateApnsVoipSandboxChannelRequest() : 
    m_aPNSVoipSandboxChannelRequestHasBeenSet(false),
    m_applicationIdHasBeenSet(false)
{
}

Aws::String UpdateApnsVoipSandboxChannelRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_aPNSVoipSandboxChannelRequestHasBeenSet)
  {
   payload = m_aPNSVoipSandboxChannelRequest.Jsonize();
  }

  return payload.View().WriteReadable();
}




