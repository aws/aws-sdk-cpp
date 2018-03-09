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

FindingStatistics::FindingStatistics(const JsonValue& jsonValue) : 
    m_countBySeverityHasBeenSet(false)
{
  *this = jsonValue;
}

FindingStatistics& FindingStatistics::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("countBySeverity"))
  {
    Aws::Map<Aws::String, JsonValue> countBySeverityJsonMap = jsonValue.GetObject("countBySeverity").GetAllObjects();
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
