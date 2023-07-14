/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/ChangeServerLifeCycleStateSourceServerLifecycle.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace mgn
{
namespace Model
{

ChangeServerLifeCycleStateSourceServerLifecycle::ChangeServerLifeCycleStateSourceServerLifecycle() : 
    m_state(ChangeServerLifeCycleStateSourceServerLifecycleState::NOT_SET),
    m_stateHasBeenSet(false)
{
}

ChangeServerLifeCycleStateSourceServerLifecycle::ChangeServerLifeCycleStateSourceServerLifecycle(JsonView jsonValue) : 
    m_state(ChangeServerLifeCycleStateSourceServerLifecycleState::NOT_SET),
    m_stateHasBeenSet(false)
{
  *this = jsonValue;
}

ChangeServerLifeCycleStateSourceServerLifecycle& ChangeServerLifeCycleStateSourceServerLifecycle::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("state"))
  {
    m_state = ChangeServerLifeCycleStateSourceServerLifecycleStateMapper::GetChangeServerLifeCycleStateSourceServerLifecycleStateForName(jsonValue.GetString("state"));

    m_stateHasBeenSet = true;
  }

  return *this;
}

JsonValue ChangeServerLifeCycleStateSourceServerLifecycle::Jsonize() const
{
  JsonValue payload;

  if(m_stateHasBeenSet)
  {
   payload.WithString("state", ChangeServerLifeCycleStateSourceServerLifecycleStateMapper::GetNameForChangeServerLifeCycleStateSourceServerLifecycleState(m_state));
  }

  return payload;
}

} // namespace Model
} // namespace mgn
} // namespace Aws
