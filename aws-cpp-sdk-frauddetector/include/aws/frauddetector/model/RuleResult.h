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
    AWS_FRAUDDETECTOR_API RuleResult();
    AWS_FRAUDDETECTOR_API RuleResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API RuleResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The rule ID that was matched, based on the rule execution mode.</p>
     */
    inline const Aws::String& GetRuleId() const{ return m_ruleId; }

    /**
     * <p>The rule ID that was matched, based on the rule execution mode.</p>
     */
    inline bool RuleIdHasBeenSet() const { return m_ruleIdHasBeenSet; }

    /**
     * <p>The rule ID that was matched, based on the rule execution mode.</p>
     */
    inline void SetRuleId(const Aws::String& value) { m_ruleIdHasBeenSet = true; m_ruleId = value; }

    /**
     * <p>The rule ID that was matched, based on the rule execution mode.</p>
     */
    inline void SetRuleId(Aws::String&& value) { m_ruleIdHasBeenSet = true; m_ruleId = std::move(value); }

    /**
     * <p>The rule ID that was matched, based on the rule execution mode.</p>
     */
    inline void SetRuleId(const char* value) { m_ruleIdHasBeenSet = true; m_ruleId.assign(value); }

    /**
     * <p>The rule ID that was matched, based on the rule execution mode.</p>
     */
    inline RuleResult& WithRuleId(const Aws::String& value) { SetRuleId(value); return *this;}

    /**
     * <p>The rule ID that was matched, based on the rule execution mode.</p>
     */
    inline RuleResult& WithRuleId(Aws::String&& value) { SetRuleId(std::move(value)); return *this;}

    /**
     * <p>The rule ID that was matched, based on the rule execution mode.</p>
     */
    inline RuleResult& WithRuleId(const char* value) { SetRuleId(value); return *this;}


    /**
     * <p>The outcomes of the matched rule, based on the rule execution mode.</p>
     */
    inline const Aws::Vector<Aws::String>& GetOutcomes() const{ return m_outcomes; }

    /**
     * <p>The outcomes of the matched rule, based on the rule execution mode.</p>
     */
    inline bool OutcomesHasBeenSet() const { return m_outcomesHasBeenSet; }

    /**
     * <p>The outcomes of the matched rule, based on the rule execution mode.</p>
     */
    inline void SetOutcomes(const Aws::Vector<Aws::String>& value) { m_outcomesHasBeenSet = true; m_outcomes = value; }

    /**
     * <p>The outcomes of the matched rule, based on the rule execution mode.</p>
     */
    inline void SetOutcomes(Aws::Vector<Aws::String>&& value) { m_outcomesHasBeenSet = true; m_outcomes = std::move(value); }

    /**
     * <p>The outcomes of the matched rule, based on the rule execution mode.</p>
     */
    inline RuleResult& WithOutcomes(const Aws::Vector<Aws::String>& value) { SetOutcomes(value); return *this;}

    /**
     * <p>The outcomes of the matched rule, based on the rule execution mode.</p>
     */
    inline RuleResult& WithOutcomes(Aws::Vector<Aws::String>&& value) { SetOutcomes(std::move(value)); return *this;}

    /**
     * <p>The outcomes of the matched rule, based on the rule execution mode.</p>
     */
    inline RuleResult& AddOutcomes(const Aws::String& value) { m_outcomesHasBeenSet = true; m_outcomes.push_back(value); return *this; }

    /**
     * <p>The outcomes of the matched rule, based on the rule execution mode.</p>
     */
    inline RuleResult& AddOutcomes(Aws::String&& value) { m_outcomesHasBeenSet = true; m_outcomes.push_back(std::move(value)); return *this; }

    /**
     * <p>The outcomes of the matched rule, based on the rule execution mode.</p>
     */
    inline RuleResult& AddOutcomes(const char* value) { m_outcomesHasBeenSet = true; m_outcomes.push_back(value); return *this; }

  private:

    Aws::String m_ruleId;
    bool m_ruleIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_outcomes;
    bool m_outcomesHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
