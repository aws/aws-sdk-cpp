/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/JourneyStateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

JourneyStateRequest::JourneyStateRequest() : 
    m_state(State::NOT_SET),
    m_stateHasBeenSet(false)
{
}

JourneyStateRequest::JourneyStateRequest(JsonView jsonValue) : 
    m_state(State::NOT_SET),
    m_stateHasBeenSet(false)
{
  *this = jsonValue;
}

JourneyStateRequest& JourneyStateRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("State"))
  {
    m_state = StateMapper::GetStateForName(jsonValue.GetString("State"));

    m_stateHasBeenSet = true;
  }

  return *this;
}

JsonValue JourneyStateRequest::Jsonize() const
{
  JsonValue payload;

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", StateMapper::GetNameForState(m_state));
  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
