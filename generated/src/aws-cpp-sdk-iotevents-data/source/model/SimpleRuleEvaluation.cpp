/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents-data/model/SimpleRuleEvaluation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTEventsData
{
namespace Model
{

SimpleRuleEvaluation::SimpleRuleEvaluation() : 
    m_inputPropertyValueHasBeenSet(false),
    m_operator(ComparisonOperator::NOT_SET),
    m_operatorHasBeenSet(false),
    m_thresholdValueHasBeenSet(false)
{
}

SimpleRuleEvaluation::SimpleRuleEvaluation(JsonView jsonValue) : 
    m_inputPropertyValueHasBeenSet(false),
    m_operator(ComparisonOperator::NOT_SET),
    m_operatorHasBeenSet(false),
    m_thresholdValueHasBeenSet(false)
{
  *this = jsonValue;
}

SimpleRuleEvaluation& SimpleRuleEvaluation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("inputPropertyValue"))
  {
    m_inputPropertyValue = jsonValue.GetString("inputPropertyValue");

    m_inputPropertyValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("operator"))
  {
    m_operator = ComparisonOperatorMapper::GetComparisonOperatorForName(jsonValue.GetString("operator"));

    m_operatorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("thresholdValue"))
  {
    m_thresholdValue = jsonValue.GetString("thresholdValue");

    m_thresholdValueHasBeenSet = true;
  }

  return *this;
}

JsonValue SimpleRuleEvaluation::Jsonize() const
{
  JsonValue payload;

  if(m_inputPropertyValueHasBeenSet)
  {
   payload.WithString("inputPropertyValue", m_inputPropertyValue);

  }

  if(m_operatorHasBeenSet)
  {
   payload.WithString("operator", ComparisonOperatorMapper::GetNameForComparisonOperator(m_operator));
  }

  if(m_thresholdValueHasBeenSet)
  {
   payload.WithString("thresholdValue", m_thresholdValue);

  }

  return payload;
}

} // namespace Model
} // namespace IoTEventsData
} // namespace Aws
