/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/TagScopeTerm.h>
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

TagScopeTerm::TagScopeTerm() : 
    m_comparator(JobComparator::NOT_SET),
    m_comparatorHasBeenSet(false),
    m_keyHasBeenSet(false),
    m_tagValuesHasBeenSet(false),
    m_target(TagTarget::NOT_SET),
    m_targetHasBeenSet(false)
{
}

TagScopeTerm::TagScopeTerm(JsonView jsonValue) : 
    m_comparator(JobComparator::NOT_SET),
    m_comparatorHasBeenSet(false),
    m_keyHasBeenSet(false),
    m_tagValuesHasBeenSet(false),
    m_target(TagTarget::NOT_SET),
    m_targetHasBeenSet(false)
{
  *this = jsonValue;
}

TagScopeTerm& TagScopeTerm::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("comparator"))
  {
    m_comparator = JobComparatorMapper::GetJobComparatorForName(jsonValue.GetString("comparator"));

    m_comparatorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("key"))
  {
    m_key = jsonValue.GetString("key");

    m_keyHasBeenSet = true;
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

  if(jsonValue.ValueExists("target"))
  {
    m_target = TagTargetMapper::GetTagTargetForName(jsonValue.GetString("target"));

    m_targetHasBeenSet = true;
  }

  return *this;
}

JsonValue TagScopeTerm::Jsonize() const
{
  JsonValue payload;

  if(m_comparatorHasBeenSet)
  {
   payload.WithString("comparator", JobComparatorMapper::GetNameForJobComparator(m_comparator));
  }

  if(m_keyHasBeenSet)
  {
   payload.WithString("key", m_key);

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

  if(m_targetHasBeenSet)
  {
   payload.WithString("target", TagTargetMapper::GetNameForTagTarget(m_target));
  }

  return payload;
}

} // namespace Model
} // namespace Macie2
} // namespace Aws
