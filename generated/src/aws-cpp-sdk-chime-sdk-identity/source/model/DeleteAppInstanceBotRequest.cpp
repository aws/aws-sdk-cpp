/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-identity/model/DeleteAppInstanceBotRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ChimeSDKIdentity::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteAppInstanceBotRequest::DeleteAppInstanceBotRequest() : 
    m_appInstanceBotArnHasBeenSet(false)
{
}

Aws::String DeleteAppInstanceBotRequest::SerializePayload() const
{
  return {};
}




