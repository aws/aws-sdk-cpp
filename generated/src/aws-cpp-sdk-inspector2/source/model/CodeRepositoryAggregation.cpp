/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/CodeRepositoryAggregation.h>
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

CodeRepositoryAggregation::CodeRepositoryAggregation(JsonView jsonValue)
{
  *this = jsonValue;
}

CodeRepositoryAggregation& CodeRepositoryAggregation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("projectNames"))
  {
    Aws::Utils::Array<JsonView> projectNamesJsonList = jsonValue.GetArray("projectNames");
    for(unsigned projectNamesIndex = 0; projectNamesIndex < projectNamesJsonList.GetLength(); ++projectNamesIndex)
    {
      m_projectNames.push_back(projectNamesJsonList[projectNamesIndex].AsObject());
    }
    m_projectNamesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("providerTypes"))
  {
    Aws::Utils::Array<JsonView> providerTypesJsonList = jsonValue.GetArray("providerTypes");
    for(unsigned providerTypesIndex = 0; providerTypesIndex < providerTypesJsonList.GetLength(); ++providerTypesIndex)
    {
      m_providerTypes.push_back(providerTypesJsonList[providerTypesIndex].AsObject());
    }
    m_providerTypesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sortOrder"))
  {
    m_sortOrder = SortOrderMapper::GetSortOrderForName(jsonValue.GetString("sortOrder"));
    m_sortOrderHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sortBy"))
  {
    m_sortBy = CodeRepositorySortByMapper::GetCodeRepositorySortByForName(jsonValue.GetString("sortBy"));
    m_sortByHasBeenSet = true;
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
  return *this;
}

JsonValue CodeRepositoryAggregation::Jsonize() const
{
  JsonValue payload;

  if(m_projectNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> projectNamesJsonList(m_projectNames.size());
   for(unsigned projectNamesIndex = 0; projectNamesIndex < projectNamesJsonList.GetLength(); ++projectNamesIndex)
   {
     projectNamesJsonList[projectNamesIndex].AsObject(m_projectNames[projectNamesIndex].Jsonize());
   }
   payload.WithArray("projectNames", std::move(projectNamesJsonList));

  }

  if(m_providerTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> providerTypesJsonList(m_providerTypes.size());
   for(unsigned providerTypesIndex = 0; providerTypesIndex < providerTypesJsonList.GetLength(); ++providerTypesIndex)
   {
     providerTypesJsonList[providerTypesIndex].AsObject(m_providerTypes[providerTypesIndex].Jsonize());
   }
   payload.WithArray("providerTypes", std::move(providerTypesJsonList));

  }

  if(m_sortOrderHasBeenSet)
  {
   payload.WithString("sortOrder", SortOrderMapper::GetNameForSortOrder(m_sortOrder));
  }

  if(m_sortByHasBeenSet)
  {
   payload.WithString("sortBy", CodeRepositorySortByMapper::GetNameForCodeRepositorySortBy(m_sortBy));
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

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
