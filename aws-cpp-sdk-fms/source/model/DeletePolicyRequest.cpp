/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/DeletePolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::FMS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeletePolicyRequest::DeletePolicyRequest() : 
    m_policyIdHasBeenSet(false),
    m_deleteAllPolicyResources(false),
    m_deleteAllPolicyResourcesHasBeenSet(false)
{
}

Aws::String DeletePolicyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_policyIdHasBeenSet)
  {
   payload.WithString("PolicyId", m_policyId);

  }

  if(m_deleteAllPolicyResourcesHasBeenSet)
  {
   payload.WithBool("DeleteAllPolicyResources", m_deleteAllPolicyResources);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeletePolicyRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSFMS_20180101.DeletePolicy"));
  return headers;

}




