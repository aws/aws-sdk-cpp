/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/model/HorizontalLayoutConfiguration.h>
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

HorizontalLayoutConfiguration::HorizontalLayoutConfiguration() : 
    m_tileOrder(TileOrder::NOT_SET),
    m_tileOrderHasBeenSet(false),
    m_tilePosition(HorizontalTilePosition::NOT_SET),
    m_tilePositionHasBeenSet(false),
    m_tileCount(0),
    m_tileCountHasBeenSet(false),
    m_tileAspectRatioHasBeenSet(false)
{
}

HorizontalLayoutConfiguration::HorizontalLayoutConfiguration(JsonView jsonValue) : 
    m_tileOrder(TileOrder::NOT_SET),
    m_tileOrderHasBeenSet(false),
    m_tilePosition(HorizontalTilePosition::NOT_SET),
    m_tilePositionHasBeenSet(false),
    m_tileCount(0),
    m_tileCountHasBeenSet(false),
    m_tileAspectRatioHasBeenSet(false)
{
  *this = jsonValue;
}

HorizontalLayoutConfiguration& HorizontalLayoutConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TileOrder"))
  {
    m_tileOrder = TileOrderMapper::GetTileOrderForName(jsonValue.GetString("TileOrder"));

    m_tileOrderHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TilePosition"))
  {
    m_tilePosition = HorizontalTilePositionMapper::GetHorizontalTilePositionForName(jsonValue.GetString("TilePosition"));

    m_tilePositionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TileCount"))
  {
    m_tileCount = jsonValue.GetInteger("TileCount");

    m_tileCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TileAspectRatio"))
  {
    m_tileAspectRatio = jsonValue.GetString("TileAspectRatio");

    m_tileAspectRatioHasBeenSet = true;
  }

  return *this;
}

JsonValue HorizontalLayoutConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_tileOrderHasBeenSet)
  {
   payload.WithString("TileOrder", TileOrderMapper::GetNameForTileOrder(m_tileOrder));
  }

  if(m_tilePositionHasBeenSet)
  {
   payload.WithString("TilePosition", HorizontalTilePositionMapper::GetNameForHorizontalTilePosition(m_tilePosition));
  }

  if(m_tileCountHasBeenSet)
  {
   payload.WithInteger("TileCount", m_tileCount);

  }

  if(m_tileAspectRatioHasBeenSet)
  {
   payload.WithString("TileAspectRatio", m_tileAspectRatio);

  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
