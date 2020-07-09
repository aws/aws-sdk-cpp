/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wafv2/model/ExcludedRule.h>
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
namespace WAFV2
{
namespace Model
{

  /**
   *  <p>This is the latest version of <b>AWS WAF</b>, named AWS WAFV2,
   * released in November, 2019. For information, including how to migrate your AWS
   * WAF resources from the prior release, see the <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
   * WAF Developer Guide</a>. </p>  <p>A rule statement used to run the rules
   * that are defined in a <a>RuleGroup</a>. To use this, create a rule group with
   * your rules, then provide the ARN of the rule group in this statement.</p> <p>You
   * cannot nest a <code>RuleGroupReferenceStatement</code>, for example for use
   * inside a <code>NotStatement</code> or <code>OrStatement</code>. It can only be
   * referenced as a top-level statement within a rule.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/RuleGroupReferenceStatement">AWS
   * API Reference</a></p>
   */
  class AWS_WAFV2_API RuleGroupReferenceStatement
  {
  public:
    RuleGroupReferenceStatement();
    RuleGroupReferenceStatement(Aws::Utils::Json::JsonView jsonValue);
    RuleGroupReferenceStatement& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the entity.</p>
     */
    inline const Aws::String& GetARN() const{ return m_aRN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the entity.</p>
     */
    inline bool ARNHasBeenSet() const { return m_aRNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the entity.</p>
     */
    inline void SetARN(const Aws::String& value) { m_aRNHasBeenSet = true; m_aRN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the entity.</p>
     */
    inline void SetARN(Aws::String&& value) { m_aRNHasBeenSet = true; m_aRN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the entity.</p>
     */
    inline void SetARN(const char* value) { m_aRNHasBeenSet = true; m_aRN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the entity.</p>
     */
    inline RuleGroupReferenceStatement& WithARN(const Aws::String& value) { SetARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the entity.</p>
     */
    inline RuleGroupReferenceStatement& WithARN(Aws::String&& value) { SetARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the entity.</p>
     */
    inline RuleGroupReferenceStatement& WithARN(const char* value) { SetARN(value); return *this;}


    /**
     * <p>The names of rules that are in the referenced rule group, but that you want
     * AWS WAF to exclude from processing for this rule statement. </p>
     */
    inline const Aws::Vector<ExcludedRule>& GetExcludedRules() const{ return m_excludedRules; }

    /**
     * <p>The names of rules that are in the referenced rule group, but that you want
     * AWS WAF to exclude from processing for this rule statement. </p>
     */
    inline bool ExcludedRulesHasBeenSet() const { return m_excludedRulesHasBeenSet; }

    /**
     * <p>The names of rules that are in the referenced rule group, but that you want
     * AWS WAF to exclude from processing for this rule statement. </p>
     */
    inline void SetExcludedRules(const Aws::Vector<ExcludedRule>& value) { m_excludedRulesHasBeenSet = true; m_excludedRules = value; }

    /**
     * <p>The names of rules that are in the referenced rule group, but that you want
     * AWS WAF to exclude from processing for this rule statement. </p>
     */
    inline void SetExcludedRules(Aws::Vector<ExcludedRule>&& value) { m_excludedRulesHasBeenSet = true; m_excludedRules = std::move(value); }

    /**
     * <p>The names of rules that are in the referenced rule group, but that you want
     * AWS WAF to exclude from processing for this rule statement. </p>
     */
    inline RuleGroupReferenceStatement& WithExcludedRules(const Aws::Vector<ExcludedRule>& value) { SetExcludedRules(value); return *this;}

    /**
     * <p>The names of rules that are in the referenced rule group, but that you want
     * AWS WAF to exclude from processing for this rule statement. </p>
     */
    inline RuleGroupReferenceStatement& WithExcludedRules(Aws::Vector<ExcludedRule>&& value) { SetExcludedRules(std::move(value)); return *this;}

    /**
     * <p>The names of rules that are in the referenced rule group, but that you want
     * AWS WAF to exclude from processing for this rule statement. </p>
     */
    inline RuleGroupReferenceStatement& AddExcludedRules(const ExcludedRule& value) { m_excludedRulesHasBeenSet = true; m_excludedRules.push_back(value); return *this; }

    /**
     * <p>The names of rules that are in the referenced rule group, but that you want
     * AWS WAF to exclude from processing for this rule statement. </p>
     */
    inline RuleGroupReferenceStatement& AddExcludedRules(ExcludedRule&& value) { m_excludedRulesHasBeenSet = true; m_excludedRules.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_aRN;
    bool m_aRNHasBeenSet;

    Aws::Vector<ExcludedRule> m_excludedRules;
    bool m_excludedRulesHasBeenSet;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
