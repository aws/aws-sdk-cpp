/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrew_EXPORTS.h>
#include <aws/databrew/GlueDataBrewRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class UpdateRecipeRequest : public GlueDataBrewRequest
  {
  public:
    AWS_GLUEDATABREW_API UpdateRecipeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateRecipe"; }

    AWS_GLUEDATABREW_API Aws::String SerializePayload() const override;


    /**
     * <p>A description of the recipe.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the recipe.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the recipe.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the recipe.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the recipe.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the recipe.</p>
     */
    inline UpdateRecipeRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the recipe.</p>
     */
    inline UpdateRecipeRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the recipe.</p>
     */
    inline UpdateRecipeRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The name of the recipe to be updated.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the recipe to be updated.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the recipe to be updated.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the recipe to be updated.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the recipe to be updated.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the recipe to be updated.</p>
     */
    inline UpdateRecipeRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the recipe to be updated.</p>
     */
    inline UpdateRecipeRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the recipe to be updated.</p>
     */
    inline UpdateRecipeRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>One or more steps to be performed by the recipe. Each step consists of an
     * action, and the conditions under which the action should succeed.</p>
     */
    inline const Aws::Vector<RecipeStep>& GetSteps() const{ return m_steps; }

    /**
     * <p>One or more steps to be performed by the recipe. Each step consists of an
     * action, and the conditions under which the action should succeed.</p>
     */
    inline bool StepsHasBeenSet() const { return m_stepsHasBeenSet; }

    /**
     * <p>One or more steps to be performed by the recipe. Each step consists of an
     * action, and the conditions under which the action should succeed.</p>
     */
    inline void SetSteps(const Aws::Vector<RecipeStep>& value) { m_stepsHasBeenSet = true; m_steps = value; }

    /**
     * <p>One or more steps to be performed by the recipe. Each step consists of an
     * action, and the conditions under which the action should succeed.</p>
     */
    inline void SetSteps(Aws::Vector<RecipeStep>&& value) { m_stepsHasBeenSet = true; m_steps = std::move(value); }

    /**
     * <p>One or more steps to be performed by the recipe. Each step consists of an
     * action, and the conditions under which the action should succeed.</p>
     */
    inline UpdateRecipeRequest& WithSteps(const Aws::Vector<RecipeStep>& value) { SetSteps(value); return *this;}

    /**
     * <p>One or more steps to be performed by the recipe. Each step consists of an
     * action, and the conditions under which the action should succeed.</p>
     */
    inline UpdateRecipeRequest& WithSteps(Aws::Vector<RecipeStep>&& value) { SetSteps(std::move(value)); return *this;}

    /**
     * <p>One or more steps to be performed by the recipe. Each step consists of an
     * action, and the conditions under which the action should succeed.</p>
     */
    inline UpdateRecipeRequest& AddSteps(const RecipeStep& value) { m_stepsHasBeenSet = true; m_steps.push_back(value); return *this; }

    /**
     * <p>One or more steps to be performed by the recipe. Each step consists of an
     * action, and the conditions under which the action should succeed.</p>
     */
    inline UpdateRecipeRequest& AddSteps(RecipeStep&& value) { m_stepsHasBeenSet = true; m_steps.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<RecipeStep> m_steps;
    bool m_stepsHasBeenSet = false;
  };

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
