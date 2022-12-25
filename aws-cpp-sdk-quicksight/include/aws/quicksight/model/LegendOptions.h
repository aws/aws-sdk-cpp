/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/Visibility.h>
#include <aws/quicksight/model/LabelOptions.h>
#include <aws/quicksight/model/LegendPosition.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The options for the legend setup of a visual.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/LegendOptions">AWS
   * API Reference</a></p>
   */
  class LegendOptions
  {
  public:
    AWS_QUICKSIGHT_API LegendOptions();
    AWS_QUICKSIGHT_API LegendOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API LegendOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Determines whether or not the legend is visible.</p>
     */
    inline const Visibility& GetVisibility() const{ return m_visibility; }

    /**
     * <p>Determines whether or not the legend is visible.</p>
     */
    inline bool VisibilityHasBeenSet() const { return m_visibilityHasBeenSet; }

    /**
     * <p>Determines whether or not the legend is visible.</p>
     */
    inline void SetVisibility(const Visibility& value) { m_visibilityHasBeenSet = true; m_visibility = value; }

    /**
     * <p>Determines whether or not the legend is visible.</p>
     */
    inline void SetVisibility(Visibility&& value) { m_visibilityHasBeenSet = true; m_visibility = std::move(value); }

    /**
     * <p>Determines whether or not the legend is visible.</p>
     */
    inline LegendOptions& WithVisibility(const Visibility& value) { SetVisibility(value); return *this;}

    /**
     * <p>Determines whether or not the legend is visible.</p>
     */
    inline LegendOptions& WithVisibility(Visibility&& value) { SetVisibility(std::move(value)); return *this;}


    /**
     * <p>The custom title for the legend.</p>
     */
    inline const LabelOptions& GetTitle() const{ return m_title; }

    /**
     * <p>The custom title for the legend.</p>
     */
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }

    /**
     * <p>The custom title for the legend.</p>
     */
    inline void SetTitle(const LabelOptions& value) { m_titleHasBeenSet = true; m_title = value; }

    /**
     * <p>The custom title for the legend.</p>
     */
    inline void SetTitle(LabelOptions&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }

    /**
     * <p>The custom title for the legend.</p>
     */
    inline LegendOptions& WithTitle(const LabelOptions& value) { SetTitle(value); return *this;}

    /**
     * <p>The custom title for the legend.</p>
     */
    inline LegendOptions& WithTitle(LabelOptions&& value) { SetTitle(std::move(value)); return *this;}


    /**
     * <p>The positions for the legend. Choose one of the following options:</p> <ul>
     * <li> <p> <code>AUTO</code> </p> </li> <li> <p> <code>RIGHT</code> </p> </li>
     * <li> <p> <code>BOTTOM</code> </p> </li> <li> <p> <code>LEFT</code> </p> </li>
     * </ul>
     */
    inline const LegendPosition& GetPosition() const{ return m_position; }

    /**
     * <p>The positions for the legend. Choose one of the following options:</p> <ul>
     * <li> <p> <code>AUTO</code> </p> </li> <li> <p> <code>RIGHT</code> </p> </li>
     * <li> <p> <code>BOTTOM</code> </p> </li> <li> <p> <code>LEFT</code> </p> </li>
     * </ul>
     */
    inline bool PositionHasBeenSet() const { return m_positionHasBeenSet; }

    /**
     * <p>The positions for the legend. Choose one of the following options:</p> <ul>
     * <li> <p> <code>AUTO</code> </p> </li> <li> <p> <code>RIGHT</code> </p> </li>
     * <li> <p> <code>BOTTOM</code> </p> </li> <li> <p> <code>LEFT</code> </p> </li>
     * </ul>
     */
    inline void SetPosition(const LegendPosition& value) { m_positionHasBeenSet = true; m_position = value; }

    /**
     * <p>The positions for the legend. Choose one of the following options:</p> <ul>
     * <li> <p> <code>AUTO</code> </p> </li> <li> <p> <code>RIGHT</code> </p> </li>
     * <li> <p> <code>BOTTOM</code> </p> </li> <li> <p> <code>LEFT</code> </p> </li>
     * </ul>
     */
    inline void SetPosition(LegendPosition&& value) { m_positionHasBeenSet = true; m_position = std::move(value); }

    /**
     * <p>The positions for the legend. Choose one of the following options:</p> <ul>
     * <li> <p> <code>AUTO</code> </p> </li> <li> <p> <code>RIGHT</code> </p> </li>
     * <li> <p> <code>BOTTOM</code> </p> </li> <li> <p> <code>LEFT</code> </p> </li>
     * </ul>
     */
    inline LegendOptions& WithPosition(const LegendPosition& value) { SetPosition(value); return *this;}

    /**
     * <p>The positions for the legend. Choose one of the following options:</p> <ul>
     * <li> <p> <code>AUTO</code> </p> </li> <li> <p> <code>RIGHT</code> </p> </li>
     * <li> <p> <code>BOTTOM</code> </p> </li> <li> <p> <code>LEFT</code> </p> </li>
     * </ul>
     */
    inline LegendOptions& WithPosition(LegendPosition&& value) { SetPosition(std::move(value)); return *this;}


    /**
     * <p>The width of the legend. If this value is omitted, a default width is used
     * when rendering.</p>
     */
    inline const Aws::String& GetWidth() const{ return m_width; }

    /**
     * <p>The width of the legend. If this value is omitted, a default width is used
     * when rendering.</p>
     */
    inline bool WidthHasBeenSet() const { return m_widthHasBeenSet; }

    /**
     * <p>The width of the legend. If this value is omitted, a default width is used
     * when rendering.</p>
     */
    inline void SetWidth(const Aws::String& value) { m_widthHasBeenSet = true; m_width = value; }

    /**
     * <p>The width of the legend. If this value is omitted, a default width is used
     * when rendering.</p>
     */
    inline void SetWidth(Aws::String&& value) { m_widthHasBeenSet = true; m_width = std::move(value); }

    /**
     * <p>The width of the legend. If this value is omitted, a default width is used
     * when rendering.</p>
     */
    inline void SetWidth(const char* value) { m_widthHasBeenSet = true; m_width.assign(value); }

    /**
     * <p>The width of the legend. If this value is omitted, a default width is used
     * when rendering.</p>
     */
    inline LegendOptions& WithWidth(const Aws::String& value) { SetWidth(value); return *this;}

    /**
     * <p>The width of the legend. If this value is omitted, a default width is used
     * when rendering.</p>
     */
    inline LegendOptions& WithWidth(Aws::String&& value) { SetWidth(std::move(value)); return *this;}

    /**
     * <p>The width of the legend. If this value is omitted, a default width is used
     * when rendering.</p>
     */
    inline LegendOptions& WithWidth(const char* value) { SetWidth(value); return *this;}


    /**
     * <p>The height of the legend. If this value is omitted, a default height is used
     * when rendering.</p>
     */
    inline const Aws::String& GetHeight() const{ return m_height; }

    /**
     * <p>The height of the legend. If this value is omitted, a default height is used
     * when rendering.</p>
     */
    inline bool HeightHasBeenSet() const { return m_heightHasBeenSet; }

    /**
     * <p>The height of the legend. If this value is omitted, a default height is used
     * when rendering.</p>
     */
    inline void SetHeight(const Aws::String& value) { m_heightHasBeenSet = true; m_height = value; }

    /**
     * <p>The height of the legend. If this value is omitted, a default height is used
     * when rendering.</p>
     */
    inline void SetHeight(Aws::String&& value) { m_heightHasBeenSet = true; m_height = std::move(value); }

    /**
     * <p>The height of the legend. If this value is omitted, a default height is used
     * when rendering.</p>
     */
    inline void SetHeight(const char* value) { m_heightHasBeenSet = true; m_height.assign(value); }

    /**
     * <p>The height of the legend. If this value is omitted, a default height is used
     * when rendering.</p>
     */
    inline LegendOptions& WithHeight(const Aws::String& value) { SetHeight(value); return *this;}

    /**
     * <p>The height of the legend. If this value is omitted, a default height is used
     * when rendering.</p>
     */
    inline LegendOptions& WithHeight(Aws::String&& value) { SetHeight(std::move(value)); return *this;}

    /**
     * <p>The height of the legend. If this value is omitted, a default height is used
     * when rendering.</p>
     */
    inline LegendOptions& WithHeight(const char* value) { SetHeight(value); return *this;}

  private:

    Visibility m_visibility;
    bool m_visibilityHasBeenSet = false;

    LabelOptions m_title;
    bool m_titleHasBeenSet = false;

    LegendPosition m_position;
    bool m_positionHasBeenSet = false;

    Aws::String m_width;
    bool m_widthHasBeenSet = false;

    Aws::String m_height;
    bool m_heightHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
