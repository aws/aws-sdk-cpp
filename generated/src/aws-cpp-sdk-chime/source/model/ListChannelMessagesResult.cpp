/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/ListChannelMessagesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Chime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListChannelMessagesResult::ListChannelMessagesResult()
{
}

ListChannelMessagesResult::ListChannelMessagesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListChannelMessagesResult& ListChannelMessagesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
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

  if(jsonValue.ValueExists("ChannelMessages"))
  {
    Aws::Utils::Array<JsonView> channelMessagesJsonList = jsonValue.GetArray("ChannelMessages");
    for(unsigned channelMessagesIndex = 0; channelMessagesIndex < channelMessagesJsonList.GetLength(); ++channelMessagesIndex)
    {
      m_channelMessages.push_back(channelMessagesJsonList[channelMessagesIndex].AsObject());
    }
  }



  return *this;
}
