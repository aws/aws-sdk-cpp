/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/frauddetector/model/RuleResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FraudDetector
{
namespace Model
{

RuleResult::RuleResult() : 
    m_ruleIdHasBeenSet(false),
    m_outcomesHasBeenSet(false)
{
}

RuleResult::RuleResult(JsonView jsonValue) : 
    m_ruleIdHasBeenSet(false),
    m_outcomesHasBeenSet(false)
{
  *this = jsonValue;
}

RuleResult& RuleResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ruleId"))
  {
    m_ruleId = jsonValue.GetString("ruleId");

    m_ruleIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("outcomes"))
  {
    Aws::Utils::Array<JsonView> outcomesJsonList = jsonValue.GetArray("outcomes");
    for(unsigned outcomesIndex = 0; outcomesIndex < outcomesJsonList.GetLength(); ++outcomesIndex)
    {
      m_outcomes.push_back(outcomesJsonList[outcomesIndex].AsString());
    }
    m_outcomesHasBeenSet = true;
  }

  return *this;
}

JsonValue RuleResult::Jsonize() const
{
  JsonValue payload;

  if(m_ruleIdHasBeenSet)
  {
   payload.WithString("ruleId", m_ruleId);

  }

  if(m_outcomesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> outcomesJsonList(m_outcomes.size());
   for(unsigned outcomesIndex = 0; outcomesIndex < outcomesJsonList.GetLength(); ++outcomesIndex)
   {
     outcomesJsonList[outcomesIndex].AsString(m_outcomes[outcomesIndex]);
   }
   payload.WithArray("outcomes", std::move(outcomesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
