﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ListUserHierarchyGroupsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListUserHierarchyGroupsResult::ListUserHierarchyGroupsResult()
{
}

ListUserHierarchyGroupsResult::ListUserHierarchyGroupsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListUserHierarchyGroupsResult& ListUserHierarchyGroupsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("UserHierarchyGroupSummaryList"))
  {
    Array<JsonView> userHierarchyGroupSummaryListJsonList = jsonValue.GetArray("UserHierarchyGroupSummaryList");
    for(unsigned userHierarchyGroupSummaryListIndex = 0; userHierarchyGroupSummaryListIndex < userHierarchyGroupSummaryListJsonList.GetLength(); ++userHierarchyGroupSummaryListIndex)
    {
      m_userHierarchyGroupSummaryList.push_back(userHierarchyGroupSummaryListJsonList[userHierarchyGroupSummaryListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
