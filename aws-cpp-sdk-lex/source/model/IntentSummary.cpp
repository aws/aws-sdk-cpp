/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lex/model/IntentSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexRuntimeService
{
namespace Model
{

IntentSummary::IntentSummary() : 
    m_intentNameHasBeenSet(false),
    m_checkpointLabelHasBeenSet(false),
    m_slotsHasBeenSet(false),
    m_confirmationStatus(ConfirmationStatus::NOT_SET),
    m_confirmationStatusHasBeenSet(false),
    m_dialogActionType(DialogActionType::NOT_SET),
    m_dialogActionTypeHasBeenSet(false),
    m_fulfillmentState(FulfillmentState::NOT_SET),
    m_fulfillmentStateHasBeenSet(false),
    m_slotToElicitHasBeenSet(false)
{
}

IntentSummary::IntentSummary(JsonView jsonValue) : 
    m_intentNameHasBeenSet(false),
    m_checkpointLabelHasBeenSet(false),
    m_slotsHasBeenSet(false),
    m_confirmationStatus(ConfirmationStatus::NOT_SET),
    m_confirmationStatusHasBeenSet(false),
    m_dialogActionType(DialogActionType::NOT_SET),
    m_dialogActionTypeHasBeenSet(false),
    m_fulfillmentState(FulfillmentState::NOT_SET),
    m_fulfillmentStateHasBeenSet(false),
    m_slotToElicitHasBeenSet(false)
{
  *this = jsonValue;
}

IntentSummary& IntentSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("intentName"))
  {
    m_intentName = jsonValue.GetString("intentName");

    m_intentNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("checkpointLabel"))
  {
    m_checkpointLabel = jsonValue.GetString("checkpointLabel");

    m_checkpointLabelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("slots"))
  {
    Aws::Map<Aws::String, JsonView> slotsJsonMap = jsonValue.GetObject("slots").GetAllObjects();
    for(auto& slotsItem : slotsJsonMap)
    {
      m_slots[slotsItem.first] = slotsItem.second.AsString();
    }
    m_slotsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("confirmationStatus"))
  {
    m_confirmationStatus = ConfirmationStatusMapper::GetConfirmationStatusForName(jsonValue.GetString("confirmationStatus"));

    m_confirmationStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dialogActionType"))
  {
    m_dialogActionType = DialogActionTypeMapper::GetDialogActionTypeForName(jsonValue.GetString("dialogActionType"));

    m_dialogActionTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fulfillmentState"))
  {
    m_fulfillmentState = FulfillmentStateMapper::GetFulfillmentStateForName(jsonValue.GetString("fulfillmentState"));

    m_fulfillmentStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("slotToElicit"))
  {
    m_slotToElicit = jsonValue.GetString("slotToElicit");

    m_slotToElicitHasBeenSet = true;
  }

  return *this;
}

JsonValue IntentSummary::Jsonize() const
{
  JsonValue payload;

  if(m_intentNameHasBeenSet)
  {
   payload.WithString("intentName", m_intentName);

  }

  if(m_checkpointLabelHasBeenSet)
  {
   payload.WithString("checkpointLabel", m_checkpointLabel);

  }

  if(m_slotsHasBeenSet)
  {
   JsonValue slotsJsonMap;
   for(auto& slotsItem : m_slots)
   {
     slotsJsonMap.WithString(slotsItem.first, slotsItem.second);
   }
   payload.WithObject("slots", std::move(slotsJsonMap));

  }

  if(m_confirmationStatusHasBeenSet)
  {
   payload.WithString("confirmationStatus", ConfirmationStatusMapper::GetNameForConfirmationStatus(m_confirmationStatus));
  }

  if(m_dialogActionTypeHasBeenSet)
  {
   payload.WithString("dialogActionType", DialogActionTypeMapper::GetNameForDialogActionType(m_dialogActionType));
  }

  if(m_fulfillmentStateHasBeenSet)
  {
   payload.WithString("fulfillmentState", FulfillmentStateMapper::GetNameForFulfillmentState(m_fulfillmentState));
  }

  if(m_slotToElicitHasBeenSet)
  {
   payload.WithString("slotToElicit", m_slotToElicit);

  }

  return payload;
}

} // namespace Model
} // namespace LexRuntimeService
} // namespace Aws
