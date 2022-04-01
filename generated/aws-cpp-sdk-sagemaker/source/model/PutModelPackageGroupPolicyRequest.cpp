/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/PutModelPackageGroupPolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutModelPackageGroupPolicyRequest::PutModelPackageGroupPolicyRequest() : 
    m_modelPackageGroupNameHasBeenSet(false),
    m_resourcePolicyHasBeenSet(false)
{
}

Aws::String PutModelPackageGroupPolicyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_modelPackageGroupNameHasBeenSet)
  {
   payload.WithString("ModelPackageGroupName", m_modelPackageGroupName);

  }

  if(m_resourcePolicyHasBeenSet)
  {
   payload.WithString("ResourcePolicy", m_resourcePolicy);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutModelPackageGroupPolicyRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.PutModelPackageGroupPolicy"));
  return headers;

}




