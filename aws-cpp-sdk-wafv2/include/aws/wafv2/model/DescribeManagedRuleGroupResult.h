/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wafv2/model/RuleSummary.h>
#include <aws/wafv2/model/LabelSummary.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace WAFV2
{
namespace Model
{
  class DescribeManagedRuleGroupResult
  {
  public:
    AWS_WAFV2_API DescribeManagedRuleGroupResult();
    AWS_WAFV2_API DescribeManagedRuleGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAFV2_API DescribeManagedRuleGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The managed rule group's version. </p>
     */
    inline const Aws::String& GetVersionName() const{ return m_versionName; }

    /**
     * <p>The managed rule group's version. </p>
     */
    inline void SetVersionName(const Aws::String& value) { m_versionName = value; }

    /**
     * <p>The managed rule group's version. </p>
     */
    inline void SetVersionName(Aws::String&& value) { m_versionName = std::move(value); }

    /**
     * <p>The managed rule group's version. </p>
     */
    inline void SetVersionName(const char* value) { m_versionName.assign(value); }

    /**
     * <p>The managed rule group's version. </p>
     */
    inline DescribeManagedRuleGroupResult& WithVersionName(const Aws::String& value) { SetVersionName(value); return *this;}

    /**
     * <p>The managed rule group's version. </p>
     */
    inline DescribeManagedRuleGroupResult& WithVersionName(Aws::String&& value) { SetVersionName(std::move(value)); return *this;}

    /**
     * <p>The managed rule group's version. </p>
     */
    inline DescribeManagedRuleGroupResult& WithVersionName(const char* value) { SetVersionName(value); return *this;}


    /**
     * <p>The Amazon resource name (ARN) of the Amazon Simple Notification Service SNS
     * topic that's used to record changes to the managed rule group. You can subscribe
     * to the SNS topic to receive notifications when the managed rule group is
     * modified, such as for new versions and for version expiration. For more
     * information, see the <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/welcome.html">Amazon Simple
     * Notification Service Developer Guide</a>.</p>
     */
    inline const Aws::String& GetSnsTopicArn() const{ return m_snsTopicArn; }

    /**
     * <p>The Amazon resource name (ARN) of the Amazon Simple Notification Service SNS
     * topic that's used to record changes to the managed rule group. You can subscribe
     * to the SNS topic to receive notifications when the managed rule group is
     * modified, such as for new versions and for version expiration. For more
     * information, see the <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/welcome.html">Amazon Simple
     * Notification Service Developer Guide</a>.</p>
     */
    inline void SetSnsTopicArn(const Aws::String& value) { m_snsTopicArn = value; }

    /**
     * <p>The Amazon resource name (ARN) of the Amazon Simple Notification Service SNS
     * topic that's used to record changes to the managed rule group. You can subscribe
     * to the SNS topic to receive notifications when the managed rule group is
     * modified, such as for new versions and for version expiration. For more
     * information, see the <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/welcome.html">Amazon Simple
     * Notification Service Developer Guide</a>.</p>
     */
    inline void SetSnsTopicArn(Aws::String&& value) { m_snsTopicArn = std::move(value); }

    /**
     * <p>The Amazon resource name (ARN) of the Amazon Simple Notification Service SNS
     * topic that's used to record changes to the managed rule group. You can subscribe
     * to the SNS topic to receive notifications when the managed rule group is
     * modified, such as for new versions and for version expiration. For more
     * information, see the <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/welcome.html">Amazon Simple
     * Notification Service Developer Guide</a>.</p>
     */
    inline void SetSnsTopicArn(const char* value) { m_snsTopicArn.assign(value); }

    /**
     * <p>The Amazon resource name (ARN) of the Amazon Simple Notification Service SNS
     * topic that's used to record changes to the managed rule group. You can subscribe
     * to the SNS topic to receive notifications when the managed rule group is
     * modified, such as for new versions and for version expiration. For more
     * information, see the <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/welcome.html">Amazon Simple
     * Notification Service Developer Guide</a>.</p>
     */
    inline DescribeManagedRuleGroupResult& WithSnsTopicArn(const Aws::String& value) { SetSnsTopicArn(value); return *this;}

    /**
     * <p>The Amazon resource name (ARN) of the Amazon Simple Notification Service SNS
     * topic that's used to record changes to the managed rule group. You can subscribe
     * to the SNS topic to receive notifications when the managed rule group is
     * modified, such as for new versions and for version expiration. For more
     * information, see the <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/welcome.html">Amazon Simple
     * Notification Service Developer Guide</a>.</p>
     */
    inline DescribeManagedRuleGroupResult& WithSnsTopicArn(Aws::String&& value) { SetSnsTopicArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon resource name (ARN) of the Amazon Simple Notification Service SNS
     * topic that's used to record changes to the managed rule group. You can subscribe
     * to the SNS topic to receive notifications when the managed rule group is
     * modified, such as for new versions and for version expiration. For more
     * information, see the <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/welcome.html">Amazon Simple
     * Notification Service Developer Guide</a>.</p>
     */
    inline DescribeManagedRuleGroupResult& WithSnsTopicArn(const char* value) { SetSnsTopicArn(value); return *this;}


    /**
     * <p>The web ACL capacity units (WCUs) required for this rule group. WAF uses web
     * ACL capacity units (WCU) to calculate and control the operating resources that
     * are used to run your rules, rule groups, and web ACLs. WAF calculates capacity
     * differently for each rule type, to reflect each rule's relative cost. Rule group
     * capacity is fixed at creation, so users can plan their web ACL WCU usage when
     * they use a rule group. The WCU limit for web ACLs is 1,500. </p>
     */
    inline long long GetCapacity() const{ return m_capacity; }

    /**
     * <p>The web ACL capacity units (WCUs) required for this rule group. WAF uses web
     * ACL capacity units (WCU) to calculate and control the operating resources that
     * are used to run your rules, rule groups, and web ACLs. WAF calculates capacity
     * differently for each rule type, to reflect each rule's relative cost. Rule group
     * capacity is fixed at creation, so users can plan their web ACL WCU usage when
     * they use a rule group. The WCU limit for web ACLs is 1,500. </p>
     */
    inline void SetCapacity(long long value) { m_capacity = value; }

    /**
     * <p>The web ACL capacity units (WCUs) required for this rule group. WAF uses web
     * ACL capacity units (WCU) to calculate and control the operating resources that
     * are used to run your rules, rule groups, and web ACLs. WAF calculates capacity
     * differently for each rule type, to reflect each rule's relative cost. Rule group
     * capacity is fixed at creation, so users can plan their web ACL WCU usage when
     * they use a rule group. The WCU limit for web ACLs is 1,500. </p>
     */
    inline DescribeManagedRuleGroupResult& WithCapacity(long long value) { SetCapacity(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::Vector<RuleSummary>& GetRules() const{ return m_rules; }

    /**
     * <p/>
     */
    inline void SetRules(const Aws::Vector<RuleSummary>& value) { m_rules = value; }

    /**
     * <p/>
     */
    inline void SetRules(Aws::Vector<RuleSummary>&& value) { m_rules = std::move(value); }

    /**
     * <p/>
     */
    inline DescribeManagedRuleGroupResult& WithRules(const Aws::Vector<RuleSummary>& value) { SetRules(value); return *this;}

    /**
     * <p/>
     */
    inline DescribeManagedRuleGroupResult& WithRules(Aws::Vector<RuleSummary>&& value) { SetRules(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline DescribeManagedRuleGroupResult& AddRules(const RuleSummary& value) { m_rules.push_back(value); return *this; }

    /**
     * <p/>
     */
    inline DescribeManagedRuleGroupResult& AddRules(RuleSummary&& value) { m_rules.push_back(std::move(value)); return *this; }


    /**
     * <p>The label namespace prefix for this rule group. All labels added by rules in
     * this rule group have this prefix. </p> <ul> <li> <p>The syntax for the label
     * namespace prefix for a managed rule group is the following: </p> <p>
     * <code>awswaf:managed:&lt;vendor&gt;:&lt;rule group name&gt;</code>:</p> </li>
     * <li> <p>When a rule with a label matches a web request, WAF adds the fully
     * qualified label to the request. A fully qualified label is made up of the label
     * namespace from the rule group or web ACL where the rule is defined and the label
     * from the rule, separated by a colon: </p> <p> <code>&lt;label
     * namespace&gt;:&lt;label from rule&gt;</code> </p> </li> </ul>
     */
    inline const Aws::String& GetLabelNamespace() const{ return m_labelNamespace; }

    /**
     * <p>The label namespace prefix for this rule group. All labels added by rules in
     * this rule group have this prefix. </p> <ul> <li> <p>The syntax for the label
     * namespace prefix for a managed rule group is the following: </p> <p>
     * <code>awswaf:managed:&lt;vendor&gt;:&lt;rule group name&gt;</code>:</p> </li>
     * <li> <p>When a rule with a label matches a web request, WAF adds the fully
     * qualified label to the request. A fully qualified label is made up of the label
     * namespace from the rule group or web ACL where the rule is defined and the label
     * from the rule, separated by a colon: </p> <p> <code>&lt;label
     * namespace&gt;:&lt;label from rule&gt;</code> </p> </li> </ul>
     */
    inline void SetLabelNamespace(const Aws::String& value) { m_labelNamespace = value; }

    /**
     * <p>The label namespace prefix for this rule group. All labels added by rules in
     * this rule group have this prefix. </p> <ul> <li> <p>The syntax for the label
     * namespace prefix for a managed rule group is the following: </p> <p>
     * <code>awswaf:managed:&lt;vendor&gt;:&lt;rule group name&gt;</code>:</p> </li>
     * <li> <p>When a rule with a label matches a web request, WAF adds the fully
     * qualified label to the request. A fully qualified label is made up of the label
     * namespace from the rule group or web ACL where the rule is defined and the label
     * from the rule, separated by a colon: </p> <p> <code>&lt;label
     * namespace&gt;:&lt;label from rule&gt;</code> </p> </li> </ul>
     */
    inline void SetLabelNamespace(Aws::String&& value) { m_labelNamespace = std::move(value); }

    /**
     * <p>The label namespace prefix for this rule group. All labels added by rules in
     * this rule group have this prefix. </p> <ul> <li> <p>The syntax for the label
     * namespace prefix for a managed rule group is the following: </p> <p>
     * <code>awswaf:managed:&lt;vendor&gt;:&lt;rule group name&gt;</code>:</p> </li>
     * <li> <p>When a rule with a label matches a web request, WAF adds the fully
     * qualified label to the request. A fully qualified label is made up of the label
     * namespace from the rule group or web ACL where the rule is defined and the label
     * from the rule, separated by a colon: </p> <p> <code>&lt;label
     * namespace&gt;:&lt;label from rule&gt;</code> </p> </li> </ul>
     */
    inline void SetLabelNamespace(const char* value) { m_labelNamespace.assign(value); }

    /**
     * <p>The label namespace prefix for this rule group. All labels added by rules in
     * this rule group have this prefix. </p> <ul> <li> <p>The syntax for the label
     * namespace prefix for a managed rule group is the following: </p> <p>
     * <code>awswaf:managed:&lt;vendor&gt;:&lt;rule group name&gt;</code>:</p> </li>
     * <li> <p>When a rule with a label matches a web request, WAF adds the fully
     * qualified label to the request. A fully qualified label is made up of the label
     * namespace from the rule group or web ACL where the rule is defined and the label
     * from the rule, separated by a colon: </p> <p> <code>&lt;label
     * namespace&gt;:&lt;label from rule&gt;</code> </p> </li> </ul>
     */
    inline DescribeManagedRuleGroupResult& WithLabelNamespace(const Aws::String& value) { SetLabelNamespace(value); return *this;}

    /**
     * <p>The label namespace prefix for this rule group. All labels added by rules in
     * this rule group have this prefix. </p> <ul> <li> <p>The syntax for the label
     * namespace prefix for a managed rule group is the following: </p> <p>
     * <code>awswaf:managed:&lt;vendor&gt;:&lt;rule group name&gt;</code>:</p> </li>
     * <li> <p>When a rule with a label matches a web request, WAF adds the fully
     * qualified label to the request. A fully qualified label is made up of the label
     * namespace from the rule group or web ACL where the rule is defined and the label
     * from the rule, separated by a colon: </p> <p> <code>&lt;label
     * namespace&gt;:&lt;label from rule&gt;</code> </p> </li> </ul>
     */
    inline DescribeManagedRuleGroupResult& WithLabelNamespace(Aws::String&& value) { SetLabelNamespace(std::move(value)); return *this;}

    /**
     * <p>The label namespace prefix for this rule group. All labels added by rules in
     * this rule group have this prefix. </p> <ul> <li> <p>The syntax for the label
     * namespace prefix for a managed rule group is the following: </p> <p>
     * <code>awswaf:managed:&lt;vendor&gt;:&lt;rule group name&gt;</code>:</p> </li>
     * <li> <p>When a rule with a label matches a web request, WAF adds the fully
     * qualified label to the request. A fully qualified label is made up of the label
     * namespace from the rule group or web ACL where the rule is defined and the label
     * from the rule, separated by a colon: </p> <p> <code>&lt;label
     * namespace&gt;:&lt;label from rule&gt;</code> </p> </li> </ul>
     */
    inline DescribeManagedRuleGroupResult& WithLabelNamespace(const char* value) { SetLabelNamespace(value); return *this;}


    /**
     * <p>The labels that one or more rules in this rule group add to matching web
     * requests. These labels are defined in the <code>RuleLabels</code> for a
     * <a>Rule</a>.</p>
     */
    inline const Aws::Vector<LabelSummary>& GetAvailableLabels() const{ return m_availableLabels; }

    /**
     * <p>The labels that one or more rules in this rule group add to matching web
     * requests. These labels are defined in the <code>RuleLabels</code> for a
     * <a>Rule</a>.</p>
     */
    inline void SetAvailableLabels(const Aws::Vector<LabelSummary>& value) { m_availableLabels = value; }

    /**
     * <p>The labels that one or more rules in this rule group add to matching web
     * requests. These labels are defined in the <code>RuleLabels</code> for a
     * <a>Rule</a>.</p>
     */
    inline void SetAvailableLabels(Aws::Vector<LabelSummary>&& value) { m_availableLabels = std::move(value); }

    /**
     * <p>The labels that one or more rules in this rule group add to matching web
     * requests. These labels are defined in the <code>RuleLabels</code> for a
     * <a>Rule</a>.</p>
     */
    inline DescribeManagedRuleGroupResult& WithAvailableLabels(const Aws::Vector<LabelSummary>& value) { SetAvailableLabels(value); return *this;}

    /**
     * <p>The labels that one or more rules in this rule group add to matching web
     * requests. These labels are defined in the <code>RuleLabels</code> for a
     * <a>Rule</a>.</p>
     */
    inline DescribeManagedRuleGroupResult& WithAvailableLabels(Aws::Vector<LabelSummary>&& value) { SetAvailableLabels(std::move(value)); return *this;}

    /**
     * <p>The labels that one or more rules in this rule group add to matching web
     * requests. These labels are defined in the <code>RuleLabels</code> for a
     * <a>Rule</a>.</p>
     */
    inline DescribeManagedRuleGroupResult& AddAvailableLabels(const LabelSummary& value) { m_availableLabels.push_back(value); return *this; }

    /**
     * <p>The labels that one or more rules in this rule group add to matching web
     * requests. These labels are defined in the <code>RuleLabels</code> for a
     * <a>Rule</a>.</p>
     */
    inline DescribeManagedRuleGroupResult& AddAvailableLabels(LabelSummary&& value) { m_availableLabels.push_back(std::move(value)); return *this; }


    /**
     * <p>The labels that one or more rules in this rule group match against in label
     * match statements. These labels are defined in a <code>LabelMatchStatement</code>
     * specification, in the <a>Statement</a> definition of a rule. </p>
     */
    inline const Aws::Vector<LabelSummary>& GetConsumedLabels() const{ return m_consumedLabels; }

    /**
     * <p>The labels that one or more rules in this rule group match against in label
     * match statements. These labels are defined in a <code>LabelMatchStatement</code>
     * specification, in the <a>Statement</a> definition of a rule. </p>
     */
    inline void SetConsumedLabels(const Aws::Vector<LabelSummary>& value) { m_consumedLabels = value; }

    /**
     * <p>The labels that one or more rules in this rule group match against in label
     * match statements. These labels are defined in a <code>LabelMatchStatement</code>
     * specification, in the <a>Statement</a> definition of a rule. </p>
     */
    inline void SetConsumedLabels(Aws::Vector<LabelSummary>&& value) { m_consumedLabels = std::move(value); }

    /**
     * <p>The labels that one or more rules in this rule group match against in label
     * match statements. These labels are defined in a <code>LabelMatchStatement</code>
     * specification, in the <a>Statement</a> definition of a rule. </p>
     */
    inline DescribeManagedRuleGroupResult& WithConsumedLabels(const Aws::Vector<LabelSummary>& value) { SetConsumedLabels(value); return *this;}

    /**
     * <p>The labels that one or more rules in this rule group match against in label
     * match statements. These labels are defined in a <code>LabelMatchStatement</code>
     * specification, in the <a>Statement</a> definition of a rule. </p>
     */
    inline DescribeManagedRuleGroupResult& WithConsumedLabels(Aws::Vector<LabelSummary>&& value) { SetConsumedLabels(std::move(value)); return *this;}

    /**
     * <p>The labels that one or more rules in this rule group match against in label
     * match statements. These labels are defined in a <code>LabelMatchStatement</code>
     * specification, in the <a>Statement</a> definition of a rule. </p>
     */
    inline DescribeManagedRuleGroupResult& AddConsumedLabels(const LabelSummary& value) { m_consumedLabels.push_back(value); return *this; }

    /**
     * <p>The labels that one or more rules in this rule group match against in label
     * match statements. These labels are defined in a <code>LabelMatchStatement</code>
     * specification, in the <a>Statement</a> definition of a rule. </p>
     */
    inline DescribeManagedRuleGroupResult& AddConsumedLabels(LabelSummary&& value) { m_consumedLabels.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_versionName;

    Aws::String m_snsTopicArn;

    long long m_capacity;

    Aws::Vector<RuleSummary> m_rules;

    Aws::String m_labelNamespace;

    Aws::Vector<LabelSummary> m_availableLabels;

    Aws::Vector<LabelSummary> m_consumedLabels;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
