/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
    Array<JsonView> forecastResultsByTimeJsonList = jsonValue.GetArray("ForecastResultsByTime");
    for(unsigned forecastResultsByTimeIndex = 0; forecastResultsByTimeIndex < forecastResultsByTimeJsonList.GetLength(); ++forecastResultsByTimeIndex)
    {
      m_forecastResultsByTime.push_back(forecastResultsByTimeJsonList[forecastResultsByTimeIndex].AsObject());
    }
  }



  return *this;
}
