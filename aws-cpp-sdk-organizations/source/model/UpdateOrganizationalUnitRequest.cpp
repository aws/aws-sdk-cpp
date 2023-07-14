/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/organizations/model/UpdateOrganizationalUnitRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Organizations::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateOrganizationalUnitRequest::UpdateOrganizationalUnitRequest() : 
    m_organizationalUnitIdHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

Aws::String UpdateOrganizationalUnitRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_organizationalUnitIdHasBeenSet)
  {
   payload.WithString("OrganizationalUnitId", m_organizationalUnitId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateOrganizationalUnitRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSOrganizationsV20161128.UpdateOrganizationalUnit"));
  return headers;

}




