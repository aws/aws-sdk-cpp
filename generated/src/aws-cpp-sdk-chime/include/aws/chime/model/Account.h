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


    /**
     * <p>The AWS account ID.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }

    /**
     * <p>The AWS account ID.</p>
     */
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }

    /**
     * <p>The AWS account ID.</p>
     */
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }

    /**
     * <p>The AWS account ID.</p>
     */
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }

    /**
     * <p>The AWS account ID.</p>
     */
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }

    /**
     * <p>The AWS account ID.</p>
     */
    inline Account& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}

    /**
     * <p>The AWS account ID.</p>
     */
    inline Account& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}

    /**
     * <p>The AWS account ID.</p>
     */
    inline Account& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}


    /**
     * <p>The Amazon Chime account ID.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The Amazon Chime account ID.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The Amazon Chime account ID.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The Amazon Chime account ID.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The Amazon Chime account ID.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The Amazon Chime account ID.</p>
     */
    inline Account& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The Amazon Chime account ID.</p>
     */
    inline Account& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Chime account ID.</p>
     */
    inline Account& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The Amazon Chime account name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The Amazon Chime account name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The Amazon Chime account name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The Amazon Chime account name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The Amazon Chime account name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The Amazon Chime account name.</p>
     */
    inline Account& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The Amazon Chime account name.</p>
     */
    inline Account& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The Amazon Chime account name.</p>
     */
    inline Account& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Amazon Chime account type. For more information about different account
     * types, see <a
     * href="https://docs.aws.amazon.com/chime/latest/ag/manage-chime-account.html">Managing
     * Your Amazon Chime Accounts</a> in the <i>Amazon Chime Administration
     * Guide</i>.</p>
     */
    inline const AccountType& GetAccountType() const{ return m_accountType; }

    /**
     * <p>The Amazon Chime account type. For more information about different account
     * types, see <a
     * href="https://docs.aws.amazon.com/chime/latest/ag/manage-chime-account.html">Managing
     * Your Amazon Chime Accounts</a> in the <i>Amazon Chime Administration
     * Guide</i>.</p>
     */
    inline bool AccountTypeHasBeenSet() const { return m_accountTypeHasBeenSet; }

    /**
     * <p>The Amazon Chime account type. For more information about different account
     * types, see <a
     * href="https://docs.aws.amazon.com/chime/latest/ag/manage-chime-account.html">Managing
     * Your Amazon Chime Accounts</a> in the <i>Amazon Chime Administration
     * Guide</i>.</p>
     */
    inline void SetAccountType(const AccountType& value) { m_accountTypeHasBeenSet = true; m_accountType = value; }

    /**
     * <p>The Amazon Chime account type. For more information about different account
     * types, see <a
     * href="https://docs.aws.amazon.com/chime/latest/ag/manage-chime-account.html">Managing
     * Your Amazon Chime Accounts</a> in the <i>Amazon Chime Administration
     * Guide</i>.</p>
     */
    inline void SetAccountType(AccountType&& value) { m_accountTypeHasBeenSet = true; m_accountType = std::move(value); }

    /**
     * <p>The Amazon Chime account type. For more information about different account
     * types, see <a
     * href="https://docs.aws.amazon.com/chime/latest/ag/manage-chime-account.html">Managing
     * Your Amazon Chime Accounts</a> in the <i>Amazon Chime Administration
     * Guide</i>.</p>
     */
    inline Account& WithAccountType(const AccountType& value) { SetAccountType(value); return *this;}

    /**
     * <p>The Amazon Chime account type. For more information about different account
     * types, see <a
     * href="https://docs.aws.amazon.com/chime/latest/ag/manage-chime-account.html">Managing
     * Your Amazon Chime Accounts</a> in the <i>Amazon Chime Administration
     * Guide</i>.</p>
     */
    inline Account& WithAccountType(AccountType&& value) { SetAccountType(std::move(value)); return *this;}


    /**
     * <p>The Amazon Chime account creation timestamp, in ISO 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }

    /**
     * <p>The Amazon Chime account creation timestamp, in ISO 8601 format.</p>
     */
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }

    /**
     * <p>The Amazon Chime account creation timestamp, in ISO 8601 format.</p>
     */
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = value; }

    /**
     * <p>The Amazon Chime account creation timestamp, in ISO 8601 format.</p>
     */
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::move(value); }

    /**
     * <p>The Amazon Chime account creation timestamp, in ISO 8601 format.</p>
     */
    inline Account& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}

    /**
     * <p>The Amazon Chime account creation timestamp, in ISO 8601 format.</p>
     */
    inline Account& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}


    /**
     * <p>The default license for the Amazon Chime account.</p>
     */
    inline const License& GetDefaultLicense() const{ return m_defaultLicense; }

    /**
     * <p>The default license for the Amazon Chime account.</p>
     */
    inline bool DefaultLicenseHasBeenSet() const { return m_defaultLicenseHasBeenSet; }

    /**
     * <p>The default license for the Amazon Chime account.</p>
     */
    inline void SetDefaultLicense(const License& value) { m_defaultLicenseHasBeenSet = true; m_defaultLicense = value; }

    /**
     * <p>The default license for the Amazon Chime account.</p>
     */
    inline void SetDefaultLicense(License&& value) { m_defaultLicenseHasBeenSet = true; m_defaultLicense = std::move(value); }

    /**
     * <p>The default license for the Amazon Chime account.</p>
     */
    inline Account& WithDefaultLicense(const License& value) { SetDefaultLicense(value); return *this;}

    /**
     * <p>The default license for the Amazon Chime account.</p>
     */
    inline Account& WithDefaultLicense(License&& value) { SetDefaultLicense(std::move(value)); return *this;}


    /**
     * <p>Supported licenses for the Amazon Chime account.</p>
     */
    inline const Aws::Vector<License>& GetSupportedLicenses() const{ return m_supportedLicenses; }

    /**
     * <p>Supported licenses for the Amazon Chime account.</p>
     */
    inline bool SupportedLicensesHasBeenSet() const { return m_supportedLicensesHasBeenSet; }

    /**
     * <p>Supported licenses for the Amazon Chime account.</p>
     */
    inline void SetSupportedLicenses(const Aws::Vector<License>& value) { m_supportedLicensesHasBeenSet = true; m_supportedLicenses = value; }

    /**
     * <p>Supported licenses for the Amazon Chime account.</p>
     */
    inline void SetSupportedLicenses(Aws::Vector<License>&& value) { m_supportedLicensesHasBeenSet = true; m_supportedLicenses = std::move(value); }

    /**
     * <p>Supported licenses for the Amazon Chime account.</p>
     */
    inline Account& WithSupportedLicenses(const Aws::Vector<License>& value) { SetSupportedLicenses(value); return *this;}

    /**
     * <p>Supported licenses for the Amazon Chime account.</p>
     */
    inline Account& WithSupportedLicenses(Aws::Vector<License>&& value) { SetSupportedLicenses(std::move(value)); return *this;}

    /**
     * <p>Supported licenses for the Amazon Chime account.</p>
     */
    inline Account& AddSupportedLicenses(const License& value) { m_supportedLicensesHasBeenSet = true; m_supportedLicenses.push_back(value); return *this; }

    /**
     * <p>Supported licenses for the Amazon Chime account.</p>
     */
    inline Account& AddSupportedLicenses(License&& value) { m_supportedLicensesHasBeenSet = true; m_supportedLicenses.push_back(std::move(value)); return *this; }


    /**
     * <p>The status of the account.</p>
     */
    inline const AccountStatus& GetAccountStatus() const{ return m_accountStatus; }

    /**
     * <p>The status of the account.</p>
     */
    inline bool AccountStatusHasBeenSet() const { return m_accountStatusHasBeenSet; }

    /**
     * <p>The status of the account.</p>
     */
    inline void SetAccountStatus(const AccountStatus& value) { m_accountStatusHasBeenSet = true; m_accountStatus = value; }

    /**
     * <p>The status of the account.</p>
     */
    inline void SetAccountStatus(AccountStatus&& value) { m_accountStatusHasBeenSet = true; m_accountStatus = std::move(value); }

    /**
     * <p>The status of the account.</p>
     */
    inline Account& WithAccountStatus(const AccountStatus& value) { SetAccountStatus(value); return *this;}

    /**
     * <p>The status of the account.</p>
     */
    inline Account& WithAccountStatus(AccountStatus&& value) { SetAccountStatus(std::move(value)); return *this;}


    /**
     * <p>The sign-in delegate groups associated with the account.</p>
     */
    inline const Aws::Vector<SigninDelegateGroup>& GetSigninDelegateGroups() const{ return m_signinDelegateGroups; }

    /**
     * <p>The sign-in delegate groups associated with the account.</p>
     */
    inline bool SigninDelegateGroupsHasBeenSet() const { return m_signinDelegateGroupsHasBeenSet; }

    /**
     * <p>The sign-in delegate groups associated with the account.</p>
     */
    inline void SetSigninDelegateGroups(const Aws::Vector<SigninDelegateGroup>& value) { m_signinDelegateGroupsHasBeenSet = true; m_signinDelegateGroups = value; }

    /**
     * <p>The sign-in delegate groups associated with the account.</p>
     */
    inline void SetSigninDelegateGroups(Aws::Vector<SigninDelegateGroup>&& value) { m_signinDelegateGroupsHasBeenSet = true; m_signinDelegateGroups = std::move(value); }

    /**
     * <p>The sign-in delegate groups associated with the account.</p>
     */
    inline Account& WithSigninDelegateGroups(const Aws::Vector<SigninDelegateGroup>& value) { SetSigninDelegateGroups(value); return *this;}

    /**
     * <p>The sign-in delegate groups associated with the account.</p>
     */
    inline Account& WithSigninDelegateGroups(Aws::Vector<SigninDelegateGroup>&& value) { SetSigninDelegateGroups(std::move(value)); return *this;}

    /**
     * <p>The sign-in delegate groups associated with the account.</p>
     */
    inline Account& AddSigninDelegateGroups(const SigninDelegateGroup& value) { m_signinDelegateGroupsHasBeenSet = true; m_signinDelegateGroups.push_back(value); return *this; }

    /**
     * <p>The sign-in delegate groups associated with the account.</p>
     */
    inline Account& AddSigninDelegateGroups(SigninDelegateGroup&& value) { m_signinDelegateGroupsHasBeenSet = true; m_signinDelegateGroups.push_back(std::move(value)); return *this; }

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
