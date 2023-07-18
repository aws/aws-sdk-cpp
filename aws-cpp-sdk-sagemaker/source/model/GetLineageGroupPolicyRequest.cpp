/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/GetLineageGroupPolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetLineageGroupPolicyRequest::GetLineageGroupPolicyRequest() : 
    m_lineageGroupNameHasBeenSet(false)
{
}

Aws::String GetLineageGroupPolicyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_lineageGroupNameHasBeenSet)
  {
   payload.WithString("LineageGroupName", m_lineageGroupName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetLineageGroupPolicyRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.GetLineageGroupPolicy"));
  return headers;

}




