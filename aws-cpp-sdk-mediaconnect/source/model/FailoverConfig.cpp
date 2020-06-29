/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/FailoverConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConnect
{
namespace Model
{

FailoverConfig::FailoverConfig() : 
    m_recoveryWindow(0),
    m_recoveryWindowHasBeenSet(false),
    m_state(State::NOT_SET),
    m_stateHasBeenSet(false)
{
}

FailoverConfig::FailoverConfig(JsonView jsonValue) : 
    m_recoveryWindow(0),
    m_recoveryWindowHasBeenSet(false),
    m_state(State::NOT_SET),
    m_stateHasBeenSet(false)
{
  *this = jsonValue;
}

FailoverConfig& FailoverConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("recoveryWindow"))
  {
    m_recoveryWindow = jsonValue.GetInteger("recoveryWindow");

    m_recoveryWindowHasBeenSet = true;
  }

  if(jsonValue.ValueExists("state"))
  {
    m_state = StateMapper::GetStateForName(jsonValue.GetString("state"));

    m_stateHasBeenSet = true;
  }

  return *this;
}

JsonValue FailoverConfig::Jsonize() const
{
  JsonValue payload;

  if(m_recoveryWindowHasBeenSet)
  {
   payload.WithInteger("recoveryWindow", m_recoveryWindow);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("state", StateMapper::GetNameForState(m_state));
  }

  return payload;
}

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
