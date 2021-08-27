/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/organizations/model/DeregisterDelegatedAdministratorRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Organizations::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeregisterDelegatedAdministratorRequest::DeregisterDelegatedAdministratorRequest() : 
    m_accountIdHasBeenSet(false),
    m_servicePrincipalHasBeenSet(false)
{
}

Aws::String DeregisterDelegatedAdministratorRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("AccountId", m_accountId);

  }

  if(m_servicePrincipalHasBeenSet)
  {
   payload.WithString("ServicePrincipal", m_servicePrincipal);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeregisterDelegatedAdministratorRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSOrganizationsV20161128.DeregisterDelegatedAdministrator"));
  return headers;

}




