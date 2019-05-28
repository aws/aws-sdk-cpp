/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/waf/WAF_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/waf/model/RateKey.h>
#include <aws/waf/model/Predicate.h>
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
namespace WAF
{
namespace Model
{

  /**
   * <p>A <code>RateBasedRule</code> is identical to a regular <a>Rule</a>, with one
   * addition: a <code>RateBasedRule</code> counts the number of requests that arrive
   * from a specified IP address every five minutes. For example, based on recent
   * requests that you've seen from an attacker, you might create a
   * <code>RateBasedRule</code> that includes the following conditions: </p> <ul>
   * <li> <p>The requests come from 192.0.2.44.</p> </li> <li> <p>They contain the
   * value <code>BadBot</code> in the <code>User-Agent</code> header.</p> </li> </ul>
   * <p>In the rule, you also define the rate limit as 15,000.</p> <p>Requests that
   * meet both of these conditions and exceed 15,000 requests every five minutes
   * trigger the rule's action (block or count), which is defined in the web
   * ACL.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/RateBasedRule">AWS
   * API Reference</a></p>
   */
  class AWS_WAF_API RateBasedRule
  {
  public:
    RateBasedRule();
    RateBasedRule(Aws::Utils::Json::JsonView jsonValue);
    RateBasedRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A unique identifier for a <code>RateBasedRule</code>. You use
     * <code>RuleId</code> to get more information about a <code>RateBasedRule</code>
     * (see <a>GetRateBasedRule</a>), update a <code>RateBasedRule</code> (see
     * <a>UpdateRateBasedRule</a>), insert a <code>RateBasedRule</code> into a
     * <code>WebACL</code> or delete one from a <code>WebACL</code> (see
     * <a>UpdateWebACL</a>), or delete a <code>RateBasedRule</code> from AWS WAF (see
     * <a>DeleteRateBasedRule</a>).</p>
     */
    inline const Aws::String& GetRuleId() const{ return m_ruleId; }

    /**
     * <p>A unique identifier for a <code>RateBasedRule</code>. You use
     * <code>RuleId</code> to get more information about a <code>RateBasedRule</code>
     * (see <a>GetRateBasedRule</a>), update a <code>RateBasedRule</code> (see
     * <a>UpdateRateBasedRule</a>), insert a <code>RateBasedRule</code> into a
     * <code>WebACL</code> or delete one from a <code>WebACL</code> (see
     * <a>UpdateWebACL</a>), or delete a <code>RateBasedRule</code> from AWS WAF (see
     * <a>DeleteRateBasedRule</a>).</p>
     */
    inline bool RuleIdHasBeenSet() const { return m_ruleIdHasBeenSet; }

    /**
     * <p>A unique identifier for a <code>RateBasedRule</code>. You use
     * <code>RuleId</code> to get more information about a <code>RateBasedRule</code>
     * (see <a>GetRateBasedRule</a>), update a <code>RateBasedRule</code> (see
     * <a>UpdateRateBasedRule</a>), insert a <code>RateBasedRule</code> into a
     * <code>WebACL</code> or delete one from a <code>WebACL</code> (see
     * <a>UpdateWebACL</a>), or delete a <code>RateBasedRule</code> from AWS WAF (see
     * <a>DeleteRateBasedRule</a>).</p>
     */
    inline void SetRuleId(const Aws::String& value) { m_ruleIdHasBeenSet = true; m_ruleId = value; }

    /**
     * <p>A unique identifier for a <code>RateBasedRule</code>. You use
     * <code>RuleId</code> to get more information about a <code>RateBasedRule</code>
     * (see <a>GetRateBasedRule</a>), update a <code>RateBasedRule</code> (see
     * <a>UpdateRateBasedRule</a>), insert a <code>RateBasedRule</code> into a
     * <code>WebACL</code> or delete one from a <code>WebACL</code> (see
     * <a>UpdateWebACL</a>), or delete a <code>RateBasedRule</code> from AWS WAF (see
     * <a>DeleteRateBasedRule</a>).</p>
     */
    inline void SetRuleId(Aws::String&& value) { m_ruleIdHasBeenSet = true; m_ruleId = std::move(value); }

    /**
     * <p>A unique identifier for a <code>RateBasedRule</code>. You use
     * <code>RuleId</code> to get more information about a <code>RateBasedRule</code>
     * (see <a>GetRateBasedRule</a>), update a <code>RateBasedRule</code> (see
     * <a>UpdateRateBasedRule</a>), insert a <code>RateBasedRule</code> into a
     * <code>WebACL</code> or delete one from a <code>WebACL</code> (see
     * <a>UpdateWebACL</a>), or delete a <code>RateBasedRule</code> from AWS WAF (see
     * <a>DeleteRateBasedRule</a>).</p>
     */
    inline void SetRuleId(const char* value) { m_ruleIdHasBeenSet = true; m_ruleId.assign(value); }

    /**
     * <p>A unique identifier for a <code>RateBasedRule</code>. You use
     * <code>RuleId</code> to get more information about a <code>RateBasedRule</code>
     * (see <a>GetRateBasedRule</a>), update a <code>RateBasedRule</code> (see
     * <a>UpdateRateBasedRule</a>), insert a <code>RateBasedRule</code> into a
     * <code>WebACL</code> or delete one from a <code>WebACL</code> (see
     * <a>UpdateWebACL</a>), or delete a <code>RateBasedRule</code> from AWS WAF (see
     * <a>DeleteRateBasedRule</a>).</p>
     */
    inline RateBasedRule& WithRuleId(const Aws::String& value) { SetRuleId(value); return *this;}

    /**
     * <p>A unique identifier for a <code>RateBasedRule</code>. You use
     * <code>RuleId</code> to get more information about a <code>RateBasedRule</code>
     * (see <a>GetRateBasedRule</a>), update a <code>RateBasedRule</code> (see
     * <a>UpdateRateBasedRule</a>), insert a <code>RateBasedRule</code> into a
     * <code>WebACL</code> or delete one from a <code>WebACL</code> (see
     * <a>UpdateWebACL</a>), or delete a <code>RateBasedRule</code> from AWS WAF (see
     * <a>DeleteRateBasedRule</a>).</p>
     */
    inline RateBasedRule& WithRuleId(Aws::String&& value) { SetRuleId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for a <code>RateBasedRule</code>. You use
     * <code>RuleId</code> to get more information about a <code>RateBasedRule</code>
     * (see <a>GetRateBasedRule</a>), update a <code>RateBasedRule</code> (see
     * <a>UpdateRateBasedRule</a>), insert a <code>RateBasedRule</code> into a
     * <code>WebACL</code> or delete one from a <code>WebACL</code> (see
     * <a>UpdateWebACL</a>), or delete a <code>RateBasedRule</code> from AWS WAF (see
     * <a>DeleteRateBasedRule</a>).</p>
     */
    inline RateBasedRule& WithRuleId(const char* value) { SetRuleId(value); return *this;}


    /**
     * <p>A friendly name or description for a <code>RateBasedRule</code>. You can't
     * change the name of a <code>RateBasedRule</code> after you create it.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A friendly name or description for a <code>RateBasedRule</code>. You can't
     * change the name of a <code>RateBasedRule</code> after you create it.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A friendly name or description for a <code>RateBasedRule</code>. You can't
     * change the name of a <code>RateBasedRule</code> after you create it.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A friendly name or description for a <code>RateBasedRule</code>. You can't
     * change the name of a <code>RateBasedRule</code> after you create it.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A friendly name or description for a <code>RateBasedRule</code>. You can't
     * change the name of a <code>RateBasedRule</code> after you create it.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A friendly name or description for a <code>RateBasedRule</code>. You can't
     * change the name of a <code>RateBasedRule</code> after you create it.</p>
     */
    inline RateBasedRule& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A friendly name or description for a <code>RateBasedRule</code>. You can't
     * change the name of a <code>RateBasedRule</code> after you create it.</p>
     */
    inline RateBasedRule& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A friendly name or description for a <code>RateBasedRule</code>. You can't
     * change the name of a <code>RateBasedRule</code> after you create it.</p>
     */
    inline RateBasedRule& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A friendly name or description for the metrics for a
     * <code>RateBasedRule</code>. The name can contain only alphanumeric characters
     * (A-Z, a-z, 0-9), with maximum length 128 and minimum length one. It can't
     * contain whitespace or metric names reserved for AWS WAF, including "All" and
     * "Default_Action." You can't change the name of the metric after you create the
     * <code>RateBasedRule</code>.</p>
     */
    inline const Aws::String& GetMetricName() const{ return m_metricName; }

    /**
     * <p>A friendly name or description for the metrics for a
     * <code>RateBasedRule</code>. The name can contain only alphanumeric characters
     * (A-Z, a-z, 0-9), with maximum length 128 and minimum length one. It can't
     * contain whitespace or metric names reserved for AWS WAF, including "All" and
     * "Default_Action." You can't change the name of the metric after you create the
     * <code>RateBasedRule</code>.</p>
     */
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }

    /**
     * <p>A friendly name or description for the metrics for a
     * <code>RateBasedRule</code>. The name can contain only alphanumeric characters
     * (A-Z, a-z, 0-9), with maximum length 128 and minimum length one. It can't
     * contain whitespace or metric names reserved for AWS WAF, including "All" and
     * "Default_Action." You can't change the name of the metric after you create the
     * <code>RateBasedRule</code>.</p>
     */
    inline void SetMetricName(const Aws::String& value) { m_metricNameHasBeenSet = true; m_metricName = value; }

    /**
     * <p>A friendly name or description for the metrics for a
     * <code>RateBasedRule</code>. The name can contain only alphanumeric characters
     * (A-Z, a-z, 0-9), with maximum length 128 and minimum length one. It can't
     * contain whitespace or metric names reserved for AWS WAF, including "All" and
     * "Default_Action." You can't change the name of the metric after you create the
     * <code>RateBasedRule</code>.</p>
     */
    inline void SetMetricName(Aws::String&& value) { m_metricNameHasBeenSet = true; m_metricName = std::move(value); }

    /**
     * <p>A friendly name or description for the metrics for a
     * <code>RateBasedRule</code>. The name can contain only alphanumeric characters
     * (A-Z, a-z, 0-9), with maximum length 128 and minimum length one. It can't
     * contain whitespace or metric names reserved for AWS WAF, including "All" and
     * "Default_Action." You can't change the name of the metric after you create the
     * <code>RateBasedRule</code>.</p>
     */
    inline void SetMetricName(const char* value) { m_metricNameHasBeenSet = true; m_metricName.assign(value); }

    /**
     * <p>A friendly name or description for the metrics for a
     * <code>RateBasedRule</code>. The name can contain only alphanumeric characters
     * (A-Z, a-z, 0-9), with maximum length 128 and minimum length one. It can't
     * contain whitespace or metric names reserved for AWS WAF, including "All" and
     * "Default_Action." You can't change the name of the metric after you create the
     * <code>RateBasedRule</code>.</p>
     */
    inline RateBasedRule& WithMetricName(const Aws::String& value) { SetMetricName(value); return *this;}

    /**
     * <p>A friendly name or description for the metrics for a
     * <code>RateBasedRule</code>. The name can contain only alphanumeric characters
     * (A-Z, a-z, 0-9), with maximum length 128 and minimum length one. It can't
     * contain whitespace or metric names reserved for AWS WAF, including "All" and
     * "Default_Action." You can't change the name of the metric after you create the
     * <code>RateBasedRule</code>.</p>
     */
    inline RateBasedRule& WithMetricName(Aws::String&& value) { SetMetricName(std::move(value)); return *this;}

    /**
     * <p>A friendly name or description for the metrics for a
     * <code>RateBasedRule</code>. The name can contain only alphanumeric characters
     * (A-Z, a-z, 0-9), with maximum length 128 and minimum length one. It can't
     * contain whitespace or metric names reserved for AWS WAF, including "All" and
     * "Default_Action." You can't change the name of the metric after you create the
     * <code>RateBasedRule</code>.</p>
     */
    inline RateBasedRule& WithMetricName(const char* value) { SetMetricName(value); return *this;}


    /**
     * <p>The <code>Predicates</code> object contains one <code>Predicate</code>
     * element for each <a>ByteMatchSet</a>, <a>IPSet</a>, or
     * <a>SqlInjectionMatchSet</a> object that you want to include in a
     * <code>RateBasedRule</code>.</p>
     */
    inline const Aws::Vector<Predicate>& GetMatchPredicates() const{ return m_matchPredicates; }

    /**
     * <p>The <code>Predicates</code> object contains one <code>Predicate</code>
     * element for each <a>ByteMatchSet</a>, <a>IPSet</a>, or
     * <a>SqlInjectionMatchSet</a> object that you want to include in a
     * <code>RateBasedRule</code>.</p>
     */
    inline bool MatchPredicatesHasBeenSet() const { return m_matchPredicatesHasBeenSet; }

    /**
     * <p>The <code>Predicates</code> object contains one <code>Predicate</code>
     * element for each <a>ByteMatchSet</a>, <a>IPSet</a>, or
     * <a>SqlInjectionMatchSet</a> object that you want to include in a
     * <code>RateBasedRule</code>.</p>
     */
    inline void SetMatchPredicates(const Aws::Vector<Predicate>& value) { m_matchPredicatesHasBeenSet = true; m_matchPredicates = value; }

    /**
     * <p>The <code>Predicates</code> object contains one <code>Predicate</code>
     * element for each <a>ByteMatchSet</a>, <a>IPSet</a>, or
     * <a>SqlInjectionMatchSet</a> object that you want to include in a
     * <code>RateBasedRule</code>.</p>
     */
    inline void SetMatchPredicates(Aws::Vector<Predicate>&& value) { m_matchPredicatesHasBeenSet = true; m_matchPredicates = std::move(value); }

    /**
     * <p>The <code>Predicates</code> object contains one <code>Predicate</code>
     * element for each <a>ByteMatchSet</a>, <a>IPSet</a>, or
     * <a>SqlInjectionMatchSet</a> object that you want to include in a
     * <code>RateBasedRule</code>.</p>
     */
    inline RateBasedRule& WithMatchPredicates(const Aws::Vector<Predicate>& value) { SetMatchPredicates(value); return *this;}

    /**
     * <p>The <code>Predicates</code> object contains one <code>Predicate</code>
     * element for each <a>ByteMatchSet</a>, <a>IPSet</a>, or
     * <a>SqlInjectionMatchSet</a> object that you want to include in a
     * <code>RateBasedRule</code>.</p>
     */
    inline RateBasedRule& WithMatchPredicates(Aws::Vector<Predicate>&& value) { SetMatchPredicates(std::move(value)); return *this;}

    /**
     * <p>The <code>Predicates</code> object contains one <code>Predicate</code>
     * element for each <a>ByteMatchSet</a>, <a>IPSet</a>, or
     * <a>SqlInjectionMatchSet</a> object that you want to include in a
     * <code>RateBasedRule</code>.</p>
     */
    inline RateBasedRule& AddMatchPredicates(const Predicate& value) { m_matchPredicatesHasBeenSet = true; m_matchPredicates.push_back(value); return *this; }

    /**
     * <p>The <code>Predicates</code> object contains one <code>Predicate</code>
     * element for each <a>ByteMatchSet</a>, <a>IPSet</a>, or
     * <a>SqlInjectionMatchSet</a> object that you want to include in a
     * <code>RateBasedRule</code>.</p>
     */
    inline RateBasedRule& AddMatchPredicates(Predicate&& value) { m_matchPredicatesHasBeenSet = true; m_matchPredicates.push_back(std::move(value)); return *this; }


    /**
     * <p>The field that AWS WAF uses to determine if requests are likely arriving from
     * single source and thus subject to rate monitoring. The only valid value for
     * <code>RateKey</code> is <code>IP</code>. <code>IP</code> indicates that requests
     * arriving from the same IP address are subject to the <code>RateLimit</code> that
     * is specified in the <code>RateBasedRule</code>.</p>
     */
    inline const RateKey& GetRateKey() const{ return m_rateKey; }

    /**
     * <p>The field that AWS WAF uses to determine if requests are likely arriving from
     * single source and thus subject to rate monitoring. The only valid value for
     * <code>RateKey</code> is <code>IP</code>. <code>IP</code> indicates that requests
     * arriving from the same IP address are subject to the <code>RateLimit</code> that
     * is specified in the <code>RateBasedRule</code>.</p>
     */
    inline bool RateKeyHasBeenSet() const { return m_rateKeyHasBeenSet; }

    /**
     * <p>The field that AWS WAF uses to determine if requests are likely arriving from
     * single source and thus subject to rate monitoring. The only valid value for
     * <code>RateKey</code> is <code>IP</code>. <code>IP</code> indicates that requests
     * arriving from the same IP address are subject to the <code>RateLimit</code> that
     * is specified in the <code>RateBasedRule</code>.</p>
     */
    inline void SetRateKey(const RateKey& value) { m_rateKeyHasBeenSet = true; m_rateKey = value; }

    /**
     * <p>The field that AWS WAF uses to determine if requests are likely arriving from
     * single source and thus subject to rate monitoring. The only valid value for
     * <code>RateKey</code> is <code>IP</code>. <code>IP</code> indicates that requests
     * arriving from the same IP address are subject to the <code>RateLimit</code> that
     * is specified in the <code>RateBasedRule</code>.</p>
     */
    inline void SetRateKey(RateKey&& value) { m_rateKeyHasBeenSet = true; m_rateKey = std::move(value); }

    /**
     * <p>The field that AWS WAF uses to determine if requests are likely arriving from
     * single source and thus subject to rate monitoring. The only valid value for
     * <code>RateKey</code> is <code>IP</code>. <code>IP</code> indicates that requests
     * arriving from the same IP address are subject to the <code>RateLimit</code> that
     * is specified in the <code>RateBasedRule</code>.</p>
     */
    inline RateBasedRule& WithRateKey(const RateKey& value) { SetRateKey(value); return *this;}

    /**
     * <p>The field that AWS WAF uses to determine if requests are likely arriving from
     * single source and thus subject to rate monitoring. The only valid value for
     * <code>RateKey</code> is <code>IP</code>. <code>IP</code> indicates that requests
     * arriving from the same IP address are subject to the <code>RateLimit</code> that
     * is specified in the <code>RateBasedRule</code>.</p>
     */
    inline RateBasedRule& WithRateKey(RateKey&& value) { SetRateKey(std::move(value)); return *this;}


    /**
     * <p>The maximum number of requests, which have an identical value in the field
     * specified by the <code>RateKey</code>, allowed in a five-minute period. If the
     * number of requests exceeds the <code>RateLimit</code> and the other predicates
     * specified in the rule are also met, AWS WAF triggers the action that is
     * specified for this rule.</p>
     */
    inline long long GetRateLimit() const{ return m_rateLimit; }

    /**
     * <p>The maximum number of requests, which have an identical value in the field
     * specified by the <code>RateKey</code>, allowed in a five-minute period. If the
     * number of requests exceeds the <code>RateLimit</code> and the other predicates
     * specified in the rule are also met, AWS WAF triggers the action that is
     * specified for this rule.</p>
     */
    inline bool RateLimitHasBeenSet() const { return m_rateLimitHasBeenSet; }

    /**
     * <p>The maximum number of requests, which have an identical value in the field
     * specified by the <code>RateKey</code>, allowed in a five-minute period. If the
     * number of requests exceeds the <code>RateLimit</code> and the other predicates
     * specified in the rule are also met, AWS WAF triggers the action that is
     * specified for this rule.</p>
     */
    inline void SetRateLimit(long long value) { m_rateLimitHasBeenSet = true; m_rateLimit = value; }

    /**
     * <p>The maximum number of requests, which have an identical value in the field
     * specified by the <code>RateKey</code>, allowed in a five-minute period. If the
     * number of requests exceeds the <code>RateLimit</code> and the other predicates
     * specified in the rule are also met, AWS WAF triggers the action that is
     * specified for this rule.</p>
     */
    inline RateBasedRule& WithRateLimit(long long value) { SetRateLimit(value); return *this;}

  private:

    Aws::String m_ruleId;
    bool m_ruleIdHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet;

    Aws::Vector<Predicate> m_matchPredicates;
    bool m_matchPredicatesHasBeenSet;

    RateKey m_rateKey;
    bool m_rateKeyHasBeenSet;

    long long m_rateLimit;
    bool m_rateLimitHasBeenSet;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
