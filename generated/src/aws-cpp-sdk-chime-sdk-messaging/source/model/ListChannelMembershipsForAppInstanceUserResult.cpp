﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-messaging/model/ListChannelMembershipsForAppInstanceUserResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ChimeSDKMessaging::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListChannelMembershipsForAppInstanceUserResult::ListChannelMembershipsForAppInstanceUserResult()
{
}

ListChannelMembershipsForAppInstanceUserResult::ListChannelMembershipsForAppInstanceUserResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListChannelMembershipsForAppInstanceUserResult& ListChannelMembershipsForAppInstanceUserResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ChannelMemberships"))
  {
    Aws::Utils::Array<JsonView> channelMembershipsJsonList = jsonValue.GetArray("ChannelMemberships");
    for(unsigned channelMembershipsIndex = 0; channelMembershipsIndex < channelMembershipsJsonList.GetLength(); ++channelMembershipsIndex)
    {
      m_channelMemberships.push_back(channelMembershipsJsonList[channelMembershipsIndex].AsObject());
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
