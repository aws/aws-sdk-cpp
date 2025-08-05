/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/AutomatedReasoningCheckInvalidFinding.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Bedrock
{
namespace Model
{

AutomatedReasoningCheckInvalidFinding::AutomatedReasoningCheckInvalidFinding(JsonView jsonValue)
{
  *this = jsonValue;
}

AutomatedReasoningCheckInvalidFinding& AutomatedReasoningCheckInvalidFinding::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("translation"))
  {
    m_translation = jsonValue.GetObject("translation");
    m_translationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("contradictingRules"))
  {
    Aws::Utils::Array<JsonView> contradictingRulesJsonList = jsonValue.GetArray("contradictingRules");
    for(unsigned contradictingRulesIndex = 0; contradictingRulesIndex < contradictingRulesJsonList.GetLength(); ++contradictingRulesIndex)
    {
      m_contradictingRules.push_back(contradictingRulesJsonList[contradictingRulesIndex].AsObject());
    }
    m_contradictingRulesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("logicWarning"))
  {
    m_logicWarning = jsonValue.GetObject("logicWarning");
    m_logicWarningHasBeenSet = true;
  }
  return *this;
}

JsonValue AutomatedReasoningCheckInvalidFinding::Jsonize() const
{
  JsonValue payload;

  if(m_translationHasBeenSet)
  {
   payload.WithObject("translation", m_translation.Jsonize());

  }

  if(m_contradictingRulesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> contradictingRulesJsonList(m_contradictingRules.size());
   for(unsigned contradictingRulesIndex = 0; contradictingRulesIndex < contradictingRulesJsonList.GetLength(); ++contradictingRulesIndex)
   {
     contradictingRulesJsonList[contradictingRulesIndex].AsObject(m_contradictingRules[contradictingRulesIndex].Jsonize());
   }
   payload.WithArray("contradictingRules", std::move(contradictingRulesJsonList));

  }

  if(m_logicWarningHasBeenSet)
  {
   payload.WithObject("logicWarning", m_logicWarning.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
