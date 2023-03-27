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

GetWirelessDeviceImportTaskResult::GetWirelessDeviceImportTaskResult() : 
    m_status(ImportTaskStatus::NOT_SET),
    m_initializedImportedDeviceCount(0),
    m_pendingImportedDeviceCount(0),
    m_onboardedImportedDeviceCount(0),
    m_failedImportedDeviceCount(0)
{
}

GetWirelessDeviceImportTaskResult::GetWirelessDeviceImportTaskResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(ImportTaskStatus::NOT_SET),
    m_initializedImportedDeviceCount(0),
    m_pendingImportedDeviceCount(0),
    m_onboardedImportedDeviceCount(0),
    m_failedImportedDeviceCount(0)
{
  *this = result;
}

GetWirelessDeviceImportTaskResult& GetWirelessDeviceImportTaskResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

  }

  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

  }

  if(jsonValue.ValueExists("DestinationName"))
  {
    m_destinationName = jsonValue.GetString("DestinationName");

  }

  if(jsonValue.ValueExists("Sidewalk"))
  {
    m_sidewalk = jsonValue.GetObject("Sidewalk");

  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetString("CreationTime");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = ImportTaskStatusMapper::GetImportTaskStatusForName(jsonValue.GetString("Status"));

  }

  if(jsonValue.ValueExists("StatusReason"))
  {
    m_statusReason = jsonValue.GetString("StatusReason");

  }

  if(jsonValue.ValueExists("InitializedImportedDeviceCount"))
  {
    m_initializedImportedDeviceCount = jsonValue.GetInt64("InitializedImportedDeviceCount");

  }

  if(jsonValue.ValueExists("PendingImportedDeviceCount"))
  {
    m_pendingImportedDeviceCount = jsonValue.GetInt64("PendingImportedDeviceCount");

  }

  if(jsonValue.ValueExists("OnboardedImportedDeviceCount"))
  {
    m_onboardedImportedDeviceCount = jsonValue.GetInt64("OnboardedImportedDeviceCount");

  }

  if(jsonValue.ValueExists("FailedImportedDeviceCount"))
  {
    m_failedImportedDeviceCount = jsonValue.GetInt64("FailedImportedDeviceCount");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
