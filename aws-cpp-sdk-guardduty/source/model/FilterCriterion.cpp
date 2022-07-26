/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/FilterCriterion.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

FilterCriterion::FilterCriterion() : 
    m_criterionKey(CriterionKey::NOT_SET),
    m_criterionKeyHasBeenSet(false),
    m_filterConditionHasBeenSet(false)
{
}

FilterCriterion::FilterCriterion(JsonView jsonValue) : 
    m_criterionKey(CriterionKey::NOT_SET),
    m_criterionKeyHasBeenSet(false),
    m_filterConditionHasBeenSet(false)
{
  *this = jsonValue;
}

FilterCriterion& FilterCriterion::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("criterionKey"))
  {
    m_criterionKey = CriterionKeyMapper::GetCriterionKeyForName(jsonValue.GetString("criterionKey"));

    m_criterionKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("filterCondition"))
  {
    m_filterCondition = jsonValue.GetObject("filterCondition");

    m_filterConditionHasBeenSet = true;
  }

  return *this;
}

JsonValue FilterCriterion::Jsonize() const
{
  JsonValue payload;

  if(m_criterionKeyHasBeenSet)
  {
   payload.WithString("criterionKey", CriterionKeyMapper::GetNameForCriterionKey(m_criterionKey));
  }

  if(m_filterConditionHasBeenSet)
  {
   payload.WithObject("filterCondition", m_filterCondition.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
