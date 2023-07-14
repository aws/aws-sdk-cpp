﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/ListInsightsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DevOpsGuru::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListInsightsResult::ListInsightsResult()
{
}

ListInsightsResult::ListInsightsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListInsightsResult& ListInsightsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ProactiveInsights"))
  {
    Array<JsonView> proactiveInsightsJsonList = jsonValue.GetArray("ProactiveInsights");
    for(unsigned proactiveInsightsIndex = 0; proactiveInsightsIndex < proactiveInsightsJsonList.GetLength(); ++proactiveInsightsIndex)
    {
      m_proactiveInsights.push_back(proactiveInsightsJsonList[proactiveInsightsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("ReactiveInsights"))
  {
    Array<JsonView> reactiveInsightsJsonList = jsonValue.GetArray("ReactiveInsights");
    for(unsigned reactiveInsightsIndex = 0; reactiveInsightsIndex < reactiveInsightsJsonList.GetLength(); ++reactiveInsightsIndex)
    {
      m_reactiveInsights.push_back(reactiveInsightsJsonList[reactiveInsightsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
