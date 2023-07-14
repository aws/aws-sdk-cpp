/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloud9/model/DeleteEnvironmentMembershipRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Cloud9::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteEnvironmentMembershipRequest::DeleteEnvironmentMembershipRequest() : 
    m_environmentIdHasBeenSet(false),
    m_userArnHasBeenSet(false)
{
}

Aws::String DeleteEnvironmentMembershipRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_environmentIdHasBeenSet)
  {
   payload.WithString("environmentId", m_environmentId);

  }

  if(m_userArnHasBeenSet)
  {
   payload.WithString("userArn", m_userArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteEnvironmentMembershipRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSCloud9WorkspaceManagementService.DeleteEnvironmentMembership"));
  return headers;

}




