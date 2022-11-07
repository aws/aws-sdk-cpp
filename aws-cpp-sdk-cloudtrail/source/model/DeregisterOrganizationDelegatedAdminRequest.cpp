/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail/model/DeregisterOrganizationDelegatedAdminRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudTrail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeregisterOrganizationDelegatedAdminRequest::DeregisterOrganizationDelegatedAdminRequest() : 
    m_delegatedAdminAccountIdHasBeenSet(false)
{
}

Aws::String DeregisterOrganizationDelegatedAdminRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_delegatedAdminAccountIdHasBeenSet)
  {
   payload.WithString("DelegatedAdminAccountId", m_delegatedAdminAccountId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeregisterOrganizationDelegatedAdminRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "com.amazonaws.cloudtrail.v20131101.CloudTrail_20131101.DeregisterOrganizationDelegatedAdmin"));
  return headers;

}




