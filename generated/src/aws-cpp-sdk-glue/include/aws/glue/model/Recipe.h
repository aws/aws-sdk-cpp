/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/RecipeReference.h>
#include <aws/glue/model/RecipeStep.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>A Glue Studio node that uses a Glue DataBrew recipe in Glue
   * jobs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/Recipe">AWS API
   * Reference</a></p>
   */
  class Recipe
  {
  public:
    AWS_GLUE_API Recipe() = default;
    AWS_GLUE_API Recipe(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Recipe& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the Glue Studio node.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Recipe& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The nodes that are inputs to the recipe node, identified by id.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInputs() const { return m_inputs; }
    inline bool InputsHasBeenSet() const { return m_inputsHasBeenSet; }
    template<typename InputsT = Aws::Vector<Aws::String>>
    void SetInputs(InputsT&& value) { m_inputsHasBeenSet = true; m_inputs = std::forward<InputsT>(value); }
    template<typename InputsT = Aws::Vector<Aws::String>>
    Recipe& WithInputs(InputsT&& value) { SetInputs(std::forward<InputsT>(value)); return *this;}
    template<typename InputsT = Aws::String>
    Recipe& AddInputs(InputsT&& value) { m_inputsHasBeenSet = true; m_inputs.emplace_back(std::forward<InputsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A reference to the DataBrew recipe used by the node.</p>
     */
    inline const RecipeReference& GetRecipeReference() const { return m_recipeReference; }
    inline bool RecipeReferenceHasBeenSet() const { return m_recipeReferenceHasBeenSet; }
    template<typename RecipeReferenceT = RecipeReference>
    void SetRecipeReference(RecipeReferenceT&& value) { m_recipeReferenceHasBeenSet = true; m_recipeReference = std::forward<RecipeReferenceT>(value); }
    template<typename RecipeReferenceT = RecipeReference>
    Recipe& WithRecipeReference(RecipeReferenceT&& value) { SetRecipeReference(std::forward<RecipeReferenceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Transform steps used in the recipe node.</p>
     */
    inline const Aws::Vector<RecipeStep>& GetRecipeSteps() const { return m_recipeSteps; }
    inline bool RecipeStepsHasBeenSet() const { return m_recipeStepsHasBeenSet; }
    template<typename RecipeStepsT = Aws::Vector<RecipeStep>>
    void SetRecipeSteps(RecipeStepsT&& value) { m_recipeStepsHasBeenSet = true; m_recipeSteps = std::forward<RecipeStepsT>(value); }
    template<typename RecipeStepsT = Aws::Vector<RecipeStep>>
    Recipe& WithRecipeSteps(RecipeStepsT&& value) { SetRecipeSteps(std::forward<RecipeStepsT>(value)); return *this;}
    template<typename RecipeStepsT = RecipeStep>
    Recipe& AddRecipeSteps(RecipeStepsT&& value) { m_recipeStepsHasBeenSet = true; m_recipeSteps.emplace_back(std::forward<RecipeStepsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_inputs;
    bool m_inputsHasBeenSet = false;

    RecipeReference m_recipeReference;
    bool m_recipeReferenceHasBeenSet = false;

    Aws::Vector<RecipeStep> m_recipeSteps;
    bool m_recipeStepsHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
