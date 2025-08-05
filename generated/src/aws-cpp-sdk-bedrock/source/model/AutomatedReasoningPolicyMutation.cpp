/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/AutomatedReasoningPolicyMutation.h>
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

AutomatedReasoningPolicyMutation::AutomatedReasoningPolicyMutation(JsonView jsonValue)
{
  *this = jsonValue;
}

AutomatedReasoningPolicyMutation& AutomatedReasoningPolicyMutation::operator =(JsonView jsonValue)
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
  return *this;
}

JsonValue AutomatedReasoningPolicyMutation::Jsonize() const
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

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
