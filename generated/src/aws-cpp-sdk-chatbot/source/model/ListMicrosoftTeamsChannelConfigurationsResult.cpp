/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chatbot/model/ListMicrosoftTeamsChannelConfigurationsResult.h>
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

ListMicrosoftTeamsChannelConfigurationsResult::ListMicrosoftTeamsChannelConfigurationsResult()
{
}

ListMicrosoftTeamsChannelConfigurationsResult::ListMicrosoftTeamsChannelConfigurationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListMicrosoftTeamsChannelConfigurationsResult& ListMicrosoftTeamsChannelConfigurationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("TeamChannelConfigurations"))
  {
    Aws::Utils::Array<JsonView> teamChannelConfigurationsJsonList = jsonValue.GetArray("TeamChannelConfigurations");
    for(unsigned teamChannelConfigurationsIndex = 0; teamChannelConfigurationsIndex < teamChannelConfigurationsJsonList.GetLength(); ++teamChannelConfigurationsIndex)
    {
      m_teamChannelConfigurations.push_back(teamChannelConfigurationsJsonList[teamChannelConfigurationsIndex].AsObject());
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
