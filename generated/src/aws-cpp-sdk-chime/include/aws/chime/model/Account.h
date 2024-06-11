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
    AWS_CHIME_API Account();
    AWS_CHIME_API Account(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API Account& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The AWS account ID.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }
    inline Account& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}
    inline Account& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}
    inline Account& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Chime account ID.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }
    inline Account& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline Account& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline Account& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Chime account name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Account& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Account& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Account& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Chime account type. For more information about different account
     * types, see <a
     * href="https://docs.aws.amazon.com/chime/latest/ag/manage-chime-account.html">Managing
     * Your Amazon Chime Accounts</a> in the <i>Amazon Chime Administration
     * Guide</i>.</p>
     */
    inline const AccountType& GetAccountType() const{ return m_accountType; }
    inline bool AccountTypeHasBeenSet() const { return m_accountTypeHasBeenSet; }
    inline void SetAccountType(const AccountType& value) { m_accountTypeHasBeenSet = true; m_accountType = value; }
    inline void SetAccountType(AccountType&& value) { m_accountTypeHasBeenSet = true; m_accountType = std::move(value); }
    inline Account& WithAccountType(const AccountType& value) { SetAccountType(value); return *this;}
    inline Account& WithAccountType(AccountType&& value) { SetAccountType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Chime account creation timestamp, in ISO 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = value; }
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::move(value); }
    inline Account& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}
    inline Account& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default license for the Amazon Chime account.</p>
     */
    inline const License& GetDefaultLicense() const{ return m_defaultLicense; }
    inline bool DefaultLicenseHasBeenSet() const { return m_defaultLicenseHasBeenSet; }
    inline void SetDefaultLicense(const License& value) { m_defaultLicenseHasBeenSet = true; m_defaultLicense = value; }
    inline void SetDefaultLicense(License&& value) { m_defaultLicenseHasBeenSet = true; m_defaultLicense = std::move(value); }
    inline Account& WithDefaultLicense(const License& value) { SetDefaultLicense(value); return *this;}
    inline Account& WithDefaultLicense(License&& value) { SetDefaultLicense(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Supported licenses for the Amazon Chime account.</p>
     */
    inline const Aws::Vector<License>& GetSupportedLicenses() const{ return m_supportedLicenses; }
    inline bool SupportedLicensesHasBeenSet() const { return m_supportedLicensesHasBeenSet; }
    inline void SetSupportedLicenses(const Aws::Vector<License>& value) { m_supportedLicensesHasBeenSet = true; m_supportedLicenses = value; }
    inline void SetSupportedLicenses(Aws::Vector<License>&& value) { m_supportedLicensesHasBeenSet = true; m_supportedLicenses = std::move(value); }
    inline Account& WithSupportedLicenses(const Aws::Vector<License>& value) { SetSupportedLicenses(value); return *this;}
    inline Account& WithSupportedLicenses(Aws::Vector<License>&& value) { SetSupportedLicenses(std::move(value)); return *this;}
    inline Account& AddSupportedLicenses(const License& value) { m_supportedLicensesHasBeenSet = true; m_supportedLicenses.push_back(value); return *this; }
    inline Account& AddSupportedLicenses(License&& value) { m_supportedLicensesHasBeenSet = true; m_supportedLicenses.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of the account.</p>
     */
    inline const AccountStatus& GetAccountStatus() const{ return m_accountStatus; }
    inline bool AccountStatusHasBeenSet() const { return m_accountStatusHasBeenSet; }
    inline void SetAccountStatus(const AccountStatus& value) { m_accountStatusHasBeenSet = true; m_accountStatus = value; }
    inline void SetAccountStatus(AccountStatus&& value) { m_accountStatusHasBeenSet = true; m_accountStatus = std::move(value); }
    inline Account& WithAccountStatus(const AccountStatus& value) { SetAccountStatus(value); return *this;}
    inline Account& WithAccountStatus(AccountStatus&& value) { SetAccountStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sign-in delegate groups associated with the account.</p>
     */
    inline const Aws::Vector<SigninDelegateGroup>& GetSigninDelegateGroups() const{ return m_signinDelegateGroups; }
    inline bool SigninDelegateGroupsHasBeenSet() const { return m_signinDelegateGroupsHasBeenSet; }
    inline void SetSigninDelegateGroups(const Aws::Vector<SigninDelegateGroup>& value) { m_signinDelegateGroupsHasBeenSet = true; m_signinDelegateGroups = value; }
    inline void SetSigninDelegateGroups(Aws::Vector<SigninDelegateGroup>&& value) { m_signinDelegateGroupsHasBeenSet = true; m_signinDelegateGroups = std::move(value); }
    inline Account& WithSigninDelegateGroups(const Aws::Vector<SigninDelegateGroup>& value) { SetSigninDelegateGroups(value); return *this;}
    inline Account& WithSigninDelegateGroups(Aws::Vector<SigninDelegateGroup>&& value) { SetSigninDelegateGroups(std::move(value)); return *this;}
    inline Account& AddSigninDelegateGroups(const SigninDelegateGroup& value) { m_signinDelegateGroupsHasBeenSet = true; m_signinDelegateGroups.push_back(value); return *this; }
    inline Account& AddSigninDelegateGroups(SigninDelegateGroup&& value) { m_signinDelegateGroupsHasBeenSet = true; m_signinDelegateGroups.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    AccountType m_accountType;
    bool m_accountTypeHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp;
    bool m_createdTimestampHasBeenSet = false;

    License m_defaultLicense;
    bool m_defaultLicenseHasBeenSet = false;

    Aws::Vector<License> m_supportedLicenses;
    bool m_supportedLicensesHasBeenSet = false;

    AccountStatus m_accountStatus;
    bool m_accountStatusHasBeenSet = false;

    Aws::Vector<SigninDelegateGroup> m_signinDelegateGroups;
    bool m_signinDelegateGroupsHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
