﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace CloudFormation
{
namespace Model
{

  /**
   * <p>[Service-managed permissions] The Organizations accounts to which StackSets
   * deploys. StackSets does not deploy stack instances to the organization
   * management account, even if the organization management account is in your
   * organization or in an OU in your organization.</p> <p>For update operations, you
   * can specify either <code>Accounts</code> or <code>OrganizationalUnitIds</code>.
   * For create and delete operations, specify
   * <code>OrganizationalUnitIds</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/DeploymentTargets">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDFORMATION_API DeploymentTargets
  {
  public:
    DeploymentTargets();
    DeploymentTargets(const Aws::Utils::Xml::XmlNode& xmlNode);
    DeploymentTargets& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The names of one or more accounts for which you want to deploy stack set
     * updates.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAccounts() const{ return m_accounts; }

    /**
     * <p>The names of one or more accounts for which you want to deploy stack set
     * updates.</p>
     */
    inline bool AccountsHasBeenSet() const { return m_accountsHasBeenSet; }

    /**
     * <p>The names of one or more accounts for which you want to deploy stack set
     * updates.</p>
     */
    inline void SetAccounts(const Aws::Vector<Aws::String>& value) { m_accountsHasBeenSet = true; m_accounts = value; }

    /**
     * <p>The names of one or more accounts for which you want to deploy stack set
     * updates.</p>
     */
    inline void SetAccounts(Aws::Vector<Aws::String>&& value) { m_accountsHasBeenSet = true; m_accounts = std::move(value); }

    /**
     * <p>The names of one or more accounts for which you want to deploy stack set
     * updates.</p>
     */
    inline DeploymentTargets& WithAccounts(const Aws::Vector<Aws::String>& value) { SetAccounts(value); return *this;}

    /**
     * <p>The names of one or more accounts for which you want to deploy stack set
     * updates.</p>
     */
    inline DeploymentTargets& WithAccounts(Aws::Vector<Aws::String>&& value) { SetAccounts(std::move(value)); return *this;}

    /**
     * <p>The names of one or more accounts for which you want to deploy stack set
     * updates.</p>
     */
    inline DeploymentTargets& AddAccounts(const Aws::String& value) { m_accountsHasBeenSet = true; m_accounts.push_back(value); return *this; }

    /**
     * <p>The names of one or more accounts for which you want to deploy stack set
     * updates.</p>
     */
    inline DeploymentTargets& AddAccounts(Aws::String&& value) { m_accountsHasBeenSet = true; m_accounts.push_back(std::move(value)); return *this; }

    /**
     * <p>The names of one or more accounts for which you want to deploy stack set
     * updates.</p>
     */
    inline DeploymentTargets& AddAccounts(const char* value) { m_accountsHasBeenSet = true; m_accounts.push_back(value); return *this; }


    /**
     * <p>Returns the value of the <code>AccountsUrl</code> property.</p>
     */
    inline const Aws::String& GetAccountsUrl() const{ return m_accountsUrl; }

    /**
     * <p>Returns the value of the <code>AccountsUrl</code> property.</p>
     */
    inline bool AccountsUrlHasBeenSet() const { return m_accountsUrlHasBeenSet; }

    /**
     * <p>Returns the value of the <code>AccountsUrl</code> property.</p>
     */
    inline void SetAccountsUrl(const Aws::String& value) { m_accountsUrlHasBeenSet = true; m_accountsUrl = value; }

    /**
     * <p>Returns the value of the <code>AccountsUrl</code> property.</p>
     */
    inline void SetAccountsUrl(Aws::String&& value) { m_accountsUrlHasBeenSet = true; m_accountsUrl = std::move(value); }

    /**
     * <p>Returns the value of the <code>AccountsUrl</code> property.</p>
     */
    inline void SetAccountsUrl(const char* value) { m_accountsUrlHasBeenSet = true; m_accountsUrl.assign(value); }

    /**
     * <p>Returns the value of the <code>AccountsUrl</code> property.</p>
     */
    inline DeploymentTargets& WithAccountsUrl(const Aws::String& value) { SetAccountsUrl(value); return *this;}

    /**
     * <p>Returns the value of the <code>AccountsUrl</code> property.</p>
     */
    inline DeploymentTargets& WithAccountsUrl(Aws::String&& value) { SetAccountsUrl(std::move(value)); return *this;}

    /**
     * <p>Returns the value of the <code>AccountsUrl</code> property.</p>
     */
    inline DeploymentTargets& WithAccountsUrl(const char* value) { SetAccountsUrl(value); return *this;}


    /**
     * <p>The organization root ID or organizational unit (OU) IDs to which StackSets
     * deploys.</p>
     */
    inline const Aws::Vector<Aws::String>& GetOrganizationalUnitIds() const{ return m_organizationalUnitIds; }

    /**
     * <p>The organization root ID or organizational unit (OU) IDs to which StackSets
     * deploys.</p>
     */
    inline bool OrganizationalUnitIdsHasBeenSet() const { return m_organizationalUnitIdsHasBeenSet; }

    /**
     * <p>The organization root ID or organizational unit (OU) IDs to which StackSets
     * deploys.</p>
     */
    inline void SetOrganizationalUnitIds(const Aws::Vector<Aws::String>& value) { m_organizationalUnitIdsHasBeenSet = true; m_organizationalUnitIds = value; }

    /**
     * <p>The organization root ID or organizational unit (OU) IDs to which StackSets
     * deploys.</p>
     */
    inline void SetOrganizationalUnitIds(Aws::Vector<Aws::String>&& value) { m_organizationalUnitIdsHasBeenSet = true; m_organizationalUnitIds = std::move(value); }

    /**
     * <p>The organization root ID or organizational unit (OU) IDs to which StackSets
     * deploys.</p>
     */
    inline DeploymentTargets& WithOrganizationalUnitIds(const Aws::Vector<Aws::String>& value) { SetOrganizationalUnitIds(value); return *this;}

    /**
     * <p>The organization root ID or organizational unit (OU) IDs to which StackSets
     * deploys.</p>
     */
    inline DeploymentTargets& WithOrganizationalUnitIds(Aws::Vector<Aws::String>&& value) { SetOrganizationalUnitIds(std::move(value)); return *this;}

    /**
     * <p>The organization root ID or organizational unit (OU) IDs to which StackSets
     * deploys.</p>
     */
    inline DeploymentTargets& AddOrganizationalUnitIds(const Aws::String& value) { m_organizationalUnitIdsHasBeenSet = true; m_organizationalUnitIds.push_back(value); return *this; }

    /**
     * <p>The organization root ID or organizational unit (OU) IDs to which StackSets
     * deploys.</p>
     */
    inline DeploymentTargets& AddOrganizationalUnitIds(Aws::String&& value) { m_organizationalUnitIdsHasBeenSet = true; m_organizationalUnitIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The organization root ID or organizational unit (OU) IDs to which StackSets
     * deploys.</p>
     */
    inline DeploymentTargets& AddOrganizationalUnitIds(const char* value) { m_organizationalUnitIdsHasBeenSet = true; m_organizationalUnitIds.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_accounts;
    bool m_accountsHasBeenSet;

    Aws::String m_accountsUrl;
    bool m_accountsUrlHasBeenSet;

    Aws::Vector<Aws::String> m_organizationalUnitIds;
    bool m_organizationalUnitIdsHasBeenSet;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
