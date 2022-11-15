/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifyuibuilder/model/FormCTA.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AmplifyUIBuilder
{
namespace Model
{

FormCTA::FormCTA() : 
    m_cancelHasBeenSet(false),
    m_clearHasBeenSet(false),
    m_position(FormButtonsPosition::NOT_SET),
    m_positionHasBeenSet(false),
    m_submitHasBeenSet(false)
{
}

FormCTA::FormCTA(JsonView jsonValue) : 
    m_cancelHasBeenSet(false),
    m_clearHasBeenSet(false),
    m_position(FormButtonsPosition::NOT_SET),
    m_positionHasBeenSet(false),
    m_submitHasBeenSet(false)
{
  *this = jsonValue;
}

FormCTA& FormCTA::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("cancel"))
  {
    m_cancel = jsonValue.GetObject("cancel");

    m_cancelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("clear"))
  {
    m_clear = jsonValue.GetObject("clear");

    m_clearHasBeenSet = true;
  }

  if(jsonValue.ValueExists("position"))
  {
    m_position = FormButtonsPositionMapper::GetFormButtonsPositionForName(jsonValue.GetString("position"));

    m_positionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("submit"))
  {
    m_submit = jsonValue.GetObject("submit");

    m_submitHasBeenSet = true;
  }

  return *this;
}

JsonValue FormCTA::Jsonize() const
{
  JsonValue payload;

  if(m_cancelHasBeenSet)
  {
   payload.WithObject("cancel", m_cancel.Jsonize());

  }

  if(m_clearHasBeenSet)
  {
   payload.WithObject("clear", m_clear.Jsonize());

  }

  if(m_positionHasBeenSet)
  {
   payload.WithString("position", FormButtonsPositionMapper::GetNameForFormButtonsPosition(m_position));
  }

  if(m_submitHasBeenSet)
  {
   payload.WithObject("submit", m_submit.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
