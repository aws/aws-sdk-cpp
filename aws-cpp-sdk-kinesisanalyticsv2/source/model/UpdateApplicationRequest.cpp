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

#include <aws/kinesisanalyticsv2/model/UpdateApplicationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::KinesisAnalyticsV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateApplicationRequest::UpdateApplicationRequest() : 
    m_applicationNameHasBeenSet(false),
    m_currentApplicationVersionId(0),
    m_currentApplicationVersionIdHasBeenSet(false),
    m_applicationConfigurationUpdateHasBeenSet(false),
    m_serviceExecutionRoleUpdateHasBeenSet(false),
    m_runConfigurationUpdateHasBeenSet(false),
    m_cloudWatchLoggingOptionUpdatesHasBeenSet(false)
{
}

Aws::String UpdateApplicationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_applicationNameHasBeenSet)
  {
   payload.WithString("ApplicationName", m_applicationName);

  }

  if(m_currentApplicationVersionIdHasBeenSet)
  {
   payload.WithInt64("CurrentApplicationVersionId", m_currentApplicationVersionId);

  }

  if(m_applicationConfigurationUpdateHasBeenSet)
  {
   payload.WithObject("ApplicationConfigurationUpdate", m_applicationConfigurationUpdate.Jsonize());

  }

  if(m_serviceExecutionRoleUpdateHasBeenSet)
  {
   payload.WithString("ServiceExecutionRoleUpdate", m_serviceExecutionRoleUpdate);

  }

  if(m_runConfigurationUpdateHasBeenSet)
  {
   payload.WithObject("RunConfigurationUpdate", m_runConfigurationUpdate.Jsonize());

  }

  if(m_cloudWatchLoggingOptionUpdatesHasBeenSet)
  {
   Array<JsonValue> cloudWatchLoggingOptionUpdatesJsonList(m_cloudWatchLoggingOptionUpdates.size());
   for(unsigned cloudWatchLoggingOptionUpdatesIndex = 0; cloudWatchLoggingOptionUpdatesIndex < cloudWatchLoggingOptionUpdatesJsonList.GetLength(); ++cloudWatchLoggingOptionUpdatesIndex)
   {
     cloudWatchLoggingOptionUpdatesJsonList[cloudWatchLoggingOptionUpdatesIndex].AsObject(m_cloudWatchLoggingOptionUpdates[cloudWatchLoggingOptionUpdatesIndex].Jsonize());
   }
   payload.WithArray("CloudWatchLoggingOptionUpdates", std::move(cloudWatchLoggingOptionUpdatesJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateApplicationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "KinesisAnalytics_20180523.UpdateApplication"));
  return headers;

}




