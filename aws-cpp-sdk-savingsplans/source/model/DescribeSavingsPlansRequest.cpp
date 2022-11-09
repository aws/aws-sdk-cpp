/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/savingsplans/model/DescribeSavingsPlansRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SavingsPlans::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeSavingsPlansRequest::DescribeSavingsPlansRequest() : 
    m_savingsPlanArnsHasBeenSet(false),
    m_savingsPlanIdsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_statesHasBeenSet(false),
    m_filtersHasBeenSet(false)
{
}

Aws::String DescribeSavingsPlansRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_savingsPlanArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> savingsPlanArnsJsonList(m_savingsPlanArns.size());
   for(unsigned savingsPlanArnsIndex = 0; savingsPlanArnsIndex < savingsPlanArnsJsonList.GetLength(); ++savingsPlanArnsIndex)
   {
     savingsPlanArnsJsonList[savingsPlanArnsIndex].AsString(m_savingsPlanArns[savingsPlanArnsIndex]);
   }
   payload.WithArray("savingsPlanArns", std::move(savingsPlanArnsJsonList));

  }

  if(m_savingsPlanIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> savingsPlanIdsJsonList(m_savingsPlanIds.size());
   for(unsigned savingsPlanIdsIndex = 0; savingsPlanIdsIndex < savingsPlanIdsJsonList.GetLength(); ++savingsPlanIdsIndex)
   {
     savingsPlanIdsJsonList[savingsPlanIdsIndex].AsString(m_savingsPlanIds[savingsPlanIdsIndex]);
   }
   payload.WithArray("savingsPlanIds", std::move(savingsPlanIdsJsonList));

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("maxResults", m_maxResults);

  }

  if(m_statesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> statesJsonList(m_states.size());
   for(unsigned statesIndex = 0; statesIndex < statesJsonList.GetLength(); ++statesIndex)
   {
     statesJsonList[statesIndex].AsString(SavingsPlanStateMapper::GetNameForSavingsPlanState(m_states[statesIndex]));
   }
   payload.WithArray("states", std::move(statesJsonList));

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




