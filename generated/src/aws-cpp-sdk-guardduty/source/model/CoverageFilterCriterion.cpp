/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/CoverageFilterCriterion.h>
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

CoverageFilterCriterion::CoverageFilterCriterion() : 
    m_criterionKey(CoverageFilterCriterionKey::NOT_SET),
    m_criterionKeyHasBeenSet(false),
    m_filterConditionHasBeenSet(false)
{
}

CoverageFilterCriterion::CoverageFilterCriterion(JsonView jsonValue) : 
    m_criterionKey(CoverageFilterCriterionKey::NOT_SET),
    m_criterionKeyHasBeenSet(false),
    m_filterConditionHasBeenSet(false)
{
  *this = jsonValue;
}

CoverageFilterCriterion& CoverageFilterCriterion::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("criterionKey"))
  {
    m_criterionKey = CoverageFilterCriterionKeyMapper::GetCoverageFilterCriterionKeyForName(jsonValue.GetString("criterionKey"));

    m_criterionKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("filterCondition"))
  {
    m_filterCondition = jsonValue.GetObject("filterCondition");

    m_filterConditionHasBeenSet = true;
  }

  return *this;
}

JsonValue CoverageFilterCriterion::Jsonize() const
{
  JsonValue payload;

  if(m_criterionKeyHasBeenSet)
  {
   payload.WithString("criterionKey", CoverageFilterCriterionKeyMapper::GetNameForCoverageFilterCriterionKey(m_criterionKey));
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
