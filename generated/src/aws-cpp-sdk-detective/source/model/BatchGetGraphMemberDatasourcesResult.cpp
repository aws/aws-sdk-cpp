/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/detective/model/BatchGetGraphMemberDatasourcesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Detective::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchGetGraphMemberDatasourcesResult::BatchGetGraphMemberDatasourcesResult()
{
}

BatchGetGraphMemberDatasourcesResult::BatchGetGraphMemberDatasourcesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchGetGraphMemberDatasourcesResult& BatchGetGraphMemberDatasourcesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("MemberDatasources"))
  {
    Aws::Utils::Array<JsonView> memberDatasourcesJsonList = jsonValue.GetArray("MemberDatasources");
    for(unsigned memberDatasourcesIndex = 0; memberDatasourcesIndex < memberDatasourcesJsonList.GetLength(); ++memberDatasourcesIndex)
    {
      m_memberDatasources.push_back(memberDatasourcesJsonList[memberDatasourcesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("UnprocessedAccounts"))
  {
    Aws::Utils::Array<JsonView> unprocessedAccountsJsonList = jsonValue.GetArray("UnprocessedAccounts");
    for(unsigned unprocessedAccountsIndex = 0; unprocessedAccountsIndex < unprocessedAccountsJsonList.GetLength(); ++unprocessedAccountsIndex)
    {
      m_unprocessedAccounts.push_back(unprocessedAccountsJsonList[unprocessedAccountsIndex].AsObject());
    }
  }



  return *this;
}
