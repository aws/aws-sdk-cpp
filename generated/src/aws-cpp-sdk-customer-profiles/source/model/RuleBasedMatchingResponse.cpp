/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/RuleBasedMatchingResponse.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CustomerProfiles
{
namespace Model
{

RuleBasedMatchingResponse::RuleBasedMatchingResponse() : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_matchingRulesHasBeenSet(false),
    m_status(RuleBasedMatchingStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_maxAllowedRuleLevelForMerging(0),
    m_maxAllowedRuleLevelForMergingHasBeenSet(false),
    m_maxAllowedRuleLevelForMatching(0),
    m_maxAllowedRuleLevelForMatchingHasBeenSet(false),
    m_attributeTypesSelectorHasBeenSet(false),
    m_conflictResolutionHasBeenSet(false),
    m_exportingConfigHasBeenSet(false)
{
}

RuleBasedMatchingResponse::RuleBasedMatchingResponse(JsonView jsonValue) : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_matchingRulesHasBeenSet(false),
    m_status(RuleBasedMatchingStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_maxAllowedRuleLevelForMerging(0),
    m_maxAllowedRuleLevelForMergingHasBeenSet(false),
    m_maxAllowedRuleLevelForMatching(0),
    m_maxAllowedRuleLevelForMatchingHasBeenSet(false),
    m_attributeTypesSelectorHasBeenSet(false),
    m_conflictResolutionHasBeenSet(false),
    m_exportingConfigHasBeenSet(false)
{
  *this = jsonValue;
}

RuleBasedMatchingResponse& RuleBasedMatchingResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Enabled"))
  {
    m_enabled = jsonValue.GetBool("Enabled");

    m_enabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MatchingRules"))
  {
    Aws::Utils::Array<JsonView> matchingRulesJsonList = jsonValue.GetArray("MatchingRules");
    for(unsigned matchingRulesIndex = 0; matchingRulesIndex < matchingRulesJsonList.GetLength(); ++matchingRulesIndex)
    {
      m_matchingRules.push_back(matchingRulesJsonList[matchingRulesIndex].AsObject());
    }
    m_matchingRulesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = RuleBasedMatchingStatusMapper::GetRuleBasedMatchingStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxAllowedRuleLevelForMerging"))
  {
    m_maxAllowedRuleLevelForMerging = jsonValue.GetInteger("MaxAllowedRuleLevelForMerging");

    m_maxAllowedRuleLevelForMergingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxAllowedRuleLevelForMatching"))
  {
    m_maxAllowedRuleLevelForMatching = jsonValue.GetInteger("MaxAllowedRuleLevelForMatching");

    m_maxAllowedRuleLevelForMatchingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AttributeTypesSelector"))
  {
    m_attributeTypesSelector = jsonValue.GetObject("AttributeTypesSelector");

    m_attributeTypesSelectorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConflictResolution"))
  {
    m_conflictResolution = jsonValue.GetObject("ConflictResolution");

    m_conflictResolutionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExportingConfig"))
  {
    m_exportingConfig = jsonValue.GetObject("ExportingConfig");

    m_exportingConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue RuleBasedMatchingResponse::Jsonize() const
{
  JsonValue payload;

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("Enabled", m_enabled);

  }

  if(m_matchingRulesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> matchingRulesJsonList(m_matchingRules.size());
   for(unsigned matchingRulesIndex = 0; matchingRulesIndex < matchingRulesJsonList.GetLength(); ++matchingRulesIndex)
   {
     matchingRulesJsonList[matchingRulesIndex].AsObject(m_matchingRules[matchingRulesIndex].Jsonize());
   }
   payload.WithArray("MatchingRules", std::move(matchingRulesJsonList));

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", RuleBasedMatchingStatusMapper::GetNameForRuleBasedMatchingStatus(m_status));
  }

  if(m_maxAllowedRuleLevelForMergingHasBeenSet)
  {
   payload.WithInteger("MaxAllowedRuleLevelForMerging", m_maxAllowedRuleLevelForMerging);

  }

  if(m_maxAllowedRuleLevelForMatchingHasBeenSet)
  {
   payload.WithInteger("MaxAllowedRuleLevelForMatching", m_maxAllowedRuleLevelForMatching);

  }

  if(m_attributeTypesSelectorHasBeenSet)
  {
   payload.WithObject("AttributeTypesSelector", m_attributeTypesSelector.Jsonize());

  }

  if(m_conflictResolutionHasBeenSet)
  {
   payload.WithObject("ConflictResolution", m_conflictResolution.Jsonize());

  }

  if(m_exportingConfigHasBeenSet)
  {
   payload.WithObject("ExportingConfig", m_exportingConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
