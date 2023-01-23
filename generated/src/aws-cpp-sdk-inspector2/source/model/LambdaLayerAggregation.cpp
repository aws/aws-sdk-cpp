/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/LambdaLayerAggregation.h>
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

LambdaLayerAggregation::LambdaLayerAggregation() : 
    m_functionNamesHasBeenSet(false),
    m_layerArnsHasBeenSet(false),
    m_resourceIdsHasBeenSet(false),
    m_sortBy(LambdaLayerSortBy::NOT_SET),
    m_sortByHasBeenSet(false),
    m_sortOrder(SortOrder::NOT_SET),
    m_sortOrderHasBeenSet(false)
{
}

LambdaLayerAggregation::LambdaLayerAggregation(JsonView jsonValue) : 
    m_functionNamesHasBeenSet(false),
    m_layerArnsHasBeenSet(false),
    m_resourceIdsHasBeenSet(false),
    m_sortBy(LambdaLayerSortBy::NOT_SET),
    m_sortByHasBeenSet(false),
    m_sortOrder(SortOrder::NOT_SET),
    m_sortOrderHasBeenSet(false)
{
  *this = jsonValue;
}

LambdaLayerAggregation& LambdaLayerAggregation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("functionNames"))
  {
    Aws::Utils::Array<JsonView> functionNamesJsonList = jsonValue.GetArray("functionNames");
    for(unsigned functionNamesIndex = 0; functionNamesIndex < functionNamesJsonList.GetLength(); ++functionNamesIndex)
    {
      m_functionNames.push_back(functionNamesJsonList[functionNamesIndex].AsObject());
    }
    m_functionNamesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("layerArns"))
  {
    Aws::Utils::Array<JsonView> layerArnsJsonList = jsonValue.GetArray("layerArns");
    for(unsigned layerArnsIndex = 0; layerArnsIndex < layerArnsJsonList.GetLength(); ++layerArnsIndex)
    {
      m_layerArns.push_back(layerArnsJsonList[layerArnsIndex].AsObject());
    }
    m_layerArnsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceIds"))
  {
    Aws::Utils::Array<JsonView> resourceIdsJsonList = jsonValue.GetArray("resourceIds");
    for(unsigned resourceIdsIndex = 0; resourceIdsIndex < resourceIdsJsonList.GetLength(); ++resourceIdsIndex)
    {
      m_resourceIds.push_back(resourceIdsJsonList[resourceIdsIndex].AsObject());
    }
    m_resourceIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sortBy"))
  {
    m_sortBy = LambdaLayerSortByMapper::GetLambdaLayerSortByForName(jsonValue.GetString("sortBy"));

    m_sortByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sortOrder"))
  {
    m_sortOrder = SortOrderMapper::GetSortOrderForName(jsonValue.GetString("sortOrder"));

    m_sortOrderHasBeenSet = true;
  }

  return *this;
}

JsonValue LambdaLayerAggregation::Jsonize() const
{
  JsonValue payload;

  if(m_functionNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> functionNamesJsonList(m_functionNames.size());
   for(unsigned functionNamesIndex = 0; functionNamesIndex < functionNamesJsonList.GetLength(); ++functionNamesIndex)
   {
     functionNamesJsonList[functionNamesIndex].AsObject(m_functionNames[functionNamesIndex].Jsonize());
   }
   payload.WithArray("functionNames", std::move(functionNamesJsonList));

  }

  if(m_layerArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> layerArnsJsonList(m_layerArns.size());
   for(unsigned layerArnsIndex = 0; layerArnsIndex < layerArnsJsonList.GetLength(); ++layerArnsIndex)
   {
     layerArnsJsonList[layerArnsIndex].AsObject(m_layerArns[layerArnsIndex].Jsonize());
   }
   payload.WithArray("layerArns", std::move(layerArnsJsonList));

  }

  if(m_resourceIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceIdsJsonList(m_resourceIds.size());
   for(unsigned resourceIdsIndex = 0; resourceIdsIndex < resourceIdsJsonList.GetLength(); ++resourceIdsIndex)
   {
     resourceIdsJsonList[resourceIdsIndex].AsObject(m_resourceIds[resourceIdsIndex].Jsonize());
   }
   payload.WithArray("resourceIds", std::move(resourceIdsJsonList));

  }

  if(m_sortByHasBeenSet)
  {
   payload.WithString("sortBy", LambdaLayerSortByMapper::GetNameForLambdaLayerSortBy(m_sortBy));
  }

  if(m_sortOrderHasBeenSet)
  {
   payload.WithString("sortOrder", SortOrderMapper::GetNameForSortOrder(m_sortOrder));
  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
