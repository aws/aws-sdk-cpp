/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecast/model/TimeSeriesCondition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ForecastService
{
namespace Model
{

TimeSeriesCondition::TimeSeriesCondition() : 
    m_attributeNameHasBeenSet(false),
    m_attributeValueHasBeenSet(false),
    m_condition(Condition::NOT_SET),
    m_conditionHasBeenSet(false)
{
}

TimeSeriesCondition::TimeSeriesCondition(JsonView jsonValue) : 
    m_attributeNameHasBeenSet(false),
    m_attributeValueHasBeenSet(false),
    m_condition(Condition::NOT_SET),
    m_conditionHasBeenSet(false)
{
  *this = jsonValue;
}

TimeSeriesCondition& TimeSeriesCondition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AttributeName"))
  {
    m_attributeName = jsonValue.GetString("AttributeName");

    m_attributeNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AttributeValue"))
  {
    m_attributeValue = jsonValue.GetString("AttributeValue");

    m_attributeValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Condition"))
  {
    m_condition = ConditionMapper::GetConditionForName(jsonValue.GetString("Condition"));

    m_conditionHasBeenSet = true;
  }

  return *this;
}

JsonValue TimeSeriesCondition::Jsonize() const
{
  JsonValue payload;

  if(m_attributeNameHasBeenSet)
  {
   payload.WithString("AttributeName", m_attributeName);

  }

  if(m_attributeValueHasBeenSet)
  {
   payload.WithString("AttributeValue", m_attributeValue);

  }

  if(m_conditionHasBeenSet)
  {
   payload.WithString("Condition", ConditionMapper::GetNameForCondition(m_condition));
  }

  return payload;
}

} // namespace Model
} // namespace ForecastService
} // namespace Aws
