/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ListGroupMembershipsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListGroupMembershipsResult::ListGroupMembershipsResult() : 
    m_status(0)
{
}

ListGroupMembershipsResult::ListGroupMembershipsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(0)
{
  *this = result;
}

ListGroupMembershipsResult& ListGroupMembershipsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("GroupMemberList"))
  {
    Aws::Utils::Array<JsonView> groupMemberListJsonList = jsonValue.GetArray("GroupMemberList");
    for(unsigned groupMemberListIndex = 0; groupMemberListIndex < groupMemberListJsonList.GetLength(); ++groupMemberListIndex)
    {
      m_groupMemberList.push_back(groupMemberListJsonList[groupMemberListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("RequestId"))
  {
    m_requestId = jsonValue.GetString("RequestId");

  }



  m_status = static_cast<int>(result.GetResponseCode());

  return *this;
}
