/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/accessanalyzer/model/AnalysisRuleCriteria.h>
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
   * <p>Contains information about analysis rules for the analyzer. Analysis rules
   * determine which entities will generate findings based on the criteria you define
   * when you create the rule.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/AnalysisRule">AWS
   * API Reference</a></p>
   */
  class AnalysisRule
  {
  public:
    AWS_ACCESSANALYZER_API AnalysisRule() = default;
    AWS_ACCESSANALYZER_API AnalysisRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API AnalysisRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of rules for the analyzer containing criteria to exclude from
     * analysis. Entities that meet the rule criteria will not generate findings.</p>
     */
    inline const Aws::Vector<AnalysisRuleCriteria>& GetExclusions() const { return m_exclusions; }
    inline bool ExclusionsHasBeenSet() const { return m_exclusionsHasBeenSet; }
    template<typename ExclusionsT = Aws::Vector<AnalysisRuleCriteria>>
    void SetExclusions(ExclusionsT&& value) { m_exclusionsHasBeenSet = true; m_exclusions = std::forward<ExclusionsT>(value); }
    template<typename ExclusionsT = Aws::Vector<AnalysisRuleCriteria>>
    AnalysisRule& WithExclusions(ExclusionsT&& value) { SetExclusions(std::forward<ExclusionsT>(value)); return *this;}
    template<typename ExclusionsT = AnalysisRuleCriteria>
    AnalysisRule& AddExclusions(ExclusionsT&& value) { m_exclusionsHasBeenSet = true; m_exclusions.emplace_back(std::forward<ExclusionsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<AnalysisRuleCriteria> m_exclusions;
    bool m_exclusionsHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
