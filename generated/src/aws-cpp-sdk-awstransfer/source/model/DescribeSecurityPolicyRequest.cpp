/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/DescribeSecurityPolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Transfer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeSecurityPolicyRequest::DescribeSecurityPolicyRequest() : 
    m_securityPolicyNameHasBeenSet(false)
{
}

Aws::String DescribeSecurityPolicyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_securityPolicyNameHasBeenSet)
  {
   payload.WithString("SecurityPolicyName", m_securityPolicyName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeSecurityPolicyRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "TransferService.DescribeSecurityPolicy"));
  return headers;

}




