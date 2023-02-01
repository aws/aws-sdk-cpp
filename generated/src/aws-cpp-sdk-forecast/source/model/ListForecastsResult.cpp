/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecast/model/ListForecastsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ForecastService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListForecastsResult::ListForecastsResult()
{
}

ListForecastsResult::ListForecastsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListForecastsResult& ListForecastsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Forecasts"))
  {
    Aws::Utils::Array<JsonView> forecastsJsonList = jsonValue.GetArray("Forecasts");
    for(unsigned forecastsIndex = 0; forecastsIndex < forecastsJsonList.GetLength(); ++forecastsIndex)
    {
      m_forecasts.push_back(forecastsJsonList[forecastsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
