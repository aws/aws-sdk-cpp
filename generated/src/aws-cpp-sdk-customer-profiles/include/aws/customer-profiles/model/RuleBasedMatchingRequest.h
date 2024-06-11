/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>The request to enable the rule-based matching.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/RuleBasedMatchingRequest">AWS
   * API Reference</a></p>
   */
  class RuleBasedMatchingRequest
  {
  public:
    AWS_CUSTOMERPROFILES_API RuleBasedMatchingRequest();
    AWS_CUSTOMERPROFILES_API RuleBasedMatchingRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API RuleBasedMatchingRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The flag that enables the rule-based matching process of duplicate
     * profiles.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline RuleBasedMatchingRequest& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configures how the rule-based matching process should match profiles. You can
     * have up to 15 <code>MatchingRule</code> in the <code>MatchingRules</code>.</p>
     */
    inline const Aws::Vector<MatchingRule>& GetMatchingRules() const{ return m_matchingRules; }
    inline bool MatchingRulesHasBeenSet() const { return m_matchingRulesHasBeenSet; }
    inline void SetMatchingRules(const Aws::Vector<MatchingRule>& value) { m_matchingRulesHasBeenSet = true; m_matchingRules = value; }
    inline void SetMatchingRules(Aws::Vector<MatchingRule>&& value) { m_matchingRulesHasBeenSet = true; m_matchingRules = std::move(value); }
    inline RuleBasedMatchingRequest& WithMatchingRules(const Aws::Vector<MatchingRule>& value) { SetMatchingRules(value); return *this;}
    inline RuleBasedMatchingRequest& WithMatchingRules(Aws::Vector<MatchingRule>&& value) { SetMatchingRules(std::move(value)); return *this;}
    inline RuleBasedMatchingRequest& AddMatchingRules(const MatchingRule& value) { m_matchingRulesHasBeenSet = true; m_matchingRules.push_back(value); return *this; }
    inline RuleBasedMatchingRequest& AddMatchingRules(MatchingRule&& value) { m_matchingRulesHasBeenSet = true; m_matchingRules.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> <a
     * href="https://docs.aws.amazon.com/customerprofiles/latest/APIReference/API_MatchingRule.html">MatchingRule</a>
     * </p>
     */
    inline int GetMaxAllowedRuleLevelForMerging() const{ return m_maxAllowedRuleLevelForMerging; }
    inline bool MaxAllowedRuleLevelForMergingHasBeenSet() const { return m_maxAllowedRuleLevelForMergingHasBeenSet; }
    inline void SetMaxAllowedRuleLevelForMerging(int value) { m_maxAllowedRuleLevelForMergingHasBeenSet = true; m_maxAllowedRuleLevelForMerging = value; }
    inline RuleBasedMatchingRequest& WithMaxAllowedRuleLevelForMerging(int value) { SetMaxAllowedRuleLevelForMerging(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the maximum allowed rule level.</p>
     */
    inline int GetMaxAllowedRuleLevelForMatching() const{ return m_maxAllowedRuleLevelForMatching; }
    inline bool MaxAllowedRuleLevelForMatchingHasBeenSet() const { return m_maxAllowedRuleLevelForMatchingHasBeenSet; }
    inline void SetMaxAllowedRuleLevelForMatching(int value) { m_maxAllowedRuleLevelForMatchingHasBeenSet = true; m_maxAllowedRuleLevelForMatching = value; }
    inline RuleBasedMatchingRequest& WithMaxAllowedRuleLevelForMatching(int value) { SetMaxAllowedRuleLevelForMatching(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configures information about the <code>AttributeTypesSelector</code> where
     * the rule-based identity resolution uses to match profiles.</p>
     */
    inline const AttributeTypesSelector& GetAttributeTypesSelector() const{ return m_attributeTypesSelector; }
    inline bool AttributeTypesSelectorHasBeenSet() const { return m_attributeTypesSelectorHasBeenSet; }
    inline void SetAttributeTypesSelector(const AttributeTypesSelector& value) { m_attributeTypesSelectorHasBeenSet = true; m_attributeTypesSelector = value; }
    inline void SetAttributeTypesSelector(AttributeTypesSelector&& value) { m_attributeTypesSelectorHasBeenSet = true; m_attributeTypesSelector = std::move(value); }
    inline RuleBasedMatchingRequest& WithAttributeTypesSelector(const AttributeTypesSelector& value) { SetAttributeTypesSelector(value); return *this;}
    inline RuleBasedMatchingRequest& WithAttributeTypesSelector(AttributeTypesSelector&& value) { SetAttributeTypesSelector(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const ConflictResolution& GetConflictResolution() const{ return m_conflictResolution; }
    inline bool ConflictResolutionHasBeenSet() const { return m_conflictResolutionHasBeenSet; }
    inline void SetConflictResolution(const ConflictResolution& value) { m_conflictResolutionHasBeenSet = true; m_conflictResolution = value; }
    inline void SetConflictResolution(ConflictResolution&& value) { m_conflictResolutionHasBeenSet = true; m_conflictResolution = std::move(value); }
    inline RuleBasedMatchingRequest& WithConflictResolution(const ConflictResolution& value) { SetConflictResolution(value); return *this;}
    inline RuleBasedMatchingRequest& WithConflictResolution(ConflictResolution&& value) { SetConflictResolution(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const ExportingConfig& GetExportingConfig() const{ return m_exportingConfig; }
    inline bool ExportingConfigHasBeenSet() const { return m_exportingConfigHasBeenSet; }
    inline void SetExportingConfig(const ExportingConfig& value) { m_exportingConfigHasBeenSet = true; m_exportingConfig = value; }
    inline void SetExportingConfig(ExportingConfig&& value) { m_exportingConfigHasBeenSet = true; m_exportingConfig = std::move(value); }
    inline RuleBasedMatchingRequest& WithExportingConfig(const ExportingConfig& value) { SetExportingConfig(value); return *this;}
    inline RuleBasedMatchingRequest& WithExportingConfig(ExportingConfig&& value) { SetExportingConfig(std::move(value)); return *this;}
    ///@}
  private:

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    Aws::Vector<MatchingRule> m_matchingRules;
    bool m_matchingRulesHasBeenSet = false;

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
