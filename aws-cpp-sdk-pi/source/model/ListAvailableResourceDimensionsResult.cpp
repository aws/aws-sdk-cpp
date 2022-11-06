/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pi/model/ListAvailableResourceDimensionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::PI::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAvailableResourceDimensionsResult::ListAvailableResourceDimensionsResult()
{
}

ListAvailableResourceDimensionsResult::ListAvailableResourceDimensionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListAvailableResourceDimensionsResult& ListAvailableResourceDimensionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("MetricDimensions"))
  {
    Aws::Utils::Array<JsonView> metricDimensionsJsonList = jsonValue.GetArray("MetricDimensions");
    for(unsigned metricDimensionsIndex = 0; metricDimensionsIndex < metricDimensionsJsonList.GetLength(); ++metricDimensionsIndex)
    {
      m_metricDimensions.push_back(metricDimensionsJsonList[metricDimensionsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
