/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/RecipeReference.h>
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

RecipeReference::RecipeReference() : 
    m_recipeArnHasBeenSet(false),
    m_recipeVersionHasBeenSet(false)
{
}

RecipeReference::RecipeReference(JsonView jsonValue) : 
    m_recipeArnHasBeenSet(false),
    m_recipeVersionHasBeenSet(false)
{
  *this = jsonValue;
}

RecipeReference& RecipeReference::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RecipeArn"))
  {
    m_recipeArn = jsonValue.GetString("RecipeArn");

    m_recipeArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RecipeVersion"))
  {
    m_recipeVersion = jsonValue.GetString("RecipeVersion");

    m_recipeVersionHasBeenSet = true;
  }

  return *this;
}

JsonValue RecipeReference::Jsonize() const
{
  JsonValue payload;

  if(m_recipeArnHasBeenSet)
  {
   payload.WithString("RecipeArn", m_recipeArn);

  }

  if(m_recipeVersionHasBeenSet)
  {
   payload.WithString("RecipeVersion", m_recipeVersion);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
