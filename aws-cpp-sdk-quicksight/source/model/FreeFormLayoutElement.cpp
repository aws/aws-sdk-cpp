/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/FreeFormLayoutElement.h>
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

FreeFormLayoutElement::FreeFormLayoutElement() : 
    m_elementIdHasBeenSet(false),
    m_elementType(LayoutElementType::NOT_SET),
    m_elementTypeHasBeenSet(false),
    m_xAxisLocationHasBeenSet(false),
    m_yAxisLocationHasBeenSet(false),
    m_widthHasBeenSet(false),
    m_heightHasBeenSet(false),
    m_visibility(Visibility::NOT_SET),
    m_visibilityHasBeenSet(false),
    m_renderingRulesHasBeenSet(false),
    m_borderStyleHasBeenSet(false),
    m_selectedBorderStyleHasBeenSet(false),
    m_backgroundStyleHasBeenSet(false),
    m_loadingAnimationHasBeenSet(false)
{
}

FreeFormLayoutElement::FreeFormLayoutElement(JsonView jsonValue) : 
    m_elementIdHasBeenSet(false),
    m_elementType(LayoutElementType::NOT_SET),
    m_elementTypeHasBeenSet(false),
    m_xAxisLocationHasBeenSet(false),
    m_yAxisLocationHasBeenSet(false),
    m_widthHasBeenSet(false),
    m_heightHasBeenSet(false),
    m_visibility(Visibility::NOT_SET),
    m_visibilityHasBeenSet(false),
    m_renderingRulesHasBeenSet(false),
    m_borderStyleHasBeenSet(false),
    m_selectedBorderStyleHasBeenSet(false),
    m_backgroundStyleHasBeenSet(false),
    m_loadingAnimationHasBeenSet(false)
{
  *this = jsonValue;
}

FreeFormLayoutElement& FreeFormLayoutElement::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ElementId"))
  {
    m_elementId = jsonValue.GetString("ElementId");

    m_elementIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ElementType"))
  {
    m_elementType = LayoutElementTypeMapper::GetLayoutElementTypeForName(jsonValue.GetString("ElementType"));

    m_elementTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("XAxisLocation"))
  {
    m_xAxisLocation = jsonValue.GetString("XAxisLocation");

    m_xAxisLocationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("YAxisLocation"))
  {
    m_yAxisLocation = jsonValue.GetString("YAxisLocation");

    m_yAxisLocationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Width"))
  {
    m_width = jsonValue.GetString("Width");

    m_widthHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Height"))
  {
    m_height = jsonValue.GetString("Height");

    m_heightHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Visibility"))
  {
    m_visibility = VisibilityMapper::GetVisibilityForName(jsonValue.GetString("Visibility"));

    m_visibilityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RenderingRules"))
  {
    Aws::Utils::Array<JsonView> renderingRulesJsonList = jsonValue.GetArray("RenderingRules");
    for(unsigned renderingRulesIndex = 0; renderingRulesIndex < renderingRulesJsonList.GetLength(); ++renderingRulesIndex)
    {
      m_renderingRules.push_back(renderingRulesJsonList[renderingRulesIndex].AsObject());
    }
    m_renderingRulesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BorderStyle"))
  {
    m_borderStyle = jsonValue.GetObject("BorderStyle");

    m_borderStyleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SelectedBorderStyle"))
  {
    m_selectedBorderStyle = jsonValue.GetObject("SelectedBorderStyle");

    m_selectedBorderStyleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BackgroundStyle"))
  {
    m_backgroundStyle = jsonValue.GetObject("BackgroundStyle");

    m_backgroundStyleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LoadingAnimation"))
  {
    m_loadingAnimation = jsonValue.GetObject("LoadingAnimation");

    m_loadingAnimationHasBeenSet = true;
  }

  return *this;
}

JsonValue FreeFormLayoutElement::Jsonize() const
{
  JsonValue payload;

  if(m_elementIdHasBeenSet)
  {
   payload.WithString("ElementId", m_elementId);

  }

  if(m_elementTypeHasBeenSet)
  {
   payload.WithString("ElementType", LayoutElementTypeMapper::GetNameForLayoutElementType(m_elementType));
  }

  if(m_xAxisLocationHasBeenSet)
  {
   payload.WithString("XAxisLocation", m_xAxisLocation);

  }

  if(m_yAxisLocationHasBeenSet)
  {
   payload.WithString("YAxisLocation", m_yAxisLocation);

  }

  if(m_widthHasBeenSet)
  {
   payload.WithString("Width", m_width);

  }

  if(m_heightHasBeenSet)
  {
   payload.WithString("Height", m_height);

  }

  if(m_visibilityHasBeenSet)
  {
   payload.WithString("Visibility", VisibilityMapper::GetNameForVisibility(m_visibility));
  }

  if(m_renderingRulesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> renderingRulesJsonList(m_renderingRules.size());
   for(unsigned renderingRulesIndex = 0; renderingRulesIndex < renderingRulesJsonList.GetLength(); ++renderingRulesIndex)
   {
     renderingRulesJsonList[renderingRulesIndex].AsObject(m_renderingRules[renderingRulesIndex].Jsonize());
   }
   payload.WithArray("RenderingRules", std::move(renderingRulesJsonList));

  }

  if(m_borderStyleHasBeenSet)
  {
   payload.WithObject("BorderStyle", m_borderStyle.Jsonize());

  }

  if(m_selectedBorderStyleHasBeenSet)
  {
   payload.WithObject("SelectedBorderStyle", m_selectedBorderStyle.Jsonize());

  }

  if(m_backgroundStyleHasBeenSet)
  {
   payload.WithObject("BackgroundStyle", m_backgroundStyle.Jsonize());

  }

  if(m_loadingAnimationHasBeenSet)
  {
   payload.WithObject("LoadingAnimation", m_loadingAnimation.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
