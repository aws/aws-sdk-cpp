/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/UsageTopAccountsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

UsageTopAccountsResult::UsageTopAccountsResult() : 
    m_feature(UsageFeature::NOT_SET),
    m_featureHasBeenSet(false),
    m_accountsHasBeenSet(false)
{
}

UsageTopAccountsResult::UsageTopAccountsResult(JsonView jsonValue) : 
    m_feature(UsageFeature::NOT_SET),
    m_featureHasBeenSet(false),
    m_accountsHasBeenSet(false)
{
  *this = jsonValue;
}

UsageTopAccountsResult& UsageTopAccountsResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("feature"))
  {
    m_feature = UsageFeatureMapper::GetUsageFeatureForName(jsonValue.GetString("feature"));

    m_featureHasBeenSet = true;
  }

  if(jsonValue.ValueExists("accounts"))
  {
    Aws::Utils::Array<JsonView> accountsJsonList = jsonValue.GetArray("accounts");
    for(unsigned accountsIndex = 0; accountsIndex < accountsJsonList.GetLength(); ++accountsIndex)
    {
      m_accounts.push_back(accountsJsonList[accountsIndex].AsObject());
    }
    m_accountsHasBeenSet = true;
  }

  return *this;
}

JsonValue UsageTopAccountsResult::Jsonize() const
{
  JsonValue payload;

  if(m_featureHasBeenSet)
  {
   payload.WithString("feature", UsageFeatureMapper::GetNameForUsageFeature(m_feature));
  }

  if(m_accountsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> accountsJsonList(m_accounts.size());
   for(unsigned accountsIndex = 0; accountsIndex < accountsJsonList.GetLength(); ++accountsIndex)
   {
     accountsJsonList[accountsIndex].AsObject(m_accounts[accountsIndex].Jsonize());
   }
   payload.WithArray("accounts", std::move(accountsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
