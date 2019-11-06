/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   Array<JsonValue> savingsPlanArnsJsonList(m_savingsPlanArns.size());
   for(unsigned savingsPlanArnsIndex = 0; savingsPlanArnsIndex < savingsPlanArnsJsonList.GetLength(); ++savingsPlanArnsIndex)
   {
     savingsPlanArnsJsonList[savingsPlanArnsIndex].AsString(m_savingsPlanArns[savingsPlanArnsIndex]);
   }
   payload.WithArray("savingsPlanArns", std::move(savingsPlanArnsJsonList));

  }

  if(m_savingsPlanIdsHasBeenSet)
  {
   Array<JsonValue> savingsPlanIdsJsonList(m_savingsPlanIds.size());
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
   Array<JsonValue> statesJsonList(m_states.size());
   for(unsigned statesIndex = 0; statesIndex < statesJsonList.GetLength(); ++statesIndex)
   {
     statesJsonList[statesIndex].AsString(SavingsPlanStateMapper::GetNameForSavingsPlanState(m_states[statesIndex]));
   }
   payload.WithArray("states", std::move(statesJsonList));

  }

  if(m_filtersHasBeenSet)
  {
   Array<JsonValue> filtersJsonList(m_filters.size());
   for(unsigned filtersIndex = 0; filtersIndex < filtersJsonList.GetLength(); ++filtersIndex)
   {
     filtersJsonList[filtersIndex].AsObject(m_filters[filtersIndex].Jsonize());
   }
   payload.WithArray("filters", std::move(filtersJsonList));

  }

  return payload.View().WriteReadable();
}




