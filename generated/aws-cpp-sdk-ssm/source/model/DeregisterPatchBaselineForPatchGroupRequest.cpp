/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/DeregisterPatchBaselineForPatchGroupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeregisterPatchBaselineForPatchGroupRequest::DeregisterPatchBaselineForPatchGroupRequest() : 
    m_baselineIdHasBeenSet(false),
    m_patchGroupHasBeenSet(false)
{
}

Aws::String DeregisterPatchBaselineForPatchGroupRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_baselineIdHasBeenSet)
  {
   payload.WithString("BaselineId", m_baselineId);

  }

  if(m_patchGroupHasBeenSet)
  {
   payload.WithString("PatchGroup", m_patchGroup);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeregisterPatchBaselineForPatchGroupRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonSSM.DeregisterPatchBaselineForPatchGroup"));
  return headers;

}




