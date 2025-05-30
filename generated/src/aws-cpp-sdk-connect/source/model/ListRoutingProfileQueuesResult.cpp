﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ListRoutingProfileQueuesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListRoutingProfileQueuesResult::ListRoutingProfileQueuesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListRoutingProfileQueuesResult& ListRoutingProfileQueuesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");
    m_nextTokenHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RoutingProfileQueueConfigSummaryList"))
  {
    Aws::Utils::Array<JsonView> routingProfileQueueConfigSummaryListJsonList = jsonValue.GetArray("RoutingProfileQueueConfigSummaryList");
    for(unsigned routingProfileQueueConfigSummaryListIndex = 0; routingProfileQueueConfigSummaryListIndex < routingProfileQueueConfigSummaryListJsonList.GetLength(); ++routingProfileQueueConfigSummaryListIndex)
    {
      m_routingProfileQueueConfigSummaryList.push_back(routingProfileQueueConfigSummaryListJsonList[routingProfileQueueConfigSummaryListIndex].AsObject());
    }
    m_routingProfileQueueConfigSummaryListHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");
    m_lastModifiedTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastModifiedRegion"))
  {
    m_lastModifiedRegion = jsonValue.GetString("LastModifiedRegion");
    m_lastModifiedRegionHasBeenSet = true;
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
