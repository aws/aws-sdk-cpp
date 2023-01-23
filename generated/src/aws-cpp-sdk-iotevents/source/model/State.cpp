﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents/model/State.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTEvents
{
namespace Model
{

State::State() : 
    m_stateNameHasBeenSet(false),
    m_onInputHasBeenSet(false),
    m_onEnterHasBeenSet(false),
    m_onExitHasBeenSet(false)
{
}

State::State(JsonView jsonValue) : 
    m_stateNameHasBeenSet(false),
    m_onInputHasBeenSet(false),
    m_onEnterHasBeenSet(false),
    m_onExitHasBeenSet(false)
{
  *this = jsonValue;
}

State& State::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("stateName"))
  {
    m_stateName = jsonValue.GetString("stateName");

    m_stateNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("onInput"))
  {
    m_onInput = jsonValue.GetObject("onInput");

    m_onInputHasBeenSet = true;
  }

  if(jsonValue.ValueExists("onEnter"))
  {
    m_onEnter = jsonValue.GetObject("onEnter");

    m_onEnterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("onExit"))
  {
    m_onExit = jsonValue.GetObject("onExit");

    m_onExitHasBeenSet = true;
  }

  return *this;
}

JsonValue State::Jsonize() const
{
  JsonValue payload;

  if(m_stateNameHasBeenSet)
  {
   payload.WithString("stateName", m_stateName);

  }

  if(m_onInputHasBeenSet)
  {
   payload.WithObject("onInput", m_onInput.Jsonize());

  }

  if(m_onEnterHasBeenSet)
  {
   payload.WithObject("onEnter", m_onEnter.Jsonize());

  }

  if(m_onExitHasBeenSet)
  {
   payload.WithObject("onExit", m_onExit.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
