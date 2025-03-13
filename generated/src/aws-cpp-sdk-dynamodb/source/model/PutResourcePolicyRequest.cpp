/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/PutResourcePolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DynamoDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String PutResourcePolicyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_resourceArnHasBeenSet)
  {
   payload.WithString("ResourceArn", m_resourceArn);

  }

  if(m_policyHasBeenSet)
  {
   payload.WithString("Policy", m_policy);

  }

  if(m_expectedRevisionIdHasBeenSet)
  {
   payload.WithString("ExpectedRevisionId", m_expectedRevisionId);

  }

  if(m_confirmRemoveSelfResourceAccessHasBeenSet)
  {
   payload.WithBool("ConfirmRemoveSelfResourceAccess", m_confirmRemoveSelfResourceAccess);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutResourcePolicyRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DynamoDB_20120810.PutResourcePolicy"));
  return headers;

}



PutResourcePolicyRequest::EndpointParameters PutResourcePolicyRequest::GetEndpointContextParams() const
{
    EndpointParameters parameters;
    // Operation context parameters
    if (ResourceArnHasBeenSet()) {
        parameters.emplace_back(Aws::String("ResourceArn"), this->GetResourceArn(), Aws::Endpoint::EndpointParameter::ParameterOrigin::OPERATION_CONTEXT);
    }
    return parameters;
}


