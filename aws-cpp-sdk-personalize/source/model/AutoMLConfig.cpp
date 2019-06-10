/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
    Array<JsonView> recipeListJsonList = jsonValue.GetArray("recipeList");
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
   Array<JsonValue> recipeListJsonList(m_recipeList.size());
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
