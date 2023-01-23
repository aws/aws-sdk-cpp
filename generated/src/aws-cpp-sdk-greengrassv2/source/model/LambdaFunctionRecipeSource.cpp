/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrassv2/model/LambdaFunctionRecipeSource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GreengrassV2
{
namespace Model
{

LambdaFunctionRecipeSource::LambdaFunctionRecipeSource() : 
    m_lambdaArnHasBeenSet(false),
    m_componentNameHasBeenSet(false),
    m_componentVersionHasBeenSet(false),
    m_componentPlatformsHasBeenSet(false),
    m_componentDependenciesHasBeenSet(false),
    m_componentLambdaParametersHasBeenSet(false)
{
}

LambdaFunctionRecipeSource::LambdaFunctionRecipeSource(JsonView jsonValue) : 
    m_lambdaArnHasBeenSet(false),
    m_componentNameHasBeenSet(false),
    m_componentVersionHasBeenSet(false),
    m_componentPlatformsHasBeenSet(false),
    m_componentDependenciesHasBeenSet(false),
    m_componentLambdaParametersHasBeenSet(false)
{
  *this = jsonValue;
}

LambdaFunctionRecipeSource& LambdaFunctionRecipeSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("lambdaArn"))
  {
    m_lambdaArn = jsonValue.GetString("lambdaArn");

    m_lambdaArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("componentName"))
  {
    m_componentName = jsonValue.GetString("componentName");

    m_componentNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("componentVersion"))
  {
    m_componentVersion = jsonValue.GetString("componentVersion");

    m_componentVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("componentPlatforms"))
  {
    Aws::Utils::Array<JsonView> componentPlatformsJsonList = jsonValue.GetArray("componentPlatforms");
    for(unsigned componentPlatformsIndex = 0; componentPlatformsIndex < componentPlatformsJsonList.GetLength(); ++componentPlatformsIndex)
    {
      m_componentPlatforms.push_back(componentPlatformsJsonList[componentPlatformsIndex].AsObject());
    }
    m_componentPlatformsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("componentDependencies"))
  {
    Aws::Map<Aws::String, JsonView> componentDependenciesJsonMap = jsonValue.GetObject("componentDependencies").GetAllObjects();
    for(auto& componentDependenciesItem : componentDependenciesJsonMap)
    {
      m_componentDependencies[componentDependenciesItem.first] = componentDependenciesItem.second.AsObject();
    }
    m_componentDependenciesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("componentLambdaParameters"))
  {
    m_componentLambdaParameters = jsonValue.GetObject("componentLambdaParameters");

    m_componentLambdaParametersHasBeenSet = true;
  }

  return *this;
}

JsonValue LambdaFunctionRecipeSource::Jsonize() const
{
  JsonValue payload;

  if(m_lambdaArnHasBeenSet)
  {
   payload.WithString("lambdaArn", m_lambdaArn);

  }

  if(m_componentNameHasBeenSet)
  {
   payload.WithString("componentName", m_componentName);

  }

  if(m_componentVersionHasBeenSet)
  {
   payload.WithString("componentVersion", m_componentVersion);

  }

  if(m_componentPlatformsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> componentPlatformsJsonList(m_componentPlatforms.size());
   for(unsigned componentPlatformsIndex = 0; componentPlatformsIndex < componentPlatformsJsonList.GetLength(); ++componentPlatformsIndex)
   {
     componentPlatformsJsonList[componentPlatformsIndex].AsObject(m_componentPlatforms[componentPlatformsIndex].Jsonize());
   }
   payload.WithArray("componentPlatforms", std::move(componentPlatformsJsonList));

  }

  if(m_componentDependenciesHasBeenSet)
  {
   JsonValue componentDependenciesJsonMap;
   for(auto& componentDependenciesItem : m_componentDependencies)
   {
     componentDependenciesJsonMap.WithObject(componentDependenciesItem.first, componentDependenciesItem.second.Jsonize());
   }
   payload.WithObject("componentDependencies", std::move(componentDependenciesJsonMap));

  }

  if(m_componentLambdaParametersHasBeenSet)
  {
   payload.WithObject("componentLambdaParameters", m_componentLambdaParameters.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
