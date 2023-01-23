/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/StartImageBuilderRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppStream::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartImageBuilderRequest::StartImageBuilderRequest() : 
    m_nameHasBeenSet(false),
    m_appstreamAgentVersionHasBeenSet(false)
{
}

Aws::String StartImageBuilderRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_appstreamAgentVersionHasBeenSet)
  {
   payload.WithString("AppstreamAgentVersion", m_appstreamAgentVersion);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StartImageBuilderRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PhotonAdminProxyService.StartImageBuilder"));
  return headers;

}




