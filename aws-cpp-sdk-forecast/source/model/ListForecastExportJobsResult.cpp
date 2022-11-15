/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecast/model/ListForecastExportJobsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ForecastService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListForecastExportJobsResult::ListForecastExportJobsResult()
{
}

ListForecastExportJobsResult::ListForecastExportJobsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListForecastExportJobsResult& ListForecastExportJobsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ForecastExportJobs"))
  {
    Aws::Utils::Array<JsonView> forecastExportJobsJsonList = jsonValue.GetArray("ForecastExportJobs");
    for(unsigned forecastExportJobsIndex = 0; forecastExportJobsIndex < forecastExportJobsJsonList.GetLength(); ++forecastExportJobsIndex)
    {
      m_forecastExportJobs.push_back(forecastExportJobsJsonList[forecastExportJobsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
