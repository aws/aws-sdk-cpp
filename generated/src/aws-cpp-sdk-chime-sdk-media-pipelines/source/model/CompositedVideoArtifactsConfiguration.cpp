/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/model/CompositedVideoArtifactsConfiguration.h>
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

CompositedVideoArtifactsConfiguration::CompositedVideoArtifactsConfiguration() : 
    m_layout(LayoutOption::NOT_SET),
    m_layoutHasBeenSet(false),
    m_resolution(ResolutionOption::NOT_SET),
    m_resolutionHasBeenSet(false),
    m_gridViewConfigurationHasBeenSet(false)
{
}

CompositedVideoArtifactsConfiguration::CompositedVideoArtifactsConfiguration(JsonView jsonValue) : 
    m_layout(LayoutOption::NOT_SET),
    m_layoutHasBeenSet(false),
    m_resolution(ResolutionOption::NOT_SET),
    m_resolutionHasBeenSet(false),
    m_gridViewConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

CompositedVideoArtifactsConfiguration& CompositedVideoArtifactsConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Layout"))
  {
    m_layout = LayoutOptionMapper::GetLayoutOptionForName(jsonValue.GetString("Layout"));

    m_layoutHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Resolution"))
  {
    m_resolution = ResolutionOptionMapper::GetResolutionOptionForName(jsonValue.GetString("Resolution"));

    m_resolutionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GridViewConfiguration"))
  {
    m_gridViewConfiguration = jsonValue.GetObject("GridViewConfiguration");

    m_gridViewConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue CompositedVideoArtifactsConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_layoutHasBeenSet)
  {
   payload.WithString("Layout", LayoutOptionMapper::GetNameForLayoutOption(m_layout));
  }

  if(m_resolutionHasBeenSet)
  {
   payload.WithString("Resolution", ResolutionOptionMapper::GetNameForResolutionOption(m_resolution));
  }

  if(m_gridViewConfigurationHasBeenSet)
  {
   payload.WithObject("GridViewConfiguration", m_gridViewConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
