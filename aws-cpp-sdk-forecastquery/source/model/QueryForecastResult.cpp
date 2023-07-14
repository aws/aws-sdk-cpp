/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecastquery/model/QueryForecastResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ForecastQueryService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

QueryForecastResult::QueryForecastResult()
{
}

QueryForecastResult::QueryForecastResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

QueryForecastResult& QueryForecastResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Forecast"))
  {
    m_forecast = jsonValue.GetObject("Forecast");

  }



  return *this;
}
