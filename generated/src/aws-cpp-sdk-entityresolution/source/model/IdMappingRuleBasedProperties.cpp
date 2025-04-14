/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/entityresolution/model/IdMappingRuleBasedProperties.h>
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

IdMappingRuleBasedProperties::IdMappingRuleBasedProperties(JsonView jsonValue)
{
  *this = jsonValue;
}

IdMappingRuleBasedProperties& IdMappingRuleBasedProperties::operator =(JsonView jsonValue)
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
  if(jsonValue.ValueExists("ruleDefinitionType"))
  {
    m_ruleDefinitionType = IdMappingWorkflowRuleDefinitionTypeMapper::GetIdMappingWorkflowRuleDefinitionTypeForName(jsonValue.GetString("ruleDefinitionType"));
    m_ruleDefinitionTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("attributeMatchingModel"))
  {
    m_attributeMatchingModel = AttributeMatchingModelMapper::GetAttributeMatchingModelForName(jsonValue.GetString("attributeMatchingModel"));
    m_attributeMatchingModelHasBeenSet = true;
  }
  if(jsonValue.ValueExists("recordMatchingModel"))
  {
    m_recordMatchingModel = RecordMatchingModelMapper::GetRecordMatchingModelForName(jsonValue.GetString("recordMatchingModel"));
    m_recordMatchingModelHasBeenSet = true;
  }
  return *this;
}

JsonValue IdMappingRuleBasedProperties::Jsonize() const
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

  if(m_ruleDefinitionTypeHasBeenSet)
  {
   payload.WithString("ruleDefinitionType", IdMappingWorkflowRuleDefinitionTypeMapper::GetNameForIdMappingWorkflowRuleDefinitionType(m_ruleDefinitionType));
  }

  if(m_attributeMatchingModelHasBeenSet)
  {
   payload.WithString("attributeMatchingModel", AttributeMatchingModelMapper::GetNameForAttributeMatchingModel(m_attributeMatchingModel));
  }

  if(m_recordMatchingModelHasBeenSet)
  {
   payload.WithString("recordMatchingModel", RecordMatchingModelMapper::GetNameForRecordMatchingModel(m_recordMatchingModel));
  }

  return payload;
}

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
