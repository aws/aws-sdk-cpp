/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/GetMetricDataResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetMetricDataResult::GetMetricDataResult()
{
}

GetMetricDataResult::GetMetricDataResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetMetricDataResult& GetMetricDataResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
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



  return *this;
}
