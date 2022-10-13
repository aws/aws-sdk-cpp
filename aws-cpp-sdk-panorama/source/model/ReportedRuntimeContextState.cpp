/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/panorama/model/ReportedRuntimeContextState.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Panorama
{
namespace Model
{

ReportedRuntimeContextState::ReportedRuntimeContextState() : 
    m_desiredState(DesiredState::NOT_SET),
    m_desiredStateHasBeenSet(false),
    m_deviceReportedStatus(DeviceReportedStatus::NOT_SET),
    m_deviceReportedStatusHasBeenSet(false),
    m_deviceReportedTimeHasBeenSet(false),
    m_runtimeContextNameHasBeenSet(false)
{
}

ReportedRuntimeContextState::ReportedRuntimeContextState(JsonView jsonValue) : 
    m_desiredState(DesiredState::NOT_SET),
    m_desiredStateHasBeenSet(false),
    m_deviceReportedStatus(DeviceReportedStatus::NOT_SET),
    m_deviceReportedStatusHasBeenSet(false),
    m_deviceReportedTimeHasBeenSet(false),
    m_runtimeContextNameHasBeenSet(false)
{
  *this = jsonValue;
}

ReportedRuntimeContextState& ReportedRuntimeContextState::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DesiredState"))
  {
    m_desiredState = DesiredStateMapper::GetDesiredStateForName(jsonValue.GetString("DesiredState"));

    m_desiredStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeviceReportedStatus"))
  {
    m_deviceReportedStatus = DeviceReportedStatusMapper::GetDeviceReportedStatusForName(jsonValue.GetString("DeviceReportedStatus"));

    m_deviceReportedStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeviceReportedTime"))
  {
    m_deviceReportedTime = jsonValue.GetDouble("DeviceReportedTime");

    m_deviceReportedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RuntimeContextName"))
  {
    m_runtimeContextName = jsonValue.GetString("RuntimeContextName");

    m_runtimeContextNameHasBeenSet = true;
  }

  return *this;
}

JsonValue ReportedRuntimeContextState::Jsonize() const
{
  JsonValue payload;

  if(m_desiredStateHasBeenSet)
  {
   payload.WithString("DesiredState", DesiredStateMapper::GetNameForDesiredState(m_desiredState));
  }

  if(m_deviceReportedStatusHasBeenSet)
  {
   payload.WithString("DeviceReportedStatus", DeviceReportedStatusMapper::GetNameForDeviceReportedStatus(m_deviceReportedStatus));
  }

  if(m_deviceReportedTimeHasBeenSet)
  {
   payload.WithDouble("DeviceReportedTime", m_deviceReportedTime.SecondsWithMSPrecision());
  }

  if(m_runtimeContextNameHasBeenSet)
  {
   payload.WithString("RuntimeContextName", m_runtimeContextName);

  }

  return payload;
}

} // namespace Model
} // namespace Panorama
} // namespace Aws
