/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/ListMembershipsResult.h>
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

ListMembershipsResult::ListMembershipsResult()
{
}

ListMembershipsResult::ListMembershipsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListMembershipsResult& ListMembershipsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("membershipSummaries"))
  {
    Aws::Utils::Array<JsonView> membershipSummariesJsonList = jsonValue.GetArray("membershipSummaries");
    for(unsigned membershipSummariesIndex = 0; membershipSummariesIndex < membershipSummariesJsonList.GetLength(); ++membershipSummariesIndex)
    {
      m_membershipSummaries.push_back(membershipSummariesJsonList[membershipSummariesIndex].AsObject());
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
