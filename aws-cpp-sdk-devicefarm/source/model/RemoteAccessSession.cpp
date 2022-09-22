/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devicefarm/model/RemoteAccessSession.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DeviceFarm
{
namespace Model
{

RemoteAccessSession::RemoteAccessSession() : 
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_createdHasBeenSet(false),
    m_status(ExecutionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_result(ExecutionResult::NOT_SET),
    m_resultHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_startedHasBeenSet(false),
    m_stoppedHasBeenSet(false),
    m_deviceHasBeenSet(false),
    m_instanceArnHasBeenSet(false),
    m_remoteDebugEnabled(false),
    m_remoteDebugEnabledHasBeenSet(false),
    m_remoteRecordEnabled(false),
    m_remoteRecordEnabledHasBeenSet(false),
    m_remoteRecordAppArnHasBeenSet(false),
    m_hostAddressHasBeenSet(false),
    m_clientIdHasBeenSet(false),
    m_billingMethod(BillingMethod::NOT_SET),
    m_billingMethodHasBeenSet(false),
    m_deviceMinutesHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_deviceUdidHasBeenSet(false),
    m_interactionMode(InteractionMode::NOT_SET),
    m_interactionModeHasBeenSet(false),
    m_skipAppResign(false),
    m_skipAppResignHasBeenSet(false),
    m_vpcConfigHasBeenSet(false)
{
}

RemoteAccessSession::RemoteAccessSession(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_createdHasBeenSet(false),
    m_status(ExecutionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_result(ExecutionResult::NOT_SET),
    m_resultHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_startedHasBeenSet(false),
    m_stoppedHasBeenSet(false),
    m_deviceHasBeenSet(false),
    m_instanceArnHasBeenSet(false),
    m_remoteDebugEnabled(false),
    m_remoteDebugEnabledHasBeenSet(false),
    m_remoteRecordEnabled(false),
    m_remoteRecordEnabledHasBeenSet(false),
    m_remoteRecordAppArnHasBeenSet(false),
    m_hostAddressHasBeenSet(false),
    m_clientIdHasBeenSet(false),
    m_billingMethod(BillingMethod::NOT_SET),
    m_billingMethodHasBeenSet(false),
    m_deviceMinutesHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_deviceUdidHasBeenSet(false),
    m_interactionMode(InteractionMode::NOT_SET),
    m_interactionModeHasBeenSet(false),
    m_skipAppResign(false),
    m_skipAppResignHasBeenSet(false),
    m_vpcConfigHasBeenSet(false)
{
  *this = jsonValue;
}

RemoteAccessSession& RemoteAccessSession::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("created"))
  {
    m_created = jsonValue.GetDouble("created");

    m_createdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = ExecutionStatusMapper::GetExecutionStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("result"))
  {
    m_result = ExecutionResultMapper::GetExecutionResultForName(jsonValue.GetString("result"));

    m_resultHasBeenSet = true;
  }

  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("started"))
  {
    m_started = jsonValue.GetDouble("started");

    m_startedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stopped"))
  {
    m_stopped = jsonValue.GetDouble("stopped");

    m_stoppedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("device"))
  {
    m_device = jsonValue.GetObject("device");

    m_deviceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("instanceArn"))
  {
    m_instanceArn = jsonValue.GetString("instanceArn");

    m_instanceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("remoteDebugEnabled"))
  {
    m_remoteDebugEnabled = jsonValue.GetBool("remoteDebugEnabled");

    m_remoteDebugEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("remoteRecordEnabled"))
  {
    m_remoteRecordEnabled = jsonValue.GetBool("remoteRecordEnabled");

    m_remoteRecordEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("remoteRecordAppArn"))
  {
    m_remoteRecordAppArn = jsonValue.GetString("remoteRecordAppArn");

    m_remoteRecordAppArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("hostAddress"))
  {
    m_hostAddress = jsonValue.GetString("hostAddress");

    m_hostAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("clientId"))
  {
    m_clientId = jsonValue.GetString("clientId");

    m_clientIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("billingMethod"))
  {
    m_billingMethod = BillingMethodMapper::GetBillingMethodForName(jsonValue.GetString("billingMethod"));

    m_billingMethodHasBeenSet = true;
  }

  if(jsonValue.ValueExists("deviceMinutes"))
  {
    m_deviceMinutes = jsonValue.GetObject("deviceMinutes");

    m_deviceMinutesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("endpoint"))
  {
    m_endpoint = jsonValue.GetString("endpoint");

    m_endpointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("deviceUdid"))
  {
    m_deviceUdid = jsonValue.GetString("deviceUdid");

    m_deviceUdidHasBeenSet = true;
  }

  if(jsonValue.ValueExists("interactionMode"))
  {
    m_interactionMode = InteractionModeMapper::GetInteractionModeForName(jsonValue.GetString("interactionMode"));

    m_interactionModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("skipAppResign"))
  {
    m_skipAppResign = jsonValue.GetBool("skipAppResign");

    m_skipAppResignHasBeenSet = true;
  }

  if(jsonValue.ValueExists("vpcConfig"))
  {
    m_vpcConfig = jsonValue.GetObject("vpcConfig");

    m_vpcConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue RemoteAccessSession::Jsonize() const
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

  if(m_createdHasBeenSet)
  {
   payload.WithDouble("created", m_created.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ExecutionStatusMapper::GetNameForExecutionStatus(m_status));
  }

  if(m_resultHasBeenSet)
  {
   payload.WithString("result", ExecutionResultMapper::GetNameForExecutionResult(m_result));
  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  if(m_startedHasBeenSet)
  {
   payload.WithDouble("started", m_started.SecondsWithMSPrecision());
  }

  if(m_stoppedHasBeenSet)
  {
   payload.WithDouble("stopped", m_stopped.SecondsWithMSPrecision());
  }

  if(m_deviceHasBeenSet)
  {
   payload.WithObject("device", m_device.Jsonize());

  }

  if(m_instanceArnHasBeenSet)
  {
   payload.WithString("instanceArn", m_instanceArn);

  }

  if(m_remoteDebugEnabledHasBeenSet)
  {
   payload.WithBool("remoteDebugEnabled", m_remoteDebugEnabled);

  }

  if(m_remoteRecordEnabledHasBeenSet)
  {
   payload.WithBool("remoteRecordEnabled", m_remoteRecordEnabled);

  }

  if(m_remoteRecordAppArnHasBeenSet)
  {
   payload.WithString("remoteRecordAppArn", m_remoteRecordAppArn);

  }

  if(m_hostAddressHasBeenSet)
  {
   payload.WithString("hostAddress", m_hostAddress);

  }

  if(m_clientIdHasBeenSet)
  {
   payload.WithString("clientId", m_clientId);

  }

  if(m_billingMethodHasBeenSet)
  {
   payload.WithString("billingMethod", BillingMethodMapper::GetNameForBillingMethod(m_billingMethod));
  }

  if(m_deviceMinutesHasBeenSet)
  {
   payload.WithObject("deviceMinutes", m_deviceMinutes.Jsonize());

  }

  if(m_endpointHasBeenSet)
  {
   payload.WithString("endpoint", m_endpoint);

  }

  if(m_deviceUdidHasBeenSet)
  {
   payload.WithString("deviceUdid", m_deviceUdid);

  }

  if(m_interactionModeHasBeenSet)
  {
   payload.WithString("interactionMode", InteractionModeMapper::GetNameForInteractionMode(m_interactionMode));
  }

  if(m_skipAppResignHasBeenSet)
  {
   payload.WithBool("skipAppResign", m_skipAppResign);

  }

  if(m_vpcConfigHasBeenSet)
  {
   payload.WithObject("vpcConfig", m_vpcConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
