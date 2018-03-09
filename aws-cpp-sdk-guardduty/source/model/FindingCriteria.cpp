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

#include <aws/guardduty/model/FindingCriteria.h>
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

FindingCriteria::FindingCriteria() : 
    m_criterionHasBeenSet(false)
{
}

FindingCriteria::FindingCriteria(const JsonValue& jsonValue) : 
    m_criterionHasBeenSet(false)
{
  *this = jsonValue;
}

FindingCriteria& FindingCriteria::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("criterion"))
  {
    Aws::Map<Aws::String, JsonValue> criterionJsonMap = jsonValue.GetObject("criterion").GetAllObjects();
    for(auto& criterionItem : criterionJsonMap)
    {
      m_criterion[criterionItem.first] = criterionItem.second.AsObject();
    }
    m_criterionHasBeenSet = true;
  }

  return *this;
}

JsonValue FindingCriteria::Jsonize() const
{
  JsonValue payload;

  if(m_criterionHasBeenSet)
  {
   JsonValue criterionJsonMap;
   for(auto& criterionItem : m_criterion)
   {
     criterionJsonMap.WithObject(criterionItem.first, criterionItem.second.Jsonize());
   }
   payload.WithObject("criterion", std::move(criterionJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
