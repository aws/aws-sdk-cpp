/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/ListMembersResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CleanRooms::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListMembersResult::ListMembersResult()
{
}

ListMembersResult::ListMembersResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListMembersResult& ListMembersResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("memberSummaries"))
  {
    Aws::Utils::Array<JsonView> memberSummariesJsonList = jsonValue.GetArray("memberSummaries");
    for(unsigned memberSummariesIndex = 0; memberSummariesIndex < memberSummariesJsonList.GetLength(); ++memberSummariesIndex)
    {
      m_memberSummaries.push_back(memberSummariesJsonList[memberSummariesIndex].AsObject());
    }
  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
