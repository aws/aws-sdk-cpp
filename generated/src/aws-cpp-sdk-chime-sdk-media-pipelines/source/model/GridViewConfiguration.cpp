/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/model/GridViewConfiguration.h>
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

GridViewConfiguration::GridViewConfiguration() : 
    m_contentShareLayout(ContentShareLayoutOption::NOT_SET),
    m_contentShareLayoutHasBeenSet(false),
    m_presenterOnlyConfigurationHasBeenSet(false),
    m_activeSpeakerOnlyConfigurationHasBeenSet(false),
    m_horizontalLayoutConfigurationHasBeenSet(false),
    m_verticalLayoutConfigurationHasBeenSet(false),
    m_videoAttributeHasBeenSet(false),
    m_canvasOrientation(CanvasOrientation::NOT_SET),
    m_canvasOrientationHasBeenSet(false)
{
}

GridViewConfiguration::GridViewConfiguration(JsonView jsonValue) : 
    m_contentShareLayout(ContentShareLayoutOption::NOT_SET),
    m_contentShareLayoutHasBeenSet(false),
    m_presenterOnlyConfigurationHasBeenSet(false),
    m_activeSpeakerOnlyConfigurationHasBeenSet(false),
    m_horizontalLayoutConfigurationHasBeenSet(false),
    m_verticalLayoutConfigurationHasBeenSet(false),
    m_videoAttributeHasBeenSet(false),
    m_canvasOrientation(CanvasOrientation::NOT_SET),
    m_canvasOrientationHasBeenSet(false)
{
  *this = jsonValue;
}

GridViewConfiguration& GridViewConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ContentShareLayout"))
  {
    m_contentShareLayout = ContentShareLayoutOptionMapper::GetContentShareLayoutOptionForName(jsonValue.GetString("ContentShareLayout"));

    m_contentShareLayoutHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PresenterOnlyConfiguration"))
  {
    m_presenterOnlyConfiguration = jsonValue.GetObject("PresenterOnlyConfiguration");

    m_presenterOnlyConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ActiveSpeakerOnlyConfiguration"))
  {
    m_activeSpeakerOnlyConfiguration = jsonValue.GetObject("ActiveSpeakerOnlyConfiguration");

    m_activeSpeakerOnlyConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HorizontalLayoutConfiguration"))
  {
    m_horizontalLayoutConfiguration = jsonValue.GetObject("HorizontalLayoutConfiguration");

    m_horizontalLayoutConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VerticalLayoutConfiguration"))
  {
    m_verticalLayoutConfiguration = jsonValue.GetObject("VerticalLayoutConfiguration");

    m_verticalLayoutConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VideoAttribute"))
  {
    m_videoAttribute = jsonValue.GetObject("VideoAttribute");

    m_videoAttributeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CanvasOrientation"))
  {
    m_canvasOrientation = CanvasOrientationMapper::GetCanvasOrientationForName(jsonValue.GetString("CanvasOrientation"));

    m_canvasOrientationHasBeenSet = true;
  }

  return *this;
}

JsonValue GridViewConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_contentShareLayoutHasBeenSet)
  {
   payload.WithString("ContentShareLayout", ContentShareLayoutOptionMapper::GetNameForContentShareLayoutOption(m_contentShareLayout));
  }

  if(m_presenterOnlyConfigurationHasBeenSet)
  {
   payload.WithObject("PresenterOnlyConfiguration", m_presenterOnlyConfiguration.Jsonize());

  }

  if(m_activeSpeakerOnlyConfigurationHasBeenSet)
  {
   payload.WithObject("ActiveSpeakerOnlyConfiguration", m_activeSpeakerOnlyConfiguration.Jsonize());

  }

  if(m_horizontalLayoutConfigurationHasBeenSet)
  {
   payload.WithObject("HorizontalLayoutConfiguration", m_horizontalLayoutConfiguration.Jsonize());

  }

  if(m_verticalLayoutConfigurationHasBeenSet)
  {
   payload.WithObject("VerticalLayoutConfiguration", m_verticalLayoutConfiguration.Jsonize());

  }

  if(m_videoAttributeHasBeenSet)
  {
   payload.WithObject("VideoAttribute", m_videoAttribute.Jsonize());

  }

  if(m_canvasOrientationHasBeenSet)
  {
   payload.WithString("CanvasOrientation", CanvasOrientationMapper::GetNameForCanvasOrientation(m_canvasOrientation));
  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
