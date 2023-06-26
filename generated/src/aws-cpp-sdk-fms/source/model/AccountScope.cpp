/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/AccountScope.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FMS
{
namespace Model
{

AccountScope::AccountScope() : 
    m_accountsHasBeenSet(false),
    m_allAccountsEnabled(false),
    m_allAccountsEnabledHasBeenSet(false),
    m_excludeSpecifiedAccounts(false),
    m_excludeSpecifiedAccountsHasBeenSet(false)
{
}

AccountScope::AccountScope(JsonView jsonValue) : 
    m_accountsHasBeenSet(false),
    m_allAccountsEnabled(false),
    m_allAccountsEnabledHasBeenSet(false),
    m_excludeSpecifiedAccounts(false),
    m_excludeSpecifiedAccountsHasBeenSet(false)
{
  *this = jsonValue;
}

AccountScope& AccountScope::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Accounts"))
  {
    Aws::Utils::Array<JsonView> accountsJsonList = jsonValue.GetArray("Accounts");
    for(unsigned accountsIndex = 0; accountsIndex < accountsJsonList.GetLength(); ++accountsIndex)
    {
      m_accounts.push_back(accountsJsonList[accountsIndex].AsString());
    }
    m_accountsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AllAccountsEnabled"))
  {
    m_allAccountsEnabled = jsonValue.GetBool("AllAccountsEnabled");

    m_allAccountsEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExcludeSpecifiedAccounts"))
  {
    m_excludeSpecifiedAccounts = jsonValue.GetBool("ExcludeSpecifiedAccounts");

    m_excludeSpecifiedAccountsHasBeenSet = true;
  }

  return *this;
}

JsonValue AccountScope::Jsonize() const
{
  JsonValue payload;

  if(m_accountsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> accountsJsonList(m_accounts.size());
   for(unsigned accountsIndex = 0; accountsIndex < accountsJsonList.GetLength(); ++accountsIndex)
   {
     accountsJsonList[accountsIndex].AsString(m_accounts[accountsIndex]);
   }
   payload.WithArray("Accounts", std::move(accountsJsonList));

  }

  if(m_allAccountsEnabledHasBeenSet)
  {
   payload.WithBool("AllAccountsEnabled", m_allAccountsEnabled);

  }

  if(m_excludeSpecifiedAccountsHasBeenSet)
  {
   payload.WithBool("ExcludeSpecifiedAccounts", m_excludeSpecifiedAccounts);

  }

  return payload;
}

} // namespace Model
} // namespace FMS
} // namespace Aws
