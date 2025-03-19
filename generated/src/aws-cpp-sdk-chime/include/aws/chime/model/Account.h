/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime/model/AccountType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/chime/model/License.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/chime/model/AccountStatus.h>
#include <aws/chime/model/SigninDelegateGroup.h>
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
namespace Chime
{
namespace Model
{

  /**
   * <p>The Amazon Chime account details. An AWS account can have multiple Amazon
   * Chime accounts.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/Account">AWS API
   * Reference</a></p>
   */
  class Account
  {
  public:
    AWS_CHIME_API Account() = default;
    AWS_CHIME_API Account(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API Account& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The AWS account ID.</p>
     */
    inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    template<typename AwsAccountIdT = Aws::String>
    void SetAwsAccountId(AwsAccountIdT&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::forward<AwsAccountIdT>(value); }
    template<typename AwsAccountIdT = Aws::String>
    Account& WithAwsAccountId(AwsAccountIdT&& value) { SetAwsAccountId(std::forward<AwsAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Chime account ID.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    Account& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Chime account name.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Account& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Chime account type. For more information about different account
     * types, see <a
     * href="https://docs.aws.amazon.com/chime/latest/ag/manage-chime-account.html">Managing
     * Your Amazon Chime Accounts</a> in the <i>Amazon Chime Administration
     * Guide</i>.</p>
     */
    inline AccountType GetAccountType() const { return m_accountType; }
    inline bool AccountTypeHasBeenSet() const { return m_accountTypeHasBeenSet; }
    inline void SetAccountType(AccountType value) { m_accountTypeHasBeenSet = true; m_accountType = value; }
    inline Account& WithAccountType(AccountType value) { SetAccountType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Chime account creation timestamp, in ISO 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const { return m_createdTimestamp; }
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    void SetCreatedTimestamp(CreatedTimestampT&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::forward<CreatedTimestampT>(value); }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    Account& WithCreatedTimestamp(CreatedTimestampT&& value) { SetCreatedTimestamp(std::forward<CreatedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default license for the Amazon Chime account.</p>
     */
    inline License GetDefaultLicense() const { return m_defaultLicense; }
    inline bool DefaultLicenseHasBeenSet() const { return m_defaultLicenseHasBeenSet; }
    inline void SetDefaultLicense(License value) { m_defaultLicenseHasBeenSet = true; m_defaultLicense = value; }
    inline Account& WithDefaultLicense(License value) { SetDefaultLicense(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Supported licenses for the Amazon Chime account.</p>
     */
    inline const Aws::Vector<License>& GetSupportedLicenses() const { return m_supportedLicenses; }
    inline bool SupportedLicensesHasBeenSet() const { return m_supportedLicensesHasBeenSet; }
    template<typename SupportedLicensesT = Aws::Vector<License>>
    void SetSupportedLicenses(SupportedLicensesT&& value) { m_supportedLicensesHasBeenSet = true; m_supportedLicenses = std::forward<SupportedLicensesT>(value); }
    template<typename SupportedLicensesT = Aws::Vector<License>>
    Account& WithSupportedLicenses(SupportedLicensesT&& value) { SetSupportedLicenses(std::forward<SupportedLicensesT>(value)); return *this;}
    inline Account& AddSupportedLicenses(License value) { m_supportedLicensesHasBeenSet = true; m_supportedLicenses.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of the account.</p>
     */
    inline AccountStatus GetAccountStatus() const { return m_accountStatus; }
    inline bool AccountStatusHasBeenSet() const { return m_accountStatusHasBeenSet; }
    inline void SetAccountStatus(AccountStatus value) { m_accountStatusHasBeenSet = true; m_accountStatus = value; }
    inline Account& WithAccountStatus(AccountStatus value) { SetAccountStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sign-in delegate groups associated with the account.</p>
     */
    inline const Aws::Vector<SigninDelegateGroup>& GetSigninDelegateGroups() const { return m_signinDelegateGroups; }
    inline bool SigninDelegateGroupsHasBeenSet() const { return m_signinDelegateGroupsHasBeenSet; }
    template<typename SigninDelegateGroupsT = Aws::Vector<SigninDelegateGroup>>
    void SetSigninDelegateGroups(SigninDelegateGroupsT&& value) { m_signinDelegateGroupsHasBeenSet = true; m_signinDelegateGroups = std::forward<SigninDelegateGroupsT>(value); }
    template<typename SigninDelegateGroupsT = Aws::Vector<SigninDelegateGroup>>
    Account& WithSigninDelegateGroups(SigninDelegateGroupsT&& value) { SetSigninDelegateGroups(std::forward<SigninDelegateGroupsT>(value)); return *this;}
    template<typename SigninDelegateGroupsT = SigninDelegateGroup>
    Account& AddSigninDelegateGroups(SigninDelegateGroupsT&& value) { m_signinDelegateGroupsHasBeenSet = true; m_signinDelegateGroups.emplace_back(std::forward<SigninDelegateGroupsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    AccountType m_accountType{AccountType::NOT_SET};
    bool m_accountTypeHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp{};
    bool m_createdTimestampHasBeenSet = false;

    License m_defaultLicense{License::NOT_SET};
    bool m_defaultLicenseHasBeenSet = false;

    Aws::Vector<License> m_supportedLicenses;
    bool m_supportedLicensesHasBeenSet = false;

    AccountStatus m_accountStatus{AccountStatus::NOT_SET};
    bool m_accountStatusHasBeenSet = false;

    Aws::Vector<SigninDelegateGroup> m_signinDelegateGroups;
    bool m_signinDelegateGroupsHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
