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
   * <p>Specifies the Organizations accounts where you want to create, update, or
   * delete stack instances. You can target either your entire organization or
   * specific accounts using organizational units (OUs) and account filter
   * options.</p> <p>CloudFormation doesn't deploy stack instances to the
   * organization management account, even if the organization management account is
   * in your organization or in an OU in your organization.</p> <p>When performing
   * create operations, if you specify both <code>OrganizationalUnitIds</code> and
   * <code>Accounts</code>, you must also specify the <code>AccountFilterType</code>
   * property.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/DeploymentTargets">AWS
   * API Reference</a></p>
   */
  class DeploymentTargets
  {
  public:
    AWS_CLOUDFORMATION_API DeploymentTargets() = default;
    AWS_CLOUDFORMATION_API DeploymentTargets(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFORMATION_API DeploymentTargets& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The Amazon Web Services account IDs where you want to perform stack
     * operations. How these accounts are used depends on the
     * <code>AccountFilterType</code> property.</p> <p>If you have many account
     * numbers, you can provide those accounts using the <code>AccountsUrl</code>
     * property instead.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAccounts() const { return m_accounts; }
    inline bool AccountsHasBeenSet() const { return m_accountsHasBeenSet; }
    template<typename AccountsT = Aws::Vector<Aws::String>>
    void SetAccounts(AccountsT&& value) { m_accountsHasBeenSet = true; m_accounts = std::forward<AccountsT>(value); }
    template<typename AccountsT = Aws::Vector<Aws::String>>
    DeploymentTargets& WithAccounts(AccountsT&& value) { SetAccounts(std::forward<AccountsT>(value)); return *this;}
    template<typename AccountsT = Aws::String>
    DeploymentTargets& AddAccounts(AccountsT&& value) { m_accountsHasBeenSet = true; m_accounts.emplace_back(std::forward<AccountsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 URL path to a file that contains a list of Amazon Web Services
     * account IDs. The file format must be either <code>.csv</code> or
     * <code>.txt</code>, and the data can be comma-separated or new-line-separated.
     * There is currently a 10MB limit for the data (approximately 800,000
     * accounts).</p> <p>This property serves the same purpose as <code>Accounts</code>
     * but allows you to specify a large number of accounts.</p>
     */
    inline const Aws::String& GetAccountsUrl() const { return m_accountsUrl; }
    inline bool AccountsUrlHasBeenSet() const { return m_accountsUrlHasBeenSet; }
    template<typename AccountsUrlT = Aws::String>
    void SetAccountsUrl(AccountsUrlT&& value) { m_accountsUrlHasBeenSet = true; m_accountsUrl = std::forward<AccountsUrlT>(value); }
    template<typename AccountsUrlT = Aws::String>
    DeploymentTargets& WithAccountsUrl(AccountsUrlT&& value) { SetAccountsUrl(std::forward<AccountsUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The organization root ID or organizational unit (OU) IDs where you want to
     * perform stack operations. CloudFormation will perform operations on accounts
     * within these OUs and their child OUs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetOrganizationalUnitIds() const { return m_organizationalUnitIds; }
    inline bool OrganizationalUnitIdsHasBeenSet() const { return m_organizationalUnitIdsHasBeenSet; }
    template<typename OrganizationalUnitIdsT = Aws::Vector<Aws::String>>
    void SetOrganizationalUnitIds(OrganizationalUnitIdsT&& value) { m_organizationalUnitIdsHasBeenSet = true; m_organizationalUnitIds = std::forward<OrganizationalUnitIdsT>(value); }
    template<typename OrganizationalUnitIdsT = Aws::Vector<Aws::String>>
    DeploymentTargets& WithOrganizationalUnitIds(OrganizationalUnitIdsT&& value) { SetOrganizationalUnitIds(std::forward<OrganizationalUnitIdsT>(value)); return *this;}
    template<typename OrganizationalUnitIdsT = Aws::String>
    DeploymentTargets& AddOrganizationalUnitIds(OrganizationalUnitIdsT&& value) { m_organizationalUnitIdsHasBeenSet = true; m_organizationalUnitIds.emplace_back(std::forward<OrganizationalUnitIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Refines which accounts will have stack operations performed on them by
     * specifying how to use the <code>Accounts</code> and
     * <code>OrganizationalUnitIds</code> properties together.</p> <p>The following
     * values determine how CloudFormation selects target accounts:</p> <ul> <li> <p>
     * <code>INTERSECTION</code>: Performs stack operations only on specific individual
     * accounts within the selected OUs. Only accounts that are both specified in the
     * <code>Accounts</code> property and belong to the specified OUs will be
     * targeted.</p> </li> <li> <p> <code>DIFFERENCE</code>: Performs stack operations
     * on all accounts in the selected OUs except for specific accounts listed in the
     * <code>Accounts</code> property. This enables you to exclude certain accounts
     * within an OU, such as suspended accounts.</p> </li> <li> <p> <code>UNION</code>:
     * Performs stack operations on the specified OUs plus additional individual
     * accounts listed in the <code>Accounts</code> property. This is the default value
     * if <code>AccountFilterType</code> is not provided. This lets you target an
     * entire OU and individual accounts from a different OU in one request. Note that
     * <code>UNION</code> is not supported for <code>CreateStackInstances</code>
     * operations.</p> </li> <li> <p> <code>NONE</code>: Performs stack operations on
     * all accounts in the specified organizational units (OUs).</p> </li> </ul>
     */
    inline AccountFilterType GetAccountFilterType() const { return m_accountFilterType; }
    inline bool AccountFilterTypeHasBeenSet() const { return m_accountFilterTypeHasBeenSet; }
    inline void SetAccountFilterType(AccountFilterType value) { m_accountFilterTypeHasBeenSet = true; m_accountFilterType = value; }
    inline DeploymentTargets& WithAccountFilterType(AccountFilterType value) { SetAccountFilterType(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_accounts;
    bool m_accountsHasBeenSet = false;

    Aws::String m_accountsUrl;
    bool m_accountsUrlHasBeenSet = false;

    Aws::Vector<Aws::String> m_organizationalUnitIds;
    bool m_organizationalUnitIdsHasBeenSet = false;

    AccountFilterType m_accountFilterType{AccountFilterType::NOT_SET};
    bool m_accountFilterTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
