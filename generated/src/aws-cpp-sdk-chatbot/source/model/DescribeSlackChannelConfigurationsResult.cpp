/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chatbot/model/DescribeSlackChannelConfigurationsResult.h>
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

DescribeSlackChannelConfigurationsResult::DescribeSlackChannelConfigurationsResult()
{
}

DescribeSlackChannelConfigurationsResult::DescribeSlackChannelConfigurationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeSlackChannelConfigurationsResult& DescribeSlackChannelConfigurationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("SlackChannelConfigurations"))
  {
    Aws::Utils::Array<JsonView> slackChannelConfigurationsJsonList = jsonValue.GetArray("SlackChannelConfigurations");
    for(unsigned slackChannelConfigurationsIndex = 0; slackChannelConfigurationsIndex < slackChannelConfigurationsJsonList.GetLength(); ++slackChannelConfigurationsIndex)
    {
      m_slackChannelConfigurations.push_back(slackChannelConfigurationsJsonList[slackChannelConfigurationsIndex].AsObject());
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
