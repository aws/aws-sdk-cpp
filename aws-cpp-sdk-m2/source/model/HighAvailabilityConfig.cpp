/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/m2/model/HighAvailabilityConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MainframeModernization
{
namespace Model
{

HighAvailabilityConfig::HighAvailabilityConfig() : 
    m_desiredCapacity(0),
    m_desiredCapacityHasBeenSet(false)
{
}

HighAvailabilityConfig::HighAvailabilityConfig(JsonView jsonValue) : 
    m_desiredCapacity(0),
    m_desiredCapacityHasBeenSet(false)
{
  *this = jsonValue;
}

HighAvailabilityConfig& HighAvailabilityConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("desiredCapacity"))
  {
    m_desiredCapacity = jsonValue.GetInteger("desiredCapacity");

    m_desiredCapacityHasBeenSet = true;
  }

  return *this;
}

JsonValue HighAvailabilityConfig::Jsonize() const
{
  JsonValue payload;

  if(m_desiredCapacityHasBeenSet)
  {
   payload.WithInteger("desiredCapacity", m_desiredCapacity);

  }

  return payload;
}

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
