/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/mediaconvert/model/Job.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

Job::Job() : 
    m_accelerationSettingsHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_billingTagsSource(BillingTagsSource::NOT_SET),
    m_billingTagsSourceHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_errorCode(0),
    m_errorCodeHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_idHasBeenSet(false),
    m_jobTemplateHasBeenSet(false),
    m_outputGroupDetailsHasBeenSet(false),
    m_queueHasBeenSet(false),
    m_roleHasBeenSet(false),
    m_settingsHasBeenSet(false),
    m_status(JobStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusUpdateIntervalInSecs(0),
    m_statusUpdateIntervalInSecsHasBeenSet(false),
    m_timingHasBeenSet(false),
    m_userMetadataHasBeenSet(false)
{
}

Job::Job(JsonView jsonValue) : 
    m_accelerationSettingsHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_billingTagsSource(BillingTagsSource::NOT_SET),
    m_billingTagsSourceHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_errorCode(0),
    m_errorCodeHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_idHasBeenSet(false),
    m_jobTemplateHasBeenSet(false),
    m_outputGroupDetailsHasBeenSet(false),
    m_queueHasBeenSet(false),
    m_roleHasBeenSet(false),
    m_settingsHasBeenSet(false),
    m_status(JobStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusUpdateIntervalInSecs(0),
    m_statusUpdateIntervalInSecsHasBeenSet(false),
    m_timingHasBeenSet(false),
    m_userMetadataHasBeenSet(false)
{
  *this = jsonValue;
}

Job& Job::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accelerationSettings"))
  {
    m_accelerationSettings = jsonValue.GetObject("accelerationSettings");

    m_accelerationSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("billingTagsSource"))
  {
    m_billingTagsSource = BillingTagsSourceMapper::GetBillingTagsSourceForName(jsonValue.GetString("billingTagsSource"));

    m_billingTagsSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("errorCode"))
  {
    m_errorCode = jsonValue.GetInteger("errorCode");

    m_errorCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("errorMessage"))
  {
    m_errorMessage = jsonValue.GetString("errorMessage");

    m_errorMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("jobTemplate"))
  {
    m_jobTemplate = jsonValue.GetString("jobTemplate");

    m_jobTemplateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("outputGroupDetails"))
  {
    Array<JsonView> outputGroupDetailsJsonList = jsonValue.GetArray("outputGroupDetails");
    for(unsigned outputGroupDetailsIndex = 0; outputGroupDetailsIndex < outputGroupDetailsJsonList.GetLength(); ++outputGroupDetailsIndex)
    {
      m_outputGroupDetails.push_back(outputGroupDetailsJsonList[outputGroupDetailsIndex].AsObject());
    }
    m_outputGroupDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("queue"))
  {
    m_queue = jsonValue.GetString("queue");

    m_queueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("role"))
  {
    m_role = jsonValue.GetString("role");

    m_roleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("settings"))
  {
    m_settings = jsonValue.GetObject("settings");

    m_settingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = JobStatusMapper::GetJobStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statusUpdateIntervalInSecs"))
  {
    m_statusUpdateIntervalInSecs = jsonValue.GetInt64("statusUpdateIntervalInSecs");

    m_statusUpdateIntervalInSecsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timing"))
  {
    m_timing = jsonValue.GetObject("timing");

    m_timingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("userMetadata"))
  {
    Aws::Map<Aws::String, JsonView> userMetadataJsonMap = jsonValue.GetObject("userMetadata").GetAllObjects();
    for(auto& userMetadataItem : userMetadataJsonMap)
    {
      m_userMetadata[userMetadataItem.first] = userMetadataItem.second.AsString();
    }
    m_userMetadataHasBeenSet = true;
  }

  return *this;
}

JsonValue Job::Jsonize() const
{
  JsonValue payload;

  if(m_accelerationSettingsHasBeenSet)
  {
   payload.WithObject("accelerationSettings", m_accelerationSettings.Jsonize());

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_billingTagsSourceHasBeenSet)
  {
   payload.WithString("billingTagsSource", BillingTagsSourceMapper::GetNameForBillingTagsSource(m_billingTagsSource));
  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_errorCodeHasBeenSet)
  {
   payload.WithInteger("errorCode", m_errorCode);

  }

  if(m_errorMessageHasBeenSet)
  {
   payload.WithString("errorMessage", m_errorMessage);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_jobTemplateHasBeenSet)
  {
   payload.WithString("jobTemplate", m_jobTemplate);

  }

  if(m_outputGroupDetailsHasBeenSet)
  {
   Array<JsonValue> outputGroupDetailsJsonList(m_outputGroupDetails.size());
   for(unsigned outputGroupDetailsIndex = 0; outputGroupDetailsIndex < outputGroupDetailsJsonList.GetLength(); ++outputGroupDetailsIndex)
   {
     outputGroupDetailsJsonList[outputGroupDetailsIndex].AsObject(m_outputGroupDetails[outputGroupDetailsIndex].Jsonize());
   }
   payload.WithArray("outputGroupDetails", std::move(outputGroupDetailsJsonList));

  }

  if(m_queueHasBeenSet)
  {
   payload.WithString("queue", m_queue);

  }

  if(m_roleHasBeenSet)
  {
   payload.WithString("role", m_role);

  }

  if(m_settingsHasBeenSet)
  {
   payload.WithObject("settings", m_settings.Jsonize());

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", JobStatusMapper::GetNameForJobStatus(m_status));
  }

  if(m_statusUpdateIntervalInSecsHasBeenSet)
  {
   payload.WithInt64("statusUpdateIntervalInSecs", m_statusUpdateIntervalInSecs);

  }

  if(m_timingHasBeenSet)
  {
   payload.WithObject("timing", m_timing.Jsonize());

  }

  if(m_userMetadataHasBeenSet)
  {
   JsonValue userMetadataJsonMap;
   for(auto& userMetadataItem : m_userMetadata)
   {
     userMetadataJsonMap.WithString(userMetadataItem.first, userMetadataItem.second);
   }
   payload.WithObject("userMetadata", std::move(userMetadataJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
