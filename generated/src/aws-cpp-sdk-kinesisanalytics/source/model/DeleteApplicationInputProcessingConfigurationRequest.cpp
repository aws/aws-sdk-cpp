/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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




