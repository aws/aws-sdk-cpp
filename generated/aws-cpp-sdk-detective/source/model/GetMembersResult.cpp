﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/detective/model/GetMembersResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Detective::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetMembersResult::GetMembersResult()
{
}

GetMembersResult::GetMembersResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetMembersResult& GetMembersResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("MemberDetails"))
  {
    Array<JsonView> memberDetailsJsonList = jsonValue.GetArray("MemberDetails");
    for(unsigned memberDetailsIndex = 0; memberDetailsIndex < memberDetailsJsonList.GetLength(); ++memberDetailsIndex)
    {
      m_memberDetails.push_back(memberDetailsJsonList[memberDetailsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("UnprocessedAccounts"))
  {
    Array<JsonView> unprocessedAccountsJsonList = jsonValue.GetArray("UnprocessedAccounts");
    for(unsigned unprocessedAccountsIndex = 0; unprocessedAccountsIndex < unprocessedAccountsJsonList.GetLength(); ++unprocessedAccountsIndex)
    {
      m_unprocessedAccounts.push_back(unprocessedAccountsJsonList[unprocessedAccountsIndex].AsObject());
    }
  }



  return *this;
}
