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
namespace GlueDataBrew
{
namespace Model
{

  /**
   */
  class DeleteRecipeVersionRequest : public GlueDataBrewRequest
  {
  public:
    AWS_GLUEDATABREW_API DeleteRecipeVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteRecipeVersion"; }

    AWS_GLUEDATABREW_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the recipe.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the recipe.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the recipe.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the recipe.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the recipe.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the recipe.</p>
     */
    inline DeleteRecipeVersionRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the recipe.</p>
     */
    inline DeleteRecipeVersionRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the recipe.</p>
     */
    inline DeleteRecipeVersionRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The version of the recipe to be deleted. You can specify a numeric versions
     * (<code>X.Y</code>) or <code>LATEST_WORKING</code>. <code>LATEST_PUBLISHED</code>
     * is not supported.</p>
     */
    inline const Aws::String& GetRecipeVersion() const{ return m_recipeVersion; }

    /**
     * <p>The version of the recipe to be deleted. You can specify a numeric versions
     * (<code>X.Y</code>) or <code>LATEST_WORKING</code>. <code>LATEST_PUBLISHED</code>
     * is not supported.</p>
     */
    inline bool RecipeVersionHasBeenSet() const { return m_recipeVersionHasBeenSet; }

    /**
     * <p>The version of the recipe to be deleted. You can specify a numeric versions
     * (<code>X.Y</code>) or <code>LATEST_WORKING</code>. <code>LATEST_PUBLISHED</code>
     * is not supported.</p>
     */
    inline void SetRecipeVersion(const Aws::String& value) { m_recipeVersionHasBeenSet = true; m_recipeVersion = value; }

    /**
     * <p>The version of the recipe to be deleted. You can specify a numeric versions
     * (<code>X.Y</code>) or <code>LATEST_WORKING</code>. <code>LATEST_PUBLISHED</code>
     * is not supported.</p>
     */
    inline void SetRecipeVersion(Aws::String&& value) { m_recipeVersionHasBeenSet = true; m_recipeVersion = std::move(value); }

    /**
     * <p>The version of the recipe to be deleted. You can specify a numeric versions
     * (<code>X.Y</code>) or <code>LATEST_WORKING</code>. <code>LATEST_PUBLISHED</code>
     * is not supported.</p>
     */
    inline void SetRecipeVersion(const char* value) { m_recipeVersionHasBeenSet = true; m_recipeVersion.assign(value); }

    /**
     * <p>The version of the recipe to be deleted. You can specify a numeric versions
     * (<code>X.Y</code>) or <code>LATEST_WORKING</code>. <code>LATEST_PUBLISHED</code>
     * is not supported.</p>
     */
    inline DeleteRecipeVersionRequest& WithRecipeVersion(const Aws::String& value) { SetRecipeVersion(value); return *this;}

    /**
     * <p>The version of the recipe to be deleted. You can specify a numeric versions
     * (<code>X.Y</code>) or <code>LATEST_WORKING</code>. <code>LATEST_PUBLISHED</code>
     * is not supported.</p>
     */
    inline DeleteRecipeVersionRequest& WithRecipeVersion(Aws::String&& value) { SetRecipeVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the recipe to be deleted. You can specify a numeric versions
     * (<code>X.Y</code>) or <code>LATEST_WORKING</code>. <code>LATEST_PUBLISHED</code>
     * is not supported.</p>
     */
    inline DeleteRecipeVersionRequest& WithRecipeVersion(const char* value) { SetRecipeVersion(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_recipeVersion;
    bool m_recipeVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
