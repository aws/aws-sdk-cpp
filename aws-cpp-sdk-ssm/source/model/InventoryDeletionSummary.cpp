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

#include <aws/ssm/model/InventoryDeletionSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

InventoryDeletionSummary::InventoryDeletionSummary() : 
    m_totalCount(0),
    m_totalCountHasBeenSet(false),
    m_remainingCount(0),
    m_remainingCountHasBeenSet(false),
    m_summaryItemsHasBeenSet(false)
{
}

InventoryDeletionSummary::InventoryDeletionSummary(const JsonValue& jsonValue) : 
    m_totalCount(0),
    m_totalCountHasBeenSet(false),
    m_remainingCount(0),
    m_remainingCountHasBeenSet(false),
    m_summaryItemsHasBeenSet(false)
{
  *this = jsonValue;
}

InventoryDeletionSummary& InventoryDeletionSummary::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("TotalCount"))
  {
    m_totalCount = jsonValue.GetInteger("TotalCount");

    m_totalCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RemainingCount"))
  {
    m_remainingCount = jsonValue.GetInteger("RemainingCount");

    m_remainingCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SummaryItems"))
  {
    Array<JsonValue> summaryItemsJsonList = jsonValue.GetArray("SummaryItems");
    for(unsigned summaryItemsIndex = 0; summaryItemsIndex < summaryItemsJsonList.GetLength(); ++summaryItemsIndex)
    {
      m_summaryItems.push_back(summaryItemsJsonList[summaryItemsIndex].AsObject());
    }
    m_summaryItemsHasBeenSet = true;
  }

  return *this;
}

JsonValue InventoryDeletionSummary::Jsonize() const
{
  JsonValue payload;

  if(m_totalCountHasBeenSet)
  {
   payload.WithInteger("TotalCount", m_totalCount);

  }

  if(m_remainingCountHasBeenSet)
  {
   payload.WithInteger("RemainingCount", m_remainingCount);

  }

  if(m_summaryItemsHasBeenSet)
  {
   Array<JsonValue> summaryItemsJsonList(m_summaryItems.size());
   for(unsigned summaryItemsIndex = 0; summaryItemsIndex < summaryItemsJsonList.GetLength(); ++summaryItemsIndex)
   {
     summaryItemsJsonList[summaryItemsIndex].AsObject(m_summaryItems[summaryItemsIndex].Jsonize());
   }
   payload.WithArray("SummaryItems", std::move(summaryItemsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
