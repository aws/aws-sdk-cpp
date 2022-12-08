/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/TileStyle.h>
#include <aws/quicksight/model/TileLayoutStyle.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The theme display options for sheets. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/SheetStyle">AWS
   * API Reference</a></p>
   */
  class SheetStyle
  {
  public:
    AWS_QUICKSIGHT_API SheetStyle();
    AWS_QUICKSIGHT_API SheetStyle(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API SheetStyle& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The display options for tiles.</p>
     */
    inline const TileStyle& GetTile() const{ return m_tile; }

    /**
     * <p>The display options for tiles.</p>
     */
    inline bool TileHasBeenSet() const { return m_tileHasBeenSet; }

    /**
     * <p>The display options for tiles.</p>
     */
    inline void SetTile(const TileStyle& value) { m_tileHasBeenSet = true; m_tile = value; }

    /**
     * <p>The display options for tiles.</p>
     */
    inline void SetTile(TileStyle&& value) { m_tileHasBeenSet = true; m_tile = std::move(value); }

    /**
     * <p>The display options for tiles.</p>
     */
    inline SheetStyle& WithTile(const TileStyle& value) { SetTile(value); return *this;}

    /**
     * <p>The display options for tiles.</p>
     */
    inline SheetStyle& WithTile(TileStyle&& value) { SetTile(std::move(value)); return *this;}


    /**
     * <p>The layout options for tiles.</p>
     */
    inline const TileLayoutStyle& GetTileLayout() const{ return m_tileLayout; }

    /**
     * <p>The layout options for tiles.</p>
     */
    inline bool TileLayoutHasBeenSet() const { return m_tileLayoutHasBeenSet; }

    /**
     * <p>The layout options for tiles.</p>
     */
    inline void SetTileLayout(const TileLayoutStyle& value) { m_tileLayoutHasBeenSet = true; m_tileLayout = value; }

    /**
     * <p>The layout options for tiles.</p>
     */
    inline void SetTileLayout(TileLayoutStyle&& value) { m_tileLayoutHasBeenSet = true; m_tileLayout = std::move(value); }

    /**
     * <p>The layout options for tiles.</p>
     */
    inline SheetStyle& WithTileLayout(const TileLayoutStyle& value) { SetTileLayout(value); return *this;}

    /**
     * <p>The layout options for tiles.</p>
     */
    inline SheetStyle& WithTileLayout(TileLayoutStyle&& value) { SetTileLayout(std::move(value)); return *this;}

  private:

    TileStyle m_tile;
    bool m_tileHasBeenSet = false;

    TileLayoutStyle m_tileLayout;
    bool m_tileLayoutHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
