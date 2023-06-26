/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/ListDevicesForWirelessDeviceImportTaskResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoTWireless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListDevicesForWirelessDeviceImportTaskResult::ListDevicesForWirelessDeviceImportTaskResult()
{
}

ListDevicesForWirelessDeviceImportTaskResult::ListDevicesForWirelessDeviceImportTaskResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListDevicesForWirelessDeviceImportTaskResult& ListDevicesForWirelessDeviceImportTaskResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("DestinationName"))
  {
    m_destinationName = jsonValue.GetString("DestinationName");

  }

  if(jsonValue.ValueExists("ImportedWirelessDeviceList"))
  {
    Aws::Utils::Array<JsonView> importedWirelessDeviceListJsonList = jsonValue.GetArray("ImportedWirelessDeviceList");
    for(unsigned importedWirelessDeviceListIndex = 0; importedWirelessDeviceListIndex < importedWirelessDeviceListJsonList.GetLength(); ++importedWirelessDeviceListIndex)
    {
      m_importedWirelessDeviceList.push_back(importedWirelessDeviceListJsonList[importedWirelessDeviceListIndex].AsObject());
    }
  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
