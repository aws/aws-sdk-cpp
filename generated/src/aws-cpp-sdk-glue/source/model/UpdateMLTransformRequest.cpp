/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/UpdateMLTransformRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateMLTransformRequest::UpdateMLTransformRequest() : 
    m_transformIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_roleHasBeenSet(false),
    m_glueVersionHasBeenSet(false),
    m_maxCapacity(0.0),
    m_maxCapacityHasBeenSet(false),
    m_workerType(WorkerType::NOT_SET),
    m_workerTypeHasBeenSet(false),
    m_numberOfWorkers(0),
    m_numberOfWorkersHasBeenSet(false),
    m_timeout(0),
    m_timeoutHasBeenSet(false),
    m_maxRetries(0),
    m_maxRetriesHasBeenSet(false)
{
}

Aws::String UpdateMLTransformRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_transformIdHasBeenSet)
  {
   payload.WithString("TransformId", m_transformId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_parametersHasBeenSet)
  {
   payload.WithObject("Parameters", m_parameters.Jsonize());

  }

  if(m_roleHasBeenSet)
  {
   payload.WithString("Role", m_role);

  }

  if(m_glueVersionHasBeenSet)
  {
   payload.WithString("GlueVersion", m_glueVersion);

  }

  if(m_maxCapacityHasBeenSet)
  {
   payload.WithDouble("MaxCapacity", m_maxCapacity);

  }

  if(m_workerTypeHasBeenSet)
  {
   payload.WithString("WorkerType", WorkerTypeMapper::GetNameForWorkerType(m_workerType));
  }

  if(m_numberOfWorkersHasBeenSet)
  {
   payload.WithInteger("NumberOfWorkers", m_numberOfWorkers);

  }

  if(m_timeoutHasBeenSet)
  {
   payload.WithInteger("Timeout", m_timeout);

  }

  if(m_maxRetriesHasBeenSet)
  {
   payload.WithInteger("MaxRetries", m_maxRetries);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateMLTransformRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.UpdateMLTransform"));
  return headers;

}




