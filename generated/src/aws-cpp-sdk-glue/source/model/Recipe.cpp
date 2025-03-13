/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/Recipe.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

Recipe::Recipe(JsonView jsonValue)
{
  *this = jsonValue;
}

Recipe& Recipe::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Inputs"))
  {
    Aws::Utils::Array<JsonView> inputsJsonList = jsonValue.GetArray("Inputs");
    for(unsigned inputsIndex = 0; inputsIndex < inputsJsonList.GetLength(); ++inputsIndex)
    {
      m_inputs.push_back(inputsJsonList[inputsIndex].AsString());
    }
    m_inputsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RecipeReference"))
  {
    m_recipeReference = jsonValue.GetObject("RecipeReference");
    m_recipeReferenceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RecipeSteps"))
  {
    Aws::Utils::Array<JsonView> recipeStepsJsonList = jsonValue.GetArray("RecipeSteps");
    for(unsigned recipeStepsIndex = 0; recipeStepsIndex < recipeStepsJsonList.GetLength(); ++recipeStepsIndex)
    {
      m_recipeSteps.push_back(recipeStepsJsonList[recipeStepsIndex].AsObject());
    }
    m_recipeStepsHasBeenSet = true;
  }
  return *this;
}

JsonValue Recipe::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_inputsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> inputsJsonList(m_inputs.size());
   for(unsigned inputsIndex = 0; inputsIndex < inputsJsonList.GetLength(); ++inputsIndex)
   {
     inputsJsonList[inputsIndex].AsString(m_inputs[inputsIndex]);
   }
   payload.WithArray("Inputs", std::move(inputsJsonList));

  }

  if(m_recipeReferenceHasBeenSet)
  {
   payload.WithObject("RecipeReference", m_recipeReference.Jsonize());

  }

  if(m_recipeStepsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> recipeStepsJsonList(m_recipeSteps.size());
   for(unsigned recipeStepsIndex = 0; recipeStepsIndex < recipeStepsJsonList.GetLength(); ++recipeStepsIndex)
   {
     recipeStepsJsonList[recipeStepsIndex].AsObject(m_recipeSteps[recipeStepsIndex].Jsonize());
   }
   payload.WithArray("RecipeSteps", std::move(recipeStepsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
