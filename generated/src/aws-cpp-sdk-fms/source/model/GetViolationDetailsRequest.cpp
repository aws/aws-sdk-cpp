/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/GetViolationDetailsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::FMS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetViolationDetailsRequest::GetViolationDetailsRequest() : 
    m_policyIdHasBeenSet(false),
    m_memberAccountHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_resourceTypeHasBeenSet(false)
{
}

Aws::String GetViolationDetailsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_policyIdHasBeenSet)
  {
   payload.WithString("PolicyId", m_policyId);

  }

  if(m_memberAccountHasBeenSet)
  {
   payload.WithString("MemberAccount", m_memberAccount);

  }

  if(m_resourceIdHasBeenSet)
  {
   payload.WithString("ResourceId", m_resourceId);

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("ResourceType", m_resourceType);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetViolationDetailsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSFMS_20180101.GetViolationDetails"));
  return headers;

}




