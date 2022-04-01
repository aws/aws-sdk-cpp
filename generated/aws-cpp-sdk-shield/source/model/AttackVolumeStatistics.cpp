/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/shield/model/AttackVolumeStatistics.h>
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

AttackVolumeStatistics::AttackVolumeStatistics() : 
    m_max(0.0),
    m_maxHasBeenSet(false)
{
}

AttackVolumeStatistics::AttackVolumeStatistics(JsonView jsonValue) : 
    m_max(0.0),
    m_maxHasBeenSet(false)
{
  *this = jsonValue;
}

AttackVolumeStatistics& AttackVolumeStatistics::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Max"))
  {
    m_max = jsonValue.GetDouble("Max");

    m_maxHasBeenSet = true;
  }

  return *this;
}

JsonValue AttackVolumeStatistics::Jsonize() const
{
  JsonValue payload;

  if(m_maxHasBeenSet)
  {
   payload.WithDouble("Max", m_max);

  }

  return payload;
}

} // namespace Model
} // namespace Shield
} // namespace Aws
