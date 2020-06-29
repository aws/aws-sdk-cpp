/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/AttributeFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace kendra
{
namespace Model
{

AttributeFilter::AttributeFilter() : 
    m_andAllFiltersHasBeenSet(false),
    m_orAllFiltersHasBeenSet(false),
    m_notFilterHasBeenSet(false),
    m_equalsToHasBeenSet(false),
    m_containsAllHasBeenSet(false),
    m_containsAnyHasBeenSet(false),
    m_greaterThanHasBeenSet(false),
    m_greaterThanOrEqualsHasBeenSet(false),
    m_lessThanHasBeenSet(false),
    m_lessThanOrEqualsHasBeenSet(false)
{
}

AttributeFilter::AttributeFilter(JsonView jsonValue) : 
    m_andAllFiltersHasBeenSet(false),
    m_orAllFiltersHasBeenSet(false),
    m_notFilterHasBeenSet(false),
    m_equalsToHasBeenSet(false),
    m_containsAllHasBeenSet(false),
    m_containsAnyHasBeenSet(false),
    m_greaterThanHasBeenSet(false),
    m_greaterThanOrEqualsHasBeenSet(false),
    m_lessThanHasBeenSet(false),
    m_lessThanOrEqualsHasBeenSet(false)
{
  *this = jsonValue;
}

AttributeFilter& AttributeFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AndAllFilters"))
  {
    Array<JsonView> andAllFiltersJsonList = jsonValue.GetArray("AndAllFilters");
    for(unsigned andAllFiltersIndex = 0; andAllFiltersIndex < andAllFiltersJsonList.GetLength(); ++andAllFiltersIndex)
    {
      m_andAllFilters.push_back(andAllFiltersJsonList[andAllFiltersIndex].AsObject());
    }
    m_andAllFiltersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OrAllFilters"))
  {
    Array<JsonView> orAllFiltersJsonList = jsonValue.GetArray("OrAllFilters");
    for(unsigned orAllFiltersIndex = 0; orAllFiltersIndex < orAllFiltersJsonList.GetLength(); ++orAllFiltersIndex)
    {
      m_orAllFilters.push_back(orAllFiltersJsonList[orAllFiltersIndex].AsObject());
    }
    m_orAllFiltersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NotFilter"))
  {
    m_notFilter.resize(1);
    m_notFilter[0] = jsonValue.GetObject("NotFilter");

    m_notFilterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EqualsTo"))
  {
    m_equalsTo = jsonValue.GetObject("EqualsTo");

    m_equalsToHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContainsAll"))
  {
    m_containsAll = jsonValue.GetObject("ContainsAll");

    m_containsAllHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContainsAny"))
  {
    m_containsAny = jsonValue.GetObject("ContainsAny");

    m_containsAnyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GreaterThan"))
  {
    m_greaterThan = jsonValue.GetObject("GreaterThan");

    m_greaterThanHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GreaterThanOrEquals"))
  {
    m_greaterThanOrEquals = jsonValue.GetObject("GreaterThanOrEquals");

    m_greaterThanOrEqualsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LessThan"))
  {
    m_lessThan = jsonValue.GetObject("LessThan");

    m_lessThanHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LessThanOrEquals"))
  {
    m_lessThanOrEquals = jsonValue.GetObject("LessThanOrEquals");

    m_lessThanOrEqualsHasBeenSet = true;
  }

  return *this;
}

JsonValue AttributeFilter::Jsonize() const
{
  JsonValue payload;

  if(m_andAllFiltersHasBeenSet)
  {
   Array<JsonValue> andAllFiltersJsonList(m_andAllFilters.size());
   for(unsigned andAllFiltersIndex = 0; andAllFiltersIndex < andAllFiltersJsonList.GetLength(); ++andAllFiltersIndex)
   {
     andAllFiltersJsonList[andAllFiltersIndex].AsObject(m_andAllFilters[andAllFiltersIndex].Jsonize());
   }
   payload.WithArray("AndAllFilters", std::move(andAllFiltersJsonList));

  }

  if(m_orAllFiltersHasBeenSet)
  {
   Array<JsonValue> orAllFiltersJsonList(m_orAllFilters.size());
   for(unsigned orAllFiltersIndex = 0; orAllFiltersIndex < orAllFiltersJsonList.GetLength(); ++orAllFiltersIndex)
   {
     orAllFiltersJsonList[orAllFiltersIndex].AsObject(m_orAllFilters[orAllFiltersIndex].Jsonize());
   }
   payload.WithArray("OrAllFilters", std::move(orAllFiltersJsonList));

  }

  if(m_notFilterHasBeenSet)
  {
   payload.WithObject("NotFilter", m_notFilter[0].Jsonize());

  }

  if(m_equalsToHasBeenSet)
  {
   payload.WithObject("EqualsTo", m_equalsTo.Jsonize());

  }

  if(m_containsAllHasBeenSet)
  {
   payload.WithObject("ContainsAll", m_containsAll.Jsonize());

  }

  if(m_containsAnyHasBeenSet)
  {
   payload.WithObject("ContainsAny", m_containsAny.Jsonize());

  }

  if(m_greaterThanHasBeenSet)
  {
   payload.WithObject("GreaterThan", m_greaterThan.Jsonize());

  }

  if(m_greaterThanOrEqualsHasBeenSet)
  {
   payload.WithObject("GreaterThanOrEquals", m_greaterThanOrEquals.Jsonize());

  }

  if(m_lessThanHasBeenSet)
  {
   payload.WithObject("LessThan", m_lessThan.Jsonize());

  }

  if(m_lessThanOrEqualsHasBeenSet)
  {
   payload.WithObject("LessThanOrEquals", m_lessThanOrEquals.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
