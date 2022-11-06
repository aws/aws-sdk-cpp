/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/organizations/model/ListAccountsForParentResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Organizations::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAccountsForParentResult::ListAccountsForParentResult()
{
}

ListAccountsForParentResult::ListAccountsForParentResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListAccountsForParentResult& ListAccountsForParentResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Accounts"))
  {
    Aws::Utils::Array<JsonView> accountsJsonList = jsonValue.GetArray("Accounts");
    for(unsigned accountsIndex = 0; accountsIndex < accountsJsonList.GetLength(); ++accountsIndex)
    {
      m_accounts.push_back(accountsJsonList[accountsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
