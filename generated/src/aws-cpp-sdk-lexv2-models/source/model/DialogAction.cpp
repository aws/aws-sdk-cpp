/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/DialogAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

DialogAction::DialogAction() : 
    m_type(DialogActionType::NOT_SET),
    m_typeHasBeenSet(false),
    m_slotToElicitHasBeenSet(false),
    m_suppressNextMessage(false),
    m_suppressNextMessageHasBeenSet(false)
{
}

DialogAction::DialogAction(JsonView jsonValue) : 
    m_type(DialogActionType::NOT_SET),
    m_typeHasBeenSet(false),
    m_slotToElicitHasBeenSet(false),
    m_suppressNextMessage(false),
    m_suppressNextMessageHasBeenSet(false)
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

  if(jsonValue.ValueExists("suppressNextMessage"))
  {
    m_suppressNextMessage = jsonValue.GetBool("suppressNextMessage");

    m_suppressNextMessageHasBeenSet = true;
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

  if(m_suppressNextMessageHasBeenSet)
  {
   payload.WithBool("suppressNextMessage", m_suppressNextMessage);

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
