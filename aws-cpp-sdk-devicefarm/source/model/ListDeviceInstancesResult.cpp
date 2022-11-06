/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devicefarm/model/ListDeviceInstancesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DeviceFarm::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListDeviceInstancesResult::ListDeviceInstancesResult()
{
}

ListDeviceInstancesResult::ListDeviceInstancesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListDeviceInstancesResult& ListDeviceInstancesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("deviceInstances"))
  {
    Aws::Utils::Array<JsonView> deviceInstancesJsonList = jsonValue.GetArray("deviceInstances");
    for(unsigned deviceInstancesIndex = 0; deviceInstancesIndex < deviceInstancesJsonList.GetLength(); ++deviceInstancesIndex)
    {
      m_deviceInstances.push_back(deviceInstancesJsonList[deviceInstancesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
