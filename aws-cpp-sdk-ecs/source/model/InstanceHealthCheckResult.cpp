/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/InstanceHealthCheckResult.h>
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

InstanceHealthCheckResult::InstanceHealthCheckResult() : 
    m_type(InstanceHealthCheckType::NOT_SET),
    m_typeHasBeenSet(false),
    m_status(InstanceHealthCheckState::NOT_SET),
    m_statusHasBeenSet(false),
    m_lastUpdatedHasBeenSet(false),
    m_lastStatusChangeHasBeenSet(false)
{
}

InstanceHealthCheckResult::InstanceHealthCheckResult(JsonView jsonValue) : 
    m_type(InstanceHealthCheckType::NOT_SET),
    m_typeHasBeenSet(false),
    m_status(InstanceHealthCheckState::NOT_SET),
    m_statusHasBeenSet(false),
    m_lastUpdatedHasBeenSet(false),
    m_lastStatusChangeHasBeenSet(false)
{
  *this = jsonValue;
}

InstanceHealthCheckResult& InstanceHealthCheckResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = InstanceHealthCheckTypeMapper::GetInstanceHealthCheckTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = InstanceHealthCheckStateMapper::GetInstanceHealthCheckStateForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdated"))
  {
    m_lastUpdated = jsonValue.GetDouble("lastUpdated");

    m_lastUpdatedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastStatusChange"))
  {
    m_lastStatusChange = jsonValue.GetDouble("lastStatusChange");

    m_lastStatusChangeHasBeenSet = true;
  }

  return *this;
}

JsonValue InstanceHealthCheckResult::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", InstanceHealthCheckTypeMapper::GetNameForInstanceHealthCheckType(m_type));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", InstanceHealthCheckStateMapper::GetNameForInstanceHealthCheckState(m_status));
  }

  if(m_lastUpdatedHasBeenSet)
  {
   payload.WithDouble("lastUpdated", m_lastUpdated.SecondsWithMSPrecision());
  }

  if(m_lastStatusChangeHasBeenSet)
  {
   payload.WithDouble("lastStatusChange", m_lastStatusChange.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws
