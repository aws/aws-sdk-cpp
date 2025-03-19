/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/accessanalyzer/model/Criterion.h>
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
   * <p>An criterion statement in an archive rule. Each archive rule may have
   * multiple criteria.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/InlineArchiveRule">AWS
   * API Reference</a></p>
   */
  class InlineArchiveRule
  {
  public:
    AWS_ACCESSANALYZER_API InlineArchiveRule() = default;
    AWS_ACCESSANALYZER_API InlineArchiveRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API InlineArchiveRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the rule.</p>
     */
    inline const Aws::String& GetRuleName() const { return m_ruleName; }
    inline bool RuleNameHasBeenSet() const { return m_ruleNameHasBeenSet; }
    template<typename RuleNameT = Aws::String>
    void SetRuleName(RuleNameT&& value) { m_ruleNameHasBeenSet = true; m_ruleName = std::forward<RuleNameT>(value); }
    template<typename RuleNameT = Aws::String>
    InlineArchiveRule& WithRuleName(RuleNameT&& value) { SetRuleName(std::forward<RuleNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The condition and values for a criterion.</p>
     */
    inline const Aws::Map<Aws::String, Criterion>& GetFilter() const { return m_filter; }
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }
    template<typename FilterT = Aws::Map<Aws::String, Criterion>>
    void SetFilter(FilterT&& value) { m_filterHasBeenSet = true; m_filter = std::forward<FilterT>(value); }
    template<typename FilterT = Aws::Map<Aws::String, Criterion>>
    InlineArchiveRule& WithFilter(FilterT&& value) { SetFilter(std::forward<FilterT>(value)); return *this;}
    template<typename FilterKeyT = Aws::String, typename FilterValueT = Criterion>
    InlineArchiveRule& AddFilter(FilterKeyT&& key, FilterValueT&& value) {
      m_filterHasBeenSet = true; m_filter.emplace(std::forward<FilterKeyT>(key), std::forward<FilterValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_ruleName;
    bool m_ruleNameHasBeenSet = false;

    Aws::Map<Aws::String, Criterion> m_filter;
    bool m_filterHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
