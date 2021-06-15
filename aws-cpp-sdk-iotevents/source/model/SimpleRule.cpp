/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents/model/SimpleRule.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTEvents
{
namespace Model
{

SimpleRule::SimpleRule() : 
    m_inputPropertyHasBeenSet(false),
    m_comparisonOperator(ComparisonOperator::NOT_SET),
    m_comparisonOperatorHasBeenSet(false),
    m_thresholdHasBeenSet(false)
{
}

SimpleRule::SimpleRule(JsonView jsonValue) : 
    m_inputPropertyHasBeenSet(false),
    m_comparisonOperator(ComparisonOperator::NOT_SET),
    m_comparisonOperatorHasBeenSet(false),
    m_thresholdHasBeenSet(false)
{
  *this = jsonValue;
}

SimpleRule& SimpleRule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("inputProperty"))
  {
    m_inputProperty = jsonValue.GetString("inputProperty");

    m_inputPropertyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("comparisonOperator"))
  {
    m_comparisonOperator = ComparisonOperatorMapper::GetComparisonOperatorForName(jsonValue.GetString("comparisonOperator"));

    m_comparisonOperatorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("threshold"))
  {
    m_threshold = jsonValue.GetString("threshold");

    m_thresholdHasBeenSet = true;
  }

  return *this;
}

JsonValue SimpleRule::Jsonize() const
{
  JsonValue payload;

  if(m_inputPropertyHasBeenSet)
  {
   payload.WithString("inputProperty", m_inputProperty);

  }

  if(m_comparisonOperatorHasBeenSet)
  {
   payload.WithString("comparisonOperator", ComparisonOperatorMapper::GetNameForComparisonOperator(m_comparisonOperator));
  }

  if(m_thresholdHasBeenSet)
  {
   payload.WithString("threshold", m_threshold);

  }

  return payload;
}

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
