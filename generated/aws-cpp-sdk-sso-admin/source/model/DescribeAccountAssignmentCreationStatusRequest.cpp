/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-admin/model/DescribeAccountAssignmentCreationStatusRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSOAdmin::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeAccountAssignmentCreationStatusRequest::DescribeAccountAssignmentCreationStatusRequest() : 
    m_instanceArnHasBeenSet(false),
    m_accountAssignmentCreationRequestIdHasBeenSet(false)
{
}

Aws::String DescribeAccountAssignmentCreationStatusRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_instanceArnHasBeenSet)
  {
   payload.WithString("InstanceArn", m_instanceArn);

  }

  if(m_accountAssignmentCreationRequestIdHasBeenSet)
  {
   payload.WithString("AccountAssignmentCreationRequestId", m_accountAssignmentCreationRequestId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeAccountAssignmentCreationStatusRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SWBExternalService.DescribeAccountAssignmentCreationStatus"));
  return headers;

}




