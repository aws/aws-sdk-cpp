/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/drs/model/StartFailbackLaunchRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::drs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartFailbackLaunchRequest::StartFailbackLaunchRequest() : 
    m_recoveryInstanceIDsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String StartFailbackLaunchRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_recoveryInstanceIDsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> recoveryInstanceIDsJsonList(m_recoveryInstanceIDs.size());
   for(unsigned recoveryInstanceIDsIndex = 0; recoveryInstanceIDsIndex < recoveryInstanceIDsJsonList.GetLength(); ++recoveryInstanceIDsIndex)
   {
     recoveryInstanceIDsJsonList[recoveryInstanceIDsIndex].AsString(m_recoveryInstanceIDs[recoveryInstanceIDsIndex]);
   }
   payload.WithArray("recoveryInstanceIDs", std::move(recoveryInstanceIDsJsonList));

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  return payload.View().WriteReadable();
}




