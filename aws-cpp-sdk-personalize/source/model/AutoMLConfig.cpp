/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize/model/AutoMLConfig.h>
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

AutoMLConfig::AutoMLConfig() : 
    m_metricNameHasBeenSet(false),
    m_recipeListHasBeenSet(false)
{
}

AutoMLConfig::AutoMLConfig(JsonView jsonValue) : 
    m_metricNameHasBeenSet(false),
    m_recipeListHasBeenSet(false)
{
  *this = jsonValue;
}

AutoMLConfig& AutoMLConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("metricName"))
  {
    m_metricName = jsonValue.GetString("metricName");

    m_metricNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("recipeList"))
  {
    Aws::Utils::Array<JsonView> recipeListJsonList = jsonValue.GetArray("recipeList");
    for(unsigned recipeListIndex = 0; recipeListIndex < recipeListJsonList.GetLength(); ++recipeListIndex)
    {
      m_recipeList.push_back(recipeListJsonList[recipeListIndex].AsString());
    }
    m_recipeListHasBeenSet = true;
  }

  return *this;
}

JsonValue AutoMLConfig::Jsonize() const
{
  JsonValue payload;

  if(m_metricNameHasBeenSet)
  {
   payload.WithString("metricName", m_metricName);

  }

  if(m_recipeListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> recipeListJsonList(m_recipeList.size());
   for(unsigned recipeListIndex = 0; recipeListIndex < recipeListJsonList.GetLength(); ++recipeListIndex)
   {
     recipeListJsonList[recipeListIndex].AsString(m_recipeList[recipeListIndex]);
   }
   payload.WithArray("recipeList", std::move(recipeListJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Personalize
} // namespace Aws
