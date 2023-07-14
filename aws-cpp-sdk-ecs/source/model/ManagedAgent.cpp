/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/ManagedAgent.h>
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

ManagedAgent::ManagedAgent() : 
    m_lastStartedAtHasBeenSet(false),
    m_name(ManagedAgentName::NOT_SET),
    m_nameHasBeenSet(false),
    m_reasonHasBeenSet(false),
    m_lastStatusHasBeenSet(false)
{
}

ManagedAgent::ManagedAgent(JsonView jsonValue) : 
    m_lastStartedAtHasBeenSet(false),
    m_name(ManagedAgentName::NOT_SET),
    m_nameHasBeenSet(false),
    m_reasonHasBeenSet(false),
    m_lastStatusHasBeenSet(false)
{
  *this = jsonValue;
}

ManagedAgent& ManagedAgent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("lastStartedAt"))
  {
    m_lastStartedAt = jsonValue.GetDouble("lastStartedAt");

    m_lastStartedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = ManagedAgentNameMapper::GetManagedAgentNameForName(jsonValue.GetString("name"));

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("reason"))
  {
    m_reason = jsonValue.GetString("reason");

    m_reasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastStatus"))
  {
    m_lastStatus = jsonValue.GetString("lastStatus");

    m_lastStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue ManagedAgent::Jsonize() const
{
  JsonValue payload;

  if(m_lastStartedAtHasBeenSet)
  {
   payload.WithDouble("lastStartedAt", m_lastStartedAt.SecondsWithMSPrecision());
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", ManagedAgentNameMapper::GetNameForManagedAgentName(m_name));
  }

  if(m_reasonHasBeenSet)
  {
   payload.WithString("reason", m_reason);

  }

  if(m_lastStatusHasBeenSet)
  {
   payload.WithString("lastStatus", m_lastStatus);

  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws
