﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/ListTrackerConsumersResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::LocationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListTrackerConsumersResult::ListTrackerConsumersResult()
{
}

ListTrackerConsumersResult::ListTrackerConsumersResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListTrackerConsumersResult& ListTrackerConsumersResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ConsumerArns"))
  {
    Array<JsonView> consumerArnsJsonList = jsonValue.GetArray("ConsumerArns");
    for(unsigned consumerArnsIndex = 0; consumerArnsIndex < consumerArnsJsonList.GetLength(); ++consumerArnsIndex)
    {
      m_consumerArns.push_back(consumerArnsJsonList[consumerArnsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
