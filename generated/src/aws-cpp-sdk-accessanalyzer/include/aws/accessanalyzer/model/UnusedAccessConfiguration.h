/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/accessanalyzer/model/AnalysisRule.h>
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
namespace AccessAnalyzer
{
namespace Model
{

  /**
   * <p>Contains information about an unused access analyzer.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/UnusedAccessConfiguration">AWS
   * API Reference</a></p>
   */
  class UnusedAccessConfiguration
  {
  public:
    AWS_ACCESSANALYZER_API UnusedAccessConfiguration() = default;
    AWS_ACCESSANALYZER_API UnusedAccessConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API UnusedAccessConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The specified access age in days for which to generate findings for unused
     * access. For example, if you specify 90 days, the analyzer will generate findings
     * for IAM entities within the accounts of the selected organization for any access
     * that hasn't been used in 90 or more days since the analyzer's last scan. You can
     * choose a value between 1 and 365 days.</p>
     */
    inline int GetUnusedAccessAge() const { return m_unusedAccessAge; }
    inline bool UnusedAccessAgeHasBeenSet() const { return m_unusedAccessAgeHasBeenSet; }
    inline void SetUnusedAccessAge(int value) { m_unusedAccessAgeHasBeenSet = true; m_unusedAccessAge = value; }
    inline UnusedAccessConfiguration& WithUnusedAccessAge(int value) { SetUnusedAccessAge(value); return *this;}
    ///@}

    ///@{
    
    inline const AnalysisRule& GetAnalysisRule() const { return m_analysisRule; }
    inline bool AnalysisRuleHasBeenSet() const { return m_analysisRuleHasBeenSet; }
    template<typename AnalysisRuleT = AnalysisRule>
    void SetAnalysisRule(AnalysisRuleT&& value) { m_analysisRuleHasBeenSet = true; m_analysisRule = std::forward<AnalysisRuleT>(value); }
    template<typename AnalysisRuleT = AnalysisRule>
    UnusedAccessConfiguration& WithAnalysisRule(AnalysisRuleT&& value) { SetAnalysisRule(std::forward<AnalysisRuleT>(value)); return *this;}
    ///@}
  private:

    int m_unusedAccessAge{0};
    bool m_unusedAccessAgeHasBeenSet = false;

    AnalysisRule m_analysisRule;
    bool m_analysisRuleHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
