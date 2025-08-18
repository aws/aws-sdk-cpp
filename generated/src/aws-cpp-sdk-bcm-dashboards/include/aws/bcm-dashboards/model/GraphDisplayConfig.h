/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-dashboards/BCMDashboards_EXPORTS.h>
#include <aws/bcm-dashboards/model/VisualType.h>
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
   * <p>Defines the visual representation settings for widget data, including the
   * visualization type, styling options, and display preferences for different
   * metric types.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-dashboards-2025-08-18/GraphDisplayConfig">AWS
   * API Reference</a></p>
   */
  class GraphDisplayConfig
  {
  public:
    AWS_BCMDASHBOARDS_API GraphDisplayConfig() = default;
    AWS_BCMDASHBOARDS_API GraphDisplayConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMDASHBOARDS_API GraphDisplayConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMDASHBOARDS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of visualization to use for the data.</p>
     */
    inline VisualType GetVisualType() const { return m_visualType; }
    inline bool VisualTypeHasBeenSet() const { return m_visualTypeHasBeenSet; }
    inline void SetVisualType(VisualType value) { m_visualTypeHasBeenSet = true; m_visualType = value; }
    inline GraphDisplayConfig& WithVisualType(VisualType value) { SetVisualType(value); return *this;}
    ///@}
  private:

    VisualType m_visualType{VisualType::NOT_SET};
    bool m_visualTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace BCMDashboards
} // namespace Aws
