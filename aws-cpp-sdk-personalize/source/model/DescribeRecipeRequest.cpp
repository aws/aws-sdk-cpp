/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize/model/DescribeRecipeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Personalize::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeRecipeRequest::DescribeRecipeRequest() : 
    m_recipeArnHasBeenSet(false)
{
}

Aws::String DescribeRecipeRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_recipeArnHasBeenSet)
  {
   payload.WithString("recipeArn", m_recipeArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeRecipeRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonPersonalize.DescribeRecipe"));
  return headers;

}




