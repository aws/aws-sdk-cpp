/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/LambdaFunctionMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector2
{
namespace Model
{

LambdaFunctionMetadata::LambdaFunctionMetadata() : 
    m_functionNameHasBeenSet(false),
    m_functionTagsHasBeenSet(false),
    m_layersHasBeenSet(false),
    m_runtime(Runtime::NOT_SET),
    m_runtimeHasBeenSet(false)
{
}

LambdaFunctionMetadata::LambdaFunctionMetadata(JsonView jsonValue) : 
    m_functionNameHasBeenSet(false),
    m_functionTagsHasBeenSet(false),
    m_layersHasBeenSet(false),
    m_runtime(Runtime::NOT_SET),
    m_runtimeHasBeenSet(false)
{
  *this = jsonValue;
}

LambdaFunctionMetadata& LambdaFunctionMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("functionName"))
  {
    m_functionName = jsonValue.GetString("functionName");

    m_functionNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("functionTags"))
  {
    Aws::Map<Aws::String, JsonView> functionTagsJsonMap = jsonValue.GetObject("functionTags").GetAllObjects();
    for(auto& functionTagsItem : functionTagsJsonMap)
    {
      m_functionTags[functionTagsItem.first] = functionTagsItem.second.AsString();
    }
    m_functionTagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("layers"))
  {
    Aws::Utils::Array<JsonView> layersJsonList = jsonValue.GetArray("layers");
    for(unsigned layersIndex = 0; layersIndex < layersJsonList.GetLength(); ++layersIndex)
    {
      m_layers.push_back(layersJsonList[layersIndex].AsString());
    }
    m_layersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("runtime"))
  {
    m_runtime = RuntimeMapper::GetRuntimeForName(jsonValue.GetString("runtime"));

    m_runtimeHasBeenSet = true;
  }

  return *this;
}

JsonValue LambdaFunctionMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_functionNameHasBeenSet)
  {
   payload.WithString("functionName", m_functionName);

  }

  if(m_functionTagsHasBeenSet)
  {
   JsonValue functionTagsJsonMap;
   for(auto& functionTagsItem : m_functionTags)
   {
     functionTagsJsonMap.WithString(functionTagsItem.first, functionTagsItem.second);
   }
   payload.WithObject("functionTags", std::move(functionTagsJsonMap));

  }

  if(m_layersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> layersJsonList(m_layers.size());
   for(unsigned layersIndex = 0; layersIndex < layersJsonList.GetLength(); ++layersIndex)
   {
     layersJsonList[layersIndex].AsString(m_layers[layersIndex]);
   }
   payload.WithArray("layers", std::move(layersJsonList));

  }

  if(m_runtimeHasBeenSet)
  {
   payload.WithString("runtime", RuntimeMapper::GetNameForRuntime(m_runtime));
  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
