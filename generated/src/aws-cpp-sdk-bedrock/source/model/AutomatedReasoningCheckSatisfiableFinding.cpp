/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/AutomatedReasoningCheckSatisfiableFinding.h>
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

AutomatedReasoningCheckSatisfiableFinding::AutomatedReasoningCheckSatisfiableFinding(JsonView jsonValue)
{
  *this = jsonValue;
}

AutomatedReasoningCheckSatisfiableFinding& AutomatedReasoningCheckSatisfiableFinding::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("translation"))
  {
    m_translation = jsonValue.GetObject("translation");
    m_translationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("claimsTrueScenario"))
  {
    m_claimsTrueScenario = jsonValue.GetObject("claimsTrueScenario");
    m_claimsTrueScenarioHasBeenSet = true;
  }
  if(jsonValue.ValueExists("claimsFalseScenario"))
  {
    m_claimsFalseScenario = jsonValue.GetObject("claimsFalseScenario");
    m_claimsFalseScenarioHasBeenSet = true;
  }
  if(jsonValue.ValueExists("logicWarning"))
  {
    m_logicWarning = jsonValue.GetObject("logicWarning");
    m_logicWarningHasBeenSet = true;
  }
  return *this;
}

JsonValue AutomatedReasoningCheckSatisfiableFinding::Jsonize() const
{
  JsonValue payload;

  if(m_translationHasBeenSet)
  {
   payload.WithObject("translation", m_translation.Jsonize());

  }

  if(m_claimsTrueScenarioHasBeenSet)
  {
   payload.WithObject("claimsTrueScenario", m_claimsTrueScenario.Jsonize());

  }

  if(m_claimsFalseScenarioHasBeenSet)
  {
   payload.WithObject("claimsFalseScenario", m_claimsFalseScenario.Jsonize());

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
