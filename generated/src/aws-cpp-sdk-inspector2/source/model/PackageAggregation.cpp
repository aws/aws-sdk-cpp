/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/PackageAggregation.h>
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

PackageAggregation::PackageAggregation() : 
    m_packageNamesHasBeenSet(false),
    m_sortBy(PackageSortBy::NOT_SET),
    m_sortByHasBeenSet(false),
    m_sortOrder(SortOrder::NOT_SET),
    m_sortOrderHasBeenSet(false)
{
}

PackageAggregation::PackageAggregation(JsonView jsonValue) : 
    m_packageNamesHasBeenSet(false),
    m_sortBy(PackageSortBy::NOT_SET),
    m_sortByHasBeenSet(false),
    m_sortOrder(SortOrder::NOT_SET),
    m_sortOrderHasBeenSet(false)
{
  *this = jsonValue;
}

PackageAggregation& PackageAggregation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("packageNames"))
  {
    Aws::Utils::Array<JsonView> packageNamesJsonList = jsonValue.GetArray("packageNames");
    for(unsigned packageNamesIndex = 0; packageNamesIndex < packageNamesJsonList.GetLength(); ++packageNamesIndex)
    {
      m_packageNames.push_back(packageNamesJsonList[packageNamesIndex].AsObject());
    }
    m_packageNamesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sortBy"))
  {
    m_sortBy = PackageSortByMapper::GetPackageSortByForName(jsonValue.GetString("sortBy"));

    m_sortByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sortOrder"))
  {
    m_sortOrder = SortOrderMapper::GetSortOrderForName(jsonValue.GetString("sortOrder"));

    m_sortOrderHasBeenSet = true;
  }

  return *this;
}

JsonValue PackageAggregation::Jsonize() const
{
  JsonValue payload;

  if(m_packageNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> packageNamesJsonList(m_packageNames.size());
   for(unsigned packageNamesIndex = 0; packageNamesIndex < packageNamesJsonList.GetLength(); ++packageNamesIndex)
   {
     packageNamesJsonList[packageNamesIndex].AsObject(m_packageNames[packageNamesIndex].Jsonize());
   }
   payload.WithArray("packageNames", std::move(packageNamesJsonList));

  }

  if(m_sortByHasBeenSet)
  {
   payload.WithString("sortBy", PackageSortByMapper::GetNameForPackageSortBy(m_sortBy));
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
