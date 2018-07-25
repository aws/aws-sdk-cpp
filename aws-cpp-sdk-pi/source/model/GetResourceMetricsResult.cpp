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
    Array<JsonView> metricListJsonList = jsonValue.GetArray("MetricList");
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
