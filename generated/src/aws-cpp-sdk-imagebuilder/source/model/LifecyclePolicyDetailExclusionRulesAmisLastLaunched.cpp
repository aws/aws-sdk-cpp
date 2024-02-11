/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/LifecyclePolicyDetailExclusionRulesAmisLastLaunched.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace imagebuilder
{
namespace Model
{

LifecyclePolicyDetailExclusionRulesAmisLastLaunched::LifecyclePolicyDetailExclusionRulesAmisLastLaunched() : 
    m_value(0),
    m_valueHasBeenSet(false),
    m_unit(LifecyclePolicyTimeUnit::NOT_SET),
    m_unitHasBeenSet(false)
{
}

LifecyclePolicyDetailExclusionRulesAmisLastLaunched::LifecyclePolicyDetailExclusionRulesAmisLastLaunched(JsonView jsonValue) : 
    m_value(0),
    m_valueHasBeenSet(false),
    m_unit(LifecyclePolicyTimeUnit::NOT_SET),
    m_unitHasBeenSet(false)
{
  *this = jsonValue;
}

LifecyclePolicyDetailExclusionRulesAmisLastLaunched& LifecyclePolicyDetailExclusionRulesAmisLastLaunched::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("value"))
  {
    m_value = jsonValue.GetInteger("value");

    m_valueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("unit"))
  {
    m_unit = LifecyclePolicyTimeUnitMapper::GetLifecyclePolicyTimeUnitForName(jsonValue.GetString("unit"));

    m_unitHasBeenSet = true;
  }

  return *this;
}

JsonValue LifecyclePolicyDetailExclusionRulesAmisLastLaunched::Jsonize() const
{
  JsonValue payload;

  if(m_valueHasBeenSet)
  {
   payload.WithInteger("value", m_value);

  }

  if(m_unitHasBeenSet)
  {
   payload.WithString("unit", LifecyclePolicyTimeUnitMapper::GetNameForLifecyclePolicyTimeUnit(m_unit));
  }

  return payload;
}

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
