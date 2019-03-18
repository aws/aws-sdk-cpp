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
   * <p>Contains the identifier and the friendly name or description of the
   * <code>RuleGroup</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/RuleGroupSummary">AWS
   * API Reference</a></p>
   */
  class AWS_WAF_API RuleGroupSummary
  {
  public:
    RuleGroupSummary();
    RuleGroupSummary(Aws::Utils::Json::JsonView jsonValue);
    RuleGroupSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A unique identifier for a <code>RuleGroup</code>. You use
     * <code>RuleGroupId</code> to get more information about a <code>RuleGroup</code>
     * (see <a>GetRuleGroup</a>), update a <code>RuleGroup</code> (see
     * <a>UpdateRuleGroup</a>), insert a <code>RuleGroup</code> into a
     * <code>WebACL</code> or delete one from a <code>WebACL</code> (see
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
     * <code>WebACL</code> or delete one from a <code>WebACL</code> (see
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
     * <code>WebACL</code> or delete one from a <code>WebACL</code> (see
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
     * <code>WebACL</code> or delete one from a <code>WebACL</code> (see
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
     * <code>WebACL</code> or delete one from a <code>WebACL</code> (see
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
     * <code>WebACL</code> or delete one from a <code>WebACL</code> (see
     * <a>UpdateWebACL</a>), or delete a <code>RuleGroup</code> from AWS WAF (see
     * <a>DeleteRuleGroup</a>).</p> <p> <code>RuleGroupId</code> is returned by
     * <a>CreateRuleGroup</a> and by <a>ListRuleGroups</a>.</p>
     */
    inline RuleGroupSummary& WithRuleGroupId(const Aws::String& value) { SetRuleGroupId(value); return *this;}

    /**
     * <p>A unique identifier for a <code>RuleGroup</code>. You use
     * <code>RuleGroupId</code> to get more information about a <code>RuleGroup</code>
     * (see <a>GetRuleGroup</a>), update a <code>RuleGroup</code> (see
     * <a>UpdateRuleGroup</a>), insert a <code>RuleGroup</code> into a
     * <code>WebACL</code> or delete one from a <code>WebACL</code> (see
     * <a>UpdateWebACL</a>), or delete a <code>RuleGroup</code> from AWS WAF (see
     * <a>DeleteRuleGroup</a>).</p> <p> <code>RuleGroupId</code> is returned by
     * <a>CreateRuleGroup</a> and by <a>ListRuleGroups</a>.</p>
     */
    inline RuleGroupSummary& WithRuleGroupId(Aws::String&& value) { SetRuleGroupId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for a <code>RuleGroup</code>. You use
     * <code>RuleGroupId</code> to get more information about a <code>RuleGroup</code>
     * (see <a>GetRuleGroup</a>), update a <code>RuleGroup</code> (see
     * <a>UpdateRuleGroup</a>), insert a <code>RuleGroup</code> into a
     * <code>WebACL</code> or delete one from a <code>WebACL</code> (see
     * <a>UpdateWebACL</a>), or delete a <code>RuleGroup</code> from AWS WAF (see
     * <a>DeleteRuleGroup</a>).</p> <p> <code>RuleGroupId</code> is returned by
     * <a>CreateRuleGroup</a> and by <a>ListRuleGroups</a>.</p>
     */
    inline RuleGroupSummary& WithRuleGroupId(const char* value) { SetRuleGroupId(value); return *this;}


    /**
     * <p>A friendly name or description of the <a>RuleGroup</a>. You can't change the
     * name of a <code>RuleGroup</code> after you create it.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A friendly name or description of the <a>RuleGroup</a>. You can't change the
     * name of a <code>RuleGroup</code> after you create it.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A friendly name or description of the <a>RuleGroup</a>. You can't change the
     * name of a <code>RuleGroup</code> after you create it.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A friendly name or description of the <a>RuleGroup</a>. You can't change the
     * name of a <code>RuleGroup</code> after you create it.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A friendly name or description of the <a>RuleGroup</a>. You can't change the
     * name of a <code>RuleGroup</code> after you create it.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A friendly name or description of the <a>RuleGroup</a>. You can't change the
     * name of a <code>RuleGroup</code> after you create it.</p>
     */
    inline RuleGroupSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A friendly name or description of the <a>RuleGroup</a>. You can't change the
     * name of a <code>RuleGroup</code> after you create it.</p>
     */
    inline RuleGroupSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A friendly name or description of the <a>RuleGroup</a>. You can't change the
     * name of a <code>RuleGroup</code> after you create it.</p>
     */
    inline RuleGroupSummary& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_ruleGroupId;
    bool m_ruleGroupIdHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
