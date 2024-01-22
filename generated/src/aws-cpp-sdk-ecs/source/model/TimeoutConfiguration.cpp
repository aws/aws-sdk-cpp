/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/TimeoutConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ECS
{
namespace Model
{

TimeoutConfiguration::TimeoutConfiguration() : 
    m_idleTimeoutSeconds(0),
    m_idleTimeoutSecondsHasBeenSet(false),
    m_perRequestTimeoutSeconds(0),
    m_perRequestTimeoutSecondsHasBeenSet(false)
{
}

TimeoutConfiguration::TimeoutConfiguration(JsonView jsonValue) : 
    m_idleTimeoutSeconds(0),
    m_idleTimeoutSecondsHasBeenSet(false),
    m_perRequestTimeoutSeconds(0),
    m_perRequestTimeoutSecondsHasBeenSet(false)
{
  *this = jsonValue;
}

TimeoutConfiguration& TimeoutConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("idleTimeoutSeconds"))
  {
    m_idleTimeoutSeconds = jsonValue.GetInteger("idleTimeoutSeconds");

    m_idleTimeoutSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("perRequestTimeoutSeconds"))
  {
    m_perRequestTimeoutSeconds = jsonValue.GetInteger("perRequestTimeoutSeconds");

    m_perRequestTimeoutSecondsHasBeenSet = true;
  }

  return *this;
}

JsonValue TimeoutConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_idleTimeoutSecondsHasBeenSet)
  {
   payload.WithInteger("idleTimeoutSeconds", m_idleTimeoutSeconds);

  }

  if(m_perRequestTimeoutSecondsHasBeenSet)
  {
   payload.WithInteger("perRequestTimeoutSeconds", m_perRequestTimeoutSeconds);

  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws
