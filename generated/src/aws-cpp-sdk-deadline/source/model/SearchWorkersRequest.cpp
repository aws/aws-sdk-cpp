/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/SearchWorkersRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::deadline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SearchWorkersRequest::SearchWorkersRequest() : 
    m_farmIdHasBeenSet(false),
    m_filterExpressionsHasBeenSet(false),
    m_fleetIdsHasBeenSet(false),
    m_itemOffset(0),
    m_itemOffsetHasBeenSet(false),
    m_pageSize(0),
    m_pageSizeHasBeenSet(false),
    m_sortExpressionsHasBeenSet(false)
{
}

Aws::String SearchWorkersRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_filterExpressionsHasBeenSet)
  {
   payload.WithObject("filterExpressions", m_filterExpressions.Jsonize());

  }

  if(m_fleetIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> fleetIdsJsonList(m_fleetIds.size());
   for(unsigned fleetIdsIndex = 0; fleetIdsIndex < fleetIdsJsonList.GetLength(); ++fleetIdsIndex)
   {
     fleetIdsJsonList[fleetIdsIndex].AsString(m_fleetIds[fleetIdsIndex]);
   }
   payload.WithArray("fleetIds", std::move(fleetIdsJsonList));

  }

  if(m_itemOffsetHasBeenSet)
  {
   payload.WithInteger("itemOffset", m_itemOffset);

  }

  if(m_pageSizeHasBeenSet)
  {
   payload.WithInteger("pageSize", m_pageSize);

  }

  if(m_sortExpressionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sortExpressionsJsonList(m_sortExpressions.size());
   for(unsigned sortExpressionsIndex = 0; sortExpressionsIndex < sortExpressionsJsonList.GetLength(); ++sortExpressionsIndex)
   {
     sortExpressionsJsonList[sortExpressionsIndex].AsObject(m_sortExpressions[sortExpressionsIndex].Jsonize());
   }
   payload.WithArray("sortExpressions", std::move(sortExpressionsJsonList));

  }

  return payload.View().WriteReadable();
}




