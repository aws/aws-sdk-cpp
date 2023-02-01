/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/ListDeviceProfilesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoTWireless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListDeviceProfilesResult::ListDeviceProfilesResult()
{
}

ListDeviceProfilesResult::ListDeviceProfilesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListDeviceProfilesResult& ListDeviceProfilesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("DeviceProfileList"))
  {
    Aws::Utils::Array<JsonView> deviceProfileListJsonList = jsonValue.GetArray("DeviceProfileList");
    for(unsigned deviceProfileListIndex = 0; deviceProfileListIndex < deviceProfileListJsonList.GetLength(); ++deviceProfileListIndex)
    {
      m_deviceProfileList.push_back(deviceProfileListJsonList[deviceProfileListIndex].AsObject());
    }
  }



  return *this;
}
