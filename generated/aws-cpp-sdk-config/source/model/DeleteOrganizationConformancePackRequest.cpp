/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/DeleteOrganizationConformancePackRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ConfigService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteOrganizationConformancePackRequest::DeleteOrganizationConformancePackRequest() : 
    m_organizationConformancePackNameHasBeenSet(false)
{
}

Aws::String DeleteOrganizationConformancePackRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_organizationConformancePackNameHasBeenSet)
  {
   payload.WithString("OrganizationConformancePackName", m_organizationConformancePackName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteOrganizationConformancePackRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "StarlingDoveService.DeleteOrganizationConformancePack"));
  return headers;

}




