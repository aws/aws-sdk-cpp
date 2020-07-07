/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/DeleteResourcePolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteResourcePolicyRequest::DeleteResourcePolicyRequest() : 
    m_policyHashConditionHasBeenSet(false),
    m_resourceArnHasBeenSet(false)
{
}

Aws::String DeleteResourcePolicyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_policyHashConditionHasBeenSet)
  {
   payload.WithString("PolicyHashCondition", m_policyHashCondition);

  }

  if(m_resourceArnHasBeenSet)
  {
   payload.WithString("ResourceArn", m_resourceArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteResourcePolicyRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.DeleteResourcePolicy"));
  return headers;

}




