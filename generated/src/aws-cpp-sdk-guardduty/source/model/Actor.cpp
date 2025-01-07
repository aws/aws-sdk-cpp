﻿/**
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

Actor::Actor() : 
    m_idHasBeenSet(false),
    m_userHasBeenSet(false),
    m_sessionHasBeenSet(false)
{
}

Actor::Actor(JsonView jsonValue)
  : Actor()
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

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
