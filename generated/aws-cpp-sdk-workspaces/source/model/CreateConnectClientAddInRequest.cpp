/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/CreateConnectClientAddInRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkSpaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateConnectClientAddInRequest::CreateConnectClientAddInRequest() : 
    m_resourceIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_uRLHasBeenSet(false)
{
}

Aws::String CreateConnectClientAddInRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_resourceIdHasBeenSet)
  {
   payload.WithString("ResourceId", m_resourceId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_uRLHasBeenSet)
  {
   payload.WithString("URL", m_uRL);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateConnectClientAddInRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "WorkspacesService.CreateConnectClientAddIn"));
  return headers;

}




