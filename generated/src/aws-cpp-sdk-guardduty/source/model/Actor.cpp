/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/Actor.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

Actor::Actor(JsonView jsonValue)
{
  *this = jsonValue;
}

Actor& Actor::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("user"))
  {
    m_user = jsonValue.GetObject("user");
    m_userHasBeenSet = true;
  }
  if(jsonValue.ValueExists("session"))
  {
    m_session = jsonValue.GetObject("session");
    m_sessionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("process"))
  {
    m_process = jsonValue.GetObject("process");
    m_processHasBeenSet = true;
  }
  return *this;
}

JsonValue Actor::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_userHasBeenSet)
  {
   payload.WithObject("user", m_user.Jsonize());

  }

  if(m_sessionHasBeenSet)
  {
   payload.WithObject("session", m_session.Jsonize());

  }

  if(m_processHasBeenSet)
  {
   payload.WithObject("process", m_process.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
