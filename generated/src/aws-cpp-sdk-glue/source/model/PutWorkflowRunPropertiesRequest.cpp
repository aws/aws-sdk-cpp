﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/PutWorkflowRunPropertiesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String PutWorkflowRunPropertiesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_runIdHasBeenSet)
  {
   payload.WithString("RunId", m_runId);

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

Aws::Http::HeaderValueCollection PutWorkflowRunPropertiesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.PutWorkflowRunProperties"));
  return headers;

}




