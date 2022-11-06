/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/Filter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAFV2
{
namespace Model
{

Filter::Filter() : 
    m_behavior(FilterBehavior::NOT_SET),
    m_behaviorHasBeenSet(false),
    m_requirement(FilterRequirement::NOT_SET),
    m_requirementHasBeenSet(false),
    m_conditionsHasBeenSet(false)
{
}

Filter::Filter(JsonView jsonValue) : 
    m_behavior(FilterBehavior::NOT_SET),
    m_behaviorHasBeenSet(false),
    m_requirement(FilterRequirement::NOT_SET),
    m_requirementHasBeenSet(false),
    m_conditionsHasBeenSet(false)
{
  *this = jsonValue;
}

Filter& Filter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Behavior"))
  {
    m_behavior = FilterBehaviorMapper::GetFilterBehaviorForName(jsonValue.GetString("Behavior"));

    m_behaviorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Requirement"))
  {
    m_requirement = FilterRequirementMapper::GetFilterRequirementForName(jsonValue.GetString("Requirement"));

    m_requirementHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Conditions"))
  {
    Aws::Utils::Array<JsonView> conditionsJsonList = jsonValue.GetArray("Conditions");
    for(unsigned conditionsIndex = 0; conditionsIndex < conditionsJsonList.GetLength(); ++conditionsIndex)
    {
      m_conditions.push_back(conditionsJsonList[conditionsIndex].AsObject());
    }
    m_conditionsHasBeenSet = true;
  }

  return *this;
}

JsonValue Filter::Jsonize() const
{
  JsonValue payload;

  if(m_behaviorHasBeenSet)
  {
   payload.WithString("Behavior", FilterBehaviorMapper::GetNameForFilterBehavior(m_behavior));
  }

  if(m_requirementHasBeenSet)
  {
   payload.WithString("Requirement", FilterRequirementMapper::GetNameForFilterRequirement(m_requirement));
  }

  if(m_conditionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> conditionsJsonList(m_conditions.size());
   for(unsigned conditionsIndex = 0; conditionsIndex < conditionsJsonList.GetLength(); ++conditionsIndex)
   {
     conditionsJsonList[conditionsIndex].AsObject(m_conditions[conditionsIndex].Jsonize());
   }
   payload.WithArray("Conditions", std::move(conditionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace WAFV2
} // namespace Aws
