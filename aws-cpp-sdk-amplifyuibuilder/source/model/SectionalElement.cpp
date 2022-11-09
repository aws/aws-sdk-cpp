/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifyuibuilder/model/SectionalElement.h>
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

SectionalElement::SectionalElement() : 
    m_level(0),
    m_levelHasBeenSet(false),
    m_orientationHasBeenSet(false),
    m_positionHasBeenSet(false),
    m_textHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

SectionalElement::SectionalElement(JsonView jsonValue) : 
    m_level(0),
    m_levelHasBeenSet(false),
    m_orientationHasBeenSet(false),
    m_positionHasBeenSet(false),
    m_textHasBeenSet(false),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

SectionalElement& SectionalElement::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("level"))
  {
    m_level = jsonValue.GetInteger("level");

    m_levelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("orientation"))
  {
    m_orientation = jsonValue.GetString("orientation");

    m_orientationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("position"))
  {
    m_position = jsonValue.GetObject("position");

    m_positionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("text"))
  {
    m_text = jsonValue.GetString("text");

    m_textHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = jsonValue.GetString("type");

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue SectionalElement::Jsonize() const
{
  JsonValue payload;

  if(m_levelHasBeenSet)
  {
   payload.WithInteger("level", m_level);

  }

  if(m_orientationHasBeenSet)
  {
   payload.WithString("orientation", m_orientation);

  }

  if(m_positionHasBeenSet)
  {
   payload.WithObject("position", m_position.Jsonize());

  }

  if(m_textHasBeenSet)
  {
   payload.WithString("text", m_text);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", m_type);

  }

  return payload;
}

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
