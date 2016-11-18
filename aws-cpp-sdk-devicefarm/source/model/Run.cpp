/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/devicefarm/model/Run.h>
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

Run::Run() : 
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_type(TestType::NOT_SET),
    m_typeHasBeenSet(false),
    m_platform(DevicePlatform::NOT_SET),
    m_platformHasBeenSet(false),
    m_createdHasBeenSet(false),
    m_status(ExecutionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_result(ExecutionResult::NOT_SET),
    m_resultHasBeenSet(false),
    m_startedHasBeenSet(false),
    m_stoppedHasBeenSet(false),
    m_countersHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_totalJobs(0),
    m_totalJobsHasBeenSet(false),
    m_completedJobs(0),
    m_completedJobsHasBeenSet(false),
    m_billingMethod(BillingMethod::NOT_SET),
    m_billingMethodHasBeenSet(false),
    m_deviceMinutesHasBeenSet(false)
{
}

Run::Run(const JsonValue& jsonValue) : 
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_type(TestType::NOT_SET),
    m_typeHasBeenSet(false),
    m_platform(DevicePlatform::NOT_SET),
    m_platformHasBeenSet(false),
    m_createdHasBeenSet(false),
    m_status(ExecutionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_result(ExecutionResult::NOT_SET),
    m_resultHasBeenSet(false),
    m_startedHasBeenSet(false),
    m_stoppedHasBeenSet(false),
    m_countersHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_totalJobs(0),
    m_totalJobsHasBeenSet(false),
    m_completedJobs(0),
    m_completedJobsHasBeenSet(false),
    m_billingMethod(BillingMethod::NOT_SET),
    m_billingMethodHasBeenSet(false),
    m_deviceMinutesHasBeenSet(false)
{
  *this = jsonValue;
}

Run& Run::operator =(const JsonValue& jsonValue)
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

  if(jsonValue.ValueExists("platform"))
  {
    m_platform = DevicePlatformMapper::GetDevicePlatformForName(jsonValue.GetString("platform"));

    m_platformHasBeenSet = true;
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

  if(jsonValue.ValueExists("totalJobs"))
  {
    m_totalJobs = jsonValue.GetInteger("totalJobs");

    m_totalJobsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("completedJobs"))
  {
    m_completedJobs = jsonValue.GetInteger("completedJobs");

    m_completedJobsHasBeenSet = true;
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

  return *this;
}

JsonValue Run::Jsonize() const
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

  if(m_platformHasBeenSet)
  {
   payload.WithString("platform", DevicePlatformMapper::GetNameForDevicePlatform(m_platform));
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

  if(m_totalJobsHasBeenSet)
  {
   payload.WithInteger("totalJobs", m_totalJobs);

  }

  if(m_completedJobsHasBeenSet)
  {
   payload.WithInteger("completedJobs", m_completedJobs);

  }

  if(m_billingMethodHasBeenSet)
  {
   payload.WithString("billingMethod", BillingMethodMapper::GetNameForBillingMethod(m_billingMethod));
  }

  if(m_deviceMinutesHasBeenSet)
  {
   payload.WithObject("deviceMinutes", m_deviceMinutes.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws