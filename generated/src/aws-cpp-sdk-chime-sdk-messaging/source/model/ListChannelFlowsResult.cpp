/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-messaging/model/ListChannelFlowsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ChimeSDKMessaging::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListChannelFlowsResult::ListChannelFlowsResult()
{
}

ListChannelFlowsResult::ListChannelFlowsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListChannelFlowsResult& ListChannelFlowsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ChannelFlows"))
  {
    Aws::Utils::Array<JsonView> channelFlowsJsonList = jsonValue.GetArray("ChannelFlows");
    for(unsigned channelFlowsIndex = 0; channelFlowsIndex < channelFlowsJsonList.GetLength(); ++channelFlowsIndex)
    {
      m_channelFlows.push_back(channelFlowsJsonList[channelFlowsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
