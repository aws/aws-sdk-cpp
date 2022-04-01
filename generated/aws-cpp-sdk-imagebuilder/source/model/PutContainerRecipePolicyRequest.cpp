/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/PutContainerRecipePolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::imagebuilder::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutContainerRecipePolicyRequest::PutContainerRecipePolicyRequest() : 
    m_containerRecipeArnHasBeenSet(false),
    m_policyHasBeenSet(false)
{
}

Aws::String PutContainerRecipePolicyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_containerRecipeArnHasBeenSet)
  {
   payload.WithString("containerRecipeArn", m_containerRecipeArn);

  }

  if(m_policyHasBeenSet)
  {
   payload.WithString("policy", m_policy);

  }

  return payload.View().WriteReadable();
}




