/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/DeleteScriptRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GameLift::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteScriptRequest::DeleteScriptRequest() : 
    m_scriptIdHasBeenSet(false)
{
}

Aws::String DeleteScriptRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_scriptIdHasBeenSet)
  {
   payload.WithString("ScriptId", m_scriptId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteScriptRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "GameLift.DeleteScript"));
  return headers;

}




