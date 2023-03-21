/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-messaging/model/DeleteMessagingStreamingConfigurationsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ChimeSDKMessaging::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteMessagingStreamingConfigurationsRequest::DeleteMessagingStreamingConfigurationsRequest() : 
    m_appInstanceArnHasBeenSet(false)
{
}

Aws::String DeleteMessagingStreamingConfigurationsRequest::SerializePayload() const
{
  return {};
}




