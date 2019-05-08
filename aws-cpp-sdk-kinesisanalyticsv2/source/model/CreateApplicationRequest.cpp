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
    m_tagsHasBeenSet(false)
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
   Array<JsonValue> cloudWatchLoggingOptionsJsonList(m_cloudWatchLoggingOptions.size());
   for(unsigned cloudWatchLoggingOptionsIndex = 0; cloudWatchLoggingOptionsIndex < cloudWatchLoggingOptionsJsonList.GetLength(); ++cloudWatchLoggingOptionsIndex)
   {
     cloudWatchLoggingOptionsJsonList[cloudWatchLoggingOptionsIndex].AsObject(m_cloudWatchLoggingOptions[cloudWatchLoggingOptionsIndex].Jsonize());
   }
   payload.WithArray("CloudWatchLoggingOptions", std::move(cloudWatchLoggingOptionsJsonList));

  }

  if(m_tagsHasBeenSet)
  {
   Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateApplicationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "KinesisAnalytics_20180523.CreateApplication"));
  return headers;

}




