/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/DescribeMetricFiltersResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CloudWatchLogs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeMetricFiltersResult::DescribeMetricFiltersResult()
{
}

DescribeMetricFiltersResult::DescribeMetricFiltersResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeMetricFiltersResult& DescribeMetricFiltersResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("metricFilters"))
  {
    Aws::Utils::Array<JsonView> metricFiltersJsonList = jsonValue.GetArray("metricFilters");
    for(unsigned metricFiltersIndex = 0; metricFiltersIndex < metricFiltersJsonList.GetLength(); ++metricFiltersIndex)
    {
      m_metricFilters.push_back(metricFiltersJsonList[metricFiltersIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
