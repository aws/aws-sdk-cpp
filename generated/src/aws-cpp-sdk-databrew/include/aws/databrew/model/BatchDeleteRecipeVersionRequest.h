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
    AWS_GLUEDATABREW_API BatchDeleteRecipeVersionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchDeleteRecipeVersion"; }

    AWS_GLUEDATABREW_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the recipe whose versions are to be deleted.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    BatchDeleteRecipeVersionRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of version identifiers, for the recipe versions to be deleted. You
     * can specify numeric versions (<code>X.Y</code>) or <code>LATEST_WORKING</code>.
     * <code>LATEST_PUBLISHED</code> is not supported.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRecipeVersions() const { return m_recipeVersions; }
    inline bool RecipeVersionsHasBeenSet() const { return m_recipeVersionsHasBeenSet; }
    template<typename RecipeVersionsT = Aws::Vector<Aws::String>>
    void SetRecipeVersions(RecipeVersionsT&& value) { m_recipeVersionsHasBeenSet = true; m_recipeVersions = std::forward<RecipeVersionsT>(value); }
    template<typename RecipeVersionsT = Aws::Vector<Aws::String>>
    BatchDeleteRecipeVersionRequest& WithRecipeVersions(RecipeVersionsT&& value) { SetRecipeVersions(std::forward<RecipeVersionsT>(value)); return *this;}
    template<typename RecipeVersionsT = Aws::String>
    BatchDeleteRecipeVersionRequest& AddRecipeVersions(RecipeVersionsT&& value) { m_recipeVersionsHasBeenSet = true; m_recipeVersions.emplace_back(std::forward<RecipeVersionsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_recipeVersions;
    bool m_recipeVersionsHasBeenSet = false;
  };

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
