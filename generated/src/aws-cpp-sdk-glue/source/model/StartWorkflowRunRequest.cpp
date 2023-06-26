/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/StartWorkflowRunRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartWorkflowRunRequest::StartWorkflowRunRequest() : 
    m_nameHasBeenSet(false),
    m_runPropertiesHasBeenSet(false)
{
}

Aws::String StartWorkflowRunRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_runPropertiesHasBeenSet)
  {
   JsonValue runPropertiesJsonMap;
   for(auto& runPropertiesItem : m_runProperties)
   {
     runPropertiesJsonMap.WithString(runPropertiesItem.first, runPropertiesItem.second);
   }
   payload.WithObject("RunProperties", std::move(runPropertiesJsonMap));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StartWorkflowRunRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.StartWorkflowRun"));
  return headers;

}




