﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ControlPlaneUserAttributeFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

ControlPlaneUserAttributeFilter::ControlPlaneUserAttributeFilter() : 
    m_orConditionsHasBeenSet(false),
    m_andConditionHasBeenSet(false),
    m_tagConditionHasBeenSet(false),
    m_hierarchyGroupConditionHasBeenSet(false)
{
}

ControlPlaneUserAttributeFilter::ControlPlaneUserAttributeFilter(JsonView jsonValue)
  : ControlPlaneUserAttributeFilter()
{
  *this = jsonValue;
}

ControlPlaneUserAttributeFilter& ControlPlaneUserAttributeFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("OrConditions"))
  {
    Aws::Utils::Array<JsonView> orConditionsJsonList = jsonValue.GetArray("OrConditions");
    for(unsigned orConditionsIndex = 0; orConditionsIndex < orConditionsJsonList.GetLength(); ++orConditionsIndex)
    {
      m_orConditions.push_back(orConditionsJsonList[orConditionsIndex].AsObject());
    }
    m_orConditionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AndCondition"))
  {
    m_andCondition = jsonValue.GetObject("AndCondition");

    m_andConditionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TagCondition"))
  {
    m_tagCondition = jsonValue.GetObject("TagCondition");

    m_tagConditionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HierarchyGroupCondition"))
  {
    m_hierarchyGroupCondition = jsonValue.GetObject("HierarchyGroupCondition");

    m_hierarchyGroupConditionHasBeenSet = true;
  }

  return *this;
}

JsonValue ControlPlaneUserAttributeFilter::Jsonize() const
{
  JsonValue payload;

  if(m_orConditionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> orConditionsJsonList(m_orConditions.size());
   for(unsigned orConditionsIndex = 0; orConditionsIndex < orConditionsJsonList.GetLength(); ++orConditionsIndex)
   {
     orConditionsJsonList[orConditionsIndex].AsObject(m_orConditions[orConditionsIndex].Jsonize());
   }
   payload.WithArray("OrConditions", std::move(orConditionsJsonList));

  }

  if(m_andConditionHasBeenSet)
  {
   payload.WithObject("AndCondition", m_andCondition.Jsonize());

  }

  if(m_tagConditionHasBeenSet)
  {
   payload.WithObject("TagCondition", m_tagCondition.Jsonize());

  }

  if(m_hierarchyGroupConditionHasBeenSet)
  {
   payload.WithObject("HierarchyGroupCondition", m_hierarchyGroupCondition.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
