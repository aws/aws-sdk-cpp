/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/GetCurrentMetricDataResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetCurrentMetricDataResult::GetCurrentMetricDataResult() : 
    m_approximateTotalCount(0)
{
}

GetCurrentMetricDataResult::GetCurrentMetricDataResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_approximateTotalCount(0)
{
  *this = result;
}

GetCurrentMetricDataResult& GetCurrentMetricDataResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("MetricResults"))
  {
    Aws::Utils::Array<JsonView> metricResultsJsonList = jsonValue.GetArray("MetricResults");
    for(unsigned metricResultsIndex = 0; metricResultsIndex < metricResultsJsonList.GetLength(); ++metricResultsIndex)
    {
      m_metricResults.push_back(metricResultsJsonList[metricResultsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("DataSnapshotTime"))
  {
    m_dataSnapshotTime = jsonValue.GetDouble("DataSnapshotTime");

  }

  if(jsonValue.ValueExists("ApproximateTotalCount"))
  {
    m_approximateTotalCount = jsonValue.GetInt64("ApproximateTotalCount");

  }



  return *this;
}
