﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/GetCostForecastResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CostExplorer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetCostForecastResult::GetCostForecastResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetCostForecastResult& GetCostForecastResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Total"))
  {
    m_total = jsonValue.GetObject("Total");
    m_totalHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ForecastResultsByTime"))
  {
    Aws::Utils::Array<JsonView> forecastResultsByTimeJsonList = jsonValue.GetArray("ForecastResultsByTime");
    for(unsigned forecastResultsByTimeIndex = 0; forecastResultsByTimeIndex < forecastResultsByTimeJsonList.GetLength(); ++forecastResultsByTimeIndex)
    {
      m_forecastResultsByTime.push_back(forecastResultsByTimeJsonList[forecastResultsByTimeIndex].AsObject());
    }
    m_forecastResultsByTimeHasBeenSet = true;
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
