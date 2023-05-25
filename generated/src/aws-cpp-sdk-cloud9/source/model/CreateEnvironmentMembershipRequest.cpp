/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloud9/model/CreateEnvironmentMembershipRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Cloud9::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateEnvironmentMembershipRequest::CreateEnvironmentMembershipRequest() : 
    m_environmentIdHasBeenSet(false),
    m_userArnHasBeenSet(false),
    m_permissions(MemberPermissions::NOT_SET),
    m_permissionsHasBeenSet(false)
{
}

Aws::String CreateEnvironmentMembershipRequest::SerializePayload() const
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

  if(m_permissionsHasBeenSet)
  {
   payload.WithString("permissions", MemberPermissionsMapper::GetNameForMemberPermissions(m_permissions));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateEnvironmentMembershipRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSCloud9WorkspaceManagementService.CreateEnvironmentMembership"));
  return headers;

}




