/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotanalytics/model/ListChannelsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoTAnalytics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListChannelsResult::ListChannelsResult()
{
}

ListChannelsResult::ListChannelsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListChannelsResult& ListChannelsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("channelSummaries"))
  {
    Aws::Utils::Array<JsonView> channelSummariesJsonList = jsonValue.GetArray("channelSummaries");
    for(unsigned channelSummariesIndex = 0; channelSummariesIndex < channelSummariesJsonList.GetLength(); ++channelSummariesIndex)
    {
      m_channelSummaries.push_back(channelSummariesJsonList[channelSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
