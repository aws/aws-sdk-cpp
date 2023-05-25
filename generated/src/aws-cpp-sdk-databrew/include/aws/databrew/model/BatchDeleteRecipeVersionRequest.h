/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrew_EXPORTS.h>
#include <aws/databrew/GlueDataBrewRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace GlueDataBrew
{
namespace Model
{

  /**
   */
  class BatchDeleteRecipeVersionRequest : public GlueDataBrewRequest
  {
  public:
    AWS_GLUEDATABREW_API BatchDeleteRecipeVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchDeleteRecipeVersion"; }

    AWS_GLUEDATABREW_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the recipe whose versions are to be deleted.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the recipe whose versions are to be deleted.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the recipe whose versions are to be deleted.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the recipe whose versions are to be deleted.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the recipe whose versions are to be deleted.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the recipe whose versions are to be deleted.</p>
     */
    inline BatchDeleteRecipeVersionRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the recipe whose versions are to be deleted.</p>
     */
    inline BatchDeleteRecipeVersionRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the recipe whose versions are to be deleted.</p>
     */
    inline BatchDeleteRecipeVersionRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>An array of version identifiers, for the recipe versions to be deleted. You
     * can specify numeric versions (<code>X.Y</code>) or <code>LATEST_WORKING</code>.
     * <code>LATEST_PUBLISHED</code> is not supported.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRecipeVersions() const{ return m_recipeVersions; }

    /**
     * <p>An array of version identifiers, for the recipe versions to be deleted. You
     * can specify numeric versions (<code>X.Y</code>) or <code>LATEST_WORKING</code>.
     * <code>LATEST_PUBLISHED</code> is not supported.</p>
     */
    inline bool RecipeVersionsHasBeenSet() const { return m_recipeVersionsHasBeenSet; }

    /**
     * <p>An array of version identifiers, for the recipe versions to be deleted. You
     * can specify numeric versions (<code>X.Y</code>) or <code>LATEST_WORKING</code>.
     * <code>LATEST_PUBLISHED</code> is not supported.</p>
     */
    inline void SetRecipeVersions(const Aws::Vector<Aws::String>& value) { m_recipeVersionsHasBeenSet = true; m_recipeVersions = value; }

    /**
     * <p>An array of version identifiers, for the recipe versions to be deleted. You
     * can specify numeric versions (<code>X.Y</code>) or <code>LATEST_WORKING</code>.
     * <code>LATEST_PUBLISHED</code> is not supported.</p>
     */
    inline void SetRecipeVersions(Aws::Vector<Aws::String>&& value) { m_recipeVersionsHasBeenSet = true; m_recipeVersions = std::move(value); }

    /**
     * <p>An array of version identifiers, for the recipe versions to be deleted. You
     * can specify numeric versions (<code>X.Y</code>) or <code>LATEST_WORKING</code>.
     * <code>LATEST_PUBLISHED</code> is not supported.</p>
     */
    inline BatchDeleteRecipeVersionRequest& WithRecipeVersions(const Aws::Vector<Aws::String>& value) { SetRecipeVersions(value); return *this;}

    /**
     * <p>An array of version identifiers, for the recipe versions to be deleted. You
     * can specify numeric versions (<code>X.Y</code>) or <code>LATEST_WORKING</code>.
     * <code>LATEST_PUBLISHED</code> is not supported.</p>
     */
    inline BatchDeleteRecipeVersionRequest& WithRecipeVersions(Aws::Vector<Aws::String>&& value) { SetRecipeVersions(std::move(value)); return *this;}

    /**
     * <p>An array of version identifiers, for the recipe versions to be deleted. You
     * can specify numeric versions (<code>X.Y</code>) or <code>LATEST_WORKING</code>.
     * <code>LATEST_PUBLISHED</code> is not supported.</p>
     */
    inline BatchDeleteRecipeVersionRequest& AddRecipeVersions(const Aws::String& value) { m_recipeVersionsHasBeenSet = true; m_recipeVersions.push_back(value); return *this; }

    /**
     * <p>An array of version identifiers, for the recipe versions to be deleted. You
     * can specify numeric versions (<code>X.Y</code>) or <code>LATEST_WORKING</code>.
     * <code>LATEST_PUBLISHED</code> is not supported.</p>
     */
    inline BatchDeleteRecipeVersionRequest& AddRecipeVersions(Aws::String&& value) { m_recipeVersionsHasBeenSet = true; m_recipeVersions.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of version identifiers, for the recipe versions to be deleted. You
     * can specify numeric versions (<code>X.Y</code>) or <code>LATEST_WORKING</code>.
     * <code>LATEST_PUBLISHED</code> is not supported.</p>
     */
    inline BatchDeleteRecipeVersionRequest& AddRecipeVersions(const char* value) { m_recipeVersionsHasBeenSet = true; m_recipeVersions.push_back(value); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_recipeVersions;
    bool m_recipeVersionsHasBeenSet = false;
  };

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
