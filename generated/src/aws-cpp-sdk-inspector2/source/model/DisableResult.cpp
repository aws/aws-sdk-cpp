/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/DisableResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Inspector2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DisableResult::DisableResult()
{
}

DisableResult::DisableResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DisableResult& DisableResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
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

  if(jsonValue.ValueExists("failedAccounts"))
  {
    Aws::Utils::Array<JsonView> failedAccountsJsonList = jsonValue.GetArray("failedAccounts");
    for(unsigned failedAccountsIndex = 0; failedAccountsIndex < failedAccountsJsonList.GetLength(); ++failedAccountsIndex)
    {
      m_failedAccounts.push_back(failedAccountsJsonList[failedAccountsIndex].AsObject());
    }
  }



  return *this;
}
