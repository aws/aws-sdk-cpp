/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/databrew/model/RecipeReference.h>
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

RecipeReference::RecipeReference() : 
    m_nameHasBeenSet(false),
    m_recipeVersionHasBeenSet(false)
{
}

RecipeReference::RecipeReference(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_recipeVersionHasBeenSet(false)
{
  *this = jsonValue;
}

RecipeReference& RecipeReference::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
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

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_recipeVersionHasBeenSet)
  {
   payload.WithString("RecipeVersion", m_recipeVersion);

  }

  return payload;
}

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
