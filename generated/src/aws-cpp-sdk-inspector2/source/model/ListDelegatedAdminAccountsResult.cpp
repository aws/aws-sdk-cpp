/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/ListDelegatedAdminAccountsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Inspector2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListDelegatedAdminAccountsResult::ListDelegatedAdminAccountsResult()
{
}

ListDelegatedAdminAccountsResult::ListDelegatedAdminAccountsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListDelegatedAdminAccountsResult& ListDelegatedAdminAccountsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("delegatedAdminAccounts"))
  {
    Aws::Utils::Array<JsonView> delegatedAdminAccountsJsonList = jsonValue.GetArray("delegatedAdminAccounts");
    for(unsigned delegatedAdminAccountsIndex = 0; delegatedAdminAccountsIndex < delegatedAdminAccountsJsonList.GetLength(); ++delegatedAdminAccountsIndex)
    {
      m_delegatedAdminAccounts.push_back(delegatedAdminAccountsJsonList[delegatedAdminAccountsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
