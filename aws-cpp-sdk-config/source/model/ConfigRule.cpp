/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
    m_configRuleStateHasBeenSet(false)
{
}

ConfigRule::ConfigRule(const JsonValue& jsonValue) : 
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
    m_configRuleStateHasBeenSet(false)
{
  *this = jsonValue;
}

ConfigRule& ConfigRule::operator =(const JsonValue& jsonValue)
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

  return payload;
}

} // namespace Model
} // namespace ConfigService
} // namespace Aws