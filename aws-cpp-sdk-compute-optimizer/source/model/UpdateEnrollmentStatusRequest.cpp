/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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




