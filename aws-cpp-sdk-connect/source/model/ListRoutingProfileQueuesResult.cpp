/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ListRoutingProfileQueuesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListRoutingProfileQueuesResult::ListRoutingProfileQueuesResult()
{
}

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

  }

  if(jsonValue.ValueExists("RoutingProfileQueueConfigSummaryList"))
  {
    Aws::Utils::Array<JsonView> routingProfileQueueConfigSummaryListJsonList = jsonValue.GetArray("RoutingProfileQueueConfigSummaryList");
    for(unsigned routingProfileQueueConfigSummaryListIndex = 0; routingProfileQueueConfigSummaryListIndex < routingProfileQueueConfigSummaryListJsonList.GetLength(); ++routingProfileQueueConfigSummaryListIndex)
    {
      m_routingProfileQueueConfigSummaryList.push_back(routingProfileQueueConfigSummaryListJsonList[routingProfileQueueConfigSummaryListIndex].AsObject());
    }
  }



  return *this;
}
