/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/AssociateApplicationToEntitlementRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppStream::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AssociateApplicationToEntitlementRequest::AssociateApplicationToEntitlementRequest() : 
    m_stackNameHasBeenSet(false),
    m_entitlementNameHasBeenSet(false),
    m_applicationIdentifierHasBeenSet(false)
{
}

Aws::String AssociateApplicationToEntitlementRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_stackNameHasBeenSet)
  {
   payload.WithString("StackName", m_stackName);

  }

  if(m_entitlementNameHasBeenSet)
  {
   payload.WithString("EntitlementName", m_entitlementName);

  }

  if(m_applicationIdentifierHasBeenSet)
  {
   payload.WithString("ApplicationIdentifier", m_applicationIdentifier);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection AssociateApplicationToEntitlementRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PhotonAdminProxyService.AssociateApplicationToEntitlement"));
  return headers;

}




