/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/organizations/model/CreateOrganizationalUnitRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Organizations::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateOrganizationalUnitRequest::CreateOrganizationalUnitRequest() : 
    m_parentIdHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

Aws::String CreateOrganizationalUnitRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_parentIdHasBeenSet)
  {
   payload.WithString("ParentId", m_parentId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateOrganizationalUnitRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSOrganizationsV20161128.CreateOrganizationalUnit"));
  return headers;

}




