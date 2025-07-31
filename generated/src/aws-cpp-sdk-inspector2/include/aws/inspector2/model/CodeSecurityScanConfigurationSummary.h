/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/model/PeriodicScanFrequency.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector2/model/ScopeSettings.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/inspector2/model/ContinuousIntegrationScanEvent.h>
#include <aws/inspector2/model/RuleSetCategory.h>
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
namespace Inspector2
{
namespace Model
{

  /**
   * <p>A summary of information about a code security scan
   * configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/CodeSecurityScanConfigurationSummary">AWS
   * API Reference</a></p>
   */
  class CodeSecurityScanConfigurationSummary
  {
  public:
    AWS_INSPECTOR2_API CodeSecurityScanConfigurationSummary() = default;
    AWS_INSPECTOR2_API CodeSecurityScanConfigurationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API CodeSecurityScanConfigurationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the scan configuration.</p>
     */
    inline const Aws::String& GetScanConfigurationArn() const { return m_scanConfigurationArn; }
    inline bool ScanConfigurationArnHasBeenSet() const { return m_scanConfigurationArnHasBeenSet; }
    template<typename ScanConfigurationArnT = Aws::String>
    void SetScanConfigurationArn(ScanConfigurationArnT&& value) { m_scanConfigurationArnHasBeenSet = true; m_scanConfigurationArn = std::forward<ScanConfigurationArnT>(value); }
    template<typename ScanConfigurationArnT = Aws::String>
    CodeSecurityScanConfigurationSummary& WithScanConfigurationArn(ScanConfigurationArnT&& value) { SetScanConfigurationArn(std::forward<ScanConfigurationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the scan configuration.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CodeSecurityScanConfigurationSummary& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID that owns the scan configuration.</p>
     */
    inline const Aws::String& GetOwnerAccountId() const { return m_ownerAccountId; }
    inline bool OwnerAccountIdHasBeenSet() const { return m_ownerAccountIdHasBeenSet; }
    template<typename OwnerAccountIdT = Aws::String>
    void SetOwnerAccountId(OwnerAccountIdT&& value) { m_ownerAccountIdHasBeenSet = true; m_ownerAccountId = std::forward<OwnerAccountIdT>(value); }
    template<typename OwnerAccountIdT = Aws::String>
    CodeSecurityScanConfigurationSummary& WithOwnerAccountId(OwnerAccountIdT&& value) { SetOwnerAccountId(std::forward<OwnerAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The frequency at which periodic scans are performed.</p>
     */
    inline PeriodicScanFrequency GetPeriodicScanFrequency() const { return m_periodicScanFrequency; }
    inline bool PeriodicScanFrequencyHasBeenSet() const { return m_periodicScanFrequencyHasBeenSet; }
    inline void SetPeriodicScanFrequency(PeriodicScanFrequency value) { m_periodicScanFrequencyHasBeenSet = true; m_periodicScanFrequency = value; }
    inline CodeSecurityScanConfigurationSummary& WithPeriodicScanFrequency(PeriodicScanFrequency value) { SetPeriodicScanFrequency(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The schedule expression for periodic scans, in cron format.</p>
     */
    inline const Aws::String& GetFrequencyExpression() const { return m_frequencyExpression; }
    inline bool FrequencyExpressionHasBeenSet() const { return m_frequencyExpressionHasBeenSet; }
    template<typename FrequencyExpressionT = Aws::String>
    void SetFrequencyExpression(FrequencyExpressionT&& value) { m_frequencyExpressionHasBeenSet = true; m_frequencyExpression = std::forward<FrequencyExpressionT>(value); }
    template<typename FrequencyExpressionT = Aws::String>
    CodeSecurityScanConfigurationSummary& WithFrequencyExpression(FrequencyExpressionT&& value) { SetFrequencyExpression(std::forward<FrequencyExpressionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The repository events that trigger continuous integration scans.</p>
     */
    inline const Aws::Vector<ContinuousIntegrationScanEvent>& GetContinuousIntegrationScanSupportedEvents() const { return m_continuousIntegrationScanSupportedEvents; }
    inline bool ContinuousIntegrationScanSupportedEventsHasBeenSet() const { return m_continuousIntegrationScanSupportedEventsHasBeenSet; }
    template<typename ContinuousIntegrationScanSupportedEventsT = Aws::Vector<ContinuousIntegrationScanEvent>>
    void SetContinuousIntegrationScanSupportedEvents(ContinuousIntegrationScanSupportedEventsT&& value) { m_continuousIntegrationScanSupportedEventsHasBeenSet = true; m_continuousIntegrationScanSupportedEvents = std::forward<ContinuousIntegrationScanSupportedEventsT>(value); }
    template<typename ContinuousIntegrationScanSupportedEventsT = Aws::Vector<ContinuousIntegrationScanEvent>>
    CodeSecurityScanConfigurationSummary& WithContinuousIntegrationScanSupportedEvents(ContinuousIntegrationScanSupportedEventsT&& value) { SetContinuousIntegrationScanSupportedEvents(std::forward<ContinuousIntegrationScanSupportedEventsT>(value)); return *this;}
    inline CodeSecurityScanConfigurationSummary& AddContinuousIntegrationScanSupportedEvents(ContinuousIntegrationScanEvent value) { m_continuousIntegrationScanSupportedEventsHasBeenSet = true; m_continuousIntegrationScanSupportedEvents.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The categories of security rules applied during the scan.</p>
     */
    inline const Aws::Vector<RuleSetCategory>& GetRuleSetCategories() const { return m_ruleSetCategories; }
    inline bool RuleSetCategoriesHasBeenSet() const { return m_ruleSetCategoriesHasBeenSet; }
    template<typename RuleSetCategoriesT = Aws::Vector<RuleSetCategory>>
    void SetRuleSetCategories(RuleSetCategoriesT&& value) { m_ruleSetCategoriesHasBeenSet = true; m_ruleSetCategories = std::forward<RuleSetCategoriesT>(value); }
    template<typename RuleSetCategoriesT = Aws::Vector<RuleSetCategory>>
    CodeSecurityScanConfigurationSummary& WithRuleSetCategories(RuleSetCategoriesT&& value) { SetRuleSetCategories(std::forward<RuleSetCategoriesT>(value)); return *this;}
    inline CodeSecurityScanConfigurationSummary& AddRuleSetCategories(RuleSetCategory value) { m_ruleSetCategoriesHasBeenSet = true; m_ruleSetCategories.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The scope settings that define which repositories will be scanned. If the
     * <code>ScopeSetting</code> parameter is <code>ALL</code> the scan configuration
     * applies to all existing and future projects imported into Amazon Inspector.</p>
     */
    inline const ScopeSettings& GetScopeSettings() const { return m_scopeSettings; }
    inline bool ScopeSettingsHasBeenSet() const { return m_scopeSettingsHasBeenSet; }
    template<typename ScopeSettingsT = ScopeSettings>
    void SetScopeSettings(ScopeSettingsT&& value) { m_scopeSettingsHasBeenSet = true; m_scopeSettings = std::forward<ScopeSettingsT>(value); }
    template<typename ScopeSettingsT = ScopeSettings>
    CodeSecurityScanConfigurationSummary& WithScopeSettings(ScopeSettingsT&& value) { SetScopeSettings(std::forward<ScopeSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags associated with the scan configuration.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CodeSecurityScanConfigurationSummary& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CodeSecurityScanConfigurationSummary& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_scanConfigurationArn;
    bool m_scanConfigurationArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_ownerAccountId;
    bool m_ownerAccountIdHasBeenSet = false;

    PeriodicScanFrequency m_periodicScanFrequency{PeriodicScanFrequency::NOT_SET};
    bool m_periodicScanFrequencyHasBeenSet = false;

    Aws::String m_frequencyExpression;
    bool m_frequencyExpressionHasBeenSet = false;

    Aws::Vector<ContinuousIntegrationScanEvent> m_continuousIntegrationScanSupportedEvents;
    bool m_continuousIntegrationScanSupportedEventsHasBeenSet = false;

    Aws::Vector<RuleSetCategory> m_ruleSetCategories;
    bool m_ruleSetCategoriesHasBeenSet = false;

    ScopeSettings m_scopeSettings;
    bool m_scopeSettingsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
