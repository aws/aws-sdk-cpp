/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/shield/model/AttackStatisticsDataItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Shield
{
namespace Model
{

AttackStatisticsDataItem::AttackStatisticsDataItem() : 
    m_attackVolumeHasBeenSet(false),
    m_attackCount(0),
    m_attackCountHasBeenSet(false)
{
}

AttackStatisticsDataItem::AttackStatisticsDataItem(JsonView jsonValue) : 
    m_attackVolumeHasBeenSet(false),
    m_attackCount(0),
    m_attackCountHasBeenSet(false)
{
  *this = jsonValue;
}

AttackStatisticsDataItem& AttackStatisticsDataItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AttackVolume"))
  {
    m_attackVolume = jsonValue.GetObject("AttackVolume");

    m_attackVolumeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AttackCount"))
  {
    m_attackCount = jsonValue.GetInt64("AttackCount");

    m_attackCountHasBeenSet = true;
  }

  return *this;
}

JsonValue AttackStatisticsDataItem::Jsonize() const
{
  JsonValue payload;

  if(m_attackVolumeHasBeenSet)
  {
   payload.WithObject("AttackVolume", m_attackVolume.Jsonize());

  }

  if(m_attackCountHasBeenSet)
  {
   payload.WithInt64("AttackCount", m_attackCount);

  }

  return payload;
}

} // namespace Model
} // namespace Shield
} // namespace Aws
