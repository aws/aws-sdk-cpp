/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/GutterStyle.h>
#include <aws/quicksight/model/MarginStyle.h>
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
   * <p>The display options for the layout of tiles on a sheet.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TileLayoutStyle">AWS
   * API Reference</a></p>
   */
  class TileLayoutStyle
  {
  public:
    AWS_QUICKSIGHT_API TileLayoutStyle();
    AWS_QUICKSIGHT_API TileLayoutStyle(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TileLayoutStyle& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The gutter settings that apply between tiles. </p>
     */
    inline const GutterStyle& GetGutter() const{ return m_gutter; }

    /**
     * <p>The gutter settings that apply between tiles. </p>
     */
    inline bool GutterHasBeenSet() const { return m_gutterHasBeenSet; }

    /**
     * <p>The gutter settings that apply between tiles. </p>
     */
    inline void SetGutter(const GutterStyle& value) { m_gutterHasBeenSet = true; m_gutter = value; }

    /**
     * <p>The gutter settings that apply between tiles. </p>
     */
    inline void SetGutter(GutterStyle&& value) { m_gutterHasBeenSet = true; m_gutter = std::move(value); }

    /**
     * <p>The gutter settings that apply between tiles. </p>
     */
    inline TileLayoutStyle& WithGutter(const GutterStyle& value) { SetGutter(value); return *this;}

    /**
     * <p>The gutter settings that apply between tiles. </p>
     */
    inline TileLayoutStyle& WithGutter(GutterStyle&& value) { SetGutter(std::move(value)); return *this;}


    /**
     * <p>The margin settings that apply around the outside edge of sheets.</p>
     */
    inline const MarginStyle& GetMargin() const{ return m_margin; }

    /**
     * <p>The margin settings that apply around the outside edge of sheets.</p>
     */
    inline bool MarginHasBeenSet() const { return m_marginHasBeenSet; }

    /**
     * <p>The margin settings that apply around the outside edge of sheets.</p>
     */
    inline void SetMargin(const MarginStyle& value) { m_marginHasBeenSet = true; m_margin = value; }

    /**
     * <p>The margin settings that apply around the outside edge of sheets.</p>
     */
    inline void SetMargin(MarginStyle&& value) { m_marginHasBeenSet = true; m_margin = std::move(value); }

    /**
     * <p>The margin settings that apply around the outside edge of sheets.</p>
     */
    inline TileLayoutStyle& WithMargin(const MarginStyle& value) { SetMargin(value); return *this;}

    /**
     * <p>The margin settings that apply around the outside edge of sheets.</p>
     */
    inline TileLayoutStyle& WithMargin(MarginStyle&& value) { SetMargin(std::move(value)); return *this;}

  private:

    GutterStyle m_gutter;
    bool m_gutterHasBeenSet = false;

    MarginStyle m_margin;
    bool m_marginHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
