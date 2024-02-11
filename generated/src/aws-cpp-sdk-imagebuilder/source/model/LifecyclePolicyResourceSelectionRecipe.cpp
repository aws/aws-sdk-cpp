/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/LifecyclePolicyResourceSelectionRecipe.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace imagebuilder
{
namespace Model
{

LifecyclePolicyResourceSelectionRecipe::LifecyclePolicyResourceSelectionRecipe() : 
    m_nameHasBeenSet(false),
    m_semanticVersionHasBeenSet(false)
{
}

LifecyclePolicyResourceSelectionRecipe::LifecyclePolicyResourceSelectionRecipe(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_semanticVersionHasBeenSet(false)
{
  *this = jsonValue;
}

LifecyclePolicyResourceSelectionRecipe& LifecyclePolicyResourceSelectionRecipe::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("semanticVersion"))
  {
    m_semanticVersion = jsonValue.GetString("semanticVersion");

    m_semanticVersionHasBeenSet = true;
  }

  return *this;
}

JsonValue LifecyclePolicyResourceSelectionRecipe::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_semanticVersionHasBeenSet)
  {
   payload.WithString("semanticVersion", m_semanticVersion);

  }

  return payload;
}

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
