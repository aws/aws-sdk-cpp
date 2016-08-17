/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/gamelift/model/DescribeEC2InstanceLimitsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::GameLift::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeEC2InstanceLimitsResult::DescribeEC2InstanceLimitsResult()
{
}

DescribeEC2InstanceLimitsResult::DescribeEC2InstanceLimitsResult(const AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeEC2InstanceLimitsResult& DescribeEC2InstanceLimitsResult::operator =(const AmazonWebServiceResult<JsonValue>& result)
{
  const JsonValue& jsonValue = result.GetPayload();
  if(jsonValue.ValueExists("EC2InstanceLimits"))
  {
    Array<JsonValue> eC2InstanceLimitsJsonList = jsonValue.GetArray("EC2InstanceLimits");
    for(unsigned eC2InstanceLimitsIndex = 0; eC2InstanceLimitsIndex < eC2InstanceLimitsJsonList.GetLength(); ++eC2InstanceLimitsIndex)
    {
      m_eC2InstanceLimits.push_back(eC2InstanceLimitsJsonList[eC2InstanceLimitsIndex].AsObject());
    }
  }



  return *this;
}
