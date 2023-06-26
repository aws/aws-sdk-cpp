/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/UpdateBuildRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GameLift::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateBuildRequest::UpdateBuildRequest() : 
    m_buildIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_versionHasBeenSet(false)
{
}

Aws::String UpdateBuildRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_buildIdHasBeenSet)
  {
   payload.WithString("BuildId", m_buildId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_versionHasBeenSet)
  {
   payload.WithString("Version", m_version);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateBuildRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "GameLift.UpdateBuild"));
  return headers;

}




