/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrew_EXPORTS.h>
#include <aws/databrew/GlueDataBrewRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/databrew/model/RecipeStep.h>
#include <utility>

namespace Aws
{
namespace GlueDataBrew
{
namespace Model
{

  /**
   */
  class CreateRecipeRequest : public GlueDataBrewRequest
  {
  public:
    AWS_GLUEDATABREW_API CreateRecipeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateRecipe"; }

    AWS_GLUEDATABREW_API Aws::String SerializePayload() const override;


    /**
     * <p>A description for the recipe.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description for the recipe.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description for the recipe.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description for the recipe.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description for the recipe.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description for the recipe.</p>
     */
    inline CreateRecipeRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description for the recipe.</p>
     */
    inline CreateRecipeRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description for the recipe.</p>
     */
    inline CreateRecipeRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>A unique name for the recipe. Valid characters are alphanumeric (A-Z, a-z,
     * 0-9), hyphen (-), period (.), and space.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A unique name for the recipe. Valid characters are alphanumeric (A-Z, a-z,
     * 0-9), hyphen (-), period (.), and space.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A unique name for the recipe. Valid characters are alphanumeric (A-Z, a-z,
     * 0-9), hyphen (-), period (.), and space.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A unique name for the recipe. Valid characters are alphanumeric (A-Z, a-z,
     * 0-9), hyphen (-), period (.), and space.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A unique name for the recipe. Valid characters are alphanumeric (A-Z, a-z,
     * 0-9), hyphen (-), period (.), and space.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A unique name for the recipe. Valid characters are alphanumeric (A-Z, a-z,
     * 0-9), hyphen (-), period (.), and space.</p>
     */
    inline CreateRecipeRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A unique name for the recipe. Valid characters are alphanumeric (A-Z, a-z,
     * 0-9), hyphen (-), period (.), and space.</p>
     */
    inline CreateRecipeRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A unique name for the recipe. Valid characters are alphanumeric (A-Z, a-z,
     * 0-9), hyphen (-), period (.), and space.</p>
     */
    inline CreateRecipeRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>An array containing the steps to be performed by the recipe. Each recipe step
     * consists of one recipe action and (optionally) an array of condition
     * expressions.</p>
     */
    inline const Aws::Vector<RecipeStep>& GetSteps() const{ return m_steps; }

    /**
     * <p>An array containing the steps to be performed by the recipe. Each recipe step
     * consists of one recipe action and (optionally) an array of condition
     * expressions.</p>
     */
    inline bool StepsHasBeenSet() const { return m_stepsHasBeenSet; }

    /**
     * <p>An array containing the steps to be performed by the recipe. Each recipe step
     * consists of one recipe action and (optionally) an array of condition
     * expressions.</p>
     */
    inline void SetSteps(const Aws::Vector<RecipeStep>& value) { m_stepsHasBeenSet = true; m_steps = value; }

    /**
     * <p>An array containing the steps to be performed by the recipe. Each recipe step
     * consists of one recipe action and (optionally) an array of condition
     * expressions.</p>
     */
    inline void SetSteps(Aws::Vector<RecipeStep>&& value) { m_stepsHasBeenSet = true; m_steps = std::move(value); }

    /**
     * <p>An array containing the steps to be performed by the recipe. Each recipe step
     * consists of one recipe action and (optionally) an array of condition
     * expressions.</p>
     */
    inline CreateRecipeRequest& WithSteps(const Aws::Vector<RecipeStep>& value) { SetSteps(value); return *this;}

    /**
     * <p>An array containing the steps to be performed by the recipe. Each recipe step
     * consists of one recipe action and (optionally) an array of condition
     * expressions.</p>
     */
    inline CreateRecipeRequest& WithSteps(Aws::Vector<RecipeStep>&& value) { SetSteps(std::move(value)); return *this;}

    /**
     * <p>An array containing the steps to be performed by the recipe. Each recipe step
     * consists of one recipe action and (optionally) an array of condition
     * expressions.</p>
     */
    inline CreateRecipeRequest& AddSteps(const RecipeStep& value) { m_stepsHasBeenSet = true; m_steps.push_back(value); return *this; }

    /**
     * <p>An array containing the steps to be performed by the recipe. Each recipe step
     * consists of one recipe action and (optionally) an array of condition
     * expressions.</p>
     */
    inline CreateRecipeRequest& AddSteps(RecipeStep&& value) { m_stepsHasBeenSet = true; m_steps.push_back(std::move(value)); return *this; }


    /**
     * <p>Metadata tags to apply to this recipe.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Metadata tags to apply to this recipe.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Metadata tags to apply to this recipe.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Metadata tags to apply to this recipe.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Metadata tags to apply to this recipe.</p>
     */
    inline CreateRecipeRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Metadata tags to apply to this recipe.</p>
     */
    inline CreateRecipeRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Metadata tags to apply to this recipe.</p>
     */
    inline CreateRecipeRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Metadata tags to apply to this recipe.</p>
     */
    inline CreateRecipeRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Metadata tags to apply to this recipe.</p>
     */
    inline CreateRecipeRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Metadata tags to apply to this recipe.</p>
     */
    inline CreateRecipeRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Metadata tags to apply to this recipe.</p>
     */
    inline CreateRecipeRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Metadata tags to apply to this recipe.</p>
     */
    inline CreateRecipeRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Metadata tags to apply to this recipe.</p>
     */
    inline CreateRecipeRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<RecipeStep> m_steps;
    bool m_stepsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
