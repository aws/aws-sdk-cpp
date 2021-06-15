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
    m_slotToElicitHasBeenSet(false)
{
}

DialogAction::DialogAction(JsonView jsonValue) : 
    m_type(DialogActionType::NOT_SET),
    m_typeHasBeenSet(false),
    m_slotToElicitHasBeenSet(false)
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

  return payload;
}

} // namespace Model
} // namespace LexRuntimeV2
} // namespace Aws
