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

#include <aws/lightsail/model/GetInstanceMetricDataResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
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

GetInstanceMetricDataResult::GetInstanceMetricDataResult(const AmazonWebServiceResult<JsonValue>& result) : 
    m_metricName(InstanceMetricName::NOT_SET)
{
  *this = result;
}

GetInstanceMetricDataResult& GetInstanceMetricDataResult::operator =(const AmazonWebServiceResult<JsonValue>& result)
{
  const JsonValue& jsonValue = result.GetPayload();
  if(jsonValue.ValueExists("metricName"))
  {
    m_metricName = InstanceMetricNameMapper::GetInstanceMetricNameForName(jsonValue.GetString("metricName"));

  }

  if(jsonValue.ValueExists("metricData"))
  {
    Array<JsonValue> metricDataJsonList = jsonValue.GetArray("metricData");
    for(unsigned metricDataIndex = 0; metricDataIndex < metricDataJsonList.GetLength(); ++metricDataIndex)
    {
      m_metricData.push_back(metricDataJsonList[metricDataIndex].AsObject());
    }
  }



  return *this;
}
