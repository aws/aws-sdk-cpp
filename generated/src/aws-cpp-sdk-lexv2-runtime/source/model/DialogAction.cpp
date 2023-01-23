/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-runtime/model/DialogAction.h>
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

DialogAction::DialogAction() : 
    m_type(DialogActionType::NOT_SET),
    m_typeHasBeenSet(false),
    m_slotToElicitHasBeenSet(false),
    m_slotElicitationStyle(StyleType::NOT_SET),
    m_slotElicitationStyleHasBeenSet(false),
    m_subSlotToElicitHasBeenSet(false)
{
}

DialogAction::DialogAction(JsonView jsonValue) : 
    m_type(DialogActionType::NOT_SET),
    m_typeHasBeenSet(false),
    m_slotToElicitHasBeenSet(false),
    m_slotElicitationStyle(StyleType::NOT_SET),
    m_slotElicitationStyleHasBeenSet(false),
    m_subSlotToElicitHasBeenSet(false)
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

  if(jsonValue.ValueExists("slotToElicit"))
  {
    m_slotToElicit = jsonValue.GetString("slotToElicit");

    m_slotToElicitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("slotElicitationStyle"))
  {
    m_slotElicitationStyle = StyleTypeMapper::GetStyleTypeForName(jsonValue.GetString("slotElicitationStyle"));

    m_slotElicitationStyleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("subSlotToElicit"))
  {
    m_subSlotToElicit = jsonValue.GetObject("subSlotToElicit");

    m_subSlotToElicitHasBeenSet = true;
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

  if(m_slotToElicitHasBeenSet)
  {
   payload.WithString("slotToElicit", m_slotToElicit);

  }

  if(m_slotElicitationStyleHasBeenSet)
  {
   payload.WithString("slotElicitationStyle", StyleTypeMapper::GetNameForStyleType(m_slotElicitationStyle));
  }

  if(m_subSlotToElicitHasBeenSet)
  {
   payload.WithObject("subSlotToElicit", m_subSlotToElicit.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace LexRuntimeV2
} // namespace Aws
