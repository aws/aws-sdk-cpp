/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace FMS
{
namespace Model
{

  /**
   * <p>Configures the accounts within the administrator's Organizations organization
   * that the specified Firewall Manager administrator can apply policies
   * to.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/AccountScope">AWS
   * API Reference</a></p>
   */
  class AccountScope
  {
  public:
    AWS_FMS_API AccountScope();
    AWS_FMS_API AccountScope(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API AccountScope& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The list of accounts within the organization that the specified Firewall
     * Manager administrator either can or cannot apply policies to, based on the value
     * of <code>ExcludeSpecifiedAccounts</code>. If
     * <code>ExcludeSpecifiedAccounts</code> is set to <code>true</code>, then the
     * Firewall Manager administrator can apply policies to all members of the
     * organization except for the accounts in this list. If
     * <code>ExcludeSpecifiedAccounts</code> is set to <code>false</code>, then the
     * Firewall Manager administrator can only apply policies to the accounts in this
     * list.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAccounts() const{ return m_accounts; }

    /**
     * <p>The list of accounts within the organization that the specified Firewall
     * Manager administrator either can or cannot apply policies to, based on the value
     * of <code>ExcludeSpecifiedAccounts</code>. If
     * <code>ExcludeSpecifiedAccounts</code> is set to <code>true</code>, then the
     * Firewall Manager administrator can apply policies to all members of the
     * organization except for the accounts in this list. If
     * <code>ExcludeSpecifiedAccounts</code> is set to <code>false</code>, then the
     * Firewall Manager administrator can only apply policies to the accounts in this
     * list.</p>
     */
    inline bool AccountsHasBeenSet() const { return m_accountsHasBeenSet; }

    /**
     * <p>The list of accounts within the organization that the specified Firewall
     * Manager administrator either can or cannot apply policies to, based on the value
     * of <code>ExcludeSpecifiedAccounts</code>. If
     * <code>ExcludeSpecifiedAccounts</code> is set to <code>true</code>, then the
     * Firewall Manager administrator can apply policies to all members of the
     * organization except for the accounts in this list. If
     * <code>ExcludeSpecifiedAccounts</code> is set to <code>false</code>, then the
     * Firewall Manager administrator can only apply policies to the accounts in this
     * list.</p>
     */
    inline void SetAccounts(const Aws::Vector<Aws::String>& value) { m_accountsHasBeenSet = true; m_accounts = value; }

    /**
     * <p>The list of accounts within the organization that the specified Firewall
     * Manager administrator either can or cannot apply policies to, based on the value
     * of <code>ExcludeSpecifiedAccounts</code>. If
     * <code>ExcludeSpecifiedAccounts</code> is set to <code>true</code>, then the
     * Firewall Manager administrator can apply policies to all members of the
     * organization except for the accounts in this list. If
     * <code>ExcludeSpecifiedAccounts</code> is set to <code>false</code>, then the
     * Firewall Manager administrator can only apply policies to the accounts in this
     * list.</p>
     */
    inline void SetAccounts(Aws::Vector<Aws::String>&& value) { m_accountsHasBeenSet = true; m_accounts = std::move(value); }

    /**
     * <p>The list of accounts within the organization that the specified Firewall
     * Manager administrator either can or cannot apply policies to, based on the value
     * of <code>ExcludeSpecifiedAccounts</code>. If
     * <code>ExcludeSpecifiedAccounts</code> is set to <code>true</code>, then the
     * Firewall Manager administrator can apply policies to all members of the
     * organization except for the accounts in this list. If
     * <code>ExcludeSpecifiedAccounts</code> is set to <code>false</code>, then the
     * Firewall Manager administrator can only apply policies to the accounts in this
     * list.</p>
     */
    inline AccountScope& WithAccounts(const Aws::Vector<Aws::String>& value) { SetAccounts(value); return *this;}

    /**
     * <p>The list of accounts within the organization that the specified Firewall
     * Manager administrator either can or cannot apply policies to, based on the value
     * of <code>ExcludeSpecifiedAccounts</code>. If
     * <code>ExcludeSpecifiedAccounts</code> is set to <code>true</code>, then the
     * Firewall Manager administrator can apply policies to all members of the
     * organization except for the accounts in this list. If
     * <code>ExcludeSpecifiedAccounts</code> is set to <code>false</code>, then the
     * Firewall Manager administrator can only apply policies to the accounts in this
     * list.</p>
     */
    inline AccountScope& WithAccounts(Aws::Vector<Aws::String>&& value) { SetAccounts(std::move(value)); return *this;}

    /**
     * <p>The list of accounts within the organization that the specified Firewall
     * Manager administrator either can or cannot apply policies to, based on the value
     * of <code>ExcludeSpecifiedAccounts</code>. If
     * <code>ExcludeSpecifiedAccounts</code> is set to <code>true</code>, then the
     * Firewall Manager administrator can apply policies to all members of the
     * organization except for the accounts in this list. If
     * <code>ExcludeSpecifiedAccounts</code> is set to <code>false</code>, then the
     * Firewall Manager administrator can only apply policies to the accounts in this
     * list.</p>
     */
    inline AccountScope& AddAccounts(const Aws::String& value) { m_accountsHasBeenSet = true; m_accounts.push_back(value); return *this; }

    /**
     * <p>The list of accounts within the organization that the specified Firewall
     * Manager administrator either can or cannot apply policies to, based on the value
     * of <code>ExcludeSpecifiedAccounts</code>. If
     * <code>ExcludeSpecifiedAccounts</code> is set to <code>true</code>, then the
     * Firewall Manager administrator can apply policies to all members of the
     * organization except for the accounts in this list. If
     * <code>ExcludeSpecifiedAccounts</code> is set to <code>false</code>, then the
     * Firewall Manager administrator can only apply policies to the accounts in this
     * list.</p>
     */
    inline AccountScope& AddAccounts(Aws::String&& value) { m_accountsHasBeenSet = true; m_accounts.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of accounts within the organization that the specified Firewall
     * Manager administrator either can or cannot apply policies to, based on the value
     * of <code>ExcludeSpecifiedAccounts</code>. If
     * <code>ExcludeSpecifiedAccounts</code> is set to <code>true</code>, then the
     * Firewall Manager administrator can apply policies to all members of the
     * organization except for the accounts in this list. If
     * <code>ExcludeSpecifiedAccounts</code> is set to <code>false</code>, then the
     * Firewall Manager administrator can only apply policies to the accounts in this
     * list.</p>
     */
    inline AccountScope& AddAccounts(const char* value) { m_accountsHasBeenSet = true; m_accounts.push_back(value); return *this; }


    /**
     * <p>A boolean value that indicates if the administrator can apply policies to all
     * accounts within an organization. If true, the administrator can apply policies
     * to all accounts within the organization. You can either enable management of all
     * accounts through this operation, or you can specify a list of accounts to manage
     * in <code>AccountScope$Accounts</code>. You cannot specify both.</p>
     */
    inline bool GetAllAccountsEnabled() const{ return m_allAccountsEnabled; }

    /**
     * <p>A boolean value that indicates if the administrator can apply policies to all
     * accounts within an organization. If true, the administrator can apply policies
     * to all accounts within the organization. You can either enable management of all
     * accounts through this operation, or you can specify a list of accounts to manage
     * in <code>AccountScope$Accounts</code>. You cannot specify both.</p>
     */
    inline bool AllAccountsEnabledHasBeenSet() const { return m_allAccountsEnabledHasBeenSet; }

    /**
     * <p>A boolean value that indicates if the administrator can apply policies to all
     * accounts within an organization. If true, the administrator can apply policies
     * to all accounts within the organization. You can either enable management of all
     * accounts through this operation, or you can specify a list of accounts to manage
     * in <code>AccountScope$Accounts</code>. You cannot specify both.</p>
     */
    inline void SetAllAccountsEnabled(bool value) { m_allAccountsEnabledHasBeenSet = true; m_allAccountsEnabled = value; }

    /**
     * <p>A boolean value that indicates if the administrator can apply policies to all
     * accounts within an organization. If true, the administrator can apply policies
     * to all accounts within the organization. You can either enable management of all
     * accounts through this operation, or you can specify a list of accounts to manage
     * in <code>AccountScope$Accounts</code>. You cannot specify both.</p>
     */
    inline AccountScope& WithAllAccountsEnabled(bool value) { SetAllAccountsEnabled(value); return *this;}


    /**
     * <p>A boolean value that excludes the accounts in
     * <code>AccountScope$Accounts</code> from the administrator's scope. If true, the
     * Firewall Manager administrator can apply policies to all members of the
     * organization except for the accounts listed in
     * <code>AccountScope$Accounts</code>. You can either specify a list of accounts to
     * exclude by <code>AccountScope$Accounts</code>, or you can enable management of
     * all accounts by <code>AccountScope$AllAccountsEnabled</code>. You cannot specify
     * both.</p>
     */
    inline bool GetExcludeSpecifiedAccounts() const{ return m_excludeSpecifiedAccounts; }

    /**
     * <p>A boolean value that excludes the accounts in
     * <code>AccountScope$Accounts</code> from the administrator's scope. If true, the
     * Firewall Manager administrator can apply policies to all members of the
     * organization except for the accounts listed in
     * <code>AccountScope$Accounts</code>. You can either specify a list of accounts to
     * exclude by <code>AccountScope$Accounts</code>, or you can enable management of
     * all accounts by <code>AccountScope$AllAccountsEnabled</code>. You cannot specify
     * both.</p>
     */
    inline bool ExcludeSpecifiedAccountsHasBeenSet() const { return m_excludeSpecifiedAccountsHasBeenSet; }

    /**
     * <p>A boolean value that excludes the accounts in
     * <code>AccountScope$Accounts</code> from the administrator's scope. If true, the
     * Firewall Manager administrator can apply policies to all members of the
     * organization except for the accounts listed in
     * <code>AccountScope$Accounts</code>. You can either specify a list of accounts to
     * exclude by <code>AccountScope$Accounts</code>, or you can enable management of
     * all accounts by <code>AccountScope$AllAccountsEnabled</code>. You cannot specify
     * both.</p>
     */
    inline void SetExcludeSpecifiedAccounts(bool value) { m_excludeSpecifiedAccountsHasBeenSet = true; m_excludeSpecifiedAccounts = value; }

    /**
     * <p>A boolean value that excludes the accounts in
     * <code>AccountScope$Accounts</code> from the administrator's scope. If true, the
     * Firewall Manager administrator can apply policies to all members of the
     * organization except for the accounts listed in
     * <code>AccountScope$Accounts</code>. You can either specify a list of accounts to
     * exclude by <code>AccountScope$Accounts</code>, or you can enable management of
     * all accounts by <code>AccountScope$AllAccountsEnabled</code>. You cannot specify
     * both.</p>
     */
    inline AccountScope& WithExcludeSpecifiedAccounts(bool value) { SetExcludeSpecifiedAccounts(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_accounts;
    bool m_accountsHasBeenSet = false;

    bool m_allAccountsEnabled;
    bool m_allAccountsEnabledHasBeenSet = false;

    bool m_excludeSpecifiedAccounts;
    bool m_excludeSpecifiedAccountsHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
