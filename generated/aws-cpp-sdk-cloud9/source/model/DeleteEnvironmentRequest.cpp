/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloud9/model/DeleteEnvironmentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Cloud9::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteEnvironmentRequest::DeleteEnvironmentRequest() : 
    m_environmentIdHasBeenSet(false)
{
}

Aws::String DeleteEnvironmentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_environmentIdHasBeenSet)
  {
   payload.WithString("environmentId", m_environmentId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteEnvironmentRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSCloud9WorkspaceManagementService.DeleteEnvironment"));
  return headers;

}




