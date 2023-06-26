/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/UpdateEnrollmentStatusRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ComputeOptimizer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateEnrollmentStatusRequest::UpdateEnrollmentStatusRequest() : 
    m_status(Status::NOT_SET),
    m_statusHasBeenSet(false),
    m_includeMemberAccounts(false),
    m_includeMemberAccountsHasBeenSet(false)
{
}

Aws::String UpdateEnrollmentStatusRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", StatusMapper::GetNameForStatus(m_status));
  }

  if(m_includeMemberAccountsHasBeenSet)
  {
   payload.WithBool("includeMemberAccounts", m_includeMemberAccounts);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateEnrollmentStatusRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "ComputeOptimizerService.UpdateEnrollmentStatus"));
  return headers;

}




