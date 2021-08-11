﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wafv2/model/ExcludedRule.h>
#include <utility>
#include <memory>

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
  class Statement;

  /**
   * <p>A rule statement used to run the rules that are defined in a managed rule
   * group. To use this, provide the vendor name and the name of the rule group in
   * this statement. You can retrieve the required names by calling
   * <a>ListAvailableManagedRuleGroups</a>.</p> <p>You cannot nest a
   * <code>ManagedRuleGroupStatement</code>, for example for use inside a
   * <code>NotStatement</code> or <code>OrStatement</code>. It can only be referenced
   * as a top-level statement within a rule.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/ManagedRuleGroupStatement">AWS
   * API Reference</a></p>
   */
  class AWS_WAFV2_API ManagedRuleGroupStatement
  {
  public:
    ManagedRuleGroupStatement();
    ManagedRuleGroupStatement(Aws::Utils::Json::JsonView jsonValue);
    ManagedRuleGroupStatement& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the managed rule group vendor. You use this, along with the rule
     * group name, to identify the rule group.</p>
     */
    inline const Aws::String& GetVendorName() const{ return m_vendorName; }

    /**
     * <p>The name of the managed rule group vendor. You use this, along with the rule
     * group name, to identify the rule group.</p>
     */
    inline bool VendorNameHasBeenSet() const { return m_vendorNameHasBeenSet; }

    /**
     * <p>The name of the managed rule group vendor. You use this, along with the rule
     * group name, to identify the rule group.</p>
     */
    inline void SetVendorName(const Aws::String& value) { m_vendorNameHasBeenSet = true; m_vendorName = value; }

    /**
     * <p>The name of the managed rule group vendor. You use this, along with the rule
     * group name, to identify the rule group.</p>
     */
    inline void SetVendorName(Aws::String&& value) { m_vendorNameHasBeenSet = true; m_vendorName = std::move(value); }

    /**
     * <p>The name of the managed rule group vendor. You use this, along with the rule
     * group name, to identify the rule group.</p>
     */
    inline void SetVendorName(const char* value) { m_vendorNameHasBeenSet = true; m_vendorName.assign(value); }

    /**
     * <p>The name of the managed rule group vendor. You use this, along with the rule
     * group name, to identify the rule group.</p>
     */
    inline ManagedRuleGroupStatement& WithVendorName(const Aws::String& value) { SetVendorName(value); return *this;}

    /**
     * <p>The name of the managed rule group vendor. You use this, along with the rule
     * group name, to identify the rule group.</p>
     */
    inline ManagedRuleGroupStatement& WithVendorName(Aws::String&& value) { SetVendorName(std::move(value)); return *this;}

    /**
     * <p>The name of the managed rule group vendor. You use this, along with the rule
     * group name, to identify the rule group.</p>
     */
    inline ManagedRuleGroupStatement& WithVendorName(const char* value) { SetVendorName(value); return *this;}


    /**
     * <p>The name of the managed rule group. You use this, along with the vendor name,
     * to identify the rule group.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the managed rule group. You use this, along with the vendor name,
     * to identify the rule group.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the managed rule group. You use this, along with the vendor name,
     * to identify the rule group.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the managed rule group. You use this, along with the vendor name,
     * to identify the rule group.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the managed rule group. You use this, along with the vendor name,
     * to identify the rule group.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the managed rule group. You use this, along with the vendor name,
     * to identify the rule group.</p>
     */
    inline ManagedRuleGroupStatement& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the managed rule group. You use this, along with the vendor name,
     * to identify the rule group.</p>
     */
    inline ManagedRuleGroupStatement& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the managed rule group. You use this, along with the vendor name,
     * to identify the rule group.</p>
     */
    inline ManagedRuleGroupStatement& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The version of the managed rule group to use. If you specify this, the
     * version setting is fixed until you change it. If you don't specify this, WAF
     * uses the vendor's default version, and then keeps the version at the vendor's
     * default when the vendor updates the managed rule group settings. </p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The version of the managed rule group to use. If you specify this, the
     * version setting is fixed until you change it. If you don't specify this, WAF
     * uses the vendor's default version, and then keeps the version at the vendor's
     * default when the vendor updates the managed rule group settings. </p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The version of the managed rule group to use. If you specify this, the
     * version setting is fixed until you change it. If you don't specify this, WAF
     * uses the vendor's default version, and then keeps the version at the vendor's
     * default when the vendor updates the managed rule group settings. </p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The version of the managed rule group to use. If you specify this, the
     * version setting is fixed until you change it. If you don't specify this, WAF
     * uses the vendor's default version, and then keeps the version at the vendor's
     * default when the vendor updates the managed rule group settings. </p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>The version of the managed rule group to use. If you specify this, the
     * version setting is fixed until you change it. If you don't specify this, WAF
     * uses the vendor's default version, and then keeps the version at the vendor's
     * default when the vendor updates the managed rule group settings. </p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>The version of the managed rule group to use. If you specify this, the
     * version setting is fixed until you change it. If you don't specify this, WAF
     * uses the vendor's default version, and then keeps the version at the vendor's
     * default when the vendor updates the managed rule group settings. </p>
     */
    inline ManagedRuleGroupStatement& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The version of the managed rule group to use. If you specify this, the
     * version setting is fixed until you change it. If you don't specify this, WAF
     * uses the vendor's default version, and then keeps the version at the vendor's
     * default when the vendor updates the managed rule group settings. </p>
     */
    inline ManagedRuleGroupStatement& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the managed rule group to use. If you specify this, the
     * version setting is fixed until you change it. If you don't specify this, WAF
     * uses the vendor's default version, and then keeps the version at the vendor's
     * default when the vendor updates the managed rule group settings. </p>
     */
    inline ManagedRuleGroupStatement& WithVersion(const char* value) { SetVersion(value); return *this;}


    /**
     * <p>The rules whose actions are set to <code>COUNT</code> by the web ACL,
     * regardless of the action that is set on the rule. This effectively excludes the
     * rule from acting on web requests. </p>
     */
    inline const Aws::Vector<ExcludedRule>& GetExcludedRules() const{ return m_excludedRules; }

    /**
     * <p>The rules whose actions are set to <code>COUNT</code> by the web ACL,
     * regardless of the action that is set on the rule. This effectively excludes the
     * rule from acting on web requests. </p>
     */
    inline bool ExcludedRulesHasBeenSet() const { return m_excludedRulesHasBeenSet; }

    /**
     * <p>The rules whose actions are set to <code>COUNT</code> by the web ACL,
     * regardless of the action that is set on the rule. This effectively excludes the
     * rule from acting on web requests. </p>
     */
    inline void SetExcludedRules(const Aws::Vector<ExcludedRule>& value) { m_excludedRulesHasBeenSet = true; m_excludedRules = value; }

    /**
     * <p>The rules whose actions are set to <code>COUNT</code> by the web ACL,
     * regardless of the action that is set on the rule. This effectively excludes the
     * rule from acting on web requests. </p>
     */
    inline void SetExcludedRules(Aws::Vector<ExcludedRule>&& value) { m_excludedRulesHasBeenSet = true; m_excludedRules = std::move(value); }

    /**
     * <p>The rules whose actions are set to <code>COUNT</code> by the web ACL,
     * regardless of the action that is set on the rule. This effectively excludes the
     * rule from acting on web requests. </p>
     */
    inline ManagedRuleGroupStatement& WithExcludedRules(const Aws::Vector<ExcludedRule>& value) { SetExcludedRules(value); return *this;}

    /**
     * <p>The rules whose actions are set to <code>COUNT</code> by the web ACL,
     * regardless of the action that is set on the rule. This effectively excludes the
     * rule from acting on web requests. </p>
     */
    inline ManagedRuleGroupStatement& WithExcludedRules(Aws::Vector<ExcludedRule>&& value) { SetExcludedRules(std::move(value)); return *this;}

    /**
     * <p>The rules whose actions are set to <code>COUNT</code> by the web ACL,
     * regardless of the action that is set on the rule. This effectively excludes the
     * rule from acting on web requests. </p>
     */
    inline ManagedRuleGroupStatement& AddExcludedRules(const ExcludedRule& value) { m_excludedRulesHasBeenSet = true; m_excludedRules.push_back(value); return *this; }

    /**
     * <p>The rules whose actions are set to <code>COUNT</code> by the web ACL,
     * regardless of the action that is set on the rule. This effectively excludes the
     * rule from acting on web requests. </p>
     */
    inline ManagedRuleGroupStatement& AddExcludedRules(ExcludedRule&& value) { m_excludedRulesHasBeenSet = true; m_excludedRules.push_back(std::move(value)); return *this; }


    /**
     * <p>An optional nested statement that narrows the scope of the web requests that
     * are evaluated by the managed rule group. Requests are only evaluated by the rule
     * group if they match the scope-down statement. You can use any nestable
     * <a>Statement</a> in the scope-down statement, and you can nest statements at any
     * level, the same as you can for a rule statement. </p>
     */
    const Statement& GetScopeDownStatement() const;

    /**
     * <p>An optional nested statement that narrows the scope of the web requests that
     * are evaluated by the managed rule group. Requests are only evaluated by the rule
     * group if they match the scope-down statement. You can use any nestable
     * <a>Statement</a> in the scope-down statement, and you can nest statements at any
     * level, the same as you can for a rule statement. </p>
     */
    bool ScopeDownStatementHasBeenSet() const;

    /**
     * <p>An optional nested statement that narrows the scope of the web requests that
     * are evaluated by the managed rule group. Requests are only evaluated by the rule
     * group if they match the scope-down statement. You can use any nestable
     * <a>Statement</a> in the scope-down statement, and you can nest statements at any
     * level, the same as you can for a rule statement. </p>
     */
    void SetScopeDownStatement(const Statement& value);

    /**
     * <p>An optional nested statement that narrows the scope of the web requests that
     * are evaluated by the managed rule group. Requests are only evaluated by the rule
     * group if they match the scope-down statement. You can use any nestable
     * <a>Statement</a> in the scope-down statement, and you can nest statements at any
     * level, the same as you can for a rule statement. </p>
     */
    void SetScopeDownStatement(Statement&& value);

    /**
     * <p>An optional nested statement that narrows the scope of the web requests that
     * are evaluated by the managed rule group. Requests are only evaluated by the rule
     * group if they match the scope-down statement. You can use any nestable
     * <a>Statement</a> in the scope-down statement, and you can nest statements at any
     * level, the same as you can for a rule statement. </p>
     */
    ManagedRuleGroupStatement& WithScopeDownStatement(const Statement& value);

    /**
     * <p>An optional nested statement that narrows the scope of the web requests that
     * are evaluated by the managed rule group. Requests are only evaluated by the rule
     * group if they match the scope-down statement. You can use any nestable
     * <a>Statement</a> in the scope-down statement, and you can nest statements at any
     * level, the same as you can for a rule statement. </p>
     */
    ManagedRuleGroupStatement& WithScopeDownStatement(Statement&& value);

  private:

    Aws::String m_vendorName;
    bool m_vendorNameHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_version;
    bool m_versionHasBeenSet;

    Aws::Vector<ExcludedRule> m_excludedRules;
    bool m_excludedRulesHasBeenSet;

    std::shared_ptr<Statement> m_scopeDownStatement;
    bool m_scopeDownStatementHasBeenSet;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
