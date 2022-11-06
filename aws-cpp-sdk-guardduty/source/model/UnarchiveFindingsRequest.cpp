/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/UnarchiveFindingsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GuardDuty::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UnarchiveFindingsRequest::UnarchiveFindingsRequest() : 
    m_detectorIdHasBeenSet(false),
    m_findingIdsHasBeenSet(false)
{
}

Aws::String UnarchiveFindingsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_findingIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> findingIdsJsonList(m_findingIds.size());
   for(unsigned findingIdsIndex = 0; findingIdsIndex < findingIdsJsonList.GetLength(); ++findingIdsIndex)
   {
     findingIdsJsonList[findingIdsIndex].AsString(m_findingIds[findingIdsIndex]);
   }
   payload.WithArray("findingIds", std::move(findingIdsJsonList));

  }

  return payload.View().WriteReadable();
}




