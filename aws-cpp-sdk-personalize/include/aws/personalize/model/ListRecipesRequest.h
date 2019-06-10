/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/personalize/PersonalizeRequest.h>
#include <aws/personalize/model/RecipeProvider.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Personalize
{
namespace Model
{

  /**
   */
  class AWS_PERSONALIZE_API ListRecipesRequest : public PersonalizeRequest
  {
  public:
    ListRecipesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListRecipes"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The default is <code>SERVICE</code>.</p>
     */
    inline const RecipeProvider& GetRecipeProvider() const{ return m_recipeProvider; }

    /**
     * <p>The default is <code>SERVICE</code>.</p>
     */
    inline bool RecipeProviderHasBeenSet() const { return m_recipeProviderHasBeenSet; }

    /**
     * <p>The default is <code>SERVICE</code>.</p>
     */
    inline void SetRecipeProvider(const RecipeProvider& value) { m_recipeProviderHasBeenSet = true; m_recipeProvider = value; }

    /**
     * <p>The default is <code>SERVICE</code>.</p>
     */
    inline void SetRecipeProvider(RecipeProvider&& value) { m_recipeProviderHasBeenSet = true; m_recipeProvider = std::move(value); }

    /**
     * <p>The default is <code>SERVICE</code>.</p>
     */
    inline ListRecipesRequest& WithRecipeProvider(const RecipeProvider& value) { SetRecipeProvider(value); return *this;}

    /**
     * <p>The default is <code>SERVICE</code>.</p>
     */
    inline ListRecipesRequest& WithRecipeProvider(RecipeProvider&& value) { SetRecipeProvider(std::move(value)); return *this;}


    /**
     * <p>A token returned from the previous call to <code>ListRecipes</code> for
     * getting the next set of recipes (if they exist).</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token returned from the previous call to <code>ListRecipes</code> for
     * getting the next set of recipes (if they exist).</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A token returned from the previous call to <code>ListRecipes</code> for
     * getting the next set of recipes (if they exist).</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A token returned from the previous call to <code>ListRecipes</code> for
     * getting the next set of recipes (if they exist).</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A token returned from the previous call to <code>ListRecipes</code> for
     * getting the next set of recipes (if they exist).</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A token returned from the previous call to <code>ListRecipes</code> for
     * getting the next set of recipes (if they exist).</p>
     */
    inline ListRecipesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token returned from the previous call to <code>ListRecipes</code> for
     * getting the next set of recipes (if they exist).</p>
     */
    inline ListRecipesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token returned from the previous call to <code>ListRecipes</code> for
     * getting the next set of recipes (if they exist).</p>
     */
    inline ListRecipesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of recipes to return.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of recipes to return.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of recipes to return.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of recipes to return.</p>
     */
    inline ListRecipesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    RecipeProvider m_recipeProvider;
    bool m_recipeProviderHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
