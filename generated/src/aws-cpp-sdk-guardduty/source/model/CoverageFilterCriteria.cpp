﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/CoverageFilterCriteria.h>
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

CoverageFilterCriteria::CoverageFilterCriteria() : 
    m_filterCriterionHasBeenSet(false)
{
}

CoverageFilterCriteria::CoverageFilterCriteria(JsonView jsonValue) : 
    m_filterCriterionHasBeenSet(false)
{
  *this = jsonValue;
}

CoverageFilterCriteria& CoverageFilterCriteria::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("filterCriterion"))
  {
    Aws::Utils::Array<JsonView> filterCriterionJsonList = jsonValue.GetArray("filterCriterion");
    for(unsigned filterCriterionIndex = 0; filterCriterionIndex < filterCriterionJsonList.GetLength(); ++filterCriterionIndex)
    {
      m_filterCriterion.push_back(filterCriterionJsonList[filterCriterionIndex].AsObject());
    }
    m_filterCriterionHasBeenSet = true;
  }

  return *this;
}

JsonValue CoverageFilterCriteria::Jsonize() const
{
  JsonValue payload;

  if(m_filterCriterionHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> filterCriterionJsonList(m_filterCriterion.size());
   for(unsigned filterCriterionIndex = 0; filterCriterionIndex < filterCriterionJsonList.GetLength(); ++filterCriterionIndex)
   {
     filterCriterionJsonList[filterCriterionIndex].AsObject(m_filterCriterion[filterCriterionIndex].Jsonize());
   }
   payload.WithArray("filterCriterion", std::move(filterCriterionJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
