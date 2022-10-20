/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/Account.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Chime
{
namespace Model
{

Account::Account() : 
    m_awsAccountIdHasBeenSet(false),
    m_accountIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_accountType(AccountType::NOT_SET),
    m_accountTypeHasBeenSet(false),
    m_createdTimestampHasBeenSet(false),
    m_defaultLicense(License::NOT_SET),
    m_defaultLicenseHasBeenSet(false),
    m_supportedLicensesHasBeenSet(false),
    m_accountStatus(AccountStatus::NOT_SET),
    m_accountStatusHasBeenSet(false),
    m_signinDelegateGroupsHasBeenSet(false)
{
}

Account::Account(JsonView jsonValue) : 
    m_awsAccountIdHasBeenSet(false),
    m_accountIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_accountType(AccountType::NOT_SET),
    m_accountTypeHasBeenSet(false),
    m_createdTimestampHasBeenSet(false),
    m_defaultLicense(License::NOT_SET),
    m_defaultLicenseHasBeenSet(false),
    m_supportedLicensesHasBeenSet(false),
    m_accountStatus(AccountStatus::NOT_SET),
    m_accountStatusHasBeenSet(false),
    m_signinDelegateGroupsHasBeenSet(false)
{
  *this = jsonValue;
}

Account& Account::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AwsAccountId"))
  {
    m_awsAccountId = jsonValue.GetString("AwsAccountId");

    m_awsAccountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AccountId"))
  {
    m_accountId = jsonValue.GetString("AccountId");

    m_accountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AccountType"))
  {
    m_accountType = AccountTypeMapper::GetAccountTypeForName(jsonValue.GetString("AccountType"));

    m_accountTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedTimestamp"))
  {
    m_createdTimestamp = jsonValue.GetString("CreatedTimestamp");

    m_createdTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DefaultLicense"))
  {
    m_defaultLicense = LicenseMapper::GetLicenseForName(jsonValue.GetString("DefaultLicense"));

    m_defaultLicenseHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SupportedLicenses"))
  {
    Aws::Utils::Array<JsonView> supportedLicensesJsonList = jsonValue.GetArray("SupportedLicenses");
    for(unsigned supportedLicensesIndex = 0; supportedLicensesIndex < supportedLicensesJsonList.GetLength(); ++supportedLicensesIndex)
    {
      m_supportedLicenses.push_back(LicenseMapper::GetLicenseForName(supportedLicensesJsonList[supportedLicensesIndex].AsString()));
    }
    m_supportedLicensesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AccountStatus"))
  {
    m_accountStatus = AccountStatusMapper::GetAccountStatusForName(jsonValue.GetString("AccountStatus"));

    m_accountStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SigninDelegateGroups"))
  {
    Aws::Utils::Array<JsonView> signinDelegateGroupsJsonList = jsonValue.GetArray("SigninDelegateGroups");
    for(unsigned signinDelegateGroupsIndex = 0; signinDelegateGroupsIndex < signinDelegateGroupsJsonList.GetLength(); ++signinDelegateGroupsIndex)
    {
      m_signinDelegateGroups.push_back(signinDelegateGroupsJsonList[signinDelegateGroupsIndex].AsObject());
    }
    m_signinDelegateGroupsHasBeenSet = true;
  }

  return *this;
}

JsonValue Account::Jsonize() const
{
  JsonValue payload;

  if(m_awsAccountIdHasBeenSet)
  {
   payload.WithString("AwsAccountId", m_awsAccountId);

  }

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("AccountId", m_accountId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_accountTypeHasBeenSet)
  {
   payload.WithString("AccountType", AccountTypeMapper::GetNameForAccountType(m_accountType));
  }

  if(m_createdTimestampHasBeenSet)
  {
   payload.WithString("CreatedTimestamp", m_createdTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_defaultLicenseHasBeenSet)
  {
   payload.WithString("DefaultLicense", LicenseMapper::GetNameForLicense(m_defaultLicense));
  }

  if(m_supportedLicensesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> supportedLicensesJsonList(m_supportedLicenses.size());
   for(unsigned supportedLicensesIndex = 0; supportedLicensesIndex < supportedLicensesJsonList.GetLength(); ++supportedLicensesIndex)
   {
     supportedLicensesJsonList[supportedLicensesIndex].AsString(LicenseMapper::GetNameForLicense(m_supportedLicenses[supportedLicensesIndex]));
   }
   payload.WithArray("SupportedLicenses", std::move(supportedLicensesJsonList));

  }

  if(m_accountStatusHasBeenSet)
  {
   payload.WithString("AccountStatus", AccountStatusMapper::GetNameForAccountStatus(m_accountStatus));
  }

  if(m_signinDelegateGroupsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> signinDelegateGroupsJsonList(m_signinDelegateGroups.size());
   for(unsigned signinDelegateGroupsIndex = 0; signinDelegateGroupsIndex < signinDelegateGroupsJsonList.GetLength(); ++signinDelegateGroupsIndex)
   {
     signinDelegateGroupsJsonList[signinDelegateGroupsIndex].AsObject(m_signinDelegateGroups[signinDelegateGroupsIndex].Jsonize());
   }
   payload.WithArray("SigninDelegateGroups", std::move(signinDelegateGroupsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Chime
} // namespace Aws
