/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/ContinuousIntegrationScanEvent.h>
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
   * <p>Contains the continuous integration scan configuration settings applied to a
   * specific project.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/ProjectContinuousIntegrationScanConfiguration">AWS
   * API Reference</a></p>
   */
  class ProjectContinuousIntegrationScanConfiguration
  {
  public:
    AWS_INSPECTOR2_API ProjectContinuousIntegrationScanConfiguration() = default;
    AWS_INSPECTOR2_API ProjectContinuousIntegrationScanConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API ProjectContinuousIntegrationScanConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The repository event that triggers continuous integration scans for the
     * project.</p>
     */
    inline ContinuousIntegrationScanEvent GetSupportedEvent() const { return m_supportedEvent; }
    inline bool SupportedEventHasBeenSet() const { return m_supportedEventHasBeenSet; }
    inline void SetSupportedEvent(ContinuousIntegrationScanEvent value) { m_supportedEventHasBeenSet = true; m_supportedEvent = value; }
    inline ProjectContinuousIntegrationScanConfiguration& WithSupportedEvent(ContinuousIntegrationScanEvent value) { SetSupportedEvent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The categories of security rules applied during continuous integration scans
     * for the project.</p>
     */
    inline const Aws::Vector<RuleSetCategory>& GetRuleSetCategories() const { return m_ruleSetCategories; }
    inline bool RuleSetCategoriesHasBeenSet() const { return m_ruleSetCategoriesHasBeenSet; }
    template<typename RuleSetCategoriesT = Aws::Vector<RuleSetCategory>>
    void SetRuleSetCategories(RuleSetCategoriesT&& value) { m_ruleSetCategoriesHasBeenSet = true; m_ruleSetCategories = std::forward<RuleSetCategoriesT>(value); }
    template<typename RuleSetCategoriesT = Aws::Vector<RuleSetCategory>>
    ProjectContinuousIntegrationScanConfiguration& WithRuleSetCategories(RuleSetCategoriesT&& value) { SetRuleSetCategories(std::forward<RuleSetCategoriesT>(value)); return *this;}
    inline ProjectContinuousIntegrationScanConfiguration& AddRuleSetCategories(RuleSetCategory value) { m_ruleSetCategoriesHasBeenSet = true; m_ruleSetCategories.push_back(value); return *this; }
    ///@}
  private:

    ContinuousIntegrationScanEvent m_supportedEvent{ContinuousIntegrationScanEvent::NOT_SET};
    bool m_supportedEventHasBeenSet = false;

    Aws::Vector<RuleSetCategory> m_ruleSetCategories;
    bool m_ruleSetCategoriesHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
