/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cost-optimization-hub/model/UpdateEnrollmentStatusRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CostOptimizationHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateEnrollmentStatusRequest::UpdateEnrollmentStatusRequest() : 
    m_includeMemberAccounts(false),
    m_includeMemberAccountsHasBeenSet(false),
    m_status(EnrollmentStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

Aws::String UpdateEnrollmentStatusRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_includeMemberAccountsHasBeenSet)
  {
   payload.WithBool("includeMemberAccounts", m_includeMemberAccounts);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", EnrollmentStatusMapper::GetNameForEnrollmentStatus(m_status));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateEnrollmentStatusRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CostOptimizationHubService.UpdateEnrollmentStatus"));
  return headers;

}




