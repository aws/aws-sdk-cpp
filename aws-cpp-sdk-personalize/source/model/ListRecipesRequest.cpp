﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize/model/ListRecipesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Personalize::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListRecipesRequest::ListRecipesRequest() : 
    m_recipeProvider(RecipeProvider::NOT_SET),
    m_recipeProviderHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_domain(Domain::NOT_SET),
    m_domainHasBeenSet(false)
{
}

Aws::String ListRecipesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_recipeProviderHasBeenSet)
  {
   payload.WithString("recipeProvider", RecipeProviderMapper::GetNameForRecipeProvider(m_recipeProvider));
  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("maxResults", m_maxResults);

  }

  if(m_domainHasBeenSet)
  {
   payload.WithString("domain", DomainMapper::GetNameForDomain(m_domain));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListRecipesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonPersonalize.ListRecipes"));
  return headers;

}




