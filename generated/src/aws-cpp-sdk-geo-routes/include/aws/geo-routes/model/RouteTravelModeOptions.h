/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/geo-routes/model/RouteCarOptions.h>
#include <aws/geo-routes/model/RoutePedestrianOptions.h>
#include <aws/geo-routes/model/RouteScooterOptions.h>
#include <aws/geo-routes/model/RouteTruckOptions.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RouteTravelModeOptions">AWS
   * API Reference</a></p>
   */
  class RouteTravelModeOptions
  {
  public:
    AWS_GEOROUTES_API RouteTravelModeOptions();
    AWS_GEOROUTES_API RouteTravelModeOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API RouteTravelModeOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Travel mode options when the provided travel mode is "Car"</p>
     */
    inline const RouteCarOptions& GetCar() const{ return m_car; }
    inline bool CarHasBeenSet() const { return m_carHasBeenSet; }
    inline void SetCar(const RouteCarOptions& value) { m_carHasBeenSet = true; m_car = value; }
    inline void SetCar(RouteCarOptions&& value) { m_carHasBeenSet = true; m_car = std::move(value); }
    inline RouteTravelModeOptions& WithCar(const RouteCarOptions& value) { SetCar(value); return *this;}
    inline RouteTravelModeOptions& WithCar(RouteCarOptions&& value) { SetCar(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Travel mode options when the provided travel mode is "Pedestrian"</p>
     */
    inline const RoutePedestrianOptions& GetPedestrian() const{ return m_pedestrian; }
    inline bool PedestrianHasBeenSet() const { return m_pedestrianHasBeenSet; }
    inline void SetPedestrian(const RoutePedestrianOptions& value) { m_pedestrianHasBeenSet = true; m_pedestrian = value; }
    inline void SetPedestrian(RoutePedestrianOptions&& value) { m_pedestrianHasBeenSet = true; m_pedestrian = std::move(value); }
    inline RouteTravelModeOptions& WithPedestrian(const RoutePedestrianOptions& value) { SetPedestrian(value); return *this;}
    inline RouteTravelModeOptions& WithPedestrian(RoutePedestrianOptions&& value) { SetPedestrian(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Travel mode options when the provided travel mode is "Scooter"</p>
     */
    inline const RouteScooterOptions& GetScooter() const{ return m_scooter; }
    inline bool ScooterHasBeenSet() const { return m_scooterHasBeenSet; }
    inline void SetScooter(const RouteScooterOptions& value) { m_scooterHasBeenSet = true; m_scooter = value; }
    inline void SetScooter(RouteScooterOptions&& value) { m_scooterHasBeenSet = true; m_scooter = std::move(value); }
    inline RouteTravelModeOptions& WithScooter(const RouteScooterOptions& value) { SetScooter(value); return *this;}
    inline RouteTravelModeOptions& WithScooter(RouteScooterOptions&& value) { SetScooter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Travel mode options when the provided travel mode is "Truck"</p>
     */
    inline const RouteTruckOptions& GetTruck() const{ return m_truck; }
    inline bool TruckHasBeenSet() const { return m_truckHasBeenSet; }
    inline void SetTruck(const RouteTruckOptions& value) { m_truckHasBeenSet = true; m_truck = value; }
    inline void SetTruck(RouteTruckOptions&& value) { m_truckHasBeenSet = true; m_truck = std::move(value); }
    inline RouteTravelModeOptions& WithTruck(const RouteTruckOptions& value) { SetTruck(value); return *this;}
    inline RouteTravelModeOptions& WithTruck(RouteTruckOptions&& value) { SetTruck(std::move(value)); return *this;}
    ///@}
  private:

    RouteCarOptions m_car;
    bool m_carHasBeenSet = false;

    RoutePedestrianOptions m_pedestrian;
    bool m_pedestrianHasBeenSet = false;

    RouteScooterOptions m_scooter;
    bool m_scooterHasBeenSet = false;

    RouteTruckOptions m_truck;
    bool m_truckHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
