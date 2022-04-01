/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamesparks/model/GetPlayerConnectionStatusRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GameSparks::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetPlayerConnectionStatusRequest::GetPlayerConnectionStatusRequest() : 
    m_gameNameHasBeenSet(false),
    m_playerIdHasBeenSet(false),
    m_stageNameHasBeenSet(false)
{
}

Aws::String GetPlayerConnectionStatusRequest::SerializePayload() const
{
  return {};
}




