/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents-data/model/RuleEvaluation.h>
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

RuleEvaluation::RuleEvaluation() : 
    m_simpleRuleEvaluationHasBeenSet(false)
{
}

RuleEvaluation::RuleEvaluation(JsonView jsonValue) : 
    m_simpleRuleEvaluationHasBeenSet(false)
{
  *this = jsonValue;
}

RuleEvaluation& RuleEvaluation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("simpleRuleEvaluation"))
  {
    m_simpleRuleEvaluation = jsonValue.GetObject("simpleRuleEvaluation");

    m_simpleRuleEvaluationHasBeenSet = true;
  }

  return *this;
}

JsonValue RuleEvaluation::Jsonize() const
{
  JsonValue payload;

  if(m_simpleRuleEvaluationHasBeenSet)
  {
   payload.WithObject("simpleRuleEvaluation", m_simpleRuleEvaluation.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTEventsData
} // namespace Aws
