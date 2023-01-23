/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/CreateWorkflowRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateWorkflowRequest::CreateWorkflowRequest() : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_defaultRunPropertiesHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_maxConcurrentRuns(0),
    m_maxConcurrentRunsHasBeenSet(false)
{
}

Aws::String CreateWorkflowRequest::SerializePayload() const
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

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("Tags", std::move(tagsJsonMap));

  }

  if(m_maxConcurrentRunsHasBeenSet)
  {
   payload.WithInteger("MaxConcurrentRuns", m_maxConcurrentRuns);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateWorkflowRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.CreateWorkflow"));
  return headers;

}




