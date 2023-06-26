/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/ListWirelessDeviceImportTasksResult.h>
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

ListWirelessDeviceImportTasksResult::ListWirelessDeviceImportTasksResult()
{
}

ListWirelessDeviceImportTasksResult::ListWirelessDeviceImportTasksResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListWirelessDeviceImportTasksResult& ListWirelessDeviceImportTasksResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("WirelessDeviceImportTaskList"))
  {
    Aws::Utils::Array<JsonView> wirelessDeviceImportTaskListJsonList = jsonValue.GetArray("WirelessDeviceImportTaskList");
    for(unsigned wirelessDeviceImportTaskListIndex = 0; wirelessDeviceImportTaskListIndex < wirelessDeviceImportTaskListJsonList.GetLength(); ++wirelessDeviceImportTaskListIndex)
    {
      m_wirelessDeviceImportTaskList.push_back(wirelessDeviceImportTaskListJsonList[wirelessDeviceImportTaskListIndex].AsObject());
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
