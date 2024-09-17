/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/entityresolution/model/RuleBasedProperties.h>
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

RuleBasedProperties::RuleBasedProperties() : 
    m_attributeMatchingModel(AttributeMatchingModel::NOT_SET),
    m_attributeMatchingModelHasBeenSet(false),
    m_matchPurpose(MatchPurpose::NOT_SET),
    m_matchPurposeHasBeenSet(false),
    m_rulesHasBeenSet(false)
{
}

RuleBasedProperties::RuleBasedProperties(JsonView jsonValue)
  : RuleBasedProperties()
{
  *this = jsonValue;
}

RuleBasedProperties& RuleBasedProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("attributeMatchingModel"))
  {
    m_attributeMatchingModel = AttributeMatchingModelMapper::GetAttributeMatchingModelForName(jsonValue.GetString("attributeMatchingModel"));

    m_attributeMatchingModelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("matchPurpose"))
  {
    m_matchPurpose = MatchPurposeMapper::GetMatchPurposeForName(jsonValue.GetString("matchPurpose"));

    m_matchPurposeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("rules"))
  {
    Aws::Utils::Array<JsonView> rulesJsonList = jsonValue.GetArray("rules");
    for(unsigned rulesIndex = 0; rulesIndex < rulesJsonList.GetLength(); ++rulesIndex)
    {
      m_rules.push_back(rulesJsonList[rulesIndex].AsObject());
    }
    m_rulesHasBeenSet = true;
  }

  return *this;
}

JsonValue RuleBasedProperties::Jsonize() const
{
  JsonValue payload;

  if(m_attributeMatchingModelHasBeenSet)
  {
   payload.WithString("attributeMatchingModel", AttributeMatchingModelMapper::GetNameForAttributeMatchingModel(m_attributeMatchingModel));
  }

  if(m_matchPurposeHasBeenSet)
  {
   payload.WithString("matchPurpose", MatchPurposeMapper::GetNameForMatchPurpose(m_matchPurpose));
  }

  if(m_rulesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> rulesJsonList(m_rules.size());
   for(unsigned rulesIndex = 0; rulesIndex < rulesJsonList.GetLength(); ++rulesIndex)
   {
     rulesJsonList[rulesIndex].AsObject(m_rules[rulesIndex].Jsonize());
   }
   payload.WithArray("rules", std::move(rulesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
