/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/ListTimeSeriesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListTimeSeriesResult::ListTimeSeriesResult()
{
}

ListTimeSeriesResult::ListTimeSeriesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListTimeSeriesResult& ListTimeSeriesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("TimeSeriesSummaries"))
  {
    Aws::Utils::Array<JsonView> timeSeriesSummariesJsonList = jsonValue.GetArray("TimeSeriesSummaries");
    for(unsigned timeSeriesSummariesIndex = 0; timeSeriesSummariesIndex < timeSeriesSummariesJsonList.GetLength(); ++timeSeriesSummariesIndex)
    {
      m_timeSeriesSummaries.push_back(timeSeriesSummariesJsonList[timeSeriesSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
