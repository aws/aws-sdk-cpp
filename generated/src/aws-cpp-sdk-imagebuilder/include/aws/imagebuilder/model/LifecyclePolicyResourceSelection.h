/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/imagebuilder/model/LifecyclePolicyResourceSelectionRecipe.h>
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
namespace imagebuilder
{
namespace Model
{

  /**
   * <p>Resource selection criteria for the lifecycle policy.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/LifecyclePolicyResourceSelection">AWS
   * API Reference</a></p>
   */
  class LifecyclePolicyResourceSelection
  {
  public:
    AWS_IMAGEBUILDER_API LifecyclePolicyResourceSelection() = default;
    AWS_IMAGEBUILDER_API LifecyclePolicyResourceSelection(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API LifecyclePolicyResourceSelection& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of recipes that are used as selection criteria for the output images
     * that the lifecycle policy applies to.</p>
     */
    inline const Aws::Vector<LifecyclePolicyResourceSelectionRecipe>& GetRecipes() const { return m_recipes; }
    inline bool RecipesHasBeenSet() const { return m_recipesHasBeenSet; }
    template<typename RecipesT = Aws::Vector<LifecyclePolicyResourceSelectionRecipe>>
    void SetRecipes(RecipesT&& value) { m_recipesHasBeenSet = true; m_recipes = std::forward<RecipesT>(value); }
    template<typename RecipesT = Aws::Vector<LifecyclePolicyResourceSelectionRecipe>>
    LifecyclePolicyResourceSelection& WithRecipes(RecipesT&& value) { SetRecipes(std::forward<RecipesT>(value)); return *this;}
    template<typename RecipesT = LifecyclePolicyResourceSelectionRecipe>
    LifecyclePolicyResourceSelection& AddRecipes(RecipesT&& value) { m_recipesHasBeenSet = true; m_recipes.emplace_back(std::forward<RecipesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of tags that are used as selection criteria for the Image Builder
     * image resources that the lifecycle policy applies to.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTagMap() const { return m_tagMap; }
    inline bool TagMapHasBeenSet() const { return m_tagMapHasBeenSet; }
    template<typename TagMapT = Aws::Map<Aws::String, Aws::String>>
    void SetTagMap(TagMapT&& value) { m_tagMapHasBeenSet = true; m_tagMap = std::forward<TagMapT>(value); }
    template<typename TagMapT = Aws::Map<Aws::String, Aws::String>>
    LifecyclePolicyResourceSelection& WithTagMap(TagMapT&& value) { SetTagMap(std::forward<TagMapT>(value)); return *this;}
    template<typename TagMapKeyT = Aws::String, typename TagMapValueT = Aws::String>
    LifecyclePolicyResourceSelection& AddTagMap(TagMapKeyT&& key, TagMapValueT&& value) {
      m_tagMapHasBeenSet = true; m_tagMap.emplace(std::forward<TagMapKeyT>(key), std::forward<TagMapValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::Vector<LifecyclePolicyResourceSelectionRecipe> m_recipes;
    bool m_recipesHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tagMap;
    bool m_tagMapHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
