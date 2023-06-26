/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_deviceMinutesHasBeenSet(false),
    m_networkProfileHasBeenSet(false),
    m_parsingResultUrlHasBeenSet(false),
    m_resultCode(ExecutionResultCode::NOT_SET),
    m_resultCodeHasBeenSet(false),
    m_seed(0),
    m_seedHasBeenSet(false),
    m_appUploadHasBeenSet(false),
    m_eventCount(0),
    m_eventCountHasBeenSet(false),
    m_jobTimeoutMinutes(0),
    m_jobTimeoutMinutesHasBeenSet(false),
    m_devicePoolArnHasBeenSet(false),
    m_localeHasBeenSet(false),
    m_radiosHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_customerArtifactPathsHasBeenSet(false),
    m_webUrlHasBeenSet(false),
    m_skipAppResign(false),
    m_skipAppResignHasBeenSet(false),
    m_testSpecArnHasBeenSet(false),
    m_deviceSelectionResultHasBeenSet(false),
    m_vpcConfigHasBeenSet(false)
{
}

Run::Run(JsonView jsonValue) : 
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
    m_deviceMinutesHasBeenSet(false),
    m_networkProfileHasBeenSet(false),
    m_parsingResultUrlHasBeenSet(false),
    m_resultCode(ExecutionResultCode::NOT_SET),
    m_resultCodeHasBeenSet(false),
    m_seed(0),
    m_seedHasBeenSet(false),
    m_appUploadHasBeenSet(false),
    m_eventCount(0),
    m_eventCountHasBeenSet(false),
    m_jobTimeoutMinutes(0),
    m_jobTimeoutMinutesHasBeenSet(false),
    m_devicePoolArnHasBeenSet(false),
    m_localeHasBeenSet(false),
    m_radiosHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_customerArtifactPathsHasBeenSet(false),
    m_webUrlHasBeenSet(false),
    m_skipAppResign(false),
    m_skipAppResignHasBeenSet(false),
    m_testSpecArnHasBeenSet(false),
    m_deviceSelectionResultHasBeenSet(false),
    m_vpcConfigHasBeenSet(false)
{
  *this = jsonValue;
}

Run& Run::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("networkProfile"))
  {
    m_networkProfile = jsonValue.GetObject("networkProfile");

    m_networkProfileHasBeenSet = true;
  }

  if(jsonValue.ValueExists("parsingResultUrl"))
  {
    m_parsingResultUrl = jsonValue.GetString("parsingResultUrl");

    m_parsingResultUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resultCode"))
  {
    m_resultCode = ExecutionResultCodeMapper::GetExecutionResultCodeForName(jsonValue.GetString("resultCode"));

    m_resultCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("seed"))
  {
    m_seed = jsonValue.GetInteger("seed");

    m_seedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("appUpload"))
  {
    m_appUpload = jsonValue.GetString("appUpload");

    m_appUploadHasBeenSet = true;
  }

  if(jsonValue.ValueExists("eventCount"))
  {
    m_eventCount = jsonValue.GetInteger("eventCount");

    m_eventCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("jobTimeoutMinutes"))
  {
    m_jobTimeoutMinutes = jsonValue.GetInteger("jobTimeoutMinutes");

    m_jobTimeoutMinutesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("devicePoolArn"))
  {
    m_devicePoolArn = jsonValue.GetString("devicePoolArn");

    m_devicePoolArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("locale"))
  {
    m_locale = jsonValue.GetString("locale");

    m_localeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("radios"))
  {
    m_radios = jsonValue.GetObject("radios");

    m_radiosHasBeenSet = true;
  }

  if(jsonValue.ValueExists("location"))
  {
    m_location = jsonValue.GetObject("location");

    m_locationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("customerArtifactPaths"))
  {
    m_customerArtifactPaths = jsonValue.GetObject("customerArtifactPaths");

    m_customerArtifactPathsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("webUrl"))
  {
    m_webUrl = jsonValue.GetString("webUrl");

    m_webUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("skipAppResign"))
  {
    m_skipAppResign = jsonValue.GetBool("skipAppResign");

    m_skipAppResignHasBeenSet = true;
  }

  if(jsonValue.ValueExists("testSpecArn"))
  {
    m_testSpecArn = jsonValue.GetString("testSpecArn");

    m_testSpecArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("deviceSelectionResult"))
  {
    m_deviceSelectionResult = jsonValue.GetObject("deviceSelectionResult");

    m_deviceSelectionResultHasBeenSet = true;
  }

  if(jsonValue.ValueExists("vpcConfig"))
  {
    m_vpcConfig = jsonValue.GetObject("vpcConfig");

    m_vpcConfigHasBeenSet = true;
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

  if(m_networkProfileHasBeenSet)
  {
   payload.WithObject("networkProfile", m_networkProfile.Jsonize());

  }

  if(m_parsingResultUrlHasBeenSet)
  {
   payload.WithString("parsingResultUrl", m_parsingResultUrl);

  }

  if(m_resultCodeHasBeenSet)
  {
   payload.WithString("resultCode", ExecutionResultCodeMapper::GetNameForExecutionResultCode(m_resultCode));
  }

  if(m_seedHasBeenSet)
  {
   payload.WithInteger("seed", m_seed);

  }

  if(m_appUploadHasBeenSet)
  {
   payload.WithString("appUpload", m_appUpload);

  }

  if(m_eventCountHasBeenSet)
  {
   payload.WithInteger("eventCount", m_eventCount);

  }

  if(m_jobTimeoutMinutesHasBeenSet)
  {
   payload.WithInteger("jobTimeoutMinutes", m_jobTimeoutMinutes);

  }

  if(m_devicePoolArnHasBeenSet)
  {
   payload.WithString("devicePoolArn", m_devicePoolArn);

  }

  if(m_localeHasBeenSet)
  {
   payload.WithString("locale", m_locale);

  }

  if(m_radiosHasBeenSet)
  {
   payload.WithObject("radios", m_radios.Jsonize());

  }

  if(m_locationHasBeenSet)
  {
   payload.WithObject("location", m_location.Jsonize());

  }

  if(m_customerArtifactPathsHasBeenSet)
  {
   payload.WithObject("customerArtifactPaths", m_customerArtifactPaths.Jsonize());

  }

  if(m_webUrlHasBeenSet)
  {
   payload.WithString("webUrl", m_webUrl);

  }

  if(m_skipAppResignHasBeenSet)
  {
   payload.WithBool("skipAppResign", m_skipAppResign);

  }

  if(m_testSpecArnHasBeenSet)
  {
   payload.WithString("testSpecArn", m_testSpecArn);

  }

  if(m_deviceSelectionResultHasBeenSet)
  {
   payload.WithObject("deviceSelectionResult", m_deviceSelectionResult.Jsonize());

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
