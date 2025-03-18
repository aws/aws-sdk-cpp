/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-autoscaling/model/GetPredictiveScalingForecastResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ApplicationAutoScaling::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetPredictiveScalingForecastResult::GetPredictiveScalingForecastResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetPredictiveScalingForecastResult& GetPredictiveScalingForecastResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("LoadForecast"))
  {
    Aws::Utils::Array<JsonView> loadForecastJsonList = jsonValue.GetArray("LoadForecast");
    for(unsigned loadForecastIndex = 0; loadForecastIndex < loadForecastJsonList.GetLength(); ++loadForecastIndex)
    {
      m_loadForecast.push_back(loadForecastJsonList[loadForecastIndex].AsObject());
    }
    m_loadForecastHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CapacityForecast"))
  {
    m_capacityForecast = jsonValue.GetObject("CapacityForecast");
    m_capacityForecastHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UpdateTime"))
  {
    m_updateTime = jsonValue.GetDouble("UpdateTime");
    m_updateTimeHasBeenSet = true;
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
