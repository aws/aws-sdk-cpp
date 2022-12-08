/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/RuleGroupSourceStatelessRuleDefinition.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>A stateless rule in the rule group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/RuleGroupSourceStatelessRulesDetails">AWS
   * API Reference</a></p>
   */
  class RuleGroupSourceStatelessRulesDetails
  {
  public:
    AWS_SECURITYHUB_API RuleGroupSourceStatelessRulesDetails();
    AWS_SECURITYHUB_API RuleGroupSourceStatelessRulesDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API RuleGroupSourceStatelessRulesDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Indicates the order in which to run this rule relative to all of the rules in
     * the stateless rule group.</p>
     */
    inline int GetPriority() const{ return m_priority; }

    /**
     * <p>Indicates the order in which to run this rule relative to all of the rules in
     * the stateless rule group.</p>
     */
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }

    /**
     * <p>Indicates the order in which to run this rule relative to all of the rules in
     * the stateless rule group.</p>
     */
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }

    /**
     * <p>Indicates the order in which to run this rule relative to all of the rules in
     * the stateless rule group.</p>
     */
    inline RuleGroupSourceStatelessRulesDetails& WithPriority(int value) { SetPriority(value); return *this;}


    /**
     * <p>Provides the definition of the stateless rule.</p>
     */
    inline const RuleGroupSourceStatelessRuleDefinition& GetRuleDefinition() const{ return m_ruleDefinition; }

    /**
     * <p>Provides the definition of the stateless rule.</p>
     */
    inline bool RuleDefinitionHasBeenSet() const { return m_ruleDefinitionHasBeenSet; }

    /**
     * <p>Provides the definition of the stateless rule.</p>
     */
    inline void SetRuleDefinition(const RuleGroupSourceStatelessRuleDefinition& value) { m_ruleDefinitionHasBeenSet = true; m_ruleDefinition = value; }

    /**
     * <p>Provides the definition of the stateless rule.</p>
     */
    inline void SetRuleDefinition(RuleGroupSourceStatelessRuleDefinition&& value) { m_ruleDefinitionHasBeenSet = true; m_ruleDefinition = std::move(value); }

    /**
     * <p>Provides the definition of the stateless rule.</p>
     */
    inline RuleGroupSourceStatelessRulesDetails& WithRuleDefinition(const RuleGroupSourceStatelessRuleDefinition& value) { SetRuleDefinition(value); return *this;}

    /**
     * <p>Provides the definition of the stateless rule.</p>
     */
    inline RuleGroupSourceStatelessRulesDetails& WithRuleDefinition(RuleGroupSourceStatelessRuleDefinition&& value) { SetRuleDefinition(std::move(value)); return *this;}

  private:

    int m_priority;
    bool m_priorityHasBeenSet = false;

    RuleGroupSourceStatelessRuleDefinition m_ruleDefinition;
    bool m_ruleDefinitionHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
