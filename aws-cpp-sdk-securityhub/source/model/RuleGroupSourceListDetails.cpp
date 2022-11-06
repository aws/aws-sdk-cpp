/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/RuleGroupSourceListDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

RuleGroupSourceListDetails::RuleGroupSourceListDetails() : 
    m_generatedRulesTypeHasBeenSet(false),
    m_targetTypesHasBeenSet(false),
    m_targetsHasBeenSet(false)
{
}

RuleGroupSourceListDetails::RuleGroupSourceListDetails(JsonView jsonValue) : 
    m_generatedRulesTypeHasBeenSet(false),
    m_targetTypesHasBeenSet(false),
    m_targetsHasBeenSet(false)
{
  *this = jsonValue;
}

RuleGroupSourceListDetails& RuleGroupSourceListDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("GeneratedRulesType"))
  {
    m_generatedRulesType = jsonValue.GetString("GeneratedRulesType");

    m_generatedRulesTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetTypes"))
  {
    Aws::Utils::Array<JsonView> targetTypesJsonList = jsonValue.GetArray("TargetTypes");
    for(unsigned targetTypesIndex = 0; targetTypesIndex < targetTypesJsonList.GetLength(); ++targetTypesIndex)
    {
      m_targetTypes.push_back(targetTypesJsonList[targetTypesIndex].AsString());
    }
    m_targetTypesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Targets"))
  {
    Aws::Utils::Array<JsonView> targetsJsonList = jsonValue.GetArray("Targets");
    for(unsigned targetsIndex = 0; targetsIndex < targetsJsonList.GetLength(); ++targetsIndex)
    {
      m_targets.push_back(targetsJsonList[targetsIndex].AsString());
    }
    m_targetsHasBeenSet = true;
  }

  return *this;
}

JsonValue RuleGroupSourceListDetails::Jsonize() const
{
  JsonValue payload;

  if(m_generatedRulesTypeHasBeenSet)
  {
   payload.WithString("GeneratedRulesType", m_generatedRulesType);

  }

  if(m_targetTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> targetTypesJsonList(m_targetTypes.size());
   for(unsigned targetTypesIndex = 0; targetTypesIndex < targetTypesJsonList.GetLength(); ++targetTypesIndex)
   {
     targetTypesJsonList[targetTypesIndex].AsString(m_targetTypes[targetTypesIndex]);
   }
   payload.WithArray("TargetTypes", std::move(targetTypesJsonList));

  }

  if(m_targetsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> targetsJsonList(m_targets.size());
   for(unsigned targetsIndex = 0; targetsIndex < targetsJsonList.GetLength(); ++targetsIndex)
   {
     targetsJsonList[targetsIndex].AsString(m_targets[targetsIndex]);
   }
   payload.WithArray("Targets", std::move(targetsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
