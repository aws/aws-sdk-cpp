/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/geo-routes/model/RouteMatrixDestinationOptions.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace GeoRoutes
{
namespace Model
{

  /**
   * <p>The route destination.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RouteMatrixDestination">AWS
   * API Reference</a></p>
   */
  class RouteMatrixDestination
  {
  public:
    AWS_GEOROUTES_API RouteMatrixDestination() = default;
    AWS_GEOROUTES_API RouteMatrixDestination(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API RouteMatrixDestination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Destination related options.</p>
     */
    inline const RouteMatrixDestinationOptions& GetOptions() const { return m_options; }
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }
    template<typename OptionsT = RouteMatrixDestinationOptions>
    void SetOptions(OptionsT&& value) { m_optionsHasBeenSet = true; m_options = std::forward<OptionsT>(value); }
    template<typename OptionsT = RouteMatrixDestinationOptions>
    RouteMatrixDestination& WithOptions(OptionsT&& value) { SetOptions(std::forward<OptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Position defined as <code>[longitude, latitude]</code>.</p>
     */
    inline const Aws::Vector<double>& GetPosition() const { return m_position; }
    inline bool PositionHasBeenSet() const { return m_positionHasBeenSet; }
    template<typename PositionT = Aws::Vector<double>>
    void SetPosition(PositionT&& value) { m_positionHasBeenSet = true; m_position = std::forward<PositionT>(value); }
    template<typename PositionT = Aws::Vector<double>>
    RouteMatrixDestination& WithPosition(PositionT&& value) { SetPosition(std::forward<PositionT>(value)); return *this;}
    inline RouteMatrixDestination& AddPosition(double value) { m_positionHasBeenSet = true; m_position.push_back(value); return *this; }
    ///@}
  private:

    RouteMatrixDestinationOptions m_options;
    bool m_optionsHasBeenSet = false;

    Aws::Vector<double> m_position;
    bool m_positionHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
