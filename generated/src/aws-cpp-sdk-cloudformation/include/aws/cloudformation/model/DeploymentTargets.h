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
    AWS_CLOUDFORMATION_API DeploymentTargets() = default;
    AWS_CLOUDFORMATION_API DeploymentTargets(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFORMATION_API DeploymentTargets& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The account IDs of the Amazon Web Services accounts. If you have many account
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
     * accounts).</p> <p/>
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
     * <p>The organization root ID or organizational unit (OU) IDs.</p>
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
