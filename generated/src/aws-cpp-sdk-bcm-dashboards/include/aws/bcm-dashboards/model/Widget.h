/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-dashboards/BCMDashboards_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bcm-dashboards/model/WidgetConfig.h>
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
namespace BCMDashboards
{
namespace Model
{

  /**
   * <p>A configurable visualization component within a dashboard that displays
   * specific cost and usage metrics. Each widget can show data as charts or tables
   * and includes settings for data querying, filtering, and visual
   * presentation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-dashboards-2025-08-18/Widget">AWS
   * API Reference</a></p>
   */
  class Widget
  {
  public:
    AWS_BCMDASHBOARDS_API Widget() = default;
    AWS_BCMDASHBOARDS_API Widget(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMDASHBOARDS_API Widget& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMDASHBOARDS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The title of the widget.</p>
     */
    inline const Aws::String& GetTitle() const { return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    template<typename TitleT = Aws::String>
    void SetTitle(TitleT&& value) { m_titleHasBeenSet = true; m_title = std::forward<TitleT>(value); }
    template<typename TitleT = Aws::String>
    Widget& WithTitle(TitleT&& value) { SetTitle(std::forward<TitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the widget's purpose or the data it displays.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    Widget& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The width of the widget in column spans. The dashboard layout consists of a
     * grid system.</p>
     */
    inline int GetWidth() const { return m_width; }
    inline bool WidthHasBeenSet() const { return m_widthHasBeenSet; }
    inline void SetWidth(int value) { m_widthHasBeenSet = true; m_width = value; }
    inline Widget& WithWidth(int value) { SetWidth(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The height of the widget in row spans. The dashboard layout consists of a
     * grid system.</p>
     */
    inline int GetHeight() const { return m_height; }
    inline bool HeightHasBeenSet() const { return m_heightHasBeenSet; }
    inline void SetHeight(int value) { m_heightHasBeenSet = true; m_height = value; }
    inline Widget& WithHeight(int value) { SetHeight(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the starting column position of the widget in the dashboard's grid
     * layout. Used to control widget placement.</p>
     */
    inline int GetHorizontalOffset() const { return m_horizontalOffset; }
    inline bool HorizontalOffsetHasBeenSet() const { return m_horizontalOffsetHasBeenSet; }
    inline void SetHorizontalOffset(int value) { m_horizontalOffsetHasBeenSet = true; m_horizontalOffset = value; }
    inline Widget& WithHorizontalOffset(int value) { SetHorizontalOffset(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of configurations that define the data queries and display settings
     * for the widget.</p>
     */
    inline const Aws::Vector<WidgetConfig>& GetConfigs() const { return m_configs; }
    inline bool ConfigsHasBeenSet() const { return m_configsHasBeenSet; }
    template<typename ConfigsT = Aws::Vector<WidgetConfig>>
    void SetConfigs(ConfigsT&& value) { m_configsHasBeenSet = true; m_configs = std::forward<ConfigsT>(value); }
    template<typename ConfigsT = Aws::Vector<WidgetConfig>>
    Widget& WithConfigs(ConfigsT&& value) { SetConfigs(std::forward<ConfigsT>(value)); return *this;}
    template<typename ConfigsT = WidgetConfig>
    Widget& AddConfigs(ConfigsT&& value) { m_configsHasBeenSet = true; m_configs.emplace_back(std::forward<ConfigsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    int m_width{0};
    bool m_widthHasBeenSet = false;

    int m_height{0};
    bool m_heightHasBeenSet = false;

    int m_horizontalOffset{0};
    bool m_horizontalOffsetHasBeenSet = false;

    Aws::Vector<WidgetConfig> m_configs;
    bool m_configsHasBeenSet = false;
  };

} // namespace Model
} // namespace BCMDashboards
} // namespace Aws
