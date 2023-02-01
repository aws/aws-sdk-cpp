/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/GetLoadBalancerMetricDataResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetLoadBalancerMetricDataResult::GetLoadBalancerMetricDataResult() : 
    m_metricName(LoadBalancerMetricName::NOT_SET)
{
}

GetLoadBalancerMetricDataResult::GetLoadBalancerMetricDataResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_metricName(LoadBalancerMetricName::NOT_SET)
{
  *this = result;
}

GetLoadBalancerMetricDataResult& GetLoadBalancerMetricDataResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("metricName"))
  {
    m_metricName = LoadBalancerMetricNameMapper::GetLoadBalancerMetricNameForName(jsonValue.GetString("metricName"));

  }

  if(jsonValue.ValueExists("metricData"))
  {
    Aws::Utils::Array<JsonView> metricDataJsonList = jsonValue.GetArray("metricData");
    for(unsigned metricDataIndex = 0; metricDataIndex < metricDataJsonList.GetLength(); ++metricDataIndex)
    {
      m_metricData.push_back(metricDataJsonList[metricDataIndex].AsObject());
    }
  }



  return *this;
}
