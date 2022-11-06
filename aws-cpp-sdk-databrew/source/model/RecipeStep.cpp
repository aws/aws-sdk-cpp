/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/databrew/model/RecipeStep.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GlueDataBrew
{
namespace Model
{

RecipeStep::RecipeStep() : 
    m_actionHasBeenSet(false),
    m_conditionExpressionsHasBeenSet(false)
{
}

RecipeStep::RecipeStep(JsonView jsonValue) : 
    m_actionHasBeenSet(false),
    m_conditionExpressionsHasBeenSet(false)
{
  *this = jsonValue;
}

RecipeStep& RecipeStep::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Action"))
  {
    m_action = jsonValue.GetObject("Action");

    m_actionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConditionExpressions"))
  {
    Aws::Utils::Array<JsonView> conditionExpressionsJsonList = jsonValue.GetArray("ConditionExpressions");
    for(unsigned conditionExpressionsIndex = 0; conditionExpressionsIndex < conditionExpressionsJsonList.GetLength(); ++conditionExpressionsIndex)
    {
      m_conditionExpressions.push_back(conditionExpressionsJsonList[conditionExpressionsIndex].AsObject());
    }
    m_conditionExpressionsHasBeenSet = true;
  }

  return *this;
}

JsonValue RecipeStep::Jsonize() const
{
  JsonValue payload;

  if(m_actionHasBeenSet)
  {
   payload.WithObject("Action", m_action.Jsonize());

  }

  if(m_conditionExpressionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> conditionExpressionsJsonList(m_conditionExpressions.size());
   for(unsigned conditionExpressionsIndex = 0; conditionExpressionsIndex < conditionExpressionsJsonList.GetLength(); ++conditionExpressionsIndex)
   {
     conditionExpressionsJsonList[conditionExpressionsIndex].AsObject(m_conditionExpressions[conditionExpressionsIndex].Jsonize());
   }
   payload.WithArray("ConditionExpressions", std::move(conditionExpressionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
