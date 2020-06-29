/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

FindingCriteria::FindingCriteria(JsonView jsonValue) : 
    m_criterionHasBeenSet(false)
{
  *this = jsonValue;
}

FindingCriteria& FindingCriteria::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("criterion"))
  {
    Aws::Map<Aws::String, JsonView> criterionJsonMap = jsonValue.GetObject("criterion").GetAllObjects();
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
