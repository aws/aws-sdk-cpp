/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/PutImageRecipePolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::imagebuilder::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutImageRecipePolicyRequest::PutImageRecipePolicyRequest() : 
    m_imageRecipeArnHasBeenSet(false),
    m_policyHasBeenSet(false)
{
}

Aws::String PutImageRecipePolicyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_imageRecipeArnHasBeenSet)
  {
   payload.WithString("imageRecipeArn", m_imageRecipeArn);

  }

  if(m_policyHasBeenSet)
  {
   payload.WithString("policy", m_policy);

  }

  return payload.View().WriteReadable();
}




