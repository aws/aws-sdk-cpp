﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/identitystore/model/ListGroupMembershipsForMemberResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IdentityStore::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListGroupMembershipsForMemberResult::ListGroupMembershipsForMemberResult()
{
}

ListGroupMembershipsForMemberResult::ListGroupMembershipsForMemberResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListGroupMembershipsForMemberResult& ListGroupMembershipsForMemberResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("GroupMemberships"))
  {
    Aws::Utils::Array<JsonView> groupMembershipsJsonList = jsonValue.GetArray("GroupMemberships");
    for(unsigned groupMembershipsIndex = 0; groupMembershipsIndex < groupMembershipsJsonList.GetLength(); ++groupMembershipsIndex)
    {
      m_groupMemberships.push_back(groupMembershipsJsonList[groupMembershipsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
