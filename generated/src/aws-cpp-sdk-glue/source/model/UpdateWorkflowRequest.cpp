/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/UpdateWorkflowRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateWorkflowRequest::UpdateWorkflowRequest() : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_defaultRunPropertiesHasBeenSet(false),
    m_maxConcurrentRuns(0),
    m_maxConcurrentRunsHasBeenSet(false)
{
}

Aws::String UpdateWorkflowRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_defaultRunPropertiesHasBeenSet)
  {
   JsonValue defaultRunPropertiesJsonMap;
   for(auto& defaultRunPropertiesItem : m_defaultRunProperties)
   {
     defaultRunPropertiesJsonMap.WithString(defaultRunPropertiesItem.first, defaultRunPropertiesItem.second);
   }
   payload.WithObject("DefaultRunProperties", std::move(defaultRunPropertiesJsonMap));

  }

  if(m_maxConcurrentRunsHasBeenSet)
  {
   payload.WithInteger("MaxConcurrentRuns", m_maxConcurrentRuns);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateWorkflowRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.UpdateWorkflow"));
  return headers;

}




