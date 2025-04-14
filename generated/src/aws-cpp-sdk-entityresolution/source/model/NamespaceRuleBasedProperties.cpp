/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/entityresolution/model/NamespaceRuleBasedProperties.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EntityResolution
{
namespace Model
{

NamespaceRuleBasedProperties::NamespaceRuleBasedProperties(JsonView jsonValue)
{
  *this = jsonValue;
}

NamespaceRuleBasedProperties& NamespaceRuleBasedProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("rules"))
  {
    Aws::Utils::Array<JsonView> rulesJsonList = jsonValue.GetArray("rules");
    for(unsigned rulesIndex = 0; rulesIndex < rulesJsonList.GetLength(); ++rulesIndex)
    {
      m_rules.push_back(rulesJsonList[rulesIndex].AsObject());
    }
    m_rulesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ruleDefinitionTypes"))
  {
    Aws::Utils::Array<JsonView> ruleDefinitionTypesJsonList = jsonValue.GetArray("ruleDefinitionTypes");
    for(unsigned ruleDefinitionTypesIndex = 0; ruleDefinitionTypesIndex < ruleDefinitionTypesJsonList.GetLength(); ++ruleDefinitionTypesIndex)
    {
      m_ruleDefinitionTypes.push_back(IdMappingWorkflowRuleDefinitionTypeMapper::GetIdMappingWorkflowRuleDefinitionTypeForName(ruleDefinitionTypesJsonList[ruleDefinitionTypesIndex].AsString()));
    }
    m_ruleDefinitionTypesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("attributeMatchingModel"))
  {
    m_attributeMatchingModel = AttributeMatchingModelMapper::GetAttributeMatchingModelForName(jsonValue.GetString("attributeMatchingModel"));
    m_attributeMatchingModelHasBeenSet = true;
  }
  if(jsonValue.ValueExists("recordMatchingModels"))
  {
    Aws::Utils::Array<JsonView> recordMatchingModelsJsonList = jsonValue.GetArray("recordMatchingModels");
    for(unsigned recordMatchingModelsIndex = 0; recordMatchingModelsIndex < recordMatchingModelsJsonList.GetLength(); ++recordMatchingModelsIndex)
    {
      m_recordMatchingModels.push_back(RecordMatchingModelMapper::GetRecordMatchingModelForName(recordMatchingModelsJsonList[recordMatchingModelsIndex].AsString()));
    }
    m_recordMatchingModelsHasBeenSet = true;
  }
  return *this;
}

JsonValue NamespaceRuleBasedProperties::Jsonize() const
{
  JsonValue payload;

  if(m_rulesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> rulesJsonList(m_rules.size());
   for(unsigned rulesIndex = 0; rulesIndex < rulesJsonList.GetLength(); ++rulesIndex)
   {
     rulesJsonList[rulesIndex].AsObject(m_rules[rulesIndex].Jsonize());
   }
   payload.WithArray("rules", std::move(rulesJsonList));

  }

  if(m_ruleDefinitionTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> ruleDefinitionTypesJsonList(m_ruleDefinitionTypes.size());
   for(unsigned ruleDefinitionTypesIndex = 0; ruleDefinitionTypesIndex < ruleDefinitionTypesJsonList.GetLength(); ++ruleDefinitionTypesIndex)
   {
     ruleDefinitionTypesJsonList[ruleDefinitionTypesIndex].AsString(IdMappingWorkflowRuleDefinitionTypeMapper::GetNameForIdMappingWorkflowRuleDefinitionType(m_ruleDefinitionTypes[ruleDefinitionTypesIndex]));
   }
   payload.WithArray("ruleDefinitionTypes", std::move(ruleDefinitionTypesJsonList));

  }

  if(m_attributeMatchingModelHasBeenSet)
  {
   payload.WithString("attributeMatchingModel", AttributeMatchingModelMapper::GetNameForAttributeMatchingModel(m_attributeMatchingModel));
  }

  if(m_recordMatchingModelsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> recordMatchingModelsJsonList(m_recordMatchingModels.size());
   for(unsigned recordMatchingModelsIndex = 0; recordMatchingModelsIndex < recordMatchingModelsJsonList.GetLength(); ++recordMatchingModelsIndex)
   {
     recordMatchingModelsJsonList[recordMatchingModelsIndex].AsString(RecordMatchingModelMapper::GetNameForRecordMatchingModel(m_recordMatchingModels[recordMatchingModelsIndex]));
   }
   payload.WithArray("recordMatchingModels", std::move(recordMatchingModelsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
