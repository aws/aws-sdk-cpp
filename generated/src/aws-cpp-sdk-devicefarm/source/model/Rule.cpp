/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devicefarm/model/Rule.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DeviceFarm
{
namespace Model
{

Rule::Rule() : 
    m_attribute(DeviceAttribute::NOT_SET),
    m_attributeHasBeenSet(false),
    m_operator(RuleOperator::NOT_SET),
    m_operatorHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

Rule::Rule(JsonView jsonValue) : 
    m_attribute(DeviceAttribute::NOT_SET),
    m_attributeHasBeenSet(false),
    m_operator(RuleOperator::NOT_SET),
    m_operatorHasBeenSet(false),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

Rule& Rule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("attribute"))
  {
    m_attribute = DeviceAttributeMapper::GetDeviceAttributeForName(jsonValue.GetString("attribute"));

    m_attributeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("operator"))
  {
    m_operator = RuleOperatorMapper::GetRuleOperatorForName(jsonValue.GetString("operator"));

    m_operatorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("value"))
  {
    m_value = jsonValue.GetString("value");

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue Rule::Jsonize() const
{
  JsonValue payload;

  if(m_attributeHasBeenSet)
  {
   payload.WithString("attribute", DeviceAttributeMapper::GetNameForDeviceAttribute(m_attribute));
  }

  if(m_operatorHasBeenSet)
  {
   payload.WithString("operator", RuleOperatorMapper::GetNameForRuleOperator(m_operator));
  }

  if(m_valueHasBeenSet)
  {
   payload.WithString("value", m_value);

  }

  return payload;
}

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
