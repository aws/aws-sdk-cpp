/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/model/VideoAttribute.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ChimeSDKMediaPipelines
{
namespace Model
{

VideoAttribute::VideoAttribute() : 
    m_cornerRadius(0),
    m_cornerRadiusHasBeenSet(false),
    m_borderColor(BorderColor::NOT_SET),
    m_borderColorHasBeenSet(false),
    m_highlightColor(HighlightColor::NOT_SET),
    m_highlightColorHasBeenSet(false),
    m_borderThickness(0),
    m_borderThicknessHasBeenSet(false)
{
}

VideoAttribute::VideoAttribute(JsonView jsonValue) : 
    m_cornerRadius(0),
    m_cornerRadiusHasBeenSet(false),
    m_borderColor(BorderColor::NOT_SET),
    m_borderColorHasBeenSet(false),
    m_highlightColor(HighlightColor::NOT_SET),
    m_highlightColorHasBeenSet(false),
    m_borderThickness(0),
    m_borderThicknessHasBeenSet(false)
{
  *this = jsonValue;
}

VideoAttribute& VideoAttribute::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CornerRadius"))
  {
    m_cornerRadius = jsonValue.GetInteger("CornerRadius");

    m_cornerRadiusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BorderColor"))
  {
    m_borderColor = BorderColorMapper::GetBorderColorForName(jsonValue.GetString("BorderColor"));

    m_borderColorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HighlightColor"))
  {
    m_highlightColor = HighlightColorMapper::GetHighlightColorForName(jsonValue.GetString("HighlightColor"));

    m_highlightColorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BorderThickness"))
  {
    m_borderThickness = jsonValue.GetInteger("BorderThickness");

    m_borderThicknessHasBeenSet = true;
  }

  return *this;
}

JsonValue VideoAttribute::Jsonize() const
{
  JsonValue payload;

  if(m_cornerRadiusHasBeenSet)
  {
   payload.WithInteger("CornerRadius", m_cornerRadius);

  }

  if(m_borderColorHasBeenSet)
  {
   payload.WithString("BorderColor", BorderColorMapper::GetNameForBorderColor(m_borderColor));
  }

  if(m_highlightColorHasBeenSet)
  {
   payload.WithString("HighlightColor", HighlightColorMapper::GetNameForHighlightColor(m_highlightColor));
  }

  if(m_borderThicknessHasBeenSet)
  {
   payload.WithInteger("BorderThickness", m_borderThickness);

  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
