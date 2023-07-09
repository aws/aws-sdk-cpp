/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appfabric/model/StartUserAccessTasksResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::AppFabric::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

StartUserAccessTasksResult::StartUserAccessTasksResult()
{
}

StartUserAccessTasksResult::StartUserAccessTasksResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

StartUserAccessTasksResult& StartUserAccessTasksResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("userAccessTasksList"))
  {
    Aws::Utils::Array<JsonView> userAccessTasksListJsonList = jsonValue.GetArray("userAccessTasksList");
    for(unsigned userAccessTasksListIndex = 0; userAccessTasksListIndex < userAccessTasksListJsonList.GetLength(); ++userAccessTasksListIndex)
    {
      m_userAccessTasksList.push_back(userAccessTasksListJsonList[userAccessTasksListIndex].AsObject());
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
