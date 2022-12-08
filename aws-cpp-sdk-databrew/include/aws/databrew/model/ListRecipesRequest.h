/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrew_EXPORTS.h>
#include <aws/databrew/GlueDataBrewRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace GlueDataBrew
{
namespace Model
{

  /**
   */
  class ListRecipesRequest : public GlueDataBrewRequest
  {
  public:
    AWS_GLUEDATABREW_API ListRecipesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListRecipes"; }

    AWS_GLUEDATABREW_API Aws::String SerializePayload() const override;

    AWS_GLUEDATABREW_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The maximum number of results to return in this request. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return in this request. </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return in this request. </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return in this request. </p>
     */
    inline ListRecipesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token returned by a previous call to retrieve the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token returned by a previous call to retrieve the next set of
     * results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token returned by a previous call to retrieve the next set of
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token returned by a previous call to retrieve the next set of
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token returned by a previous call to retrieve the next set of
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token returned by a previous call to retrieve the next set of
     * results.</p>
     */
    inline ListRecipesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token returned by a previous call to retrieve the next set of
     * results.</p>
     */
    inline ListRecipesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token returned by a previous call to retrieve the next set of
     * results.</p>
     */
    inline ListRecipesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Return only those recipes with a version identifier of
     * <code>LATEST_WORKING</code> or <code>LATEST_PUBLISHED</code>. If
     * <code>RecipeVersion</code> is omitted, <code>ListRecipes</code> returns all of
     * the <code>LATEST_PUBLISHED</code> recipe versions.</p> <p>Valid values:
     * <code>LATEST_WORKING</code> | <code>LATEST_PUBLISHED</code> </p>
     */
    inline const Aws::String& GetRecipeVersion() const{ return m_recipeVersion; }

    /**
     * <p>Return only those recipes with a version identifier of
     * <code>LATEST_WORKING</code> or <code>LATEST_PUBLISHED</code>. If
     * <code>RecipeVersion</code> is omitted, <code>ListRecipes</code> returns all of
     * the <code>LATEST_PUBLISHED</code> recipe versions.</p> <p>Valid values:
     * <code>LATEST_WORKING</code> | <code>LATEST_PUBLISHED</code> </p>
     */
    inline bool RecipeVersionHasBeenSet() const { return m_recipeVersionHasBeenSet; }

    /**
     * <p>Return only those recipes with a version identifier of
     * <code>LATEST_WORKING</code> or <code>LATEST_PUBLISHED</code>. If
     * <code>RecipeVersion</code> is omitted, <code>ListRecipes</code> returns all of
     * the <code>LATEST_PUBLISHED</code> recipe versions.</p> <p>Valid values:
     * <code>LATEST_WORKING</code> | <code>LATEST_PUBLISHED</code> </p>
     */
    inline void SetRecipeVersion(const Aws::String& value) { m_recipeVersionHasBeenSet = true; m_recipeVersion = value; }

    /**
     * <p>Return only those recipes with a version identifier of
     * <code>LATEST_WORKING</code> or <code>LATEST_PUBLISHED</code>. If
     * <code>RecipeVersion</code> is omitted, <code>ListRecipes</code> returns all of
     * the <code>LATEST_PUBLISHED</code> recipe versions.</p> <p>Valid values:
     * <code>LATEST_WORKING</code> | <code>LATEST_PUBLISHED</code> </p>
     */
    inline void SetRecipeVersion(Aws::String&& value) { m_recipeVersionHasBeenSet = true; m_recipeVersion = std::move(value); }

    /**
     * <p>Return only those recipes with a version identifier of
     * <code>LATEST_WORKING</code> or <code>LATEST_PUBLISHED</code>. If
     * <code>RecipeVersion</code> is omitted, <code>ListRecipes</code> returns all of
     * the <code>LATEST_PUBLISHED</code> recipe versions.</p> <p>Valid values:
     * <code>LATEST_WORKING</code> | <code>LATEST_PUBLISHED</code> </p>
     */
    inline void SetRecipeVersion(const char* value) { m_recipeVersionHasBeenSet = true; m_recipeVersion.assign(value); }

    /**
     * <p>Return only those recipes with a version identifier of
     * <code>LATEST_WORKING</code> or <code>LATEST_PUBLISHED</code>. If
     * <code>RecipeVersion</code> is omitted, <code>ListRecipes</code> returns all of
     * the <code>LATEST_PUBLISHED</code> recipe versions.</p> <p>Valid values:
     * <code>LATEST_WORKING</code> | <code>LATEST_PUBLISHED</code> </p>
     */
    inline ListRecipesRequest& WithRecipeVersion(const Aws::String& value) { SetRecipeVersion(value); return *this;}

    /**
     * <p>Return only those recipes with a version identifier of
     * <code>LATEST_WORKING</code> or <code>LATEST_PUBLISHED</code>. If
     * <code>RecipeVersion</code> is omitted, <code>ListRecipes</code> returns all of
     * the <code>LATEST_PUBLISHED</code> recipe versions.</p> <p>Valid values:
     * <code>LATEST_WORKING</code> | <code>LATEST_PUBLISHED</code> </p>
     */
    inline ListRecipesRequest& WithRecipeVersion(Aws::String&& value) { SetRecipeVersion(std::move(value)); return *this;}

    /**
     * <p>Return only those recipes with a version identifier of
     * <code>LATEST_WORKING</code> or <code>LATEST_PUBLISHED</code>. If
     * <code>RecipeVersion</code> is omitted, <code>ListRecipes</code> returns all of
     * the <code>LATEST_PUBLISHED</code> recipe versions.</p> <p>Valid values:
     * <code>LATEST_WORKING</code> | <code>LATEST_PUBLISHED</code> </p>
     */
    inline ListRecipesRequest& WithRecipeVersion(const char* value) { SetRecipeVersion(value); return *this;}

  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_recipeVersion;
    bool m_recipeVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
