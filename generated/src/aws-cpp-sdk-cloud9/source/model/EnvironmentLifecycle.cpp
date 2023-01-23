/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloud9/model/EnvironmentLifecycle.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Cloud9
{
namespace Model
{

EnvironmentLifecycle::EnvironmentLifecycle() : 
    m_status(EnvironmentLifecycleStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_reasonHasBeenSet(false),
    m_failureResourceHasBeenSet(false)
{
}

EnvironmentLifecycle::EnvironmentLifecycle(JsonView jsonValue) : 
    m_status(EnvironmentLifecycleStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_reasonHasBeenSet(false),
    m_failureResourceHasBeenSet(false)
{
  *this = jsonValue;
}

EnvironmentLifecycle& EnvironmentLifecycle::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("status"))
  {
    m_status = EnvironmentLifecycleStatusMapper::GetEnvironmentLifecycleStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("reason"))
  {
    m_reason = jsonValue.GetString("reason");

    m_reasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("failureResource"))
  {
    m_failureResource = jsonValue.GetString("failureResource");

    m_failureResourceHasBeenSet = true;
  }

  return *this;
}

JsonValue EnvironmentLifecycle::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", EnvironmentLifecycleStatusMapper::GetNameForEnvironmentLifecycleStatus(m_status));
  }

  if(m_reasonHasBeenSet)
  {
   payload.WithString("reason", m_reason);

  }

  if(m_failureResourceHasBeenSet)
  {
   payload.WithString("failureResource", m_failureResource);

  }

  return payload;
}

} // namespace Model
} // namespace Cloud9
} // namespace Aws
