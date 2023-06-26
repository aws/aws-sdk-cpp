/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudformation/model/AccountFilterType.h>
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
   * deploys. StackSets doesn't deploy stack instances to the organization management
   * account, even if the organization management account is in your organization or
   * in an OU in your organization.</p> <p>For update operations, you can specify
   * either <code>Accounts</code> or <code>OrganizationalUnitIds</code>. For create
   * and delete operations, specify <code>OrganizationalUnitIds</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/DeploymentTargets">AWS
   * API Reference</a></p>
   */
  class DeploymentTargets
  {
  public:
    AWS_CLOUDFORMATION_API DeploymentTargets();
    AWS_CLOUDFORMATION_API DeploymentTargets(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFORMATION_API DeploymentTargets& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The names of one or more Amazon Web Services accounts for which you want to
     * deploy stack set updates.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAccounts() const{ return m_accounts; }

    /**
     * <p>The names of one or more Amazon Web Services accounts for which you want to
     * deploy stack set updates.</p>
     */
    inline bool AccountsHasBeenSet() const { return m_accountsHasBeenSet; }

    /**
     * <p>The names of one or more Amazon Web Services accounts for which you want to
     * deploy stack set updates.</p>
     */
    inline void SetAccounts(const Aws::Vector<Aws::String>& value) { m_accountsHasBeenSet = true; m_accounts = value; }

    /**
     * <p>The names of one or more Amazon Web Services accounts for which you want to
     * deploy stack set updates.</p>
     */
    inline void SetAccounts(Aws::Vector<Aws::String>&& value) { m_accountsHasBeenSet = true; m_accounts = std::move(value); }

    /**
     * <p>The names of one or more Amazon Web Services accounts for which you want to
     * deploy stack set updates.</p>
     */
    inline DeploymentTargets& WithAccounts(const Aws::Vector<Aws::String>& value) { SetAccounts(value); return *this;}

    /**
     * <p>The names of one or more Amazon Web Services accounts for which you want to
     * deploy stack set updates.</p>
     */
    inline DeploymentTargets& WithAccounts(Aws::Vector<Aws::String>&& value) { SetAccounts(std::move(value)); return *this;}

    /**
     * <p>The names of one or more Amazon Web Services accounts for which you want to
     * deploy stack set updates.</p>
     */
    inline DeploymentTargets& AddAccounts(const Aws::String& value) { m_accountsHasBeenSet = true; m_accounts.push_back(value); return *this; }

    /**
     * <p>The names of one or more Amazon Web Services accounts for which you want to
     * deploy stack set updates.</p>
     */
    inline DeploymentTargets& AddAccounts(Aws::String&& value) { m_accountsHasBeenSet = true; m_accounts.push_back(std::move(value)); return *this; }

    /**
     * <p>The names of one or more Amazon Web Services accounts for which you want to
     * deploy stack set updates.</p>
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


    /**
     * <p>Limit deployment targets to individual accounts or include additional
     * accounts with provided OUs.</p> <p>The following is a list of possible values
     * for the <code>AccountFilterType</code> operation.</p> <ul> <li> <p>
     * <code>INTERSECTION</code>: StackSets deploys to the accounts specified in
     * <code>Accounts</code> parameter. </p> </li> <li> <p> <code>DIFFERENCE</code>:
     * StackSets excludes the accounts specified in <code>Accounts</code> parameter.
     * This enables user to avoid certain accounts within an OU such as suspended
     * accounts.</p> </li> <li> <p> <code>UNION</code>: StackSets includes additional
     * accounts deployment targets. </p> <p>This is the default value if
     * <code>AccountFilterType</code> is not provided. This enables user to update an
     * entire OU and individual accounts from a different OU in one request, which used
     * to be two separate requests.</p> </li> <li> <p> <code>NONE</code>: Deploys to
     * all the accounts in specified organizational units (OU).</p> </li> </ul>
     */
    inline const AccountFilterType& GetAccountFilterType() const{ return m_accountFilterType; }

    /**
     * <p>Limit deployment targets to individual accounts or include additional
     * accounts with provided OUs.</p> <p>The following is a list of possible values
     * for the <code>AccountFilterType</code> operation.</p> <ul> <li> <p>
     * <code>INTERSECTION</code>: StackSets deploys to the accounts specified in
     * <code>Accounts</code> parameter. </p> </li> <li> <p> <code>DIFFERENCE</code>:
     * StackSets excludes the accounts specified in <code>Accounts</code> parameter.
     * This enables user to avoid certain accounts within an OU such as suspended
     * accounts.</p> </li> <li> <p> <code>UNION</code>: StackSets includes additional
     * accounts deployment targets. </p> <p>This is the default value if
     * <code>AccountFilterType</code> is not provided. This enables user to update an
     * entire OU and individual accounts from a different OU in one request, which used
     * to be two separate requests.</p> </li> <li> <p> <code>NONE</code>: Deploys to
     * all the accounts in specified organizational units (OU).</p> </li> </ul>
     */
    inline bool AccountFilterTypeHasBeenSet() const { return m_accountFilterTypeHasBeenSet; }

    /**
     * <p>Limit deployment targets to individual accounts or include additional
     * accounts with provided OUs.</p> <p>The following is a list of possible values
     * for the <code>AccountFilterType</code> operation.</p> <ul> <li> <p>
     * <code>INTERSECTION</code>: StackSets deploys to the accounts specified in
     * <code>Accounts</code> parameter. </p> </li> <li> <p> <code>DIFFERENCE</code>:
     * StackSets excludes the accounts specified in <code>Accounts</code> parameter.
     * This enables user to avoid certain accounts within an OU such as suspended
     * accounts.</p> </li> <li> <p> <code>UNION</code>: StackSets includes additional
     * accounts deployment targets. </p> <p>This is the default value if
     * <code>AccountFilterType</code> is not provided. This enables user to update an
     * entire OU and individual accounts from a different OU in one request, which used
     * to be two separate requests.</p> </li> <li> <p> <code>NONE</code>: Deploys to
     * all the accounts in specified organizational units (OU).</p> </li> </ul>
     */
    inline void SetAccountFilterType(const AccountFilterType& value) { m_accountFilterTypeHasBeenSet = true; m_accountFilterType = value; }

    /**
     * <p>Limit deployment targets to individual accounts or include additional
     * accounts with provided OUs.</p> <p>The following is a list of possible values
     * for the <code>AccountFilterType</code> operation.</p> <ul> <li> <p>
     * <code>INTERSECTION</code>: StackSets deploys to the accounts specified in
     * <code>Accounts</code> parameter. </p> </li> <li> <p> <code>DIFFERENCE</code>:
     * StackSets excludes the accounts specified in <code>Accounts</code> parameter.
     * This enables user to avoid certain accounts within an OU such as suspended
     * accounts.</p> </li> <li> <p> <code>UNION</code>: StackSets includes additional
     * accounts deployment targets. </p> <p>This is the default value if
     * <code>AccountFilterType</code> is not provided. This enables user to update an
     * entire OU and individual accounts from a different OU in one request, which used
     * to be two separate requests.</p> </li> <li> <p> <code>NONE</code>: Deploys to
     * all the accounts in specified organizational units (OU).</p> </li> </ul>
     */
    inline void SetAccountFilterType(AccountFilterType&& value) { m_accountFilterTypeHasBeenSet = true; m_accountFilterType = std::move(value); }

    /**
     * <p>Limit deployment targets to individual accounts or include additional
     * accounts with provided OUs.</p> <p>The following is a list of possible values
     * for the <code>AccountFilterType</code> operation.</p> <ul> <li> <p>
     * <code>INTERSECTION</code>: StackSets deploys to the accounts specified in
     * <code>Accounts</code> parameter. </p> </li> <li> <p> <code>DIFFERENCE</code>:
     * StackSets excludes the accounts specified in <code>Accounts</code> parameter.
     * This enables user to avoid certain accounts within an OU such as suspended
     * accounts.</p> </li> <li> <p> <code>UNION</code>: StackSets includes additional
     * accounts deployment targets. </p> <p>This is the default value if
     * <code>AccountFilterType</code> is not provided. This enables user to update an
     * entire OU and individual accounts from a different OU in one request, which used
     * to be two separate requests.</p> </li> <li> <p> <code>NONE</code>: Deploys to
     * all the accounts in specified organizational units (OU).</p> </li> </ul>
     */
    inline DeploymentTargets& WithAccountFilterType(const AccountFilterType& value) { SetAccountFilterType(value); return *this;}

    /**
     * <p>Limit deployment targets to individual accounts or include additional
     * accounts with provided OUs.</p> <p>The following is a list of possible values
     * for the <code>AccountFilterType</code> operation.</p> <ul> <li> <p>
     * <code>INTERSECTION</code>: StackSets deploys to the accounts specified in
     * <code>Accounts</code> parameter. </p> </li> <li> <p> <code>DIFFERENCE</code>:
     * StackSets excludes the accounts specified in <code>Accounts</code> parameter.
     * This enables user to avoid certain accounts within an OU such as suspended
     * accounts.</p> </li> <li> <p> <code>UNION</code>: StackSets includes additional
     * accounts deployment targets. </p> <p>This is the default value if
     * <code>AccountFilterType</code> is not provided. This enables user to update an
     * entire OU and individual accounts from a different OU in one request, which used
     * to be two separate requests.</p> </li> <li> <p> <code>NONE</code>: Deploys to
     * all the accounts in specified organizational units (OU).</p> </li> </ul>
     */
    inline DeploymentTargets& WithAccountFilterType(AccountFilterType&& value) { SetAccountFilterType(std::move(value)); return *this;}

  private:

    Aws::Vector<Aws::String> m_accounts;
    bool m_accountsHasBeenSet = false;

    Aws::String m_accountsUrl;
    bool m_accountsUrlHasBeenSet = false;

    Aws::Vector<Aws::String> m_organizationalUnitIds;
    bool m_organizationalUnitIdsHasBeenSet = false;

    AccountFilterType m_accountFilterType;
    bool m_accountFilterTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
