/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrew_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace GlueDataBrew
{
namespace Model
{

  /**
   * <p>Represents the name and version of a DataBrew recipe.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/RecipeReference">AWS
   * API Reference</a></p>
   */
  class RecipeReference
  {
  public:
    AWS_GLUEDATABREW_API RecipeReference() = default;
    AWS_GLUEDATABREW_API RecipeReference(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API RecipeReference& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the recipe.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    RecipeReference& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the version for the recipe. </p>
     */
    inline const Aws::String& GetRecipeVersion() const { return m_recipeVersion; }
    inline bool RecipeVersionHasBeenSet() const { return m_recipeVersionHasBeenSet; }
    template<typename RecipeVersionT = Aws::String>
    void SetRecipeVersion(RecipeVersionT&& value) { m_recipeVersionHasBeenSet = true; m_recipeVersion = std::forward<RecipeVersionT>(value); }
    template<typename RecipeVersionT = Aws::String>
    RecipeReference& WithRecipeVersion(RecipeVersionT&& value) { SetRecipeVersion(std::forward<RecipeVersionT>(value)); return *this;}
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
