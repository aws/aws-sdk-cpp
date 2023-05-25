/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrew_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
   * <p>Represents a transformation and associated parameters that are used to apply
   * a change to a DataBrew dataset. For more information, see <a
   * href="https://docs.aws.amazon.com/databrew/latest/dg/recipe-actions-reference.html">Recipe
   * actions reference</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/RecipeAction">AWS
   * API Reference</a></p>
   */
  class RecipeAction
  {
  public:
    AWS_GLUEDATABREW_API RecipeAction();
    AWS_GLUEDATABREW_API RecipeAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API RecipeAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of a valid DataBrew transformation to be performed on the data.</p>
     */
    inline const Aws::String& GetOperation() const{ return m_operation; }

    /**
     * <p>The name of a valid DataBrew transformation to be performed on the data.</p>
     */
    inline bool OperationHasBeenSet() const { return m_operationHasBeenSet; }

    /**
     * <p>The name of a valid DataBrew transformation to be performed on the data.</p>
     */
    inline void SetOperation(const Aws::String& value) { m_operationHasBeenSet = true; m_operation = value; }

    /**
     * <p>The name of a valid DataBrew transformation to be performed on the data.</p>
     */
    inline void SetOperation(Aws::String&& value) { m_operationHasBeenSet = true; m_operation = std::move(value); }

    /**
     * <p>The name of a valid DataBrew transformation to be performed on the data.</p>
     */
    inline void SetOperation(const char* value) { m_operationHasBeenSet = true; m_operation.assign(value); }

    /**
     * <p>The name of a valid DataBrew transformation to be performed on the data.</p>
     */
    inline RecipeAction& WithOperation(const Aws::String& value) { SetOperation(value); return *this;}

    /**
     * <p>The name of a valid DataBrew transformation to be performed on the data.</p>
     */
    inline RecipeAction& WithOperation(Aws::String&& value) { SetOperation(std::move(value)); return *this;}

    /**
     * <p>The name of a valid DataBrew transformation to be performed on the data.</p>
     */
    inline RecipeAction& WithOperation(const char* value) { SetOperation(value); return *this;}


    /**
     * <p>Contextual parameters for the transformation.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetParameters() const{ return m_parameters; }

    /**
     * <p>Contextual parameters for the transformation.</p>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p>Contextual parameters for the transformation.</p>
     */
    inline void SetParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>Contextual parameters for the transformation.</p>
     */
    inline void SetParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p>Contextual parameters for the transformation.</p>
     */
    inline RecipeAction& WithParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetParameters(value); return *this;}

    /**
     * <p>Contextual parameters for the transformation.</p>
     */
    inline RecipeAction& WithParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>Contextual parameters for the transformation.</p>
     */
    inline RecipeAction& AddParameters(const Aws::String& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }

    /**
     * <p>Contextual parameters for the transformation.</p>
     */
    inline RecipeAction& AddParameters(Aws::String&& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>Contextual parameters for the transformation.</p>
     */
    inline RecipeAction& AddParameters(const Aws::String& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Contextual parameters for the transformation.</p>
     */
    inline RecipeAction& AddParameters(Aws::String&& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Contextual parameters for the transformation.</p>
     */
    inline RecipeAction& AddParameters(const char* key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Contextual parameters for the transformation.</p>
     */
    inline RecipeAction& AddParameters(Aws::String&& key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>Contextual parameters for the transformation.</p>
     */
    inline RecipeAction& AddParameters(const char* key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }

  private:

    Aws::String m_operation;
    bool m_operationHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_parameters;
    bool m_parametersHasBeenSet = false;
  };

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
