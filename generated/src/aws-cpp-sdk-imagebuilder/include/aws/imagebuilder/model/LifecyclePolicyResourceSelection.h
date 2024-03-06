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
    AWS_IMAGEBUILDER_API LifecyclePolicyResourceSelection();
    AWS_IMAGEBUILDER_API LifecyclePolicyResourceSelection(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API LifecyclePolicyResourceSelection& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of recipes that are used as selection criteria for the output images
     * that the lifecycle policy applies to.</p>
     */
    inline const Aws::Vector<LifecyclePolicyResourceSelectionRecipe>& GetRecipes() const{ return m_recipes; }

    /**
     * <p>A list of recipes that are used as selection criteria for the output images
     * that the lifecycle policy applies to.</p>
     */
    inline bool RecipesHasBeenSet() const { return m_recipesHasBeenSet; }

    /**
     * <p>A list of recipes that are used as selection criteria for the output images
     * that the lifecycle policy applies to.</p>
     */
    inline void SetRecipes(const Aws::Vector<LifecyclePolicyResourceSelectionRecipe>& value) { m_recipesHasBeenSet = true; m_recipes = value; }

    /**
     * <p>A list of recipes that are used as selection criteria for the output images
     * that the lifecycle policy applies to.</p>
     */
    inline void SetRecipes(Aws::Vector<LifecyclePolicyResourceSelectionRecipe>&& value) { m_recipesHasBeenSet = true; m_recipes = std::move(value); }

    /**
     * <p>A list of recipes that are used as selection criteria for the output images
     * that the lifecycle policy applies to.</p>
     */
    inline LifecyclePolicyResourceSelection& WithRecipes(const Aws::Vector<LifecyclePolicyResourceSelectionRecipe>& value) { SetRecipes(value); return *this;}

    /**
     * <p>A list of recipes that are used as selection criteria for the output images
     * that the lifecycle policy applies to.</p>
     */
    inline LifecyclePolicyResourceSelection& WithRecipes(Aws::Vector<LifecyclePolicyResourceSelectionRecipe>&& value) { SetRecipes(std::move(value)); return *this;}

    /**
     * <p>A list of recipes that are used as selection criteria for the output images
     * that the lifecycle policy applies to.</p>
     */
    inline LifecyclePolicyResourceSelection& AddRecipes(const LifecyclePolicyResourceSelectionRecipe& value) { m_recipesHasBeenSet = true; m_recipes.push_back(value); return *this; }

    /**
     * <p>A list of recipes that are used as selection criteria for the output images
     * that the lifecycle policy applies to.</p>
     */
    inline LifecyclePolicyResourceSelection& AddRecipes(LifecyclePolicyResourceSelectionRecipe&& value) { m_recipesHasBeenSet = true; m_recipes.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of tags that are used as selection criteria for the Image Builder
     * image resources that the lifecycle policy applies to.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTagMap() const{ return m_tagMap; }

    /**
     * <p>A list of tags that are used as selection criteria for the Image Builder
     * image resources that the lifecycle policy applies to.</p>
     */
    inline bool TagMapHasBeenSet() const { return m_tagMapHasBeenSet; }

    /**
     * <p>A list of tags that are used as selection criteria for the Image Builder
     * image resources that the lifecycle policy applies to.</p>
     */
    inline void SetTagMap(const Aws::Map<Aws::String, Aws::String>& value) { m_tagMapHasBeenSet = true; m_tagMap = value; }

    /**
     * <p>A list of tags that are used as selection criteria for the Image Builder
     * image resources that the lifecycle policy applies to.</p>
     */
    inline void SetTagMap(Aws::Map<Aws::String, Aws::String>&& value) { m_tagMapHasBeenSet = true; m_tagMap = std::move(value); }

    /**
     * <p>A list of tags that are used as selection criteria for the Image Builder
     * image resources that the lifecycle policy applies to.</p>
     */
    inline LifecyclePolicyResourceSelection& WithTagMap(const Aws::Map<Aws::String, Aws::String>& value) { SetTagMap(value); return *this;}

    /**
     * <p>A list of tags that are used as selection criteria for the Image Builder
     * image resources that the lifecycle policy applies to.</p>
     */
    inline LifecyclePolicyResourceSelection& WithTagMap(Aws::Map<Aws::String, Aws::String>&& value) { SetTagMap(std::move(value)); return *this;}

    /**
     * <p>A list of tags that are used as selection criteria for the Image Builder
     * image resources that the lifecycle policy applies to.</p>
     */
    inline LifecyclePolicyResourceSelection& AddTagMap(const Aws::String& key, const Aws::String& value) { m_tagMapHasBeenSet = true; m_tagMap.emplace(key, value); return *this; }

    /**
     * <p>A list of tags that are used as selection criteria for the Image Builder
     * image resources that the lifecycle policy applies to.</p>
     */
    inline LifecyclePolicyResourceSelection& AddTagMap(Aws::String&& key, const Aws::String& value) { m_tagMapHasBeenSet = true; m_tagMap.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of tags that are used as selection criteria for the Image Builder
     * image resources that the lifecycle policy applies to.</p>
     */
    inline LifecyclePolicyResourceSelection& AddTagMap(const Aws::String& key, Aws::String&& value) { m_tagMapHasBeenSet = true; m_tagMap.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of tags that are used as selection criteria for the Image Builder
     * image resources that the lifecycle policy applies to.</p>
     */
    inline LifecyclePolicyResourceSelection& AddTagMap(Aws::String&& key, Aws::String&& value) { m_tagMapHasBeenSet = true; m_tagMap.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A list of tags that are used as selection criteria for the Image Builder
     * image resources that the lifecycle policy applies to.</p>
     */
    inline LifecyclePolicyResourceSelection& AddTagMap(const char* key, Aws::String&& value) { m_tagMapHasBeenSet = true; m_tagMap.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of tags that are used as selection criteria for the Image Builder
     * image resources that the lifecycle policy applies to.</p>
     */
    inline LifecyclePolicyResourceSelection& AddTagMap(Aws::String&& key, const char* value) { m_tagMapHasBeenSet = true; m_tagMap.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of tags that are used as selection criteria for the Image Builder
     * image resources that the lifecycle policy applies to.</p>
     */
    inline LifecyclePolicyResourceSelection& AddTagMap(const char* key, const char* value) { m_tagMapHasBeenSet = true; m_tagMap.emplace(key, value); return *this; }

  private:

    Aws::Vector<LifecyclePolicyResourceSelectionRecipe> m_recipes;
    bool m_recipesHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tagMap;
    bool m_tagMapHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
