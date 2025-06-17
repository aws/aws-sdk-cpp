/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Contains the periodic scan configuration settings applied to a specific
   * project.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/ProjectPeriodicScanConfiguration">AWS
   * API Reference</a></p>
   */
  class ProjectPeriodicScanConfiguration
  {
  public:
    AWS_INSPECTOR2_API ProjectPeriodicScanConfiguration() = default;
    AWS_INSPECTOR2_API ProjectPeriodicScanConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API ProjectPeriodicScanConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The schedule expression for periodic scans, in cron format, applied to the
     * project.</p>
     */
    inline const Aws::String& GetFrequencyExpression() const { return m_frequencyExpression; }
    inline bool FrequencyExpressionHasBeenSet() const { return m_frequencyExpressionHasBeenSet; }
    template<typename FrequencyExpressionT = Aws::String>
    void SetFrequencyExpression(FrequencyExpressionT&& value) { m_frequencyExpressionHasBeenSet = true; m_frequencyExpression = std::forward<FrequencyExpressionT>(value); }
    template<typename FrequencyExpressionT = Aws::String>
    ProjectPeriodicScanConfiguration& WithFrequencyExpression(FrequencyExpressionT&& value) { SetFrequencyExpression(std::forward<FrequencyExpressionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The categories of security rules applied during periodic scans for the
     * project.</p>
     */
    inline const Aws::Vector<RuleSetCategory>& GetRuleSetCategories() const { return m_ruleSetCategories; }
    inline bool RuleSetCategoriesHasBeenSet() const { return m_ruleSetCategoriesHasBeenSet; }
    template<typename RuleSetCategoriesT = Aws::Vector<RuleSetCategory>>
    void SetRuleSetCategories(RuleSetCategoriesT&& value) { m_ruleSetCategoriesHasBeenSet = true; m_ruleSetCategories = std::forward<RuleSetCategoriesT>(value); }
    template<typename RuleSetCategoriesT = Aws::Vector<RuleSetCategory>>
    ProjectPeriodicScanConfiguration& WithRuleSetCategories(RuleSetCategoriesT&& value) { SetRuleSetCategories(std::forward<RuleSetCategoriesT>(value)); return *this;}
    inline ProjectPeriodicScanConfiguration& AddRuleSetCategories(RuleSetCategory value) { m_ruleSetCategoriesHasBeenSet = true; m_ruleSetCategories.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_frequencyExpression;
    bool m_frequencyExpressionHasBeenSet = false;

    Aws::Vector<RuleSetCategory> m_ruleSetCategories;
    bool m_ruleSetCategoriesHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
