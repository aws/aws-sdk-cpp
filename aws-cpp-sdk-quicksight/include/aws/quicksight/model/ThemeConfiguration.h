/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/DataColorPalette.h>
#include <aws/quicksight/model/UIColorPalette.h>
#include <aws/quicksight/model/SheetStyle.h>
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
   * <p>The theme configuration. This configuration contains all of the display
   * properties for a theme.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ThemeConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_QUICKSIGHT_API ThemeConfiguration
  {
  public:
    ThemeConfiguration();
    ThemeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    ThemeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Color properties that apply to chart data colors.</p>
     */
    inline const DataColorPalette& GetDataColorPalette() const{ return m_dataColorPalette; }

    /**
     * <p>Color properties that apply to chart data colors.</p>
     */
    inline bool DataColorPaletteHasBeenSet() const { return m_dataColorPaletteHasBeenSet; }

    /**
     * <p>Color properties that apply to chart data colors.</p>
     */
    inline void SetDataColorPalette(const DataColorPalette& value) { m_dataColorPaletteHasBeenSet = true; m_dataColorPalette = value; }

    /**
     * <p>Color properties that apply to chart data colors.</p>
     */
    inline void SetDataColorPalette(DataColorPalette&& value) { m_dataColorPaletteHasBeenSet = true; m_dataColorPalette = std::move(value); }

    /**
     * <p>Color properties that apply to chart data colors.</p>
     */
    inline ThemeConfiguration& WithDataColorPalette(const DataColorPalette& value) { SetDataColorPalette(value); return *this;}

    /**
     * <p>Color properties that apply to chart data colors.</p>
     */
    inline ThemeConfiguration& WithDataColorPalette(DataColorPalette&& value) { SetDataColorPalette(std::move(value)); return *this;}


    /**
     * <p>Color properties that apply to the UI and to charts, excluding the colors
     * that apply to data. </p>
     */
    inline const UIColorPalette& GetUIColorPalette() const{ return m_uIColorPalette; }

    /**
     * <p>Color properties that apply to the UI and to charts, excluding the colors
     * that apply to data. </p>
     */
    inline bool UIColorPaletteHasBeenSet() const { return m_uIColorPaletteHasBeenSet; }

    /**
     * <p>Color properties that apply to the UI and to charts, excluding the colors
     * that apply to data. </p>
     */
    inline void SetUIColorPalette(const UIColorPalette& value) { m_uIColorPaletteHasBeenSet = true; m_uIColorPalette = value; }

    /**
     * <p>Color properties that apply to the UI and to charts, excluding the colors
     * that apply to data. </p>
     */
    inline void SetUIColorPalette(UIColorPalette&& value) { m_uIColorPaletteHasBeenSet = true; m_uIColorPalette = std::move(value); }

    /**
     * <p>Color properties that apply to the UI and to charts, excluding the colors
     * that apply to data. </p>
     */
    inline ThemeConfiguration& WithUIColorPalette(const UIColorPalette& value) { SetUIColorPalette(value); return *this;}

    /**
     * <p>Color properties that apply to the UI and to charts, excluding the colors
     * that apply to data. </p>
     */
    inline ThemeConfiguration& WithUIColorPalette(UIColorPalette&& value) { SetUIColorPalette(std::move(value)); return *this;}


    /**
     * <p>Display options related to sheets.</p>
     */
    inline const SheetStyle& GetSheet() const{ return m_sheet; }

    /**
     * <p>Display options related to sheets.</p>
     */
    inline bool SheetHasBeenSet() const { return m_sheetHasBeenSet; }

    /**
     * <p>Display options related to sheets.</p>
     */
    inline void SetSheet(const SheetStyle& value) { m_sheetHasBeenSet = true; m_sheet = value; }

    /**
     * <p>Display options related to sheets.</p>
     */
    inline void SetSheet(SheetStyle&& value) { m_sheetHasBeenSet = true; m_sheet = std::move(value); }

    /**
     * <p>Display options related to sheets.</p>
     */
    inline ThemeConfiguration& WithSheet(const SheetStyle& value) { SetSheet(value); return *this;}

    /**
     * <p>Display options related to sheets.</p>
     */
    inline ThemeConfiguration& WithSheet(SheetStyle&& value) { SetSheet(std::move(value)); return *this;}

  private:

    DataColorPalette m_dataColorPalette;
    bool m_dataColorPaletteHasBeenSet;

    UIColorPalette m_uIColorPalette;
    bool m_uIColorPaletteHasBeenSet;

    SheetStyle m_sheet;
    bool m_sheetHasBeenSet;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
