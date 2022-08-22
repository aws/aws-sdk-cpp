/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecastquery/model/QueryWhatIfForecastResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ForecastQueryService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

QueryWhatIfForecastResult::QueryWhatIfForecastResult()
{
}

QueryWhatIfForecastResult::QueryWhatIfForecastResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

QueryWhatIfForecastResult& QueryWhatIfForecastResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Forecast"))
  {
    m_forecast = jsonValue.GetObject("Forecast");

  }



  return *this;
}
