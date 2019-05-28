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
   * <p>A collection of predefined rules that you can add to a web ACL.</p> <p>Rule
   * groups are subject to the following limits:</p> <ul> <li> <p>Three rule groups
   * per account. You can request an increase to this limit by contacting customer
   * support.</p> </li> <li> <p>One rule group per web ACL.</p> </li> <li> <p>Ten
   * rules per rule group.</p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/RuleGroup">AWS API
   * Reference</a></p>
   */
  class AWS_WAF_API RuleGroup
  {
  public:
    RuleGroup();
    RuleGroup(Aws::Utils::Json::JsonView jsonValue);
    RuleGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A unique identifier for a <code>RuleGroup</code>. You use
     * <code>RuleGroupId</code> to get more information about a <code>RuleGroup</code>
     * (see <a>GetRuleGroup</a>), update a <code>RuleGroup</code> (see
     * <a>UpdateRuleGroup</a>), insert a <code>RuleGroup</code> into a
     * <code>WebACL</code> or delete a one from a <code>WebACL</code> (see
     * <a>UpdateWebACL</a>), or delete a <code>RuleGroup</code> from AWS WAF (see
     * <a>DeleteRuleGroup</a>).</p> <p> <code>RuleGroupId</code> is returned by
     * <a>CreateRuleGroup</a> and by <a>ListRuleGroups</a>.</p>
     */
    inline const Aws::String& GetRuleGroupId() const{ return m_ruleGroupId; }

    /**
     * <p>A unique identifier for a <code>RuleGroup</code>. You use
     * <code>RuleGroupId</code> to get more information about a <code>RuleGroup</code>
     * (see <a>GetRuleGroup</a>), update a <code>RuleGroup</code> (see
     * <a>UpdateRuleGroup</a>), insert a <code>RuleGroup</code> into a
     * <code>WebACL</code> or delete a one from a <code>WebACL</code> (see
     * <a>UpdateWebACL</a>), or delete a <code>RuleGroup</code> from AWS WAF (see
     * <a>DeleteRuleGroup</a>).</p> <p> <code>RuleGroupId</code> is returned by
     * <a>CreateRuleGroup</a> and by <a>ListRuleGroups</a>.</p>
     */
    inline bool RuleGroupIdHasBeenSet() const { return m_ruleGroupIdHasBeenSet; }

    /**
     * <p>A unique identifier for a <code>RuleGroup</code>. You use
     * <code>RuleGroupId</code> to get more information about a <code>RuleGroup</code>
     * (see <a>GetRuleGroup</a>), update a <code>RuleGroup</code> (see
     * <a>UpdateRuleGroup</a>), insert a <code>RuleGroup</code> into a
     * <code>WebACL</code> or delete a one from a <code>WebACL</code> (see
     * <a>UpdateWebACL</a>), or delete a <code>RuleGroup</code> from AWS WAF (see
     * <a>DeleteRuleGroup</a>).</p> <p> <code>RuleGroupId</code> is returned by
     * <a>CreateRuleGroup</a> and by <a>ListRuleGroups</a>.</p>
     */
    inline void SetRuleGroupId(const Aws::String& value) { m_ruleGroupIdHasBeenSet = true; m_ruleGroupId = value; }

    /**
     * <p>A unique identifier for a <code>RuleGroup</code>. You use
     * <code>RuleGroupId</code> to get more information about a <code>RuleGroup</code>
     * (see <a>GetRuleGroup</a>), update a <code>RuleGroup</code> (see
     * <a>UpdateRuleGroup</a>), insert a <code>RuleGroup</code> into a
     * <code>WebACL</code> or delete a one from a <code>WebACL</code> (see
     * <a>UpdateWebACL</a>), or delete a <code>RuleGroup</code> from AWS WAF (see
     * <a>DeleteRuleGroup</a>).</p> <p> <code>RuleGroupId</code> is returned by
     * <a>CreateRuleGroup</a> and by <a>ListRuleGroups</a>.</p>
     */
    inline void SetRuleGroupId(Aws::String&& value) { m_ruleGroupIdHasBeenSet = true; m_ruleGroupId = std::move(value); }

    /**
     * <p>A unique identifier for a <code>RuleGroup</code>. You use
     * <code>RuleGroupId</code> to get more information about a <code>RuleGroup</code>
     * (see <a>GetRuleGroup</a>), update a <code>RuleGroup</code> (see
     * <a>UpdateRuleGroup</a>), insert a <code>RuleGroup</code> into a
     * <code>WebACL</code> or delete a one from a <code>WebACL</code> (see
     * <a>UpdateWebACL</a>), or delete a <code>RuleGroup</code> from AWS WAF (see
     * <a>DeleteRuleGroup</a>).</p> <p> <code>RuleGroupId</code> is returned by
     * <a>CreateRuleGroup</a> and by <a>ListRuleGroups</a>.</p>
     */
    inline void SetRuleGroupId(const char* value) { m_ruleGroupIdHasBeenSet = true; m_ruleGroupId.assign(value); }

    /**
     * <p>A unique identifier for a <code>RuleGroup</code>. You use
     * <code>RuleGroupId</code> to get more information about a <code>RuleGroup</code>
     * (see <a>GetRuleGroup</a>), update a <code>RuleGroup</code> (see
     * <a>UpdateRuleGroup</a>), insert a <code>RuleGroup</code> into a
     * <code>WebACL</code> or delete a one from a <code>WebACL</code> (see
     * <a>UpdateWebACL</a>), or delete a <code>RuleGroup</code> from AWS WAF (see
     * <a>DeleteRuleGroup</a>).</p> <p> <code>RuleGroupId</code> is returned by
     * <a>CreateRuleGroup</a> and by <a>ListRuleGroups</a>.</p>
     */
    inline RuleGroup& WithRuleGroupId(const Aws::String& value) { SetRuleGroupId(value); return *this;}

    /**
     * <p>A unique identifier for a <code>RuleGroup</code>. You use
     * <code>RuleGroupId</code> to get more information about a <code>RuleGroup</code>
     * (see <a>GetRuleGroup</a>), update a <code>RuleGroup</code> (see
     * <a>UpdateRuleGroup</a>), insert a <code>RuleGroup</code> into a
     * <code>WebACL</code> or delete a one from a <code>WebACL</code> (see
     * <a>UpdateWebACL</a>), or delete a <code>RuleGroup</code> from AWS WAF (see
     * <a>DeleteRuleGroup</a>).</p> <p> <code>RuleGroupId</code> is returned by
     * <a>CreateRuleGroup</a> and by <a>ListRuleGroups</a>.</p>
     */
    inline RuleGroup& WithRuleGroupId(Aws::String&& value) { SetRuleGroupId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for a <code>RuleGroup</code>. You use
     * <code>RuleGroupId</code> to get more information about a <code>RuleGroup</code>
     * (see <a>GetRuleGroup</a>), update a <code>RuleGroup</code> (see
     * <a>UpdateRuleGroup</a>), insert a <code>RuleGroup</code> into a
     * <code>WebACL</code> or delete a one from a <code>WebACL</code> (see
     * <a>UpdateWebACL</a>), or delete a <code>RuleGroup</code> from AWS WAF (see
     * <a>DeleteRuleGroup</a>).</p> <p> <code>RuleGroupId</code> is returned by
     * <a>CreateRuleGroup</a> and by <a>ListRuleGroups</a>.</p>
     */
    inline RuleGroup& WithRuleGroupId(const char* value) { SetRuleGroupId(value); return *this;}


    /**
     * <p>The friendly name or description for the <code>RuleGroup</code>. You can't
     * change the name of a <code>RuleGroup</code> after you create it.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The friendly name or description for the <code>RuleGroup</code>. You can't
     * change the name of a <code>RuleGroup</code> after you create it.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The friendly name or description for the <code>RuleGroup</code>. You can't
     * change the name of a <code>RuleGroup</code> after you create it.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The friendly name or description for the <code>RuleGroup</code>. You can't
     * change the name of a <code>RuleGroup</code> after you create it.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The friendly name or description for the <code>RuleGroup</code>. You can't
     * change the name of a <code>RuleGroup</code> after you create it.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The friendly name or description for the <code>RuleGroup</code>. You can't
     * change the name of a <code>RuleGroup</code> after you create it.</p>
     */
    inline RuleGroup& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The friendly name or description for the <code>RuleGroup</code>. You can't
     * change the name of a <code>RuleGroup</code> after you create it.</p>
     */
    inline RuleGroup& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The friendly name or description for the <code>RuleGroup</code>. You can't
     * change the name of a <code>RuleGroup</code> after you create it.</p>
     */
    inline RuleGroup& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A friendly name or description for the metrics for this
     * <code>RuleGroup</code>. The name can contain only alphanumeric characters (A-Z,
     * a-z, 0-9), with maximum length 128 and minimum length one. It can't contain
     * whitespace or metric names reserved for AWS WAF, including "All" and
     * "Default_Action." You can't change the name of the metric after you create the
     * <code>RuleGroup</code>.</p>
     */
    inline const Aws::String& GetMetricName() const{ return m_metricName; }

    /**
     * <p>A friendly name or description for the metrics for this
     * <code>RuleGroup</code>. The name can contain only alphanumeric characters (A-Z,
     * a-z, 0-9), with maximum length 128 and minimum length one. It can't contain
     * whitespace or metric names reserved for AWS WAF, including "All" and
     * "Default_Action." You can't change the name of the metric after you create the
     * <code>RuleGroup</code>.</p>
     */
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }

    /**
     * <p>A friendly name or description for the metrics for this
     * <code>RuleGroup</code>. The name can contain only alphanumeric characters (A-Z,
     * a-z, 0-9), with maximum length 128 and minimum length one. It can't contain
     * whitespace or metric names reserved for AWS WAF, including "All" and
     * "Default_Action." You can't change the name of the metric after you create the
     * <code>RuleGroup</code>.</p>
     */
    inline void SetMetricName(const Aws::String& value) { m_metricNameHasBeenSet = true; m_metricName = value; }

    /**
     * <p>A friendly name or description for the metrics for this
     * <code>RuleGroup</code>. The name can contain only alphanumeric characters (A-Z,
     * a-z, 0-9), with maximum length 128 and minimum length one. It can't contain
     * whitespace or metric names reserved for AWS WAF, including "All" and
     * "Default_Action." You can't change the name of the metric after you create the
     * <code>RuleGroup</code>.</p>
     */
    inline void SetMetricName(Aws::String&& value) { m_metricNameHasBeenSet = true; m_metricName = std::move(value); }

    /**
     * <p>A friendly name or description for the metrics for this
     * <code>RuleGroup</code>. The name can contain only alphanumeric characters (A-Z,
     * a-z, 0-9), with maximum length 128 and minimum length one. It can't contain
     * whitespace or metric names reserved for AWS WAF, including "All" and
     * "Default_Action." You can't change the name of the metric after you create the
     * <code>RuleGroup</code>.</p>
     */
    inline void SetMetricName(const char* value) { m_metricNameHasBeenSet = true; m_metricName.assign(value); }

    /**
     * <p>A friendly name or description for the metrics for this
     * <code>RuleGroup</code>. The name can contain only alphanumeric characters (A-Z,
     * a-z, 0-9), with maximum length 128 and minimum length one. It can't contain
     * whitespace or metric names reserved for AWS WAF, including "All" and
     * "Default_Action." You can't change the name of the metric after you create the
     * <code>RuleGroup</code>.</p>
     */
    inline RuleGroup& WithMetricName(const Aws::String& value) { SetMetricName(value); return *this;}

    /**
     * <p>A friendly name or description for the metrics for this
     * <code>RuleGroup</code>. The name can contain only alphanumeric characters (A-Z,
     * a-z, 0-9), with maximum length 128 and minimum length one. It can't contain
     * whitespace or metric names reserved for AWS WAF, including "All" and
     * "Default_Action." You can't change the name of the metric after you create the
     * <code>RuleGroup</code>.</p>
     */
    inline RuleGroup& WithMetricName(Aws::String&& value) { SetMetricName(std::move(value)); return *this;}

    /**
     * <p>A friendly name or description for the metrics for this
     * <code>RuleGroup</code>. The name can contain only alphanumeric characters (A-Z,
     * a-z, 0-9), with maximum length 128 and minimum length one. It can't contain
     * whitespace or metric names reserved for AWS WAF, including "All" and
     * "Default_Action." You can't change the name of the metric after you create the
     * <code>RuleGroup</code>.</p>
     */
    inline RuleGroup& WithMetricName(const char* value) { SetMetricName(value); return *this;}

  private:

    Aws::String m_ruleGroupId;
    bool m_ruleGroupIdHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
