/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/ListMemberAccountsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::FMS::Model;
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
  if(jsonValue.ValueExists("MemberAccounts"))
  {
    Aws::Utils::Array<JsonView> memberAccountsJsonList = jsonValue.GetArray("MemberAccounts");
    for(unsigned memberAccountsIndex = 0; memberAccountsIndex < memberAccountsJsonList.GetLength(); ++memberAccountsIndex)
    {
      m_memberAccounts.push_back(memberAccountsJsonList[memberAccountsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
