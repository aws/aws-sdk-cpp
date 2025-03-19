/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/geo-routes/model/WaypointOptimizationPedestrianOptions.h>
#include <aws/geo-routes/model/WaypointOptimizationTruckOptions.h>
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
   * <p>Travel mode related options for the provided travel mode.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/WaypointOptimizationTravelModeOptions">AWS
   * API Reference</a></p>
   */
  class WaypointOptimizationTravelModeOptions
  {
  public:
    AWS_GEOROUTES_API WaypointOptimizationTravelModeOptions() = default;
    AWS_GEOROUTES_API WaypointOptimizationTravelModeOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API WaypointOptimizationTravelModeOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Travel mode options when the provided travel mode is "Pedestrian"</p>
     */
    inline const WaypointOptimizationPedestrianOptions& GetPedestrian() const { return m_pedestrian; }
    inline bool PedestrianHasBeenSet() const { return m_pedestrianHasBeenSet; }
    template<typename PedestrianT = WaypointOptimizationPedestrianOptions>
    void SetPedestrian(PedestrianT&& value) { m_pedestrianHasBeenSet = true; m_pedestrian = std::forward<PedestrianT>(value); }
    template<typename PedestrianT = WaypointOptimizationPedestrianOptions>
    WaypointOptimizationTravelModeOptions& WithPedestrian(PedestrianT&& value) { SetPedestrian(std::forward<PedestrianT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Travel mode options when the provided travel mode is "Truck"</p>
     */
    inline const WaypointOptimizationTruckOptions& GetTruck() const { return m_truck; }
    inline bool TruckHasBeenSet() const { return m_truckHasBeenSet; }
    template<typename TruckT = WaypointOptimizationTruckOptions>
    void SetTruck(TruckT&& value) { m_truckHasBeenSet = true; m_truck = std::forward<TruckT>(value); }
    template<typename TruckT = WaypointOptimizationTruckOptions>
    WaypointOptimizationTravelModeOptions& WithTruck(TruckT&& value) { SetTruck(std::forward<TruckT>(value)); return *this;}
    ///@}
  private:

    WaypointOptimizationPedestrianOptions m_pedestrian;
    bool m_pedestrianHasBeenSet = false;

    WaypointOptimizationTruckOptions m_truck;
    bool m_truckHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
