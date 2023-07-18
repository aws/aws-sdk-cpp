/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutequipment/model/MonotonicValues.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LookoutEquipment
{
namespace Model
{

MonotonicValues::MonotonicValues() : 
    m_status(StatisticalIssueStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_monotonicity(Monotonicity::NOT_SET),
    m_monotonicityHasBeenSet(false)
{
}

MonotonicValues::MonotonicValues(JsonView jsonValue) : 
    m_status(StatisticalIssueStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_monotonicity(Monotonicity::NOT_SET),
    m_monotonicityHasBeenSet(false)
{
  *this = jsonValue;
}

MonotonicValues& MonotonicValues::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Status"))
  {
    m_status = StatisticalIssueStatusMapper::GetStatisticalIssueStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Monotonicity"))
  {
    m_monotonicity = MonotonicityMapper::GetMonotonicityForName(jsonValue.GetString("Monotonicity"));

    m_monotonicityHasBeenSet = true;
  }

  return *this;
}

JsonValue MonotonicValues::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", StatisticalIssueStatusMapper::GetNameForStatisticalIssueStatus(m_status));
  }

  if(m_monotonicityHasBeenSet)
  {
   payload.WithString("Monotonicity", MonotonicityMapper::GetNameForMonotonicity(m_monotonicity));
  }

  return payload;
}

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
