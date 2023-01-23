/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisvideo/model/ListSignalingChannelsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::KinesisVideo::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListSignalingChannelsResult::ListSignalingChannelsResult()
{
}

ListSignalingChannelsResult::ListSignalingChannelsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListSignalingChannelsResult& ListSignalingChannelsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ChannelInfoList"))
  {
    Aws::Utils::Array<JsonView> channelInfoListJsonList = jsonValue.GetArray("ChannelInfoList");
    for(unsigned channelInfoListIndex = 0; channelInfoListIndex < channelInfoListJsonList.GetLength(); ++channelInfoListIndex)
    {
      m_channelInfoList.push_back(channelInfoListJsonList[channelInfoListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
