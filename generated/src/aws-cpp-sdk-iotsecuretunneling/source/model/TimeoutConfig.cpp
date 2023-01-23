/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsecuretunneling/model/TimeoutConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTSecureTunneling
{
namespace Model
{

TimeoutConfig::TimeoutConfig() : 
    m_maxLifetimeTimeoutMinutes(0),
    m_maxLifetimeTimeoutMinutesHasBeenSet(false)
{
}

TimeoutConfig::TimeoutConfig(JsonView jsonValue) : 
    m_maxLifetimeTimeoutMinutes(0),
    m_maxLifetimeTimeoutMinutesHasBeenSet(false)
{
  *this = jsonValue;
}

TimeoutConfig& TimeoutConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("maxLifetimeTimeoutMinutes"))
  {
    m_maxLifetimeTimeoutMinutes = jsonValue.GetInteger("maxLifetimeTimeoutMinutes");

    m_maxLifetimeTimeoutMinutesHasBeenSet = true;
  }

  return *this;
}

JsonValue TimeoutConfig::Jsonize() const
{
  JsonValue payload;

  if(m_maxLifetimeTimeoutMinutesHasBeenSet)
  {
   payload.WithInteger("maxLifetimeTimeoutMinutes", m_maxLifetimeTimeoutMinutes);

  }

  return payload;
}

} // namespace Model
} // namespace IoTSecureTunneling
} // namespace Aws
