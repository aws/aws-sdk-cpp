/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/TitleAggregation.h>
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

TitleAggregation::TitleAggregation() : 
    m_resourceType(AggregationResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_sortBy(TitleSortBy::NOT_SET),
    m_sortByHasBeenSet(false),
    m_sortOrder(SortOrder::NOT_SET),
    m_sortOrderHasBeenSet(false),
    m_titlesHasBeenSet(false),
    m_vulnerabilityIdsHasBeenSet(false)
{
}

TitleAggregation::TitleAggregation(JsonView jsonValue) : 
    m_resourceType(AggregationResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_sortBy(TitleSortBy::NOT_SET),
    m_sortByHasBeenSet(false),
    m_sortOrder(SortOrder::NOT_SET),
    m_sortOrderHasBeenSet(false),
    m_titlesHasBeenSet(false),
    m_vulnerabilityIdsHasBeenSet(false)
{
  *this = jsonValue;
}

TitleAggregation& TitleAggregation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("resourceType"))
  {
    m_resourceType = AggregationResourceTypeMapper::GetAggregationResourceTypeForName(jsonValue.GetString("resourceType"));

    m_resourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sortBy"))
  {
    m_sortBy = TitleSortByMapper::GetTitleSortByForName(jsonValue.GetString("sortBy"));

    m_sortByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sortOrder"))
  {
    m_sortOrder = SortOrderMapper::GetSortOrderForName(jsonValue.GetString("sortOrder"));

    m_sortOrderHasBeenSet = true;
  }

  if(jsonValue.ValueExists("titles"))
  {
    Aws::Utils::Array<JsonView> titlesJsonList = jsonValue.GetArray("titles");
    for(unsigned titlesIndex = 0; titlesIndex < titlesJsonList.GetLength(); ++titlesIndex)
    {
      m_titles.push_back(titlesJsonList[titlesIndex].AsObject());
    }
    m_titlesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("vulnerabilityIds"))
  {
    Aws::Utils::Array<JsonView> vulnerabilityIdsJsonList = jsonValue.GetArray("vulnerabilityIds");
    for(unsigned vulnerabilityIdsIndex = 0; vulnerabilityIdsIndex < vulnerabilityIdsJsonList.GetLength(); ++vulnerabilityIdsIndex)
    {
      m_vulnerabilityIds.push_back(vulnerabilityIdsJsonList[vulnerabilityIdsIndex].AsObject());
    }
    m_vulnerabilityIdsHasBeenSet = true;
  }

  return *this;
}

JsonValue TitleAggregation::Jsonize() const
{
  JsonValue payload;

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("resourceType", AggregationResourceTypeMapper::GetNameForAggregationResourceType(m_resourceType));
  }

  if(m_sortByHasBeenSet)
  {
   payload.WithString("sortBy", TitleSortByMapper::GetNameForTitleSortBy(m_sortBy));
  }

  if(m_sortOrderHasBeenSet)
  {
   payload.WithString("sortOrder", SortOrderMapper::GetNameForSortOrder(m_sortOrder));
  }

  if(m_titlesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> titlesJsonList(m_titles.size());
   for(unsigned titlesIndex = 0; titlesIndex < titlesJsonList.GetLength(); ++titlesIndex)
   {
     titlesJsonList[titlesIndex].AsObject(m_titles[titlesIndex].Jsonize());
   }
   payload.WithArray("titles", std::move(titlesJsonList));

  }

  if(m_vulnerabilityIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> vulnerabilityIdsJsonList(m_vulnerabilityIds.size());
   for(unsigned vulnerabilityIdsIndex = 0; vulnerabilityIdsIndex < vulnerabilityIdsJsonList.GetLength(); ++vulnerabilityIdsIndex)
   {
     vulnerabilityIdsJsonList[vulnerabilityIdsIndex].AsObject(m_vulnerabilityIds[vulnerabilityIdsIndex].Jsonize());
   }
   payload.WithArray("vulnerabilityIds", std::move(vulnerabilityIdsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
