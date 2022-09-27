/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/DeleteProjectPolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Rekognition::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteProjectPolicyRequest::DeleteProjectPolicyRequest() : 
    m_projectArnHasBeenSet(false),
    m_policyNameHasBeenSet(false),
    m_policyRevisionIdHasBeenSet(false)
{
}

Aws::String DeleteProjectPolicyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_projectArnHasBeenSet)
  {
   payload.WithString("ProjectArn", m_projectArn);

  }

  if(m_policyNameHasBeenSet)
  {
   payload.WithString("PolicyName", m_policyName);

  }

  if(m_policyRevisionIdHasBeenSet)
  {
   payload.WithString("PolicyRevisionId", m_policyRevisionId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteProjectPolicyRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "RekognitionService.DeleteProjectPolicy"));
  return headers;

}




