/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/GetBlueprintRunRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetBlueprintRunRequest::GetBlueprintRunRequest() : 
    m_blueprintNameHasBeenSet(false),
    m_runIdHasBeenSet(false)
{
}

Aws::String GetBlueprintRunRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_blueprintNameHasBeenSet)
  {
   payload.WithString("BlueprintName", m_blueprintName);

  }

  if(m_runIdHasBeenSet)
  {
   payload.WithString("RunId", m_runId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetBlueprintRunRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.GetBlueprintRun"));
  return headers;

}




