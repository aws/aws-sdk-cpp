/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamesparks/model/DeleteGameRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GameSparks::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteGameRequest::DeleteGameRequest() : 
    m_gameNameHasBeenSet(false)
{
}

Aws::String DeleteGameRequest::SerializePayload() const
{
  return {};
}




