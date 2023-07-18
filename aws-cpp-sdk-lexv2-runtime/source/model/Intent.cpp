/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-runtime/model/Intent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexRuntimeV2
{
namespace Model
{

Intent::Intent() : 
    m_nameHasBeenSet(false),
    m_slotsHasBeenSet(false),
    m_state(IntentState::NOT_SET),
    m_stateHasBeenSet(false),
    m_confirmationState(ConfirmationState::NOT_SET),
    m_confirmationStateHasBeenSet(false)
{
}

Intent::Intent(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_slotsHasBeenSet(false),
    m_state(IntentState::NOT_SET),
    m_stateHasBeenSet(false),
    m_confirmationState(ConfirmationState::NOT_SET),
    m_confirmationStateHasBeenSet(false)
{
  *this = jsonValue;
}

Intent& Intent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("slots"))
  {
    Aws::Map<Aws::String, JsonView> slotsJsonMap = jsonValue.GetObject("slots").GetAllObjects();
    for(auto& slotsItem : slotsJsonMap)
    {
      m_slots[slotsItem.first] = slotsItem.second.AsObject();
    }
    m_slotsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("state"))
  {
    m_state = IntentStateMapper::GetIntentStateForName(jsonValue.GetString("state"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("confirmationState"))
  {
    m_confirmationState = ConfirmationStateMapper::GetConfirmationStateForName(jsonValue.GetString("confirmationState"));

    m_confirmationStateHasBeenSet = true;
  }

  return *this;
}

JsonValue Intent::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_slotsHasBeenSet)
  {
   JsonValue slotsJsonMap;
   for(auto& slotsItem : m_slots)
   {
     slotsJsonMap.WithObject(slotsItem.first, slotsItem.second.Jsonize());
   }
   payload.WithObject("slots", std::move(slotsJsonMap));

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("state", IntentStateMapper::GetNameForIntentState(m_state));
  }

  if(m_confirmationStateHasBeenSet)
  {
   payload.WithString("confirmationState", ConfirmationStateMapper::GetNameForConfirmationState(m_confirmationState));
  }

  return payload;
}

} // namespace Model
} // namespace LexRuntimeV2
} // namespace Aws
