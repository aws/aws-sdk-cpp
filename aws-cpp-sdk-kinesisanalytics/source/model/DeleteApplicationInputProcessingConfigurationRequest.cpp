﻿/*
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

#include <aws/kinesisanalytics/model/DeleteApplicationInputProcessingConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::KinesisAnalytics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteApplicationInputProcessingConfigurationRequest::DeleteApplicationInputProcessingConfigurationRequest() : 
    m_applicationNameHasBeenSet(false),
    m_currentApplicationVersionId(0),
    m_currentApplicationVersionIdHasBeenSet(false),
    m_inputIdHasBeenSet(false)
{
}

Aws::String DeleteApplicationInputProcessingConfigurationRequest::SerializePayload() const
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

  if(m_inputIdHasBeenSet)
  {
   payload.WithString("InputId", m_inputId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteApplicationInputProcessingConfigurationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "KinesisAnalytics_20150814.DeleteApplicationInputProcessingConfiguration"));
  return headers;

}




