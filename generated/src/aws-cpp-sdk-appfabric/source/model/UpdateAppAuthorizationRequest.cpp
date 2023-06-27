/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appfabric/model/UpdateAppAuthorizationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppFabric::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateAppAuthorizationRequest::UpdateAppAuthorizationRequest() : 
    m_appBundleIdentifierHasBeenSet(false),
    m_appAuthorizationIdentifierHasBeenSet(false),
    m_credentialHasBeenSet(false),
    m_tenantHasBeenSet(false)
{
}

Aws::String UpdateAppAuthorizationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_credentialHasBeenSet)
  {
   payload.WithObject("credential", m_credential.Jsonize());

  }

  if(m_tenantHasBeenSet)
  {
   payload.WithObject("tenant", m_tenant.Jsonize());

  }

  return payload.View().WriteReadable();
}




