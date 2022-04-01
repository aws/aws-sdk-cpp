/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager/model/LicenseConversionTask.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LicenseManager
{
namespace Model
{

LicenseConversionTask::LicenseConversionTask() : 
    m_licenseConversionTaskIdHasBeenSet(false),
    m_resourceArnHasBeenSet(false),
    m_sourceLicenseContextHasBeenSet(false),
    m_destinationLicenseContextHasBeenSet(false),
    m_status(LicenseConversionTaskStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_licenseConversionTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
}

LicenseConversionTask::LicenseConversionTask(JsonView jsonValue) : 
    m_licenseConversionTaskIdHasBeenSet(false),
    m_resourceArnHasBeenSet(false),
    m_sourceLicenseContextHasBeenSet(false),
    m_destinationLicenseContextHasBeenSet(false),
    m_status(LicenseConversionTaskStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_licenseConversionTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
  *this = jsonValue;
}

LicenseConversionTask& LicenseConversionTask::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LicenseConversionTaskId"))
  {
    m_licenseConversionTaskId = jsonValue.GetString("LicenseConversionTaskId");

    m_licenseConversionTaskIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceArn"))
  {
    m_resourceArn = jsonValue.GetString("ResourceArn");

    m_resourceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceLicenseContext"))
  {
    m_sourceLicenseContext = jsonValue.GetObject("SourceLicenseContext");

    m_sourceLicenseContextHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DestinationLicenseContext"))
  {
    m_destinationLicenseContext = jsonValue.GetObject("DestinationLicenseContext");

    m_destinationLicenseContextHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = LicenseConversionTaskStatusMapper::GetLicenseConversionTaskStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatusMessage"))
  {
    m_statusMessage = jsonValue.GetString("StatusMessage");

    m_statusMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetDouble("StartTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LicenseConversionTime"))
  {
    m_licenseConversionTime = jsonValue.GetDouble("LicenseConversionTime");

    m_licenseConversionTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndTime"))
  {
    m_endTime = jsonValue.GetDouble("EndTime");

    m_endTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue LicenseConversionTask::Jsonize() const
{
  JsonValue payload;

  if(m_licenseConversionTaskIdHasBeenSet)
  {
   payload.WithString("LicenseConversionTaskId", m_licenseConversionTaskId);

  }

  if(m_resourceArnHasBeenSet)
  {
   payload.WithString("ResourceArn", m_resourceArn);

  }

  if(m_sourceLicenseContextHasBeenSet)
  {
   payload.WithObject("SourceLicenseContext", m_sourceLicenseContext.Jsonize());

  }

  if(m_destinationLicenseContextHasBeenSet)
  {
   payload.WithObject("DestinationLicenseContext", m_destinationLicenseContext.Jsonize());

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", LicenseConversionTaskStatusMapper::GetNameForLicenseConversionTaskStatus(m_status));
  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("StatusMessage", m_statusMessage);

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("StartTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_licenseConversionTimeHasBeenSet)
  {
   payload.WithDouble("LicenseConversionTime", m_licenseConversionTime.SecondsWithMSPrecision());
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("EndTime", m_endTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
