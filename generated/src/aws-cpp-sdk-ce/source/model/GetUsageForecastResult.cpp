/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/GetUsageForecastResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CostExplorer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetUsageForecastResult::GetUsageForecastResult()
{
}

GetUsageForecastResult::GetUsageForecastResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetUsageForecastResult& GetUsageForecastResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Total"))
  {
    m_total = jsonValue.GetObject("Total");

  }

  if(jsonValue.ValueExists("ForecastResultsByTime"))
  {
    Aws::Utils::Array<JsonView> forecastResultsByTimeJsonList = jsonValue.GetArray("ForecastResultsByTime");
    for(unsigned forecastResultsByTimeIndex = 0; forecastResultsByTimeIndex < forecastResultsByTimeJsonList.GetLength(); ++forecastResultsByTimeIndex)
    {
      m_forecastResultsByTime.push_back(forecastResultsByTimeJsonList[forecastResultsByTimeIndex].AsObject());
    }
  }



  return *this;
}
