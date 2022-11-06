/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie/model/ListMemberAccountsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Macie::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListMemberAccountsResult::ListMemberAccountsResult()
{
}

ListMemberAccountsResult::ListMemberAccountsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListMemberAccountsResult& ListMemberAccountsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("memberAccounts"))
  {
    Aws::Utils::Array<JsonView> memberAccountsJsonList = jsonValue.GetArray("memberAccounts");
    for(unsigned memberAccountsIndex = 0; memberAccountsIndex < memberAccountsJsonList.GetLength(); ++memberAccountsIndex)
    {
      m_memberAccounts.push_back(memberAccountsJsonList[memberAccountsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
