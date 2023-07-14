/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/FindingStatistics.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

FindingStatistics::FindingStatistics() : 
    m_countBySeverityHasBeenSet(false)
{
}

FindingStatistics::FindingStatistics(JsonView jsonValue) : 
    m_countBySeverityHasBeenSet(false)
{
  *this = jsonValue;
}

FindingStatistics& FindingStatistics::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("countBySeverity"))
  {
    Aws::Map<Aws::String, JsonView> countBySeverityJsonMap = jsonValue.GetObject("countBySeverity").GetAllObjects();
    for(auto& countBySeverityItem : countBySeverityJsonMap)
    {
      m_countBySeverity[countBySeverityItem.first] = countBySeverityItem.second.AsInteger();
    }
    m_countBySeverityHasBeenSet = true;
  }

  return *this;
}

JsonValue FindingStatistics::Jsonize() const
{
  JsonValue payload;

  if(m_countBySeverityHasBeenSet)
  {
   JsonValue countBySeverityJsonMap;
   for(auto& countBySeverityItem : m_countBySeverity)
   {
     countBySeverityJsonMap.WithInteger(countBySeverityItem.first, countBySeverityItem.second);
   }
   payload.WithObject("countBySeverity", std::move(countBySeverityJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
