/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/GetWirelessDeviceImportTaskResult.h>
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

GetWirelessDeviceImportTaskResult::GetWirelessDeviceImportTaskResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetWirelessDeviceImportTaskResult& GetWirelessDeviceImportTaskResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DestinationName"))
  {
    m_destinationName = jsonValue.GetString("DestinationName");
    m_destinationNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Sidewalk"))
  {
    m_sidewalk = jsonValue.GetObject("Sidewalk");
    m_sidewalkHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetString("CreationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = ImportTaskStatusMapper::GetImportTaskStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StatusReason"))
  {
    m_statusReason = jsonValue.GetString("StatusReason");
    m_statusReasonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InitializedImportedDeviceCount"))
  {
    m_initializedImportedDeviceCount = jsonValue.GetInt64("InitializedImportedDeviceCount");
    m_initializedImportedDeviceCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PendingImportedDeviceCount"))
  {
    m_pendingImportedDeviceCount = jsonValue.GetInt64("PendingImportedDeviceCount");
    m_pendingImportedDeviceCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OnboardedImportedDeviceCount"))
  {
    m_onboardedImportedDeviceCount = jsonValue.GetInt64("OnboardedImportedDeviceCount");
    m_onboardedImportedDeviceCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FailedImportedDeviceCount"))
  {
    m_failedImportedDeviceCount = jsonValue.GetInt64("FailedImportedDeviceCount");
    m_failedImportedDeviceCountHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
