/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/CreateCollaborationChangeRequestRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CleanRooms::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateCollaborationChangeRequestRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_changesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> changesJsonList(m_changes.size());
   for(unsigned changesIndex = 0; changesIndex < changesJsonList.GetLength(); ++changesIndex)
   {
     changesJsonList[changesIndex].AsObject(m_changes[changesIndex].Jsonize());
   }
   payload.WithArray("changes", std::move(changesJsonList));

  }

  return payload.View().WriteReadable();
}




