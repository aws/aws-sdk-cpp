/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/SearchResourcesTagCriterion.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Macie2
{
namespace Model
{

SearchResourcesTagCriterion::SearchResourcesTagCriterion() : 
    m_comparator(SearchResourcesComparator::NOT_SET),
    m_comparatorHasBeenSet(false),
    m_tagValuesHasBeenSet(false)
{
}

SearchResourcesTagCriterion::SearchResourcesTagCriterion(JsonView jsonValue) : 
    m_comparator(SearchResourcesComparator::NOT_SET),
    m_comparatorHasBeenSet(false),
    m_tagValuesHasBeenSet(false)
{
  *this = jsonValue;
}

SearchResourcesTagCriterion& SearchResourcesTagCriterion::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("comparator"))
  {
    m_comparator = SearchResourcesComparatorMapper::GetSearchResourcesComparatorForName(jsonValue.GetString("comparator"));

    m_comparatorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tagValues"))
  {
    Aws::Utils::Array<JsonView> tagValuesJsonList = jsonValue.GetArray("tagValues");
    for(unsigned tagValuesIndex = 0; tagValuesIndex < tagValuesJsonList.GetLength(); ++tagValuesIndex)
    {
      m_tagValues.push_back(tagValuesJsonList[tagValuesIndex].AsObject());
    }
    m_tagValuesHasBeenSet = true;
  }

  return *this;
}

JsonValue SearchResourcesTagCriterion::Jsonize() const
{
  JsonValue payload;

  if(m_comparatorHasBeenSet)
  {
   payload.WithString("comparator", SearchResourcesComparatorMapper::GetNameForSearchResourcesComparator(m_comparator));
  }

  if(m_tagValuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagValuesJsonList(m_tagValues.size());
   for(unsigned tagValuesIndex = 0; tagValuesIndex < tagValuesJsonList.GetLength(); ++tagValuesIndex)
   {
     tagValuesJsonList[tagValuesIndex].AsObject(m_tagValues[tagValuesIndex].Jsonize());
   }
   payload.WithArray("tagValues", std::move(tagValuesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Macie2
} // namespace Aws
