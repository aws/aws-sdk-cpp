/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/PutImagePolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::imagebuilder::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutImagePolicyRequest::PutImagePolicyRequest() : 
    m_imageArnHasBeenSet(false),
    m_policyHasBeenSet(false)
{
}

Aws::String PutImagePolicyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_imageArnHasBeenSet)
  {
   payload.WithString("imageArn", m_imageArn);

  }

  if(m_policyHasBeenSet)
  {
   payload.WithString("policy", m_policy);

  }

  return payload.View().WriteReadable();
}




