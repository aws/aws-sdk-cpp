/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/Scan.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

Scan::Scan() : 
    m_detectorIdHasBeenSet(false),
    m_adminDetectorIdHasBeenSet(false),
    m_scanIdHasBeenSet(false),
    m_scanStatus(ScanStatus::NOT_SET),
    m_scanStatusHasBeenSet(false),
    m_failureReasonHasBeenSet(false),
    m_scanStartTimeHasBeenSet(false),
    m_scanEndTimeHasBeenSet(false),
    m_triggerDetailsHasBeenSet(false),
    m_resourceDetailsHasBeenSet(false),
    m_scanResultDetailsHasBeenSet(false),
    m_accountIdHasBeenSet(false),
    m_totalBytes(0),
    m_totalBytesHasBeenSet(false),
    m_fileCount(0),
    m_fileCountHasBeenSet(false),
    m_attachedVolumesHasBeenSet(false)
{
}

Scan::Scan(JsonView jsonValue) : 
    m_detectorIdHasBeenSet(false),
    m_adminDetectorIdHasBeenSet(false),
    m_scanIdHasBeenSet(false),
    m_scanStatus(ScanStatus::NOT_SET),
    m_scanStatusHasBeenSet(false),
    m_failureReasonHasBeenSet(false),
    m_scanStartTimeHasBeenSet(false),
    m_scanEndTimeHasBeenSet(false),
    m_triggerDetailsHasBeenSet(false),
    m_resourceDetailsHasBeenSet(false),
    m_scanResultDetailsHasBeenSet(false),
    m_accountIdHasBeenSet(false),
    m_totalBytes(0),
    m_totalBytesHasBeenSet(false),
    m_fileCount(0),
    m_fileCountHasBeenSet(false),
    m_attachedVolumesHasBeenSet(false)
{
  *this = jsonValue;
}

Scan& Scan::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("detectorId"))
  {
    m_detectorId = jsonValue.GetString("detectorId");

    m_detectorIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("adminDetectorId"))
  {
    m_adminDetectorId = jsonValue.GetString("adminDetectorId");

    m_adminDetectorIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scanId"))
  {
    m_scanId = jsonValue.GetString("scanId");

    m_scanIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scanStatus"))
  {
    m_scanStatus = ScanStatusMapper::GetScanStatusForName(jsonValue.GetString("scanStatus"));

    m_scanStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("failureReason"))
  {
    m_failureReason = jsonValue.GetString("failureReason");

    m_failureReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scanStartTime"))
  {
    m_scanStartTime = jsonValue.GetDouble("scanStartTime");

    m_scanStartTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scanEndTime"))
  {
    m_scanEndTime = jsonValue.GetDouble("scanEndTime");

    m_scanEndTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("triggerDetails"))
  {
    m_triggerDetails = jsonValue.GetObject("triggerDetails");

    m_triggerDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceDetails"))
  {
    m_resourceDetails = jsonValue.GetObject("resourceDetails");

    m_resourceDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scanResultDetails"))
  {
    m_scanResultDetails = jsonValue.GetObject("scanResultDetails");

    m_scanResultDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("accountId"))
  {
    m_accountId = jsonValue.GetString("accountId");

    m_accountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("totalBytes"))
  {
    m_totalBytes = jsonValue.GetInt64("totalBytes");

    m_totalBytesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fileCount"))
  {
    m_fileCount = jsonValue.GetInt64("fileCount");

    m_fileCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("attachedVolumes"))
  {
    Aws::Utils::Array<JsonView> attachedVolumesJsonList = jsonValue.GetArray("attachedVolumes");
    for(unsigned attachedVolumesIndex = 0; attachedVolumesIndex < attachedVolumesJsonList.GetLength(); ++attachedVolumesIndex)
    {
      m_attachedVolumes.push_back(attachedVolumesJsonList[attachedVolumesIndex].AsObject());
    }
    m_attachedVolumesHasBeenSet = true;
  }

  return *this;
}

JsonValue Scan::Jsonize() const
{
  JsonValue payload;

  if(m_detectorIdHasBeenSet)
  {
   payload.WithString("detectorId", m_detectorId);

  }

  if(m_adminDetectorIdHasBeenSet)
  {
   payload.WithString("adminDetectorId", m_adminDetectorId);

  }

  if(m_scanIdHasBeenSet)
  {
   payload.WithString("scanId", m_scanId);

  }

  if(m_scanStatusHasBeenSet)
  {
   payload.WithString("scanStatus", ScanStatusMapper::GetNameForScanStatus(m_scanStatus));
  }

  if(m_failureReasonHasBeenSet)
  {
   payload.WithString("failureReason", m_failureReason);

  }

  if(m_scanStartTimeHasBeenSet)
  {
   payload.WithDouble("scanStartTime", m_scanStartTime.SecondsWithMSPrecision());
  }

  if(m_scanEndTimeHasBeenSet)
  {
   payload.WithDouble("scanEndTime", m_scanEndTime.SecondsWithMSPrecision());
  }

  if(m_triggerDetailsHasBeenSet)
  {
   payload.WithObject("triggerDetails", m_triggerDetails.Jsonize());

  }

  if(m_resourceDetailsHasBeenSet)
  {
   payload.WithObject("resourceDetails", m_resourceDetails.Jsonize());

  }

  if(m_scanResultDetailsHasBeenSet)
  {
   payload.WithObject("scanResultDetails", m_scanResultDetails.Jsonize());

  }

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("accountId", m_accountId);

  }

  if(m_totalBytesHasBeenSet)
  {
   payload.WithInt64("totalBytes", m_totalBytes);

  }

  if(m_fileCountHasBeenSet)
  {
   payload.WithInt64("fileCount", m_fileCount);

  }

  if(m_attachedVolumesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> attachedVolumesJsonList(m_attachedVolumes.size());
   for(unsigned attachedVolumesIndex = 0; attachedVolumesIndex < attachedVolumesJsonList.GetLength(); ++attachedVolumesIndex)
   {
     attachedVolumesJsonList[attachedVolumesIndex].AsObject(m_attachedVolumes[attachedVolumesIndex].Jsonize());
   }
   payload.WithArray("attachedVolumes", std::move(attachedVolumesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
