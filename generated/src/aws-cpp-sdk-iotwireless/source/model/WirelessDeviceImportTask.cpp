/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/WirelessDeviceImportTask.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTWireless
{
namespace Model
{

WirelessDeviceImportTask::WirelessDeviceImportTask() : 
    m_idHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_destinationNameHasBeenSet(false),
    m_sidewalkHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_status(ImportTaskStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusReasonHasBeenSet(false),
    m_initializedImportedDeviceCount(0),
    m_initializedImportedDeviceCountHasBeenSet(false),
    m_pendingImportedDeviceCount(0),
    m_pendingImportedDeviceCountHasBeenSet(false),
    m_onboardedImportedDeviceCount(0),
    m_onboardedImportedDeviceCountHasBeenSet(false),
    m_failedImportedDeviceCount(0),
    m_failedImportedDeviceCountHasBeenSet(false)
{
}

WirelessDeviceImportTask::WirelessDeviceImportTask(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_destinationNameHasBeenSet(false),
    m_sidewalkHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_status(ImportTaskStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusReasonHasBeenSet(false),
    m_initializedImportedDeviceCount(0),
    m_initializedImportedDeviceCountHasBeenSet(false),
    m_pendingImportedDeviceCount(0),
    m_pendingImportedDeviceCountHasBeenSet(false),
    m_onboardedImportedDeviceCount(0),
    m_onboardedImportedDeviceCountHasBeenSet(false),
    m_failedImportedDeviceCount(0),
    m_failedImportedDeviceCountHasBeenSet(false)
{
  *this = jsonValue;
}

WirelessDeviceImportTask& WirelessDeviceImportTask::operator =(JsonView jsonValue)
{
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

  return *this;
}

JsonValue WirelessDeviceImportTask::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_destinationNameHasBeenSet)
  {
   payload.WithString("DestinationName", m_destinationName);

  }

  if(m_sidewalkHasBeenSet)
  {
   payload.WithObject("Sidewalk", m_sidewalk.Jsonize());

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithString("CreationTime", m_creationTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ImportTaskStatusMapper::GetNameForImportTaskStatus(m_status));
  }

  if(m_statusReasonHasBeenSet)
  {
   payload.WithString("StatusReason", m_statusReason);

  }

  if(m_initializedImportedDeviceCountHasBeenSet)
  {
   payload.WithInt64("InitializedImportedDeviceCount", m_initializedImportedDeviceCount);

  }

  if(m_pendingImportedDeviceCountHasBeenSet)
  {
   payload.WithInt64("PendingImportedDeviceCount", m_pendingImportedDeviceCount);

  }

  if(m_onboardedImportedDeviceCountHasBeenSet)
  {
   payload.WithInt64("OnboardedImportedDeviceCount", m_onboardedImportedDeviceCount);

  }

  if(m_failedImportedDeviceCountHasBeenSet)
  {
   payload.WithInt64("FailedImportedDeviceCount", m_failedImportedDeviceCount);

  }

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
