/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/GetRemainingFreeTrialDaysResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::GuardDuty::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetRemainingFreeTrialDaysResult::GetRemainingFreeTrialDaysResult()
{
}

GetRemainingFreeTrialDaysResult::GetRemainingFreeTrialDaysResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetRemainingFreeTrialDaysResult& GetRemainingFreeTrialDaysResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("accounts"))
  {
    Aws::Utils::Array<JsonView> accountsJsonList = jsonValue.GetArray("accounts");
    for(unsigned accountsIndex = 0; accountsIndex < accountsJsonList.GetLength(); ++accountsIndex)
    {
      m_accounts.push_back(accountsJsonList[accountsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("unprocessedAccounts"))
  {
    Aws::Utils::Array<JsonView> unprocessedAccountsJsonList = jsonValue.GetArray("unprocessedAccounts");
    for(unsigned unprocessedAccountsIndex = 0; unprocessedAccountsIndex < unprocessedAccountsJsonList.GetLength(); ++unprocessedAccountsIndex)
    {
      m_unprocessedAccounts.push_back(unprocessedAccountsJsonList[unprocessedAccountsIndex].AsObject());
    }
  }



  return *this;
}
