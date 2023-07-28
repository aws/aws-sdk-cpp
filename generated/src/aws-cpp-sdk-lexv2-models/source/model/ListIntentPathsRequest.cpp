/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/ListIntentPathsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LexModelsV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListIntentPathsRequest::ListIntentPathsRequest() : 
    m_botIdHasBeenSet(false),
    m_startDateTimeHasBeenSet(false),
    m_endDateTimeHasBeenSet(false),
    m_intentPathHasBeenSet(false),
    m_filtersHasBeenSet(false)
{
}

Aws::String ListIntentPathsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_startDateTimeHasBeenSet)
  {
   payload.WithDouble("startDateTime", m_startDateTime.SecondsWithMSPrecision());
  }

  if(m_endDateTimeHasBeenSet)
  {
   payload.WithDouble("endDateTime", m_endDateTime.SecondsWithMSPrecision());
  }

  if(m_intentPathHasBeenSet)
  {
   payload.WithString("intentPath", m_intentPath);

  }

  if(m_filtersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> filtersJsonList(m_filters.size());
   for(unsigned filtersIndex = 0; filtersIndex < filtersJsonList.GetLength(); ++filtersIndex)
   {
     filtersJsonList[filtersIndex].AsObject(m_filters[filtersIndex].Jsonize());
   }
   payload.WithArray("filters", std::move(filtersJsonList));

  }

  return payload.View().WriteReadable();
}




