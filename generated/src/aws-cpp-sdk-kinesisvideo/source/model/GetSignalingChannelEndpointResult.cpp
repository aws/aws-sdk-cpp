﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisvideo/model/GetSignalingChannelEndpointResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::KinesisVideo::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetSignalingChannelEndpointResult::GetSignalingChannelEndpointResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetSignalingChannelEndpointResult& GetSignalingChannelEndpointResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ResourceEndpointList"))
  {
    Aws::Utils::Array<JsonView> resourceEndpointListJsonList = jsonValue.GetArray("ResourceEndpointList");
    for(unsigned resourceEndpointListIndex = 0; resourceEndpointListIndex < resourceEndpointListJsonList.GetLength(); ++resourceEndpointListIndex)
    {
      m_resourceEndpointList.push_back(resourceEndpointListJsonList[resourceEndpointListIndex].AsObject());
    }
    m_resourceEndpointListHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
