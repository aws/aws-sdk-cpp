/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devicefarm/model/ListDevicePoolsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DeviceFarm::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListDevicePoolsResult::ListDevicePoolsResult()
{
}

ListDevicePoolsResult::ListDevicePoolsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListDevicePoolsResult& ListDevicePoolsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("devicePools"))
  {
    Aws::Utils::Array<JsonView> devicePoolsJsonList = jsonValue.GetArray("devicePools");
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
