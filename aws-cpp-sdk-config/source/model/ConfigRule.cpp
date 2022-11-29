/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/ConfigRule.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConfigService
{
namespace Model
{

ConfigRule::ConfigRule() : 
    m_configRuleNameHasBeenSet(false),
    m_configRuleArnHasBeenSet(false),
    m_configRuleIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_scopeHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_inputParametersHasBeenSet(false),
    m_maximumExecutionFrequency(MaximumExecutionFrequency::NOT_SET),
    m_maximumExecutionFrequencyHasBeenSet(false),
    m_configRuleState(ConfigRuleState::NOT_SET),
    m_configRuleStateHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_evaluationModesHasBeenSet(false)
{
}

ConfigRule::ConfigRule(JsonView jsonValue) : 
    m_configRuleNameHasBeenSet(false),
    m_configRuleArnHasBeenSet(false),
    m_configRuleIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_scopeHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_inputParametersHasBeenSet(false),
    m_maximumExecutionFrequency(MaximumExecutionFrequency::NOT_SET),
    m_maximumExecutionFrequencyHasBeenSet(false),
    m_configRuleState(ConfigRuleState::NOT_SET),
    m_configRuleStateHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_evaluationModesHasBeenSet(false)
{
  *this = jsonValue;
}

ConfigRule& ConfigRule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ConfigRuleName"))
  {
    m_configRuleName = jsonValue.GetString("ConfigRuleName");

    m_configRuleNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConfigRuleArn"))
  {
    m_configRuleArn = jsonValue.GetString("ConfigRuleArn");

    m_configRuleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConfigRuleId"))
  {
    m_configRuleId = jsonValue.GetString("ConfigRuleId");

    m_configRuleIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Scope"))
  {
    m_scope = jsonValue.GetObject("Scope");

    m_scopeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Source"))
  {
    m_source = jsonValue.GetObject("Source");

    m_sourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InputParameters"))
  {
    m_inputParameters = jsonValue.GetString("InputParameters");

    m_inputParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaximumExecutionFrequency"))
  {
    m_maximumExecutionFrequency = MaximumExecutionFrequencyMapper::GetMaximumExecutionFrequencyForName(jsonValue.GetString("MaximumExecutionFrequency"));

    m_maximumExecutionFrequencyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConfigRuleState"))
  {
    m_configRuleState = ConfigRuleStateMapper::GetConfigRuleStateForName(jsonValue.GetString("ConfigRuleState"));

    m_configRuleStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedBy"))
  {
    m_createdBy = jsonValue.GetString("CreatedBy");

    m_createdByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EvaluationModes"))
  {
    Aws::Utils::Array<JsonView> evaluationModesJsonList = jsonValue.GetArray("EvaluationModes");
    for(unsigned evaluationModesIndex = 0; evaluationModesIndex < evaluationModesJsonList.GetLength(); ++evaluationModesIndex)
    {
      m_evaluationModes.push_back(evaluationModesJsonList[evaluationModesIndex].AsObject());
    }
    m_evaluationModesHasBeenSet = true;
  }

  return *this;
}

JsonValue ConfigRule::Jsonize() const
{
  JsonValue payload;

  if(m_configRuleNameHasBeenSet)
  {
   payload.WithString("ConfigRuleName", m_configRuleName);

  }

  if(m_configRuleArnHasBeenSet)
  {
   payload.WithString("ConfigRuleArn", m_configRuleArn);

  }

  if(m_configRuleIdHasBeenSet)
  {
   payload.WithString("ConfigRuleId", m_configRuleId);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_scopeHasBeenSet)
  {
   payload.WithObject("Scope", m_scope.Jsonize());

  }

  if(m_sourceHasBeenSet)
  {
   payload.WithObject("Source", m_source.Jsonize());

  }

  if(m_inputParametersHasBeenSet)
  {
   payload.WithString("InputParameters", m_inputParameters);

  }

  if(m_maximumExecutionFrequencyHasBeenSet)
  {
   payload.WithString("MaximumExecutionFrequency", MaximumExecutionFrequencyMapper::GetNameForMaximumExecutionFrequency(m_maximumExecutionFrequency));
  }

  if(m_configRuleStateHasBeenSet)
  {
   payload.WithString("ConfigRuleState", ConfigRuleStateMapper::GetNameForConfigRuleState(m_configRuleState));
  }

  if(m_createdByHasBeenSet)
  {
   payload.WithString("CreatedBy", m_createdBy);

  }

  if(m_evaluationModesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> evaluationModesJsonList(m_evaluationModes.size());
   for(unsigned evaluationModesIndex = 0; evaluationModesIndex < evaluationModesJsonList.GetLength(); ++evaluationModesIndex)
   {
     evaluationModesJsonList[evaluationModesIndex].AsObject(m_evaluationModes[evaluationModesIndex].Jsonize());
   }
   payload.WithArray("EvaluationModes", std::move(evaluationModesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ConfigService
} // namespace Aws
