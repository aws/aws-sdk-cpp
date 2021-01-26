/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/shield/model/ProtectionGroupLimits.h>
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

ProtectionGroupLimits::ProtectionGroupLimits() : 
    m_maxProtectionGroups(0),
    m_maxProtectionGroupsHasBeenSet(false),
    m_patternTypeLimitsHasBeenSet(false)
{
}

ProtectionGroupLimits::ProtectionGroupLimits(JsonView jsonValue) : 
    m_maxProtectionGroups(0),
    m_maxProtectionGroupsHasBeenSet(false),
    m_patternTypeLimitsHasBeenSet(false)
{
  *this = jsonValue;
}

ProtectionGroupLimits& ProtectionGroupLimits::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MaxProtectionGroups"))
  {
    m_maxProtectionGroups = jsonValue.GetInt64("MaxProtectionGroups");

    m_maxProtectionGroupsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PatternTypeLimits"))
  {
    m_patternTypeLimits = jsonValue.GetObject("PatternTypeLimits");

    m_patternTypeLimitsHasBeenSet = true;
  }

  return *this;
}

JsonValue ProtectionGroupLimits::Jsonize() const
{
  JsonValue payload;

  if(m_maxProtectionGroupsHasBeenSet)
  {
   payload.WithInt64("MaxProtectionGroups", m_maxProtectionGroups);

  }

  if(m_patternTypeLimitsHasBeenSet)
  {
   payload.WithObject("PatternTypeLimits", m_patternTypeLimits.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Shield
} // namespace Aws
