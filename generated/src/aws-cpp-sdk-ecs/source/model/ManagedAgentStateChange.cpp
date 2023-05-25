/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/ManagedAgentStateChange.h>
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

ManagedAgentStateChange::ManagedAgentStateChange() : 
    m_containerNameHasBeenSet(false),
    m_managedAgentName(ManagedAgentName::NOT_SET),
    m_managedAgentNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_reasonHasBeenSet(false)
{
}

ManagedAgentStateChange::ManagedAgentStateChange(JsonView jsonValue) : 
    m_containerNameHasBeenSet(false),
    m_managedAgentName(ManagedAgentName::NOT_SET),
    m_managedAgentNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_reasonHasBeenSet(false)
{
  *this = jsonValue;
}

ManagedAgentStateChange& ManagedAgentStateChange::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("containerName"))
  {
    m_containerName = jsonValue.GetString("containerName");

    m_containerNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("managedAgentName"))
  {
    m_managedAgentName = ManagedAgentNameMapper::GetManagedAgentNameForName(jsonValue.GetString("managedAgentName"));

    m_managedAgentNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = jsonValue.GetString("status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("reason"))
  {
    m_reason = jsonValue.GetString("reason");

    m_reasonHasBeenSet = true;
  }

  return *this;
}

JsonValue ManagedAgentStateChange::Jsonize() const
{
  JsonValue payload;

  if(m_containerNameHasBeenSet)
  {
   payload.WithString("containerName", m_containerName);

  }

  if(m_managedAgentNameHasBeenSet)
  {
   payload.WithString("managedAgentName", ManagedAgentNameMapper::GetNameForManagedAgentName(m_managedAgentName));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", m_status);

  }

  if(m_reasonHasBeenSet)
  {
   payload.WithString("reason", m_reason);

  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws
