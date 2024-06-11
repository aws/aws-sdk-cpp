/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/chime-sdk-media-pipelines/model/TileOrder.h>
#include <aws/chime-sdk-media-pipelines/model/HorizontalTilePosition.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ChimeSDKMediaPipelines
{
namespace Model
{

  /**
   * <p>Defines the configuration settings for the horizontal layout.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/HorizontalLayoutConfiguration">AWS
   * API Reference</a></p>
   */
  class HorizontalLayoutConfiguration
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API HorizontalLayoutConfiguration();
    AWS_CHIMESDKMEDIAPIPELINES_API HorizontalLayoutConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API HorizontalLayoutConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Sets the automatic ordering of the video tiles.</p>
     */
    inline const TileOrder& GetTileOrder() const{ return m_tileOrder; }
    inline bool TileOrderHasBeenSet() const { return m_tileOrderHasBeenSet; }
    inline void SetTileOrder(const TileOrder& value) { m_tileOrderHasBeenSet = true; m_tileOrder = value; }
    inline void SetTileOrder(TileOrder&& value) { m_tileOrderHasBeenSet = true; m_tileOrder = std::move(value); }
    inline HorizontalLayoutConfiguration& WithTileOrder(const TileOrder& value) { SetTileOrder(value); return *this;}
    inline HorizontalLayoutConfiguration& WithTileOrder(TileOrder&& value) { SetTileOrder(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets the position of horizontal tiles.</p>
     */
    inline const HorizontalTilePosition& GetTilePosition() const{ return m_tilePosition; }
    inline bool TilePositionHasBeenSet() const { return m_tilePositionHasBeenSet; }
    inline void SetTilePosition(const HorizontalTilePosition& value) { m_tilePositionHasBeenSet = true; m_tilePosition = value; }
    inline void SetTilePosition(HorizontalTilePosition&& value) { m_tilePositionHasBeenSet = true; m_tilePosition = std::move(value); }
    inline HorizontalLayoutConfiguration& WithTilePosition(const HorizontalTilePosition& value) { SetTilePosition(value); return *this;}
    inline HorizontalLayoutConfiguration& WithTilePosition(HorizontalTilePosition&& value) { SetTilePosition(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of video tiles to display.</p>
     */
    inline int GetTileCount() const{ return m_tileCount; }
    inline bool TileCountHasBeenSet() const { return m_tileCountHasBeenSet; }
    inline void SetTileCount(int value) { m_tileCountHasBeenSet = true; m_tileCount = value; }
    inline HorizontalLayoutConfiguration& WithTileCount(int value) { SetTileCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the aspect ratio of all video tiles.</p>
     */
    inline const Aws::String& GetTileAspectRatio() const{ return m_tileAspectRatio; }
    inline bool TileAspectRatioHasBeenSet() const { return m_tileAspectRatioHasBeenSet; }
    inline void SetTileAspectRatio(const Aws::String& value) { m_tileAspectRatioHasBeenSet = true; m_tileAspectRatio = value; }
    inline void SetTileAspectRatio(Aws::String&& value) { m_tileAspectRatioHasBeenSet = true; m_tileAspectRatio = std::move(value); }
    inline void SetTileAspectRatio(const char* value) { m_tileAspectRatioHasBeenSet = true; m_tileAspectRatio.assign(value); }
    inline HorizontalLayoutConfiguration& WithTileAspectRatio(const Aws::String& value) { SetTileAspectRatio(value); return *this;}
    inline HorizontalLayoutConfiguration& WithTileAspectRatio(Aws::String&& value) { SetTileAspectRatio(std::move(value)); return *this;}
    inline HorizontalLayoutConfiguration& WithTileAspectRatio(const char* value) { SetTileAspectRatio(value); return *this;}
    ///@}
  private:

    TileOrder m_tileOrder;
    bool m_tileOrderHasBeenSet = false;

    HorizontalTilePosition m_tilePosition;
    bool m_tilePositionHasBeenSet = false;

    int m_tileCount;
    bool m_tileCountHasBeenSet = false;

    Aws::String m_tileAspectRatio;
    bool m_tileAspectRatioHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
