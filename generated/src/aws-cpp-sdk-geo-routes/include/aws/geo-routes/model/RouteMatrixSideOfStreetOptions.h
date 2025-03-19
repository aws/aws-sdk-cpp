/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/geo-routes/model/SideOfStreetMatchingStrategy.h>
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
   * <p>Options to configure matching the provided position to a side of the
   * street.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RouteMatrixSideOfStreetOptions">AWS
   * API Reference</a></p>
   */
  class RouteMatrixSideOfStreetOptions
  {
  public:
    AWS_GEOROUTES_API RouteMatrixSideOfStreetOptions() = default;
    AWS_GEOROUTES_API RouteMatrixSideOfStreetOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API RouteMatrixSideOfStreetOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Position defined as <code>[longitude, latitude]</code>.</p>
     */
    inline const Aws::Vector<double>& GetPosition() const { return m_position; }
    inline bool PositionHasBeenSet() const { return m_positionHasBeenSet; }
    template<typename PositionT = Aws::Vector<double>>
    void SetPosition(PositionT&& value) { m_positionHasBeenSet = true; m_position = std::forward<PositionT>(value); }
    template<typename PositionT = Aws::Vector<double>>
    RouteMatrixSideOfStreetOptions& WithPosition(PositionT&& value) { SetPosition(std::forward<PositionT>(value)); return *this;}
    inline RouteMatrixSideOfStreetOptions& AddPosition(double value) { m_positionHasBeenSet = true; m_position.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Strategy that defines when the side of street position should be used.
     * AnyStreet will always use the provided position.</p> <p>Default Value:
     * <code>DividedStreetOnly</code> </p>
     */
    inline SideOfStreetMatchingStrategy GetUseWith() const { return m_useWith; }
    inline bool UseWithHasBeenSet() const { return m_useWithHasBeenSet; }
    inline void SetUseWith(SideOfStreetMatchingStrategy value) { m_useWithHasBeenSet = true; m_useWith = value; }
    inline RouteMatrixSideOfStreetOptions& WithUseWith(SideOfStreetMatchingStrategy value) { SetUseWith(value); return *this;}
    ///@}
  private:

    Aws::Vector<double> m_position;
    bool m_positionHasBeenSet = false;

    SideOfStreetMatchingStrategy m_useWith{SideOfStreetMatchingStrategy::NOT_SET};
    bool m_useWithHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
