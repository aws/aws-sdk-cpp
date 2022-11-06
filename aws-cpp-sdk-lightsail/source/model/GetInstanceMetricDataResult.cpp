/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/GetInstanceMetricDataResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetInstanceMetricDataResult::GetInstanceMetricDataResult() : 
    m_metricName(InstanceMetricName::NOT_SET)
{
}

GetInstanceMetricDataResult::GetInstanceMetricDataResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_metricName(InstanceMetricName::NOT_SET)
{
  *this = result;
}

GetInstanceMetricDataResult& GetInstanceMetricDataResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("metricName"))
  {
    m_metricName = InstanceMetricNameMapper::GetInstanceMetricNameForName(jsonValue.GetString("metricName"));

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
