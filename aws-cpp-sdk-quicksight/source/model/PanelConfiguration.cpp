/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/PanelConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

PanelConfiguration::PanelConfiguration() : 
    m_titleHasBeenSet(false),
    m_borderVisibility(Visibility::NOT_SET),
    m_borderVisibilityHasBeenSet(false),
    m_borderThicknessHasBeenSet(false),
    m_borderStyle(PanelBorderStyle::NOT_SET),
    m_borderStyleHasBeenSet(false),
    m_borderColorHasBeenSet(false),
    m_gutterVisibility(Visibility::NOT_SET),
    m_gutterVisibilityHasBeenSet(false),
    m_gutterSpacingHasBeenSet(false),
    m_backgroundVisibility(Visibility::NOT_SET),
    m_backgroundVisibilityHasBeenSet(false),
    m_backgroundColorHasBeenSet(false)
{
}

PanelConfiguration::PanelConfiguration(JsonView jsonValue) : 
    m_titleHasBeenSet(false),
    m_borderVisibility(Visibility::NOT_SET),
    m_borderVisibilityHasBeenSet(false),
    m_borderThicknessHasBeenSet(false),
    m_borderStyle(PanelBorderStyle::NOT_SET),
    m_borderStyleHasBeenSet(false),
    m_borderColorHasBeenSet(false),
    m_gutterVisibility(Visibility::NOT_SET),
    m_gutterVisibilityHasBeenSet(false),
    m_gutterSpacingHasBeenSet(false),
    m_backgroundVisibility(Visibility::NOT_SET),
    m_backgroundVisibilityHasBeenSet(false),
    m_backgroundColorHasBeenSet(false)
{
  *this = jsonValue;
}

PanelConfiguration& PanelConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Title"))
  {
    m_title = jsonValue.GetObject("Title");

    m_titleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BorderVisibility"))
  {
    m_borderVisibility = VisibilityMapper::GetVisibilityForName(jsonValue.GetString("BorderVisibility"));

    m_borderVisibilityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BorderThickness"))
  {
    m_borderThickness = jsonValue.GetString("BorderThickness");

    m_borderThicknessHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BorderStyle"))
  {
    m_borderStyle = PanelBorderStyleMapper::GetPanelBorderStyleForName(jsonValue.GetString("BorderStyle"));

    m_borderStyleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BorderColor"))
  {
    m_borderColor = jsonValue.GetString("BorderColor");

    m_borderColorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GutterVisibility"))
  {
    m_gutterVisibility = VisibilityMapper::GetVisibilityForName(jsonValue.GetString("GutterVisibility"));

    m_gutterVisibilityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GutterSpacing"))
  {
    m_gutterSpacing = jsonValue.GetString("GutterSpacing");

    m_gutterSpacingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BackgroundVisibility"))
  {
    m_backgroundVisibility = VisibilityMapper::GetVisibilityForName(jsonValue.GetString("BackgroundVisibility"));

    m_backgroundVisibilityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BackgroundColor"))
  {
    m_backgroundColor = jsonValue.GetString("BackgroundColor");

    m_backgroundColorHasBeenSet = true;
  }

  return *this;
}

JsonValue PanelConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_titleHasBeenSet)
  {
   payload.WithObject("Title", m_title.Jsonize());

  }

  if(m_borderVisibilityHasBeenSet)
  {
   payload.WithString("BorderVisibility", VisibilityMapper::GetNameForVisibility(m_borderVisibility));
  }

  if(m_borderThicknessHasBeenSet)
  {
   payload.WithString("BorderThickness", m_borderThickness);

  }

  if(m_borderStyleHasBeenSet)
  {
   payload.WithString("BorderStyle", PanelBorderStyleMapper::GetNameForPanelBorderStyle(m_borderStyle));
  }

  if(m_borderColorHasBeenSet)
  {
   payload.WithString("BorderColor", m_borderColor);

  }

  if(m_gutterVisibilityHasBeenSet)
  {
   payload.WithString("GutterVisibility", VisibilityMapper::GetNameForVisibility(m_gutterVisibility));
  }

  if(m_gutterSpacingHasBeenSet)
  {
   payload.WithString("GutterSpacing", m_gutterSpacing);

  }

  if(m_backgroundVisibilityHasBeenSet)
  {
   payload.WithString("BackgroundVisibility", VisibilityMapper::GetNameForVisibility(m_backgroundVisibility));
  }

  if(m_backgroundColorHasBeenSet)
  {
   payload.WithString("BackgroundColor", m_backgroundColor);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
