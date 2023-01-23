/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalyticsv2/model/CreateApplicationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::KinesisAnalyticsV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateApplicationRequest::CreateApplicationRequest() : 
    m_applicationNameHasBeenSet(false),
    m_applicationDescriptionHasBeenSet(false),
    m_runtimeEnvironment(RuntimeEnvironment::NOT_SET),
    m_runtimeEnvironmentHasBeenSet(false),
    m_serviceExecutionRoleHasBeenSet(false),
    m_applicationConfigurationHasBeenSet(false),
    m_cloudWatchLoggingOptionsHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_applicationMode(ApplicationMode::NOT_SET),
    m_applicationModeHasBeenSet(false)
{
}

Aws::String CreateApplicationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_applicationNameHasBeenSet)
  {
   payload.WithString("ApplicationName", m_applicationName);

  }

  if(m_applicationDescriptionHasBeenSet)
  {
   payload.WithString("ApplicationDescription", m_applicationDescription);

  }

  if(m_runtimeEnvironmentHasBeenSet)
  {
   payload.WithString("RuntimeEnvironment", RuntimeEnvironmentMapper::GetNameForRuntimeEnvironment(m_runtimeEnvironment));
  }

  if(m_serviceExecutionRoleHasBeenSet)
  {
   payload.WithString("ServiceExecutionRole", m_serviceExecutionRole);

  }

  if(m_applicationConfigurationHasBeenSet)
  {
   payload.WithObject("ApplicationConfiguration", m_applicationConfiguration.Jsonize());

  }

  if(m_cloudWatchLoggingOptionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> cloudWatchLoggingOptionsJsonList(m_cloudWatchLoggingOptions.size());
   for(unsigned cloudWatchLoggingOptionsIndex = 0; cloudWatchLoggingOptionsIndex < cloudWatchLoggingOptionsJsonList.GetLength(); ++cloudWatchLoggingOptionsIndex)
   {
     cloudWatchLoggingOptionsJsonList[cloudWatchLoggingOptionsIndex].AsObject(m_cloudWatchLoggingOptions[cloudWatchLoggingOptionsIndex].Jsonize());
   }
   payload.WithArray("CloudWatchLoggingOptions", std::move(cloudWatchLoggingOptionsJsonList));

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  if(m_applicationModeHasBeenSet)
  {
   payload.WithString("ApplicationMode", ApplicationModeMapper::GetNameForApplicationMode(m_applicationMode));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateApplicationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "KinesisAnalytics_20180523.CreateApplication"));
  return headers;

}




