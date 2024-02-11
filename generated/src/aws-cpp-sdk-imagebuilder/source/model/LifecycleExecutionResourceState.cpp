/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/LifecycleExecutionResourceState.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace imagebuilder
{
namespace Model
{

LifecycleExecutionResourceState::LifecycleExecutionResourceState() : 
    m_status(LifecycleExecutionResourceStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_reasonHasBeenSet(false)
{
}

LifecycleExecutionResourceState::LifecycleExecutionResourceState(JsonView jsonValue) : 
    m_status(LifecycleExecutionResourceStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_reasonHasBeenSet(false)
{
  *this = jsonValue;
}

LifecycleExecutionResourceState& LifecycleExecutionResourceState::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("status"))
  {
    m_status = LifecycleExecutionResourceStatusMapper::GetLifecycleExecutionResourceStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("reason"))
  {
    m_reason = jsonValue.GetString("reason");

    m_reasonHasBeenSet = true;
  }

  return *this;
}

JsonValue LifecycleExecutionResourceState::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", LifecycleExecutionResourceStatusMapper::GetNameForLifecycleExecutionResourceStatus(m_status));
  }

  if(m_reasonHasBeenSet)
  {
   payload.WithString("reason", m_reason);

  }

  return payload;
}

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
