/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/RecipeReference.h>
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
    AWS_GLUE_API Recipe();
    AWS_GLUE_API Recipe(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Recipe& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the Glue Studio node.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the Glue Studio node.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the Glue Studio node.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the Glue Studio node.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the Glue Studio node.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the Glue Studio node.</p>
     */
    inline Recipe& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the Glue Studio node.</p>
     */
    inline Recipe& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the Glue Studio node.</p>
     */
    inline Recipe& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The nodes that are inputs to the recipe node, identified by id.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInputs() const{ return m_inputs; }

    /**
     * <p>The nodes that are inputs to the recipe node, identified by id.</p>
     */
    inline bool InputsHasBeenSet() const { return m_inputsHasBeenSet; }

    /**
     * <p>The nodes that are inputs to the recipe node, identified by id.</p>
     */
    inline void SetInputs(const Aws::Vector<Aws::String>& value) { m_inputsHasBeenSet = true; m_inputs = value; }

    /**
     * <p>The nodes that are inputs to the recipe node, identified by id.</p>
     */
    inline void SetInputs(Aws::Vector<Aws::String>&& value) { m_inputsHasBeenSet = true; m_inputs = std::move(value); }

    /**
     * <p>The nodes that are inputs to the recipe node, identified by id.</p>
     */
    inline Recipe& WithInputs(const Aws::Vector<Aws::String>& value) { SetInputs(value); return *this;}

    /**
     * <p>The nodes that are inputs to the recipe node, identified by id.</p>
     */
    inline Recipe& WithInputs(Aws::Vector<Aws::String>&& value) { SetInputs(std::move(value)); return *this;}

    /**
     * <p>The nodes that are inputs to the recipe node, identified by id.</p>
     */
    inline Recipe& AddInputs(const Aws::String& value) { m_inputsHasBeenSet = true; m_inputs.push_back(value); return *this; }

    /**
     * <p>The nodes that are inputs to the recipe node, identified by id.</p>
     */
    inline Recipe& AddInputs(Aws::String&& value) { m_inputsHasBeenSet = true; m_inputs.push_back(std::move(value)); return *this; }

    /**
     * <p>The nodes that are inputs to the recipe node, identified by id.</p>
     */
    inline Recipe& AddInputs(const char* value) { m_inputsHasBeenSet = true; m_inputs.push_back(value); return *this; }


    /**
     * <p>A reference to the DataBrew recipe used by the node.</p>
     */
    inline const RecipeReference& GetRecipeReference() const{ return m_recipeReference; }

    /**
     * <p>A reference to the DataBrew recipe used by the node.</p>
     */
    inline bool RecipeReferenceHasBeenSet() const { return m_recipeReferenceHasBeenSet; }

    /**
     * <p>A reference to the DataBrew recipe used by the node.</p>
     */
    inline void SetRecipeReference(const RecipeReference& value) { m_recipeReferenceHasBeenSet = true; m_recipeReference = value; }

    /**
     * <p>A reference to the DataBrew recipe used by the node.</p>
     */
    inline void SetRecipeReference(RecipeReference&& value) { m_recipeReferenceHasBeenSet = true; m_recipeReference = std::move(value); }

    /**
     * <p>A reference to the DataBrew recipe used by the node.</p>
     */
    inline Recipe& WithRecipeReference(const RecipeReference& value) { SetRecipeReference(value); return *this;}

    /**
     * <p>A reference to the DataBrew recipe used by the node.</p>
     */
    inline Recipe& WithRecipeReference(RecipeReference&& value) { SetRecipeReference(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_inputs;
    bool m_inputsHasBeenSet = false;

    RecipeReference m_recipeReference;
    bool m_recipeReferenceHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
