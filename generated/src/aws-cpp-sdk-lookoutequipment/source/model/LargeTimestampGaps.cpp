/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutequipment/model/LargeTimestampGaps.h>
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

LargeTimestampGaps::LargeTimestampGaps() : 
    m_status(StatisticalIssueStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_numberOfLargeTimestampGaps(0),
    m_numberOfLargeTimestampGapsHasBeenSet(false),
    m_maxTimestampGapInDays(0),
    m_maxTimestampGapInDaysHasBeenSet(false)
{
}

LargeTimestampGaps::LargeTimestampGaps(JsonView jsonValue) : 
    m_status(StatisticalIssueStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_numberOfLargeTimestampGaps(0),
    m_numberOfLargeTimestampGapsHasBeenSet(false),
    m_maxTimestampGapInDays(0),
    m_maxTimestampGapInDaysHasBeenSet(false)
{
  *this = jsonValue;
}

LargeTimestampGaps& LargeTimestampGaps::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Status"))
  {
    m_status = StatisticalIssueStatusMapper::GetStatisticalIssueStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NumberOfLargeTimestampGaps"))
  {
    m_numberOfLargeTimestampGaps = jsonValue.GetInteger("NumberOfLargeTimestampGaps");

    m_numberOfLargeTimestampGapsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxTimestampGapInDays"))
  {
    m_maxTimestampGapInDays = jsonValue.GetInteger("MaxTimestampGapInDays");

    m_maxTimestampGapInDaysHasBeenSet = true;
  }

  return *this;
}

JsonValue LargeTimestampGaps::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", StatisticalIssueStatusMapper::GetNameForStatisticalIssueStatus(m_status));
  }

  if(m_numberOfLargeTimestampGapsHasBeenSet)
  {
   payload.WithInteger("NumberOfLargeTimestampGaps", m_numberOfLargeTimestampGaps);

  }

  if(m_maxTimestampGapInDaysHasBeenSet)
  {
   payload.WithInteger("MaxTimestampGapInDays", m_maxTimestampGapInDays);

  }

  return payload;
}

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
