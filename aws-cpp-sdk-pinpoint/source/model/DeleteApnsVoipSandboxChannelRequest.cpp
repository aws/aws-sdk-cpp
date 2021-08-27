/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/DeleteApnsVoipSandboxChannelRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Pinpoint::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteApnsVoipSandboxChannelRequest::DeleteApnsVoipSandboxChannelRequest() : 
    m_applicationIdHasBeenSet(false)
{
}

Aws::String DeleteApnsVoipSandboxChannelRequest::SerializePayload() const
{
  return {};
}




