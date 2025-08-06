/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/AutomatedReasoningPolicyAnnotation.h>
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

AutomatedReasoningPolicyAnnotation::AutomatedReasoningPolicyAnnotation(JsonView jsonValue)
{
  *this = jsonValue;
}

AutomatedReasoningPolicyAnnotation& AutomatedReasoningPolicyAnnotation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("addType"))
  {
    m_addType = jsonValue.GetObject("addType");
    m_addTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("updateType"))
  {
    m_updateType = jsonValue.GetObject("updateType");
    m_updateTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("deleteType"))
  {
    m_deleteType = jsonValue.GetObject("deleteType");
    m_deleteTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("addVariable"))
  {
    m_addVariable = jsonValue.GetObject("addVariable");
    m_addVariableHasBeenSet = true;
  }
  if(jsonValue.ValueExists("updateVariable"))
  {
    m_updateVariable = jsonValue.GetObject("updateVariable");
    m_updateVariableHasBeenSet = true;
  }
  if(jsonValue.ValueExists("deleteVariable"))
  {
    m_deleteVariable = jsonValue.GetObject("deleteVariable");
    m_deleteVariableHasBeenSet = true;
  }
  if(jsonValue.ValueExists("addRule"))
  {
    m_addRule = jsonValue.GetObject("addRule");
    m_addRuleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("updateRule"))
  {
    m_updateRule = jsonValue.GetObject("updateRule");
    m_updateRuleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("deleteRule"))
  {
    m_deleteRule = jsonValue.GetObject("deleteRule");
    m_deleteRuleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("addRuleFromNaturalLanguage"))
  {
    m_addRuleFromNaturalLanguage = jsonValue.GetObject("addRuleFromNaturalLanguage");
    m_addRuleFromNaturalLanguageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("updateFromRulesFeedback"))
  {
    m_updateFromRulesFeedback = jsonValue.GetObject("updateFromRulesFeedback");
    m_updateFromRulesFeedbackHasBeenSet = true;
  }
  if(jsonValue.ValueExists("updateFromScenarioFeedback"))
  {
    m_updateFromScenarioFeedback = jsonValue.GetObject("updateFromScenarioFeedback");
    m_updateFromScenarioFeedbackHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ingestContent"))
  {
    m_ingestContent = jsonValue.GetObject("ingestContent");
    m_ingestContentHasBeenSet = true;
  }
  return *this;
}

JsonValue AutomatedReasoningPolicyAnnotation::Jsonize() const
{
  JsonValue payload;

  if(m_addTypeHasBeenSet)
  {
   payload.WithObject("addType", m_addType.Jsonize());

  }

  if(m_updateTypeHasBeenSet)
  {
   payload.WithObject("updateType", m_updateType.Jsonize());

  }

  if(m_deleteTypeHasBeenSet)
  {
   payload.WithObject("deleteType", m_deleteType.Jsonize());

  }

  if(m_addVariableHasBeenSet)
  {
   payload.WithObject("addVariable", m_addVariable.Jsonize());

  }

  if(m_updateVariableHasBeenSet)
  {
   payload.WithObject("updateVariable", m_updateVariable.Jsonize());

  }

  if(m_deleteVariableHasBeenSet)
  {
   payload.WithObject("deleteVariable", m_deleteVariable.Jsonize());

  }

  if(m_addRuleHasBeenSet)
  {
   payload.WithObject("addRule", m_addRule.Jsonize());

  }

  if(m_updateRuleHasBeenSet)
  {
   payload.WithObject("updateRule", m_updateRule.Jsonize());

  }

  if(m_deleteRuleHasBeenSet)
  {
   payload.WithObject("deleteRule", m_deleteRule.Jsonize());

  }

  if(m_addRuleFromNaturalLanguageHasBeenSet)
  {
   payload.WithObject("addRuleFromNaturalLanguage", m_addRuleFromNaturalLanguage.Jsonize());

  }

  if(m_updateFromRulesFeedbackHasBeenSet)
  {
   payload.WithObject("updateFromRulesFeedback", m_updateFromRulesFeedback.Jsonize());

  }

  if(m_updateFromScenarioFeedbackHasBeenSet)
  {
   payload.WithObject("updateFromScenarioFeedback", m_updateFromScenarioFeedback.Jsonize());

  }

  if(m_ingestContentHasBeenSet)
  {
   payload.WithObject("ingestContent", m_ingestContent.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
