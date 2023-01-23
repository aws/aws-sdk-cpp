/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/GetFindingsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Macie2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetFindingsRequest::GetFindingsRequest() : 
    m_findingIdsHasBeenSet(false),
    m_sortCriteriaHasBeenSet(false)
{
}

Aws::String GetFindingsRequest::SerializePayload() const
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

  if(m_sortCriteriaHasBeenSet)
  {
   payload.WithObject("sortCriteria", m_sortCriteria.Jsonize());

  }

  return payload.View().WriteReadable();
}




