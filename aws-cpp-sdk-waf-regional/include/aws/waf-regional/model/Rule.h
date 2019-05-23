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
#include <aws/waf-regional/WAFRegional_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/waf-regional/model/Predicate.h>
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
namespace WAFRegional
{
namespace Model
{

  /**
   * <p>A combination of <a>ByteMatchSet</a>, <a>IPSet</a>, and/or
   * <a>SqlInjectionMatchSet</a> objects that identify the web requests that you want
   * to allow, block, or count. For example, you might create a <code>Rule</code>
   * that includes the following predicates:</p> <ul> <li> <p>An <code>IPSet</code>
   * that causes AWS WAF to search for web requests that originate from the IP
   * address <code>192.0.2.44</code> </p> </li> <li> <p>A <code>ByteMatchSet</code>
   * that causes AWS WAF to search for web requests for which the value of the
   * <code>User-Agent</code> header is <code>BadBot</code>.</p> </li> </ul> <p>To
   * match the settings in this <code>Rule</code>, a request must originate from
   * <code>192.0.2.44</code> AND include a <code>User-Agent</code> header for which
   * the value is <code>BadBot</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/Rule">AWS
   * API Reference</a></p>
   */
  class AWS_WAFREGIONAL_API Rule
  {
  public:
    Rule();
    Rule(Aws::Utils::Json::JsonView jsonValue);
    Rule& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A unique identifier for a <code>Rule</code>. You use <code>RuleId</code> to
     * get more information about a <code>Rule</code> (see <a>GetRule</a>), update a
     * <code>Rule</code> (see <a>UpdateRule</a>), insert a <code>Rule</code> into a
     * <code>WebACL</code> or delete a one from a <code>WebACL</code> (see
     * <a>UpdateWebACL</a>), or delete a <code>Rule</code> from AWS WAF (see
     * <a>DeleteRule</a>).</p> <p> <code>RuleId</code> is returned by <a>CreateRule</a>
     * and by <a>ListRules</a>.</p>
     */
    inline const Aws::String& GetRuleId() const{ return m_ruleId; }

    /**
     * <p>A unique identifier for a <code>Rule</code>. You use <code>RuleId</code> to
     * get more information about a <code>Rule</code> (see <a>GetRule</a>), update a
     * <code>Rule</code> (see <a>UpdateRule</a>), insert a <code>Rule</code> into a
     * <code>WebACL</code> or delete a one from a <code>WebACL</code> (see
     * <a>UpdateWebACL</a>), or delete a <code>Rule</code> from AWS WAF (see
     * <a>DeleteRule</a>).</p> <p> <code>RuleId</code> is returned by <a>CreateRule</a>
     * and by <a>ListRules</a>.</p>
     */
    inline bool RuleIdHasBeenSet() const { return m_ruleIdHasBeenSet; }

    /**
     * <p>A unique identifier for a <code>Rule</code>. You use <code>RuleId</code> to
     * get more information about a <code>Rule</code> (see <a>GetRule</a>), update a
     * <code>Rule</code> (see <a>UpdateRule</a>), insert a <code>Rule</code> into a
     * <code>WebACL</code> or delete a one from a <code>WebACL</code> (see
     * <a>UpdateWebACL</a>), or delete a <code>Rule</code> from AWS WAF (see
     * <a>DeleteRule</a>).</p> <p> <code>RuleId</code> is returned by <a>CreateRule</a>
     * and by <a>ListRules</a>.</p>
     */
    inline void SetRuleId(const Aws::String& value) { m_ruleIdHasBeenSet = true; m_ruleId = value; }

    /**
     * <p>A unique identifier for a <code>Rule</code>. You use <code>RuleId</code> to
     * get more information about a <code>Rule</code> (see <a>GetRule</a>), update a
     * <code>Rule</code> (see <a>UpdateRule</a>), insert a <code>Rule</code> into a
     * <code>WebACL</code> or delete a one from a <code>WebACL</code> (see
     * <a>UpdateWebACL</a>), or delete a <code>Rule</code> from AWS WAF (see
     * <a>DeleteRule</a>).</p> <p> <code>RuleId</code> is returned by <a>CreateRule</a>
     * and by <a>ListRules</a>.</p>
     */
    inline void SetRuleId(Aws::String&& value) { m_ruleIdHasBeenSet = true; m_ruleId = std::move(value); }

    /**
     * <p>A unique identifier for a <code>Rule</code>. You use <code>RuleId</code> to
     * get more information about a <code>Rule</code> (see <a>GetRule</a>), update a
     * <code>Rule</code> (see <a>UpdateRule</a>), insert a <code>Rule</code> into a
     * <code>WebACL</code> or delete a one from a <code>WebACL</code> (see
     * <a>UpdateWebACL</a>), or delete a <code>Rule</code> from AWS WAF (see
     * <a>DeleteRule</a>).</p> <p> <code>RuleId</code> is returned by <a>CreateRule</a>
     * and by <a>ListRules</a>.</p>
     */
    inline void SetRuleId(const char* value) { m_ruleIdHasBeenSet = true; m_ruleId.assign(value); }

    /**
     * <p>A unique identifier for a <code>Rule</code>. You use <code>RuleId</code> to
     * get more information about a <code>Rule</code> (see <a>GetRule</a>), update a
     * <code>Rule</code> (see <a>UpdateRule</a>), insert a <code>Rule</code> into a
     * <code>WebACL</code> or delete a one from a <code>WebACL</code> (see
     * <a>UpdateWebACL</a>), or delete a <code>Rule</code> from AWS WAF (see
     * <a>DeleteRule</a>).</p> <p> <code>RuleId</code> is returned by <a>CreateRule</a>
     * and by <a>ListRules</a>.</p>
     */
    inline Rule& WithRuleId(const Aws::String& value) { SetRuleId(value); return *this;}

    /**
     * <p>A unique identifier for a <code>Rule</code>. You use <code>RuleId</code> to
     * get more information about a <code>Rule</code> (see <a>GetRule</a>), update a
     * <code>Rule</code> (see <a>UpdateRule</a>), insert a <code>Rule</code> into a
     * <code>WebACL</code> or delete a one from a <code>WebACL</code> (see
     * <a>UpdateWebACL</a>), or delete a <code>Rule</code> from AWS WAF (see
     * <a>DeleteRule</a>).</p> <p> <code>RuleId</code> is returned by <a>CreateRule</a>
     * and by <a>ListRules</a>.</p>
     */
    inline Rule& WithRuleId(Aws::String&& value) { SetRuleId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for a <code>Rule</code>. You use <code>RuleId</code> to
     * get more information about a <code>Rule</code> (see <a>GetRule</a>), update a
     * <code>Rule</code> (see <a>UpdateRule</a>), insert a <code>Rule</code> into a
     * <code>WebACL</code> or delete a one from a <code>WebACL</code> (see
     * <a>UpdateWebACL</a>), or delete a <code>Rule</code> from AWS WAF (see
     * <a>DeleteRule</a>).</p> <p> <code>RuleId</code> is returned by <a>CreateRule</a>
     * and by <a>ListRules</a>.</p>
     */
    inline Rule& WithRuleId(const char* value) { SetRuleId(value); return *this;}


    /**
     * <p>The friendly name or description for the <code>Rule</code>. You can't change
     * the name of a <code>Rule</code> after you create it.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The friendly name or description for the <code>Rule</code>. You can't change
     * the name of a <code>Rule</code> after you create it.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The friendly name or description for the <code>Rule</code>. You can't change
     * the name of a <code>Rule</code> after you create it.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The friendly name or description for the <code>Rule</code>. You can't change
     * the name of a <code>Rule</code> after you create it.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The friendly name or description for the <code>Rule</code>. You can't change
     * the name of a <code>Rule</code> after you create it.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The friendly name or description for the <code>Rule</code>. You can't change
     * the name of a <code>Rule</code> after you create it.</p>
     */
    inline Rule& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The friendly name or description for the <code>Rule</code>. You can't change
     * the name of a <code>Rule</code> after you create it.</p>
     */
    inline Rule& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The friendly name or description for the <code>Rule</code>. You can't change
     * the name of a <code>Rule</code> after you create it.</p>
     */
    inline Rule& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A friendly name or description for the metrics for this <code>Rule</code>.
     * The name can contain only alphanumeric characters (A-Z, a-z, 0-9), with maximum
     * length 128 and minimum length one. It can't contain whitespace or metric names
     * reserved for AWS WAF, including "All" and "Default_Action." You can't change
     * <code>MetricName</code> after you create the <code>Rule</code>.</p>
     */
    inline const Aws::String& GetMetricName() const{ return m_metricName; }

    /**
     * <p>A friendly name or description for the metrics for this <code>Rule</code>.
     * The name can contain only alphanumeric characters (A-Z, a-z, 0-9), with maximum
     * length 128 and minimum length one. It can't contain whitespace or metric names
     * reserved for AWS WAF, including "All" and "Default_Action." You can't change
     * <code>MetricName</code> after you create the <code>Rule</code>.</p>
     */
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }

    /**
     * <p>A friendly name or description for the metrics for this <code>Rule</code>.
     * The name can contain only alphanumeric characters (A-Z, a-z, 0-9), with maximum
     * length 128 and minimum length one. It can't contain whitespace or metric names
     * reserved for AWS WAF, including "All" and "Default_Action." You can't change
     * <code>MetricName</code> after you create the <code>Rule</code>.</p>
     */
    inline void SetMetricName(const Aws::String& value) { m_metricNameHasBeenSet = true; m_metricName = value; }

    /**
     * <p>A friendly name or description for the metrics for this <code>Rule</code>.
     * The name can contain only alphanumeric characters (A-Z, a-z, 0-9), with maximum
     * length 128 and minimum length one. It can't contain whitespace or metric names
     * reserved for AWS WAF, including "All" and "Default_Action." You can't change
     * <code>MetricName</code> after you create the <code>Rule</code>.</p>
     */
    inline void SetMetricName(Aws::String&& value) { m_metricNameHasBeenSet = true; m_metricName = std::move(value); }

    /**
     * <p>A friendly name or description for the metrics for this <code>Rule</code>.
     * The name can contain only alphanumeric characters (A-Z, a-z, 0-9), with maximum
     * length 128 and minimum length one. It can't contain whitespace or metric names
     * reserved for AWS WAF, including "All" and "Default_Action." You can't change
     * <code>MetricName</code> after you create the <code>Rule</code>.</p>
     */
    inline void SetMetricName(const char* value) { m_metricNameHasBeenSet = true; m_metricName.assign(value); }

    /**
     * <p>A friendly name or description for the metrics for this <code>Rule</code>.
     * The name can contain only alphanumeric characters (A-Z, a-z, 0-9), with maximum
     * length 128 and minimum length one. It can't contain whitespace or metric names
     * reserved for AWS WAF, including "All" and "Default_Action." You can't change
     * <code>MetricName</code> after you create the <code>Rule</code>.</p>
     */
    inline Rule& WithMetricName(const Aws::String& value) { SetMetricName(value); return *this;}

    /**
     * <p>A friendly name or description for the metrics for this <code>Rule</code>.
     * The name can contain only alphanumeric characters (A-Z, a-z, 0-9), with maximum
     * length 128 and minimum length one. It can't contain whitespace or metric names
     * reserved for AWS WAF, including "All" and "Default_Action." You can't change
     * <code>MetricName</code> after you create the <code>Rule</code>.</p>
     */
    inline Rule& WithMetricName(Aws::String&& value) { SetMetricName(std::move(value)); return *this;}

    /**
     * <p>A friendly name or description for the metrics for this <code>Rule</code>.
     * The name can contain only alphanumeric characters (A-Z, a-z, 0-9), with maximum
     * length 128 and minimum length one. It can't contain whitespace or metric names
     * reserved for AWS WAF, including "All" and "Default_Action." You can't change
     * <code>MetricName</code> after you create the <code>Rule</code>.</p>
     */
    inline Rule& WithMetricName(const char* value) { SetMetricName(value); return *this;}


    /**
     * <p>The <code>Predicates</code> object contains one <code>Predicate</code>
     * element for each <a>ByteMatchSet</a>, <a>IPSet</a>, or
     * <a>SqlInjectionMatchSet</a> object that you want to include in a
     * <code>Rule</code>.</p>
     */
    inline const Aws::Vector<Predicate>& GetPredicates() const{ return m_predicates; }

    /**
     * <p>The <code>Predicates</code> object contains one <code>Predicate</code>
     * element for each <a>ByteMatchSet</a>, <a>IPSet</a>, or
     * <a>SqlInjectionMatchSet</a> object that you want to include in a
     * <code>Rule</code>.</p>
     */
    inline bool PredicatesHasBeenSet() const { return m_predicatesHasBeenSet; }

    /**
     * <p>The <code>Predicates</code> object contains one <code>Predicate</code>
     * element for each <a>ByteMatchSet</a>, <a>IPSet</a>, or
     * <a>SqlInjectionMatchSet</a> object that you want to include in a
     * <code>Rule</code>.</p>
     */
    inline void SetPredicates(const Aws::Vector<Predicate>& value) { m_predicatesHasBeenSet = true; m_predicates = value; }

    /**
     * <p>The <code>Predicates</code> object contains one <code>Predicate</code>
     * element for each <a>ByteMatchSet</a>, <a>IPSet</a>, or
     * <a>SqlInjectionMatchSet</a> object that you want to include in a
     * <code>Rule</code>.</p>
     */
    inline void SetPredicates(Aws::Vector<Predicate>&& value) { m_predicatesHasBeenSet = true; m_predicates = std::move(value); }

    /**
     * <p>The <code>Predicates</code> object contains one <code>Predicate</code>
     * element for each <a>ByteMatchSet</a>, <a>IPSet</a>, or
     * <a>SqlInjectionMatchSet</a> object that you want to include in a
     * <code>Rule</code>.</p>
     */
    inline Rule& WithPredicates(const Aws::Vector<Predicate>& value) { SetPredicates(value); return *this;}

    /**
     * <p>The <code>Predicates</code> object contains one <code>Predicate</code>
     * element for each <a>ByteMatchSet</a>, <a>IPSet</a>, or
     * <a>SqlInjectionMatchSet</a> object that you want to include in a
     * <code>Rule</code>.</p>
     */
    inline Rule& WithPredicates(Aws::Vector<Predicate>&& value) { SetPredicates(std::move(value)); return *this;}

    /**
     * <p>The <code>Predicates</code> object contains one <code>Predicate</code>
     * element for each <a>ByteMatchSet</a>, <a>IPSet</a>, or
     * <a>SqlInjectionMatchSet</a> object that you want to include in a
     * <code>Rule</code>.</p>
     */
    inline Rule& AddPredicates(const Predicate& value) { m_predicatesHasBeenSet = true; m_predicates.push_back(value); return *this; }

    /**
     * <p>The <code>Predicates</code> object contains one <code>Predicate</code>
     * element for each <a>ByteMatchSet</a>, <a>IPSet</a>, or
     * <a>SqlInjectionMatchSet</a> object that you want to include in a
     * <code>Rule</code>.</p>
     */
    inline Rule& AddPredicates(Predicate&& value) { m_predicatesHasBeenSet = true; m_predicates.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_ruleId;
    bool m_ruleIdHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet;

    Aws::Vector<Predicate> m_predicates;
    bool m_predicatesHasBeenSet;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
