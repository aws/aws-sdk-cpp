/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecast/model/ListWhatIfForecastsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ForecastService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListWhatIfForecastsResult::ListWhatIfForecastsResult()
{
}

ListWhatIfForecastsResult::ListWhatIfForecastsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListWhatIfForecastsResult& ListWhatIfForecastsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("WhatIfForecasts"))
  {
    Aws::Utils::Array<JsonView> whatIfForecastsJsonList = jsonValue.GetArray("WhatIfForecasts");
    for(unsigned whatIfForecastsIndex = 0; whatIfForecastsIndex < whatIfForecastsJsonList.GetLength(); ++whatIfForecastsIndex)
    {
      m_whatIfForecasts.push_back(whatIfForecastsJsonList[whatIfForecastsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
