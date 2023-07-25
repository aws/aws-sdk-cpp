/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/customer-profiles/model/RuleBasedMatchingStatus.h>
#include <aws/customer-profiles/model/AttributeTypesSelector.h>
#include <aws/customer-profiles/model/ConflictResolution.h>
#include <aws/customer-profiles/model/ExportingConfig.h>
#include <aws/customer-profiles/model/MatchingRule.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CustomerProfiles
{
namespace Model
{

  /**
   * <p>The response of the Rule-based matching request.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/RuleBasedMatchingResponse">AWS
   * API Reference</a></p>
   */
  class RuleBasedMatchingResponse
  {
  public:
    AWS_CUSTOMERPROFILES_API RuleBasedMatchingResponse();
    AWS_CUSTOMERPROFILES_API RuleBasedMatchingResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API RuleBasedMatchingResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The flag that enables the rule-based matching process of duplicate
     * profiles.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>The flag that enables the rule-based matching process of duplicate
     * profiles.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>The flag that enables the rule-based matching process of duplicate
     * profiles.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>The flag that enables the rule-based matching process of duplicate
     * profiles.</p>
     */
    inline RuleBasedMatchingResponse& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>Configures how the rule-based matching process should match profiles. You can
     * have up to 15 <code>MatchingRule</code> in the <code>MatchingRules</code>.</p>
     */
    inline const Aws::Vector<MatchingRule>& GetMatchingRules() const{ return m_matchingRules; }

    /**
     * <p>Configures how the rule-based matching process should match profiles. You can
     * have up to 15 <code>MatchingRule</code> in the <code>MatchingRules</code>.</p>
     */
    inline bool MatchingRulesHasBeenSet() const { return m_matchingRulesHasBeenSet; }

    /**
     * <p>Configures how the rule-based matching process should match profiles. You can
     * have up to 15 <code>MatchingRule</code> in the <code>MatchingRules</code>.</p>
     */
    inline void SetMatchingRules(const Aws::Vector<MatchingRule>& value) { m_matchingRulesHasBeenSet = true; m_matchingRules = value; }

    /**
     * <p>Configures how the rule-based matching process should match profiles. You can
     * have up to 15 <code>MatchingRule</code> in the <code>MatchingRules</code>.</p>
     */
    inline void SetMatchingRules(Aws::Vector<MatchingRule>&& value) { m_matchingRulesHasBeenSet = true; m_matchingRules = std::move(value); }

    /**
     * <p>Configures how the rule-based matching process should match profiles. You can
     * have up to 15 <code>MatchingRule</code> in the <code>MatchingRules</code>.</p>
     */
    inline RuleBasedMatchingResponse& WithMatchingRules(const Aws::Vector<MatchingRule>& value) { SetMatchingRules(value); return *this;}

    /**
     * <p>Configures how the rule-based matching process should match profiles. You can
     * have up to 15 <code>MatchingRule</code> in the <code>MatchingRules</code>.</p>
     */
    inline RuleBasedMatchingResponse& WithMatchingRules(Aws::Vector<MatchingRule>&& value) { SetMatchingRules(std::move(value)); return *this;}

    /**
     * <p>Configures how the rule-based matching process should match profiles. You can
     * have up to 15 <code>MatchingRule</code> in the <code>MatchingRules</code>.</p>
     */
    inline RuleBasedMatchingResponse& AddMatchingRules(const MatchingRule& value) { m_matchingRulesHasBeenSet = true; m_matchingRules.push_back(value); return *this; }

    /**
     * <p>Configures how the rule-based matching process should match profiles. You can
     * have up to 15 <code>MatchingRule</code> in the <code>MatchingRules</code>.</p>
     */
    inline RuleBasedMatchingResponse& AddMatchingRules(MatchingRule&& value) { m_matchingRulesHasBeenSet = true; m_matchingRules.push_back(std::move(value)); return *this; }


    /**
     * <p>PENDING</p> <ul> <li> <p>The first status after configuration a rule-based
     * matching rule. If it is an existing domain, the rule-based Identity Resolution
     * waits one hour before creating the matching rule. If it is a new domain, the
     * system will skip the <code>PENDING</code> stage.</p> </li> </ul>
     * <p>IN_PROGRESS</p> <ul> <li> <p>The system is creating the rule-based matching
     * rule. Under this status, the system is evaluating the existing data and you can
     * no longer change the Rule-based matching configuration.</p> </li> </ul>
     * <p>ACTIVE</p> <ul> <li> <p>The rule is ready to use. You can change the rule a
     * day after the status is in <code>ACTIVE</code>.</p> </li> </ul>
     */
    inline const RuleBasedMatchingStatus& GetStatus() const{ return m_status; }

    /**
     * <p>PENDING</p> <ul> <li> <p>The first status after configuration a rule-based
     * matching rule. If it is an existing domain, the rule-based Identity Resolution
     * waits one hour before creating the matching rule. If it is a new domain, the
     * system will skip the <code>PENDING</code> stage.</p> </li> </ul>
     * <p>IN_PROGRESS</p> <ul> <li> <p>The system is creating the rule-based matching
     * rule. Under this status, the system is evaluating the existing data and you can
     * no longer change the Rule-based matching configuration.</p> </li> </ul>
     * <p>ACTIVE</p> <ul> <li> <p>The rule is ready to use. You can change the rule a
     * day after the status is in <code>ACTIVE</code>.</p> </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>PENDING</p> <ul> <li> <p>The first status after configuration a rule-based
     * matching rule. If it is an existing domain, the rule-based Identity Resolution
     * waits one hour before creating the matching rule. If it is a new domain, the
     * system will skip the <code>PENDING</code> stage.</p> </li> </ul>
     * <p>IN_PROGRESS</p> <ul> <li> <p>The system is creating the rule-based matching
     * rule. Under this status, the system is evaluating the existing data and you can
     * no longer change the Rule-based matching configuration.</p> </li> </ul>
     * <p>ACTIVE</p> <ul> <li> <p>The rule is ready to use. You can change the rule a
     * day after the status is in <code>ACTIVE</code>.</p> </li> </ul>
     */
    inline void SetStatus(const RuleBasedMatchingStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>PENDING</p> <ul> <li> <p>The first status after configuration a rule-based
     * matching rule. If it is an existing domain, the rule-based Identity Resolution
     * waits one hour before creating the matching rule. If it is a new domain, the
     * system will skip the <code>PENDING</code> stage.</p> </li> </ul>
     * <p>IN_PROGRESS</p> <ul> <li> <p>The system is creating the rule-based matching
     * rule. Under this status, the system is evaluating the existing data and you can
     * no longer change the Rule-based matching configuration.</p> </li> </ul>
     * <p>ACTIVE</p> <ul> <li> <p>The rule is ready to use. You can change the rule a
     * day after the status is in <code>ACTIVE</code>.</p> </li> </ul>
     */
    inline void SetStatus(RuleBasedMatchingStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>PENDING</p> <ul> <li> <p>The first status after configuration a rule-based
     * matching rule. If it is an existing domain, the rule-based Identity Resolution
     * waits one hour before creating the matching rule. If it is a new domain, the
     * system will skip the <code>PENDING</code> stage.</p> </li> </ul>
     * <p>IN_PROGRESS</p> <ul> <li> <p>The system is creating the rule-based matching
     * rule. Under this status, the system is evaluating the existing data and you can
     * no longer change the Rule-based matching configuration.</p> </li> </ul>
     * <p>ACTIVE</p> <ul> <li> <p>The rule is ready to use. You can change the rule a
     * day after the status is in <code>ACTIVE</code>.</p> </li> </ul>
     */
    inline RuleBasedMatchingResponse& WithStatus(const RuleBasedMatchingStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>PENDING</p> <ul> <li> <p>The first status after configuration a rule-based
     * matching rule. If it is an existing domain, the rule-based Identity Resolution
     * waits one hour before creating the matching rule. If it is a new domain, the
     * system will skip the <code>PENDING</code> stage.</p> </li> </ul>
     * <p>IN_PROGRESS</p> <ul> <li> <p>The system is creating the rule-based matching
     * rule. Under this status, the system is evaluating the existing data and you can
     * no longer change the Rule-based matching configuration.</p> </li> </ul>
     * <p>ACTIVE</p> <ul> <li> <p>The rule is ready to use. You can change the rule a
     * day after the status is in <code>ACTIVE</code>.</p> </li> </ul>
     */
    inline RuleBasedMatchingResponse& WithStatus(RuleBasedMatchingStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p> <a
     * href="https://docs.aws.amazon.com/customerprofiles/latest/APIReference/API_MatchingRule.html">MatchingRule</a>
     * </p>
     */
    inline int GetMaxAllowedRuleLevelForMerging() const{ return m_maxAllowedRuleLevelForMerging; }

    /**
     * <p> <a
     * href="https://docs.aws.amazon.com/customerprofiles/latest/APIReference/API_MatchingRule.html">MatchingRule</a>
     * </p>
     */
    inline bool MaxAllowedRuleLevelForMergingHasBeenSet() const { return m_maxAllowedRuleLevelForMergingHasBeenSet; }

    /**
     * <p> <a
     * href="https://docs.aws.amazon.com/customerprofiles/latest/APIReference/API_MatchingRule.html">MatchingRule</a>
     * </p>
     */
    inline void SetMaxAllowedRuleLevelForMerging(int value) { m_maxAllowedRuleLevelForMergingHasBeenSet = true; m_maxAllowedRuleLevelForMerging = value; }

    /**
     * <p> <a
     * href="https://docs.aws.amazon.com/customerprofiles/latest/APIReference/API_MatchingRule.html">MatchingRule</a>
     * </p>
     */
    inline RuleBasedMatchingResponse& WithMaxAllowedRuleLevelForMerging(int value) { SetMaxAllowedRuleLevelForMerging(value); return *this;}


    /**
     * <p>Indicates the maximum allowed rule level.</p>
     */
    inline int GetMaxAllowedRuleLevelForMatching() const{ return m_maxAllowedRuleLevelForMatching; }

    /**
     * <p>Indicates the maximum allowed rule level.</p>
     */
    inline bool MaxAllowedRuleLevelForMatchingHasBeenSet() const { return m_maxAllowedRuleLevelForMatchingHasBeenSet; }

    /**
     * <p>Indicates the maximum allowed rule level.</p>
     */
    inline void SetMaxAllowedRuleLevelForMatching(int value) { m_maxAllowedRuleLevelForMatchingHasBeenSet = true; m_maxAllowedRuleLevelForMatching = value; }

    /**
     * <p>Indicates the maximum allowed rule level.</p>
     */
    inline RuleBasedMatchingResponse& WithMaxAllowedRuleLevelForMatching(int value) { SetMaxAllowedRuleLevelForMatching(value); return *this;}


    /**
     * <p>Configures information about the <code>AttributeTypesSelector</code> where
     * the rule-based identity resolution uses to match profiles.</p>
     */
    inline const AttributeTypesSelector& GetAttributeTypesSelector() const{ return m_attributeTypesSelector; }

    /**
     * <p>Configures information about the <code>AttributeTypesSelector</code> where
     * the rule-based identity resolution uses to match profiles.</p>
     */
    inline bool AttributeTypesSelectorHasBeenSet() const { return m_attributeTypesSelectorHasBeenSet; }

    /**
     * <p>Configures information about the <code>AttributeTypesSelector</code> where
     * the rule-based identity resolution uses to match profiles.</p>
     */
    inline void SetAttributeTypesSelector(const AttributeTypesSelector& value) { m_attributeTypesSelectorHasBeenSet = true; m_attributeTypesSelector = value; }

    /**
     * <p>Configures information about the <code>AttributeTypesSelector</code> where
     * the rule-based identity resolution uses to match profiles.</p>
     */
    inline void SetAttributeTypesSelector(AttributeTypesSelector&& value) { m_attributeTypesSelectorHasBeenSet = true; m_attributeTypesSelector = std::move(value); }

    /**
     * <p>Configures information about the <code>AttributeTypesSelector</code> where
     * the rule-based identity resolution uses to match profiles.</p>
     */
    inline RuleBasedMatchingResponse& WithAttributeTypesSelector(const AttributeTypesSelector& value) { SetAttributeTypesSelector(value); return *this;}

    /**
     * <p>Configures information about the <code>AttributeTypesSelector</code> where
     * the rule-based identity resolution uses to match profiles.</p>
     */
    inline RuleBasedMatchingResponse& WithAttributeTypesSelector(AttributeTypesSelector&& value) { SetAttributeTypesSelector(std::move(value)); return *this;}


    
    inline const ConflictResolution& GetConflictResolution() const{ return m_conflictResolution; }

    
    inline bool ConflictResolutionHasBeenSet() const { return m_conflictResolutionHasBeenSet; }

    
    inline void SetConflictResolution(const ConflictResolution& value) { m_conflictResolutionHasBeenSet = true; m_conflictResolution = value; }

    
    inline void SetConflictResolution(ConflictResolution&& value) { m_conflictResolutionHasBeenSet = true; m_conflictResolution = std::move(value); }

    
    inline RuleBasedMatchingResponse& WithConflictResolution(const ConflictResolution& value) { SetConflictResolution(value); return *this;}

    
    inline RuleBasedMatchingResponse& WithConflictResolution(ConflictResolution&& value) { SetConflictResolution(std::move(value)); return *this;}


    
    inline const ExportingConfig& GetExportingConfig() const{ return m_exportingConfig; }

    
    inline bool ExportingConfigHasBeenSet() const { return m_exportingConfigHasBeenSet; }

    
    inline void SetExportingConfig(const ExportingConfig& value) { m_exportingConfigHasBeenSet = true; m_exportingConfig = value; }

    
    inline void SetExportingConfig(ExportingConfig&& value) { m_exportingConfigHasBeenSet = true; m_exportingConfig = std::move(value); }

    
    inline RuleBasedMatchingResponse& WithExportingConfig(const ExportingConfig& value) { SetExportingConfig(value); return *this;}

    
    inline RuleBasedMatchingResponse& WithExportingConfig(ExportingConfig&& value) { SetExportingConfig(std::move(value)); return *this;}

  private:

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    Aws::Vector<MatchingRule> m_matchingRules;
    bool m_matchingRulesHasBeenSet = false;

    RuleBasedMatchingStatus m_status;
    bool m_statusHasBeenSet = false;

    int m_maxAllowedRuleLevelForMerging;
    bool m_maxAllowedRuleLevelForMergingHasBeenSet = false;

    int m_maxAllowedRuleLevelForMatching;
    bool m_maxAllowedRuleLevelForMatchingHasBeenSet = false;

    AttributeTypesSelector m_attributeTypesSelector;
    bool m_attributeTypesSelectorHasBeenSet = false;

    ConflictResolution m_conflictResolution;
    bool m_conflictResolutionHasBeenSet = false;

    ExportingConfig m_exportingConfig;
    bool m_exportingConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
