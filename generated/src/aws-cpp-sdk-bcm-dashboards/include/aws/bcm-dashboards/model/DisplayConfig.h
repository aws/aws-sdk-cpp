/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-dashboards/BCMDashboards_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/bcm-dashboards/model/TableDisplayConfigStruct.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bcm-dashboards/model/GraphDisplayConfig.h>
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
   * <p>Defines how the widget's data should be visualized, including chart type,
   * color schemes, axis configurations, and other display preferences.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-dashboards-2025-08-18/DisplayConfig">AWS
   * API Reference</a></p>
   */
  class DisplayConfig
  {
  public:
    AWS_BCMDASHBOARDS_API DisplayConfig() = default;
    AWS_BCMDASHBOARDS_API DisplayConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMDASHBOARDS_API DisplayConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMDASHBOARDS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The configuration for graphical display of the widget data, including chart
     * type and visual options.</p>
     */
    inline const Aws::Map<Aws::String, GraphDisplayConfig>& GetGraph() const { return m_graph; }
    inline bool GraphHasBeenSet() const { return m_graphHasBeenSet; }
    template<typename GraphT = Aws::Map<Aws::String, GraphDisplayConfig>>
    void SetGraph(GraphT&& value) { m_graphHasBeenSet = true; m_graph = std::forward<GraphT>(value); }
    template<typename GraphT = Aws::Map<Aws::String, GraphDisplayConfig>>
    DisplayConfig& WithGraph(GraphT&& value) { SetGraph(std::forward<GraphT>(value)); return *this;}
    template<typename GraphKeyT = Aws::String, typename GraphValueT = GraphDisplayConfig>
    DisplayConfig& AddGraph(GraphKeyT&& key, GraphValueT&& value) {
      m_graphHasBeenSet = true; m_graph.emplace(std::forward<GraphKeyT>(key), std::forward<GraphValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The configuration for tabular display of the widget data.</p>
     */
    inline const TableDisplayConfigStruct& GetTable() const { return m_table; }
    inline bool TableHasBeenSet() const { return m_tableHasBeenSet; }
    template<typename TableT = TableDisplayConfigStruct>
    void SetTable(TableT&& value) { m_tableHasBeenSet = true; m_table = std::forward<TableT>(value); }
    template<typename TableT = TableDisplayConfigStruct>
    DisplayConfig& WithTable(TableT&& value) { SetTable(std::forward<TableT>(value)); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, GraphDisplayConfig> m_graph;
    bool m_graphHasBeenSet = false;

    TableDisplayConfigStruct m_table;
    bool m_tableHasBeenSet = false;
  };

} // namespace Model
} // namespace BCMDashboards
} // namespace Aws
