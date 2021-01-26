/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-admin/model/DetachManagedPolicyFromPermissionSetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSOAdmin::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DetachManagedPolicyFromPermissionSetRequest::DetachManagedPolicyFromPermissionSetRequest() : 
    m_instanceArnHasBeenSet(false),
    m_permissionSetArnHasBeenSet(false),
    m_managedPolicyArnHasBeenSet(false)
{
}

Aws::String DetachManagedPolicyFromPermissionSetRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_instanceArnHasBeenSet)
  {
   payload.WithString("InstanceArn", m_instanceArn);

  }

  if(m_permissionSetArnHasBeenSet)
  {
   payload.WithString("PermissionSetArn", m_permissionSetArn);

  }

  if(m_managedPolicyArnHasBeenSet)
  {
   payload.WithString("ManagedPolicyArn", m_managedPolicyArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DetachManagedPolicyFromPermissionSetRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SWBExternalService.DetachManagedPolicyFromPermissionSet"));
  return headers;

}




