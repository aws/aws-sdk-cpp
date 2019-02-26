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

#include <aws/mediaconvert/model/CreateJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaConvert::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateJobRequest::CreateJobRequest() : 
    m_accelerationSettingsHasBeenSet(false),
    m_billingTagsSource(BillingTagsSource::NOT_SET),
    m_billingTagsSourceHasBeenSet(false),
    m_clientRequestToken(Aws::Utils::UUID::RandomUUID()),
    m_clientRequestTokenHasBeenSet(true),
    m_jobTemplateHasBeenSet(false),
    m_queueHasBeenSet(false),
    m_roleHasBeenSet(false),
    m_settingsHasBeenSet(false),
    m_statusUpdateIntervalInSecs(0),
    m_statusUpdateIntervalInSecsHasBeenSet(false),
    m_userMetadataHasBeenSet(false)
{
}

Aws::String CreateJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_accelerationSettingsHasBeenSet)
  {
   payload.WithObject("accelerationSettings", m_accelerationSettings.Jsonize());

  }

  if(m_billingTagsSourceHasBeenSet)
  {
   payload.WithString("billingTagsSource", BillingTagsSourceMapper::GetNameForBillingTagsSource(m_billingTagsSource));
  }

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("clientRequestToken", m_clientRequestToken);

  }

  if(m_jobTemplateHasBeenSet)
  {
   payload.WithString("jobTemplate", m_jobTemplate);

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

  if(m_statusUpdateIntervalInSecsHasBeenSet)
  {
   payload.WithInt64("statusUpdateIntervalInSecs", m_statusUpdateIntervalInSecs);

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

  return payload.View().WriteReadable();
}




