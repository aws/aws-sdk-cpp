/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/CreateJobTemplateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateJobTemplateRequest::CreateJobTemplateRequest() : 
    m_jobTemplateIdHasBeenSet(false),
    m_jobArnHasBeenSet(false),
    m_documentSourceHasBeenSet(false),
    m_documentHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_presignedUrlConfigHasBeenSet(false),
    m_jobExecutionsRolloutConfigHasBeenSet(false),
    m_abortConfigHasBeenSet(false),
    m_timeoutConfigHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_jobExecutionsRetryConfigHasBeenSet(false)
{
}

Aws::String CreateJobTemplateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_jobArnHasBeenSet)
  {
   payload.WithString("jobArn", m_jobArn);

  }

  if(m_documentSourceHasBeenSet)
  {
   payload.WithString("documentSource", m_documentSource);

  }

  if(m_documentHasBeenSet)
  {
   payload.WithString("document", m_document);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_presignedUrlConfigHasBeenSet)
  {
   payload.WithObject("presignedUrlConfig", m_presignedUrlConfig.Jsonize());

  }

  if(m_jobExecutionsRolloutConfigHasBeenSet)
  {
   payload.WithObject("jobExecutionsRolloutConfig", m_jobExecutionsRolloutConfig.Jsonize());

  }

  if(m_abortConfigHasBeenSet)
  {
   payload.WithObject("abortConfig", m_abortConfig.Jsonize());

  }

  if(m_timeoutConfigHasBeenSet)
  {
   payload.WithObject("timeoutConfig", m_timeoutConfig.Jsonize());

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("tags", std::move(tagsJsonList));

  }

  if(m_jobExecutionsRetryConfigHasBeenSet)
  {
   payload.WithObject("jobExecutionsRetryConfig", m_jobExecutionsRetryConfig.Jsonize());

  }

  return payload.View().WriteReadable();
}




