/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-messaging/model/ListChannelModeratorsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ChimeSDKMessaging::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListChannelModeratorsResult::ListChannelModeratorsResult()
{
}

ListChannelModeratorsResult::ListChannelModeratorsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListChannelModeratorsResult& ListChannelModeratorsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ChannelArn"))
  {
    m_channelArn = jsonValue.GetString("ChannelArn");

  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("ChannelModerators"))
  {
    Aws::Utils::Array<JsonView> channelModeratorsJsonList = jsonValue.GetArray("ChannelModerators");
    for(unsigned channelModeratorsIndex = 0; channelModeratorsIndex < channelModeratorsJsonList.GetLength(); ++channelModeratorsIndex)
    {
      m_channelModerators.push_back(channelModeratorsJsonList[channelModeratorsIndex].AsObject());
    }
  }



  return *this;
}
