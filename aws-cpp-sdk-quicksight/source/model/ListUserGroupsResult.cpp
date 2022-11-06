/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ListUserGroupsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListUserGroupsResult::ListUserGroupsResult() : 
    m_status(0)
{
}

ListUserGroupsResult::ListUserGroupsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(0)
{
  *this = result;
}

ListUserGroupsResult& ListUserGroupsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("GroupList"))
  {
    Aws::Utils::Array<JsonView> groupListJsonList = jsonValue.GetArray("GroupList");
    for(unsigned groupListIndex = 0; groupListIndex < groupListJsonList.GetLength(); ++groupListIndex)
    {
      m_groupList.push_back(groupListJsonList[groupListIndex].AsObject());
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
