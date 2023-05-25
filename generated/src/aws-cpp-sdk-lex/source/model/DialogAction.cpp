/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lex/model/DialogAction.h>
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

DialogAction::DialogAction() : 
    m_type(DialogActionType::NOT_SET),
    m_typeHasBeenSet(false),
    m_intentNameHasBeenSet(false),
    m_slotsHasBeenSet(false),
    m_slotToElicitHasBeenSet(false),
    m_fulfillmentState(FulfillmentState::NOT_SET),
    m_fulfillmentStateHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_messageFormat(MessageFormatType::NOT_SET),
    m_messageFormatHasBeenSet(false)
{
}

DialogAction::DialogAction(JsonView jsonValue) : 
    m_type(DialogActionType::NOT_SET),
    m_typeHasBeenSet(false),
    m_intentNameHasBeenSet(false),
    m_slotsHasBeenSet(false),
    m_slotToElicitHasBeenSet(false),
    m_fulfillmentState(FulfillmentState::NOT_SET),
    m_fulfillmentStateHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_messageFormat(MessageFormatType::NOT_SET),
    m_messageFormatHasBeenSet(false)
{
  *this = jsonValue;
}

DialogAction& DialogAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = DialogActionTypeMapper::GetDialogActionTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("intentName"))
  {
    m_intentName = jsonValue.GetString("intentName");

    m_intentNameHasBeenSet = true;
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

  if(jsonValue.ValueExists("slotToElicit"))
  {
    m_slotToElicit = jsonValue.GetString("slotToElicit");

    m_slotToElicitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fulfillmentState"))
  {
    m_fulfillmentState = FulfillmentStateMapper::GetFulfillmentStateForName(jsonValue.GetString("fulfillmentState"));

    m_fulfillmentStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("messageFormat"))
  {
    m_messageFormat = MessageFormatTypeMapper::GetMessageFormatTypeForName(jsonValue.GetString("messageFormat"));

    m_messageFormatHasBeenSet = true;
  }

  return *this;
}

JsonValue DialogAction::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", DialogActionTypeMapper::GetNameForDialogActionType(m_type));
  }

  if(m_intentNameHasBeenSet)
  {
   payload.WithString("intentName", m_intentName);

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

  if(m_slotToElicitHasBeenSet)
  {
   payload.WithString("slotToElicit", m_slotToElicit);

  }

  if(m_fulfillmentStateHasBeenSet)
  {
   payload.WithString("fulfillmentState", FulfillmentStateMapper::GetNameForFulfillmentState(m_fulfillmentState));
  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  if(m_messageFormatHasBeenSet)
  {
   payload.WithString("messageFormat", MessageFormatTypeMapper::GetNameForMessageFormatType(m_messageFormat));
  }

  return payload;
}

} // namespace Model
} // namespace LexRuntimeService
} // namespace Aws
