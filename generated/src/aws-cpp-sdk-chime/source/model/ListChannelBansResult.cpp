/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/ListChannelBansResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Chime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListChannelBansResult::ListChannelBansResult()
{
}

ListChannelBansResult::ListChannelBansResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListChannelBansResult& ListChannelBansResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
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

  if(jsonValue.ValueExists("ChannelBans"))
  {
    Aws::Utils::Array<JsonView> channelBansJsonList = jsonValue.GetArray("ChannelBans");
    for(unsigned channelBansIndex = 0; channelBansIndex < channelBansJsonList.GetLength(); ++channelBansIndex)
    {
      m_channelBans.push_back(channelBansJsonList[channelBansIndex].AsObject());
    }
  }



  return *this;
}
