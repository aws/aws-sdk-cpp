/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/LambdaFunctionAggregation.h>
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

LambdaFunctionAggregation::LambdaFunctionAggregation() : 
    m_functionNamesHasBeenSet(false),
    m_functionTagsHasBeenSet(false),
    m_resourceIdsHasBeenSet(false),
    m_runtimesHasBeenSet(false),
    m_sortBy(LambdaFunctionSortBy::NOT_SET),
    m_sortByHasBeenSet(false),
    m_sortOrder(SortOrder::NOT_SET),
    m_sortOrderHasBeenSet(false)
{
}

LambdaFunctionAggregation::LambdaFunctionAggregation(JsonView jsonValue) : 
    m_functionNamesHasBeenSet(false),
    m_functionTagsHasBeenSet(false),
    m_resourceIdsHasBeenSet(false),
    m_runtimesHasBeenSet(false),
    m_sortBy(LambdaFunctionSortBy::NOT_SET),
    m_sortByHasBeenSet(false),
    m_sortOrder(SortOrder::NOT_SET),
    m_sortOrderHasBeenSet(false)
{
  *this = jsonValue;
}

LambdaFunctionAggregation& LambdaFunctionAggregation::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("functionTags"))
  {
    Aws::Utils::Array<JsonView> functionTagsJsonList = jsonValue.GetArray("functionTags");
    for(unsigned functionTagsIndex = 0; functionTagsIndex < functionTagsJsonList.GetLength(); ++functionTagsIndex)
    {
      m_functionTags.push_back(functionTagsJsonList[functionTagsIndex].AsObject());
    }
    m_functionTagsHasBeenSet = true;
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

  if(jsonValue.ValueExists("runtimes"))
  {
    Aws::Utils::Array<JsonView> runtimesJsonList = jsonValue.GetArray("runtimes");
    for(unsigned runtimesIndex = 0; runtimesIndex < runtimesJsonList.GetLength(); ++runtimesIndex)
    {
      m_runtimes.push_back(runtimesJsonList[runtimesIndex].AsObject());
    }
    m_runtimesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sortBy"))
  {
    m_sortBy = LambdaFunctionSortByMapper::GetLambdaFunctionSortByForName(jsonValue.GetString("sortBy"));

    m_sortByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sortOrder"))
  {
    m_sortOrder = SortOrderMapper::GetSortOrderForName(jsonValue.GetString("sortOrder"));

    m_sortOrderHasBeenSet = true;
  }

  return *this;
}

JsonValue LambdaFunctionAggregation::Jsonize() const
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

  if(m_functionTagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> functionTagsJsonList(m_functionTags.size());
   for(unsigned functionTagsIndex = 0; functionTagsIndex < functionTagsJsonList.GetLength(); ++functionTagsIndex)
   {
     functionTagsJsonList[functionTagsIndex].AsObject(m_functionTags[functionTagsIndex].Jsonize());
   }
   payload.WithArray("functionTags", std::move(functionTagsJsonList));

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

  if(m_runtimesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> runtimesJsonList(m_runtimes.size());
   for(unsigned runtimesIndex = 0; runtimesIndex < runtimesJsonList.GetLength(); ++runtimesIndex)
   {
     runtimesJsonList[runtimesIndex].AsObject(m_runtimes[runtimesIndex].Jsonize());
   }
   payload.WithArray("runtimes", std::move(runtimesJsonList));

  }

  if(m_sortByHasBeenSet)
  {
   payload.WithString("sortBy", LambdaFunctionSortByMapper::GetNameForLambdaFunctionSortBy(m_sortBy));
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
