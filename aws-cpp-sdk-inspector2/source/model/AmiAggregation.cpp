/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/AmiAggregation.h>
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

AmiAggregation::AmiAggregation() : 
    m_amisHasBeenSet(false),
    m_sortBy(AmiSortBy::NOT_SET),
    m_sortByHasBeenSet(false),
    m_sortOrder(SortOrder::NOT_SET),
    m_sortOrderHasBeenSet(false)
{
}

AmiAggregation::AmiAggregation(JsonView jsonValue) : 
    m_amisHasBeenSet(false),
    m_sortBy(AmiSortBy::NOT_SET),
    m_sortByHasBeenSet(false),
    m_sortOrder(SortOrder::NOT_SET),
    m_sortOrderHasBeenSet(false)
{
  *this = jsonValue;
}

AmiAggregation& AmiAggregation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("amis"))
  {
    Aws::Utils::Array<JsonView> amisJsonList = jsonValue.GetArray("amis");
    for(unsigned amisIndex = 0; amisIndex < amisJsonList.GetLength(); ++amisIndex)
    {
      m_amis.push_back(amisJsonList[amisIndex].AsObject());
    }
    m_amisHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sortBy"))
  {
    m_sortBy = AmiSortByMapper::GetAmiSortByForName(jsonValue.GetString("sortBy"));

    m_sortByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sortOrder"))
  {
    m_sortOrder = SortOrderMapper::GetSortOrderForName(jsonValue.GetString("sortOrder"));

    m_sortOrderHasBeenSet = true;
  }

  return *this;
}

JsonValue AmiAggregation::Jsonize() const
{
  JsonValue payload;

  if(m_amisHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> amisJsonList(m_amis.size());
   for(unsigned amisIndex = 0; amisIndex < amisJsonList.GetLength(); ++amisIndex)
   {
     amisJsonList[amisIndex].AsObject(m_amis[amisIndex].Jsonize());
   }
   payload.WithArray("amis", std::move(amisJsonList));

  }

  if(m_sortByHasBeenSet)
  {
   payload.WithString("sortBy", AmiSortByMapper::GetNameForAmiSortBy(m_sortBy));
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
