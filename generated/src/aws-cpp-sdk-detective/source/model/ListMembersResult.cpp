/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/detective/model/ListMembersResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Detective::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListMembersResult::ListMembersResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListMembersResult& ListMembersResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("MemberDetails"))
  {
    Aws::Utils::Array<JsonView> memberDetailsJsonList = jsonValue.GetArray("MemberDetails");
    for(unsigned memberDetailsIndex = 0; memberDetailsIndex < memberDetailsJsonList.GetLength(); ++memberDetailsIndex)
    {
      m_memberDetails.push_back(memberDetailsJsonList[memberDetailsIndex].AsObject());
    }
    m_memberDetailsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");
    m_nextTokenHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
