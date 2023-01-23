/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-messaging/model/ListSubChannelsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ChimeSDKMessaging::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListSubChannelsResult::ListSubChannelsResult()
{
}

ListSubChannelsResult::ListSubChannelsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListSubChannelsResult& ListSubChannelsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ChannelArn"))
  {
    m_channelArn = jsonValue.GetString("ChannelArn");

  }

  if(jsonValue.ValueExists("SubChannels"))
  {
    Aws::Utils::Array<JsonView> subChannelsJsonList = jsonValue.GetArray("SubChannels");
    for(unsigned subChannelsIndex = 0; subChannelsIndex < subChannelsJsonList.GetLength(); ++subChannelsIndex)
    {
      m_subChannels.push_back(subChannelsJsonList[subChannelsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
