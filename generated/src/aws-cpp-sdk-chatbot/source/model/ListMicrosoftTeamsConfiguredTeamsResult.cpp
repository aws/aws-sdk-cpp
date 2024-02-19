/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chatbot/model/ListMicrosoftTeamsConfiguredTeamsResult.h>
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

ListMicrosoftTeamsConfiguredTeamsResult::ListMicrosoftTeamsConfiguredTeamsResult()
{
}

ListMicrosoftTeamsConfiguredTeamsResult::ListMicrosoftTeamsConfiguredTeamsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListMicrosoftTeamsConfiguredTeamsResult& ListMicrosoftTeamsConfiguredTeamsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ConfiguredTeams"))
  {
    Aws::Utils::Array<JsonView> configuredTeamsJsonList = jsonValue.GetArray("ConfiguredTeams");
    for(unsigned configuredTeamsIndex = 0; configuredTeamsIndex < configuredTeamsJsonList.GetLength(); ++configuredTeamsIndex)
    {
      m_configuredTeams.push_back(configuredTeamsJsonList[configuredTeamsIndex].AsObject());
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
