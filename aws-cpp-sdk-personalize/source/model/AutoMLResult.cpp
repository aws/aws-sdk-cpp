/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize/model/AutoMLResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Personalize
{
namespace Model
{

AutoMLResult::AutoMLResult() : 
    m_bestRecipeArnHasBeenSet(false)
{
}

AutoMLResult::AutoMLResult(JsonView jsonValue) : 
    m_bestRecipeArnHasBeenSet(false)
{
  *this = jsonValue;
}

AutoMLResult& AutoMLResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("bestRecipeArn"))
  {
    m_bestRecipeArn = jsonValue.GetString("bestRecipeArn");

    m_bestRecipeArnHasBeenSet = true;
  }

  return *this;
}

JsonValue AutoMLResult::Jsonize() const
{
  JsonValue payload;

  if(m_bestRecipeArnHasBeenSet)
  {
   payload.WithString("bestRecipeArn", m_bestRecipeArn);

  }

  return payload;
}

} // namespace Model
} // namespace Personalize
} // namespace Aws
