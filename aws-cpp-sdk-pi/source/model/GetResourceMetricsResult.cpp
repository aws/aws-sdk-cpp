/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pi/model/GetResourceMetricsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::PI::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetResourceMetricsResult::GetResourceMetricsResult()
{
}

GetResourceMetricsResult::GetResourceMetricsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetResourceMetricsResult& GetResourceMetricsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AlignedStartTime"))
  {
    m_alignedStartTime = jsonValue.GetDouble("AlignedStartTime");

  }

  if(jsonValue.ValueExists("AlignedEndTime"))
  {
    m_alignedEndTime = jsonValue.GetDouble("AlignedEndTime");

  }

  if(jsonValue.ValueExists("Identifier"))
  {
    m_identifier = jsonValue.GetString("Identifier");

  }

  if(jsonValue.ValueExists("MetricList"))
  {
    Aws::Utils::Array<JsonView> metricListJsonList = jsonValue.GetArray("MetricList");
    for(unsigned metricListIndex = 0; metricListIndex < metricListJsonList.GetLength(); ++metricListIndex)
    {
      m_metricList.push_back(metricListJsonList[metricListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
