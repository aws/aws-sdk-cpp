/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot1click-devices/model/InvokeDeviceMethodResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoT1ClickDevicesService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

InvokeDeviceMethodResult::InvokeDeviceMethodResult()
{
}

InvokeDeviceMethodResult::InvokeDeviceMethodResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

InvokeDeviceMethodResult& InvokeDeviceMethodResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("deviceMethodResponse"))
  {
    m_deviceMethodResponse = jsonValue.GetString("deviceMethodResponse");

  }



  return *this;
}
