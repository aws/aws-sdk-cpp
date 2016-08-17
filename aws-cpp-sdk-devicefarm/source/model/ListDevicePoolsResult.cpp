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
#include <aws/devicefarm/model/ListDevicePoolsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DeviceFarm::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListDevicePoolsResult::ListDevicePoolsResult()
{
}

ListDevicePoolsResult::ListDevicePoolsResult(const AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListDevicePoolsResult& ListDevicePoolsResult::operator =(const AmazonWebServiceResult<JsonValue>& result)
{
  const JsonValue& jsonValue = result.GetPayload();
  if(jsonValue.ValueExists("devicePools"))
  {
    Array<JsonValue> devicePoolsJsonList = jsonValue.GetArray("devicePools");
    for(unsigned devicePoolsIndex = 0; devicePoolsIndex < devicePoolsJsonList.GetLength(); ++devicePoolsIndex)
    {
      m_devicePools.push_back(devicePoolsJsonList[devicePoolsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
