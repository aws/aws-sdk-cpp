/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/internetmonitor/model/Monitor.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace InternetMonitor
{
namespace Model
{

Monitor::Monitor() : 
    m_monitorNameHasBeenSet(false),
    m_monitorArnHasBeenSet(false),
    m_status(MonitorConfigState::NOT_SET),
    m_statusHasBeenSet(false),
    m_processingStatus(MonitorProcessingStatusCode::NOT_SET),
    m_processingStatusHasBeenSet(false)
{
}

Monitor::Monitor(JsonView jsonValue) : 
    m_monitorNameHasBeenSet(false),
    m_monitorArnHasBeenSet(false),
    m_status(MonitorConfigState::NOT_SET),
    m_statusHasBeenSet(false),
    m_processingStatus(MonitorProcessingStatusCode::NOT_SET),
    m_processingStatusHasBeenSet(false)
{
  *this = jsonValue;
}

Monitor& Monitor::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MonitorName"))
  {
    m_monitorName = jsonValue.GetString("MonitorName");

    m_monitorNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MonitorArn"))
  {
    m_monitorArn = jsonValue.GetString("MonitorArn");

    m_monitorArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = MonitorConfigStateMapper::GetMonitorConfigStateForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProcessingStatus"))
  {
    m_processingStatus = MonitorProcessingStatusCodeMapper::GetMonitorProcessingStatusCodeForName(jsonValue.GetString("ProcessingStatus"));

    m_processingStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue Monitor::Jsonize() const
{
  JsonValue payload;

  if(m_monitorNameHasBeenSet)
  {
   payload.WithString("MonitorName", m_monitorName);

  }

  if(m_monitorArnHasBeenSet)
  {
   payload.WithString("MonitorArn", m_monitorArn);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", MonitorConfigStateMapper::GetNameForMonitorConfigState(m_status));
  }

  if(m_processingStatusHasBeenSet)
  {
   payload.WithString("ProcessingStatus", MonitorProcessingStatusCodeMapper::GetNameForMonitorProcessingStatusCode(m_processingStatus));
  }

  return payload;
}

} // namespace Model
} // namespace InternetMonitor
} // namespace Aws
