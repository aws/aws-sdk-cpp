/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/PeriodicScanConfiguration.h>
#include <aws/inspector2/model/ContinuousIntegrationScanConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Contains the configuration settings for code security scans.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/CodeSecurityScanConfiguration">AWS
   * API Reference</a></p>
   */
  class CodeSecurityScanConfiguration
  {
  public:
    AWS_INSPECTOR2_API CodeSecurityScanConfiguration() = default;
    AWS_INSPECTOR2_API CodeSecurityScanConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API CodeSecurityScanConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Configuration settings for periodic scans that run on a scheduled basis.</p>
     */
    inline const PeriodicScanConfiguration& GetPeriodicScanConfiguration() const { return m_periodicScanConfiguration; }
    inline bool PeriodicScanConfigurationHasBeenSet() const { return m_periodicScanConfigurationHasBeenSet; }
    template<typename PeriodicScanConfigurationT = PeriodicScanConfiguration>
    void SetPeriodicScanConfiguration(PeriodicScanConfigurationT&& value) { m_periodicScanConfigurationHasBeenSet = true; m_periodicScanConfiguration = std::forward<PeriodicScanConfigurationT>(value); }
    template<typename PeriodicScanConfigurationT = PeriodicScanConfiguration>
    CodeSecurityScanConfiguration& WithPeriodicScanConfiguration(PeriodicScanConfigurationT&& value) { SetPeriodicScanConfiguration(std::forward<PeriodicScanConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration settings for continuous integration scans that run
     * automatically when code changes are made.</p>
     */
    inline const ContinuousIntegrationScanConfiguration& GetContinuousIntegrationScanConfiguration() const { return m_continuousIntegrationScanConfiguration; }
    inline bool ContinuousIntegrationScanConfigurationHasBeenSet() const { return m_continuousIntegrationScanConfigurationHasBeenSet; }
    template<typename ContinuousIntegrationScanConfigurationT = ContinuousIntegrationScanConfiguration>
    void SetContinuousIntegrationScanConfiguration(ContinuousIntegrationScanConfigurationT&& value) { m_continuousIntegrationScanConfigurationHasBeenSet = true; m_continuousIntegrationScanConfiguration = std::forward<ContinuousIntegrationScanConfigurationT>(value); }
    template<typename ContinuousIntegrationScanConfigurationT = ContinuousIntegrationScanConfiguration>
    CodeSecurityScanConfiguration& WithContinuousIntegrationScanConfiguration(ContinuousIntegrationScanConfigurationT&& value) { SetContinuousIntegrationScanConfiguration(std::forward<ContinuousIntegrationScanConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The categories of security rules to be applied during the scan.</p>
     */
    inline const Aws::Vector<RuleSetCategory>& GetRuleSetCategories() const { return m_ruleSetCategories; }
    inline bool RuleSetCategoriesHasBeenSet() const { return m_ruleSetCategoriesHasBeenSet; }
    template<typename RuleSetCategoriesT = Aws::Vector<RuleSetCategory>>
    void SetRuleSetCategories(RuleSetCategoriesT&& value) { m_ruleSetCategoriesHasBeenSet = true; m_ruleSetCategories = std::forward<RuleSetCategoriesT>(value); }
    template<typename RuleSetCategoriesT = Aws::Vector<RuleSetCategory>>
    CodeSecurityScanConfiguration& WithRuleSetCategories(RuleSetCategoriesT&& value) { SetRuleSetCategories(std::forward<RuleSetCategoriesT>(value)); return *this;}
    inline CodeSecurityScanConfiguration& AddRuleSetCategories(RuleSetCategory value) { m_ruleSetCategoriesHasBeenSet = true; m_ruleSetCategories.push_back(value); return *this; }
    ///@}
  private:

    PeriodicScanConfiguration m_periodicScanConfiguration;
    bool m_periodicScanConfigurationHasBeenSet = false;

    ContinuousIntegrationScanConfiguration m_continuousIntegrationScanConfiguration;
    bool m_continuousIntegrationScanConfigurationHasBeenSet = false;

    Aws::Vector<RuleSetCategory> m_ruleSetCategories;
    bool m_ruleSetCategoriesHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
