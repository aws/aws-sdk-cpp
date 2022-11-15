/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/robomaker/model/BatchDeleteWorldsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::RoboMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchDeleteWorldsRequest::BatchDeleteWorldsRequest() : 
    m_worldsHasBeenSet(false)
{
}

Aws::String BatchDeleteWorldsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_worldsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> worldsJsonList(m_worlds.size());
   for(unsigned worldsIndex = 0; worldsIndex < worldsJsonList.GetLength(); ++worldsIndex)
   {
     worldsJsonList[worldsIndex].AsString(m_worlds[worldsIndex]);
   }
   payload.WithArray("worlds", std::move(worldsJsonList));

  }

  return payload.View().WriteReadable();
}




