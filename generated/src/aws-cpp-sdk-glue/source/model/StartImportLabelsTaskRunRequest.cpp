/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/StartImportLabelsTaskRunRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartImportLabelsTaskRunRequest::StartImportLabelsTaskRunRequest() : 
    m_transformIdHasBeenSet(false),
    m_inputS3PathHasBeenSet(false),
    m_replaceAllLabels(false),
    m_replaceAllLabelsHasBeenSet(false)
{
}

Aws::String StartImportLabelsTaskRunRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_transformIdHasBeenSet)
  {
   payload.WithString("TransformId", m_transformId);

  }

  if(m_inputS3PathHasBeenSet)
  {
   payload.WithString("InputS3Path", m_inputS3Path);

  }

  if(m_replaceAllLabelsHasBeenSet)
  {
   payload.WithBool("ReplaceAllLabels", m_replaceAllLabels);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StartImportLabelsTaskRunRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.StartImportLabelsTaskRun"));
  return headers;

}




