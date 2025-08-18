/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-dashboards/BCMDashboards_EXPORTS.h>
#include <aws/bcm-dashboards/model/QueryParameters.h>
#include <aws/bcm-dashboards/model/DisplayConfig.h>
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
   * <p>Defines the complete configuration for a widget, including data retrieval
   * settings and visualization preferences.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-dashboards-2025-08-18/WidgetConfig">AWS
   * API Reference</a></p>
   */
  class WidgetConfig
  {
  public:
    AWS_BCMDASHBOARDS_API WidgetConfig() = default;
    AWS_BCMDASHBOARDS_API WidgetConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMDASHBOARDS_API WidgetConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMDASHBOARDS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The parameters that define what data the widget should retrieve and how it
     * should be filtered or grouped.</p>
     */
    inline const QueryParameters& GetQueryParameters() const { return m_queryParameters; }
    inline bool QueryParametersHasBeenSet() const { return m_queryParametersHasBeenSet; }
    template<typename QueryParametersT = QueryParameters>
    void SetQueryParameters(QueryParametersT&& value) { m_queryParametersHasBeenSet = true; m_queryParameters = std::forward<QueryParametersT>(value); }
    template<typename QueryParametersT = QueryParameters>
    WidgetConfig& WithQueryParameters(QueryParametersT&& value) { SetQueryParameters(std::forward<QueryParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration that determines how the retrieved data should be visualized
     * in the widget.</p>
     */
    inline const DisplayConfig& GetDisplayConfig() const { return m_displayConfig; }
    inline bool DisplayConfigHasBeenSet() const { return m_displayConfigHasBeenSet; }
    template<typename DisplayConfigT = DisplayConfig>
    void SetDisplayConfig(DisplayConfigT&& value) { m_displayConfigHasBeenSet = true; m_displayConfig = std::forward<DisplayConfigT>(value); }
    template<typename DisplayConfigT = DisplayConfig>
    WidgetConfig& WithDisplayConfig(DisplayConfigT&& value) { SetDisplayConfig(std::forward<DisplayConfigT>(value)); return *this;}
    ///@}
  private:

    QueryParameters m_queryParameters;
    bool m_queryParametersHasBeenSet = false;

    DisplayConfig m_displayConfig;
    bool m_displayConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace BCMDashboards
} // namespace Aws
