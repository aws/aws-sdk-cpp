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
  class DescribeRecipeRequest : public GlueDataBrewRequest
  {
  public:
    AWS_GLUEDATABREW_API DescribeRecipeRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeRecipe"; }

    AWS_GLUEDATABREW_API Aws::String SerializePayload() const override;

    AWS_GLUEDATABREW_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The name of the recipe to be described.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DescribeRecipeRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The recipe version identifier. If this parameter isn't specified, then the
     * latest published version is returned.</p>
     */
    inline const Aws::String& GetRecipeVersion() const { return m_recipeVersion; }
    inline bool RecipeVersionHasBeenSet() const { return m_recipeVersionHasBeenSet; }
    template<typename RecipeVersionT = Aws::String>
    void SetRecipeVersion(RecipeVersionT&& value) { m_recipeVersionHasBeenSet = true; m_recipeVersion = std::forward<RecipeVersionT>(value); }
    template<typename RecipeVersionT = Aws::String>
    DescribeRecipeRequest& WithRecipeVersion(RecipeVersionT&& value) { SetRecipeVersion(std::forward<RecipeVersionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_recipeVersion;
    bool m_recipeVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
