/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/RepositoryAggregation.h>
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

RepositoryAggregation::RepositoryAggregation() : 
    m_repositoriesHasBeenSet(false),
    m_sortBy(RepositorySortBy::NOT_SET),
    m_sortByHasBeenSet(false),
    m_sortOrder(SortOrder::NOT_SET),
    m_sortOrderHasBeenSet(false)
{
}

RepositoryAggregation::RepositoryAggregation(JsonView jsonValue) : 
    m_repositoriesHasBeenSet(false),
    m_sortBy(RepositorySortBy::NOT_SET),
    m_sortByHasBeenSet(false),
    m_sortOrder(SortOrder::NOT_SET),
    m_sortOrderHasBeenSet(false)
{
  *this = jsonValue;
}

RepositoryAggregation& RepositoryAggregation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("repositories"))
  {
    Aws::Utils::Array<JsonView> repositoriesJsonList = jsonValue.GetArray("repositories");
    for(unsigned repositoriesIndex = 0; repositoriesIndex < repositoriesJsonList.GetLength(); ++repositoriesIndex)
    {
      m_repositories.push_back(repositoriesJsonList[repositoriesIndex].AsObject());
    }
    m_repositoriesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sortBy"))
  {
    m_sortBy = RepositorySortByMapper::GetRepositorySortByForName(jsonValue.GetString("sortBy"));

    m_sortByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sortOrder"))
  {
    m_sortOrder = SortOrderMapper::GetSortOrderForName(jsonValue.GetString("sortOrder"));

    m_sortOrderHasBeenSet = true;
  }

  return *this;
}

JsonValue RepositoryAggregation::Jsonize() const
{
  JsonValue payload;

  if(m_repositoriesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> repositoriesJsonList(m_repositories.size());
   for(unsigned repositoriesIndex = 0; repositoriesIndex < repositoriesJsonList.GetLength(); ++repositoriesIndex)
   {
     repositoriesJsonList[repositoriesIndex].AsObject(m_repositories[repositoriesIndex].Jsonize());
   }
   payload.WithArray("repositories", std::move(repositoriesJsonList));

  }

  if(m_sortByHasBeenSet)
  {
   payload.WithString("sortBy", RepositorySortByMapper::GetNameForRepositorySortBy(m_sortBy));
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
