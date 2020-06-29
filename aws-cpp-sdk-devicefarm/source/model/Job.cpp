/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devicefarm/model/Job.h>
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

Job::Job() : 
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_type(TestType::NOT_SET),
    m_typeHasBeenSet(false),
    m_createdHasBeenSet(false),
    m_status(ExecutionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_result(ExecutionResult::NOT_SET),
    m_resultHasBeenSet(false),
    m_startedHasBeenSet(false),
    m_stoppedHasBeenSet(false),
    m_countersHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_deviceHasBeenSet(false),
    m_instanceArnHasBeenSet(false),
    m_deviceMinutesHasBeenSet(false),
    m_videoEndpointHasBeenSet(false),
    m_videoCapture(false),
    m_videoCaptureHasBeenSet(false)
{
}

Job::Job(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_type(TestType::NOT_SET),
    m_typeHasBeenSet(false),
    m_createdHasBeenSet(false),
    m_status(ExecutionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_result(ExecutionResult::NOT_SET),
    m_resultHasBeenSet(false),
    m_startedHasBeenSet(false),
    m_stoppedHasBeenSet(false),
    m_countersHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_deviceHasBeenSet(false),
    m_instanceArnHasBeenSet(false),
    m_deviceMinutesHasBeenSet(false),
    m_videoEndpointHasBeenSet(false),
    m_videoCapture(false),
    m_videoCaptureHasBeenSet(false)
{
  *this = jsonValue;
}

Job& Job::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("type"))
  {
    m_type = TestTypeMapper::GetTestTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
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

  if(jsonValue.ValueExists("counters"))
  {
    m_counters = jsonValue.GetObject("counters");

    m_countersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
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

  if(jsonValue.ValueExists("deviceMinutes"))
  {
    m_deviceMinutes = jsonValue.GetObject("deviceMinutes");

    m_deviceMinutesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("videoEndpoint"))
  {
    m_videoEndpoint = jsonValue.GetString("videoEndpoint");

    m_videoEndpointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("videoCapture"))
  {
    m_videoCapture = jsonValue.GetBool("videoCapture");

    m_videoCaptureHasBeenSet = true;
  }

  return *this;
}

JsonValue Job::Jsonize() const
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

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", TestTypeMapper::GetNameForTestType(m_type));
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

  if(m_startedHasBeenSet)
  {
   payload.WithDouble("started", m_started.SecondsWithMSPrecision());
  }

  if(m_stoppedHasBeenSet)
  {
   payload.WithDouble("stopped", m_stopped.SecondsWithMSPrecision());
  }

  if(m_countersHasBeenSet)
  {
   payload.WithObject("counters", m_counters.Jsonize());

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  if(m_deviceHasBeenSet)
  {
   payload.WithObject("device", m_device.Jsonize());

  }

  if(m_instanceArnHasBeenSet)
  {
   payload.WithString("instanceArn", m_instanceArn);

  }

  if(m_deviceMinutesHasBeenSet)
  {
   payload.WithObject("deviceMinutes", m_deviceMinutes.Jsonize());

  }

  if(m_videoEndpointHasBeenSet)
  {
   payload.WithString("videoEndpoint", m_videoEndpoint);

  }

  if(m_videoCaptureHasBeenSet)
  {
   payload.WithBool("videoCapture", m_videoCapture);

  }

  return payload;
}

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
