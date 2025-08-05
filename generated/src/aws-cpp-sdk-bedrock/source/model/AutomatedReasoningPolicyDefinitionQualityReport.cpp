/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/AutomatedReasoningPolicyDefinitionQualityReport.h>
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

AutomatedReasoningPolicyDefinitionQualityReport::AutomatedReasoningPolicyDefinitionQualityReport(JsonView jsonValue)
{
  *this = jsonValue;
}

AutomatedReasoningPolicyDefinitionQualityReport& AutomatedReasoningPolicyDefinitionQualityReport::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("typeCount"))
  {
    m_typeCount = jsonValue.GetInteger("typeCount");
    m_typeCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("variableCount"))
  {
    m_variableCount = jsonValue.GetInteger("variableCount");
    m_variableCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ruleCount"))
  {
    m_ruleCount = jsonValue.GetInteger("ruleCount");
    m_ruleCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("unusedTypes"))
  {
    Aws::Utils::Array<JsonView> unusedTypesJsonList = jsonValue.GetArray("unusedTypes");
    for(unsigned unusedTypesIndex = 0; unusedTypesIndex < unusedTypesJsonList.GetLength(); ++unusedTypesIndex)
    {
      m_unusedTypes.push_back(unusedTypesJsonList[unusedTypesIndex].AsString());
    }
    m_unusedTypesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("unusedTypeValues"))
  {
    Aws::Utils::Array<JsonView> unusedTypeValuesJsonList = jsonValue.GetArray("unusedTypeValues");
    for(unsigned unusedTypeValuesIndex = 0; unusedTypeValuesIndex < unusedTypeValuesJsonList.GetLength(); ++unusedTypeValuesIndex)
    {
      m_unusedTypeValues.push_back(unusedTypeValuesJsonList[unusedTypeValuesIndex].AsObject());
    }
    m_unusedTypeValuesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("unusedVariables"))
  {
    Aws::Utils::Array<JsonView> unusedVariablesJsonList = jsonValue.GetArray("unusedVariables");
    for(unsigned unusedVariablesIndex = 0; unusedVariablesIndex < unusedVariablesJsonList.GetLength(); ++unusedVariablesIndex)
    {
      m_unusedVariables.push_back(unusedVariablesJsonList[unusedVariablesIndex].AsString());
    }
    m_unusedVariablesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("conflictingRules"))
  {
    Aws::Utils::Array<JsonView> conflictingRulesJsonList = jsonValue.GetArray("conflictingRules");
    for(unsigned conflictingRulesIndex = 0; conflictingRulesIndex < conflictingRulesJsonList.GetLength(); ++conflictingRulesIndex)
    {
      m_conflictingRules.push_back(conflictingRulesJsonList[conflictingRulesIndex].AsString());
    }
    m_conflictingRulesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("disjointRuleSets"))
  {
    Aws::Utils::Array<JsonView> disjointRuleSetsJsonList = jsonValue.GetArray("disjointRuleSets");
    for(unsigned disjointRuleSetsIndex = 0; disjointRuleSetsIndex < disjointRuleSetsJsonList.GetLength(); ++disjointRuleSetsIndex)
    {
      m_disjointRuleSets.push_back(disjointRuleSetsJsonList[disjointRuleSetsIndex].AsObject());
    }
    m_disjointRuleSetsHasBeenSet = true;
  }
  return *this;
}

JsonValue AutomatedReasoningPolicyDefinitionQualityReport::Jsonize() const
{
  JsonValue payload;

  if(m_typeCountHasBeenSet)
  {
   payload.WithInteger("typeCount", m_typeCount);

  }

  if(m_variableCountHasBeenSet)
  {
   payload.WithInteger("variableCount", m_variableCount);

  }

  if(m_ruleCountHasBeenSet)
  {
   payload.WithInteger("ruleCount", m_ruleCount);

  }

  if(m_unusedTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> unusedTypesJsonList(m_unusedTypes.size());
   for(unsigned unusedTypesIndex = 0; unusedTypesIndex < unusedTypesJsonList.GetLength(); ++unusedTypesIndex)
   {
     unusedTypesJsonList[unusedTypesIndex].AsString(m_unusedTypes[unusedTypesIndex]);
   }
   payload.WithArray("unusedTypes", std::move(unusedTypesJsonList));

  }

  if(m_unusedTypeValuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> unusedTypeValuesJsonList(m_unusedTypeValues.size());
   for(unsigned unusedTypeValuesIndex = 0; unusedTypeValuesIndex < unusedTypeValuesJsonList.GetLength(); ++unusedTypeValuesIndex)
   {
     unusedTypeValuesJsonList[unusedTypeValuesIndex].AsObject(m_unusedTypeValues[unusedTypeValuesIndex].Jsonize());
   }
   payload.WithArray("unusedTypeValues", std::move(unusedTypeValuesJsonList));

  }

  if(m_unusedVariablesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> unusedVariablesJsonList(m_unusedVariables.size());
   for(unsigned unusedVariablesIndex = 0; unusedVariablesIndex < unusedVariablesJsonList.GetLength(); ++unusedVariablesIndex)
   {
     unusedVariablesJsonList[unusedVariablesIndex].AsString(m_unusedVariables[unusedVariablesIndex]);
   }
   payload.WithArray("unusedVariables", std::move(unusedVariablesJsonList));

  }

  if(m_conflictingRulesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> conflictingRulesJsonList(m_conflictingRules.size());
   for(unsigned conflictingRulesIndex = 0; conflictingRulesIndex < conflictingRulesJsonList.GetLength(); ++conflictingRulesIndex)
   {
     conflictingRulesJsonList[conflictingRulesIndex].AsString(m_conflictingRules[conflictingRulesIndex]);
   }
   payload.WithArray("conflictingRules", std::move(conflictingRulesJsonList));

  }

  if(m_disjointRuleSetsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> disjointRuleSetsJsonList(m_disjointRuleSets.size());
   for(unsigned disjointRuleSetsIndex = 0; disjointRuleSetsIndex < disjointRuleSetsJsonList.GetLength(); ++disjointRuleSetsIndex)
   {
     disjointRuleSetsJsonList[disjointRuleSetsIndex].AsObject(m_disjointRuleSets[disjointRuleSetsIndex].Jsonize());
   }
   payload.WithArray("disjointRuleSets", std::move(disjointRuleSetsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
