/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/DefaultButtonConfiguration.h>
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

DefaultButtonConfiguration::DefaultButtonConfiguration() : 
    m_backgroundColorHasBeenSet(false),
    m_borderRadius(0),
    m_borderRadiusHasBeenSet(false),
    m_buttonAction(ButtonAction::NOT_SET),
    m_buttonActionHasBeenSet(false),
    m_linkHasBeenSet(false),
    m_textHasBeenSet(false),
    m_textColorHasBeenSet(false)
{
}

DefaultButtonConfiguration::DefaultButtonConfiguration(JsonView jsonValue) : 
    m_backgroundColorHasBeenSet(false),
    m_borderRadius(0),
    m_borderRadiusHasBeenSet(false),
    m_buttonAction(ButtonAction::NOT_SET),
    m_buttonActionHasBeenSet(false),
    m_linkHasBeenSet(false),
    m_textHasBeenSet(false),
    m_textColorHasBeenSet(false)
{
  *this = jsonValue;
}

DefaultButtonConfiguration& DefaultButtonConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BackgroundColor"))
  {
    m_backgroundColor = jsonValue.GetString("BackgroundColor");

    m_backgroundColorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BorderRadius"))
  {
    m_borderRadius = jsonValue.GetInteger("BorderRadius");

    m_borderRadiusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ButtonAction"))
  {
    m_buttonAction = ButtonActionMapper::GetButtonActionForName(jsonValue.GetString("ButtonAction"));

    m_buttonActionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Link"))
  {
    m_link = jsonValue.GetString("Link");

    m_linkHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Text"))
  {
    m_text = jsonValue.GetString("Text");

    m_textHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TextColor"))
  {
    m_textColor = jsonValue.GetString("TextColor");

    m_textColorHasBeenSet = true;
  }

  return *this;
}

JsonValue DefaultButtonConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_backgroundColorHasBeenSet)
  {
   payload.WithString("BackgroundColor", m_backgroundColor);

  }

  if(m_borderRadiusHasBeenSet)
  {
   payload.WithInteger("BorderRadius", m_borderRadius);

  }

  if(m_buttonActionHasBeenSet)
  {
   payload.WithString("ButtonAction", ButtonActionMapper::GetNameForButtonAction(m_buttonAction));
  }

  if(m_linkHasBeenSet)
  {
   payload.WithString("Link", m_link);

  }

  if(m_textHasBeenSet)
  {
   payload.WithString("Text", m_text);

  }

  if(m_textColorHasBeenSet)
  {
   payload.WithString("TextColor", m_textColor);

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
