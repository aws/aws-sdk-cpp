/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/accessanalyzer/model/InternalAccessAnalysisRuleCriteria.h>
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
   * <p>Contains information about analysis rules for the internal access analyzer.
   * Analysis rules determine which entities will generate findings based on the
   * criteria you define when you create the rule.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/InternalAccessAnalysisRule">AWS
   * API Reference</a></p>
   */
  class InternalAccessAnalysisRule
  {
  public:
    AWS_ACCESSANALYZER_API InternalAccessAnalysisRule() = default;
    AWS_ACCESSANALYZER_API InternalAccessAnalysisRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API InternalAccessAnalysisRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of rules for the internal access analyzer containing criteria to
     * include in analysis. Only resources that meet the rule criteria will generate
     * findings.</p>
     */
    inline const Aws::Vector<InternalAccessAnalysisRuleCriteria>& GetInclusions() const { return m_inclusions; }
    inline bool InclusionsHasBeenSet() const { return m_inclusionsHasBeenSet; }
    template<typename InclusionsT = Aws::Vector<InternalAccessAnalysisRuleCriteria>>
    void SetInclusions(InclusionsT&& value) { m_inclusionsHasBeenSet = true; m_inclusions = std::forward<InclusionsT>(value); }
    template<typename InclusionsT = Aws::Vector<InternalAccessAnalysisRuleCriteria>>
    InternalAccessAnalysisRule& WithInclusions(InclusionsT&& value) { SetInclusions(std::forward<InclusionsT>(value)); return *this;}
    template<typename InclusionsT = InternalAccessAnalysisRuleCriteria>
    InternalAccessAnalysisRule& AddInclusions(InclusionsT&& value) { m_inclusionsHasBeenSet = true; m_inclusions.emplace_back(std::forward<InclusionsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<InternalAccessAnalysisRuleCriteria> m_inclusions;
    bool m_inclusionsHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
