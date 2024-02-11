/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace/model/ListKxScalingGroupsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::finspace::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListKxScalingGroupsResult::ListKxScalingGroupsResult()
{
}

ListKxScalingGroupsResult::ListKxScalingGroupsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListKxScalingGroupsResult& ListKxScalingGroupsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("scalingGroups"))
  {
    Aws::Utils::Array<JsonView> scalingGroupsJsonList = jsonValue.GetArray("scalingGroups");
    for(unsigned scalingGroupsIndex = 0; scalingGroupsIndex < scalingGroupsJsonList.GetLength(); ++scalingGroupsIndex)
    {
      m_scalingGroups.push_back(scalingGroupsJsonList[scalingGroupsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
