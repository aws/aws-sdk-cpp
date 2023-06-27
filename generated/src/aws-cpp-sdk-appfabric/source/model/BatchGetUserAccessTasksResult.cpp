/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appfabric/model/BatchGetUserAccessTasksResult.h>
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

BatchGetUserAccessTasksResult::BatchGetUserAccessTasksResult()
{
}

BatchGetUserAccessTasksResult::BatchGetUserAccessTasksResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchGetUserAccessTasksResult& BatchGetUserAccessTasksResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("userAccessResultsList"))
  {
    Aws::Utils::Array<JsonView> userAccessResultsListJsonList = jsonValue.GetArray("userAccessResultsList");
    for(unsigned userAccessResultsListIndex = 0; userAccessResultsListIndex < userAccessResultsListJsonList.GetLength(); ++userAccessResultsListIndex)
    {
      m_userAccessResultsList.push_back(userAccessResultsListJsonList[userAccessResultsListIndex].AsObject());
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
