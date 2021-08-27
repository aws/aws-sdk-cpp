/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/DeleteBuildRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GameLift::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteBuildRequest::DeleteBuildRequest() : 
    m_buildIdHasBeenSet(false)
{
}

Aws::String DeleteBuildRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_buildIdHasBeenSet)
  {
   payload.WithString("BuildId", m_buildId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteBuildRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "GameLift.DeleteBuild"));
  return headers;

}




