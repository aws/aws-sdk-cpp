/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chatbot/model/ListMicrosoftTeamsUserIdentitiesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::chatbot::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListMicrosoftTeamsUserIdentitiesResult::ListMicrosoftTeamsUserIdentitiesResult()
{
}

ListMicrosoftTeamsUserIdentitiesResult::ListMicrosoftTeamsUserIdentitiesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListMicrosoftTeamsUserIdentitiesResult& ListMicrosoftTeamsUserIdentitiesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("TeamsUserIdentities"))
  {
    Aws::Utils::Array<JsonView> teamsUserIdentitiesJsonList = jsonValue.GetArray("TeamsUserIdentities");
    for(unsigned teamsUserIdentitiesIndex = 0; teamsUserIdentitiesIndex < teamsUserIdentitiesJsonList.GetLength(); ++teamsUserIdentitiesIndex)
    {
      m_teamsUserIdentities.push_back(teamsUserIdentitiesJsonList[teamsUserIdentitiesIndex].AsObject());
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
