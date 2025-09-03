/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/ListCollaborationChangeRequestsResult.h>
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

ListCollaborationChangeRequestsResult::ListCollaborationChangeRequestsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListCollaborationChangeRequestsResult& ListCollaborationChangeRequestsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("collaborationChangeRequestSummaries"))
  {
    Aws::Utils::Array<JsonView> collaborationChangeRequestSummariesJsonList = jsonValue.GetArray("collaborationChangeRequestSummaries");
    for(unsigned collaborationChangeRequestSummariesIndex = 0; collaborationChangeRequestSummariesIndex < collaborationChangeRequestSummariesJsonList.GetLength(); ++collaborationChangeRequestSummariesIndex)
    {
      m_collaborationChangeRequestSummaries.push_back(collaborationChangeRequestSummariesJsonList[collaborationChangeRequestSummariesIndex].AsObject());
    }
    m_collaborationChangeRequestSummariesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");
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
