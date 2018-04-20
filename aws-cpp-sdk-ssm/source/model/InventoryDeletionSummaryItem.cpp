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

#include <aws/ssm/model/InventoryDeletionSummaryItem.h>
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

InventoryDeletionSummaryItem::InventoryDeletionSummaryItem() : 
    m_versionHasBeenSet(false),
    m_count(0),
    m_countHasBeenSet(false),
    m_remainingCount(0),
    m_remainingCountHasBeenSet(false)
{
}

InventoryDeletionSummaryItem::InventoryDeletionSummaryItem(const JsonValue& jsonValue) : 
    m_versionHasBeenSet(false),
    m_count(0),
    m_countHasBeenSet(false),
    m_remainingCount(0),
    m_remainingCountHasBeenSet(false)
{
  *this = jsonValue;
}

InventoryDeletionSummaryItem& InventoryDeletionSummaryItem::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Version"))
  {
    m_version = jsonValue.GetString("Version");

    m_versionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Count"))
  {
    m_count = jsonValue.GetInteger("Count");

    m_countHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RemainingCount"))
  {
    m_remainingCount = jsonValue.GetInteger("RemainingCount");

    m_remainingCountHasBeenSet = true;
  }

  return *this;
}

JsonValue InventoryDeletionSummaryItem::Jsonize() const
{
  JsonValue payload;

  if(m_versionHasBeenSet)
  {
   payload.WithString("Version", m_version);

  }

  if(m_countHasBeenSet)
  {
   payload.WithInteger("Count", m_count);

  }

  if(m_remainingCountHasBeenSet)
  {
   payload.WithInteger("RemainingCount", m_remainingCount);

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
