/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail/model/RegisterOrganizationDelegatedAdminRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudTrail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RegisterOrganizationDelegatedAdminRequest::RegisterOrganizationDelegatedAdminRequest() : 
    m_memberAccountIdHasBeenSet(false)
{
}

Aws::String RegisterOrganizationDelegatedAdminRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_memberAccountIdHasBeenSet)
  {
   payload.WithString("MemberAccountId", m_memberAccountId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection RegisterOrganizationDelegatedAdminRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "com.amazonaws.cloudtrail.v20131101.CloudTrail_20131101.RegisterOrganizationDelegatedAdmin"));
  return headers;

}




