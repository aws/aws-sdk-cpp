/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace FraudDetector
{
namespace Model
{

  /**
   * <p>The rule results.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/RuleResult">AWS
   * API Reference</a></p>
   */
  class RuleResult
  {
  public:
    AWS_FRAUDDETECTOR_API RuleResult() = default;
    AWS_FRAUDDETECTOR_API RuleResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API RuleResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The rule ID that was matched, based on the rule execution mode.</p>
     */
    inline const Aws::String& GetRuleId() const { return m_ruleId; }
    inline bool RuleIdHasBeenSet() const { return m_ruleIdHasBeenSet; }
    template<typename RuleIdT = Aws::String>
    void SetRuleId(RuleIdT&& value) { m_ruleIdHasBeenSet = true; m_ruleId = std::forward<RuleIdT>(value); }
    template<typename RuleIdT = Aws::String>
    RuleResult& WithRuleId(RuleIdT&& value) { SetRuleId(std::forward<RuleIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The outcomes of the matched rule, based on the rule execution mode.</p>
     */
    inline const Aws::Vector<Aws::String>& GetOutcomes() const { return m_outcomes; }
    inline bool OutcomesHasBeenSet() const { return m_outcomesHasBeenSet; }
    template<typename OutcomesT = Aws::Vector<Aws::String>>
    void SetOutcomes(OutcomesT&& value) { m_outcomesHasBeenSet = true; m_outcomes = std::forward<OutcomesT>(value); }
    template<typename OutcomesT = Aws::Vector<Aws::String>>
    RuleResult& WithOutcomes(OutcomesT&& value) { SetOutcomes(std::forward<OutcomesT>(value)); return *this;}
    template<typename OutcomesT = Aws::String>
    RuleResult& AddOutcomes(OutcomesT&& value) { m_outcomesHasBeenSet = true; m_outcomes.emplace_back(std::forward<OutcomesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_ruleId;
    bool m_ruleIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_outcomes;
    bool m_outcomesHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
