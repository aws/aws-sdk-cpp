/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-signals/model/BatchUpdateExclusionWindowsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ApplicationSignals::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String BatchUpdateExclusionWindowsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_sloIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sloIdsJsonList(m_sloIds.size());
   for(unsigned sloIdsIndex = 0; sloIdsIndex < sloIdsJsonList.GetLength(); ++sloIdsIndex)
   {
     sloIdsJsonList[sloIdsIndex].AsString(m_sloIds[sloIdsIndex]);
   }
   payload.WithArray("SloIds", std::move(sloIdsJsonList));

  }

  if(m_addExclusionWindowsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> addExclusionWindowsJsonList(m_addExclusionWindows.size());
   for(unsigned addExclusionWindowsIndex = 0; addExclusionWindowsIndex < addExclusionWindowsJsonList.GetLength(); ++addExclusionWindowsIndex)
   {
     addExclusionWindowsJsonList[addExclusionWindowsIndex].AsObject(m_addExclusionWindows[addExclusionWindowsIndex].Jsonize());
   }
   payload.WithArray("AddExclusionWindows", std::move(addExclusionWindowsJsonList));

  }

  if(m_removeExclusionWindowsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> removeExclusionWindowsJsonList(m_removeExclusionWindows.size());
   for(unsigned removeExclusionWindowsIndex = 0; removeExclusionWindowsIndex < removeExclusionWindowsJsonList.GetLength(); ++removeExclusionWindowsIndex)
   {
     removeExclusionWindowsJsonList[removeExclusionWindowsIndex].AsObject(m_removeExclusionWindows[removeExclusionWindowsIndex].Jsonize());
   }
   payload.WithArray("RemoveExclusionWindows", std::move(removeExclusionWindowsJsonList));

  }

  return payload.View().WriteReadable();
}




