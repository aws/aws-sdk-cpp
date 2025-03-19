/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/ConfigurationRecorderStatus.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConfigService
{
namespace Model
{

ConfigurationRecorderStatus::ConfigurationRecorderStatus(JsonView jsonValue)
{
  *this = jsonValue;
}

ConfigurationRecorderStatus& ConfigurationRecorderStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastStartTime"))
  {
    m_lastStartTime = jsonValue.GetDouble("lastStartTime");
    m_lastStartTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastStopTime"))
  {
    m_lastStopTime = jsonValue.GetDouble("lastStopTime");
    m_lastStopTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("recording"))
  {
    m_recording = jsonValue.GetBool("recording");
    m_recordingHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastStatus"))
  {
    m_lastStatus = RecorderStatusMapper::GetRecorderStatusForName(jsonValue.GetString("lastStatus"));
    m_lastStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastErrorCode"))
  {
    m_lastErrorCode = jsonValue.GetString("lastErrorCode");
    m_lastErrorCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastErrorMessage"))
  {
    m_lastErrorMessage = jsonValue.GetString("lastErrorMessage");
    m_lastErrorMessageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastStatusChangeTime"))
  {
    m_lastStatusChangeTime = jsonValue.GetDouble("lastStatusChangeTime");
    m_lastStatusChangeTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("servicePrincipal"))
  {
    m_servicePrincipal = jsonValue.GetString("servicePrincipal");
    m_servicePrincipalHasBeenSet = true;
  }
  return *this;
}

JsonValue ConfigurationRecorderStatus::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_lastStartTimeHasBeenSet)
  {
   payload.WithDouble("lastStartTime", m_lastStartTime.SecondsWithMSPrecision());
  }

  if(m_lastStopTimeHasBeenSet)
  {
   payload.WithDouble("lastStopTime", m_lastStopTime.SecondsWithMSPrecision());
  }

  if(m_recordingHasBeenSet)
  {
   payload.WithBool("recording", m_recording);

  }

  if(m_lastStatusHasBeenSet)
  {
   payload.WithString("lastStatus", RecorderStatusMapper::GetNameForRecorderStatus(m_lastStatus));
  }

  if(m_lastErrorCodeHasBeenSet)
  {
   payload.WithString("lastErrorCode", m_lastErrorCode);

  }

  if(m_lastErrorMessageHasBeenSet)
  {
   payload.WithString("lastErrorMessage", m_lastErrorMessage);

  }

  if(m_lastStatusChangeTimeHasBeenSet)
  {
   payload.WithDouble("lastStatusChangeTime", m_lastStatusChangeTime.SecondsWithMSPrecision());
  }

  if(m_servicePrincipalHasBeenSet)
  {
   payload.WithString("servicePrincipal", m_servicePrincipal);

  }

  return payload;
}

} // namespace Model
} // namespace ConfigService
} // namespace Aws
