/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/geo-routes/model/RouteMatrixCarOptions.h>
#include <aws/geo-routes/model/RouteMatrixScooterOptions.h>
#include <aws/geo-routes/model/RouteMatrixTruckOptions.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RouteMatrixTravelModeOptions">AWS
   * API Reference</a></p>
   */
  class RouteMatrixTravelModeOptions
  {
  public:
    AWS_GEOROUTES_API RouteMatrixTravelModeOptions();
    AWS_GEOROUTES_API RouteMatrixTravelModeOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API RouteMatrixTravelModeOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Travel mode options when the provided travel mode is "Car"</p>
     */
    inline const RouteMatrixCarOptions& GetCar() const{ return m_car; }
    inline bool CarHasBeenSet() const { return m_carHasBeenSet; }
    inline void SetCar(const RouteMatrixCarOptions& value) { m_carHasBeenSet = true; m_car = value; }
    inline void SetCar(RouteMatrixCarOptions&& value) { m_carHasBeenSet = true; m_car = std::move(value); }
    inline RouteMatrixTravelModeOptions& WithCar(const RouteMatrixCarOptions& value) { SetCar(value); return *this;}
    inline RouteMatrixTravelModeOptions& WithCar(RouteMatrixCarOptions&& value) { SetCar(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Travel mode options when the provided travel mode is "Scooter"</p>
     */
    inline const RouteMatrixScooterOptions& GetScooter() const{ return m_scooter; }
    inline bool ScooterHasBeenSet() const { return m_scooterHasBeenSet; }
    inline void SetScooter(const RouteMatrixScooterOptions& value) { m_scooterHasBeenSet = true; m_scooter = value; }
    inline void SetScooter(RouteMatrixScooterOptions&& value) { m_scooterHasBeenSet = true; m_scooter = std::move(value); }
    inline RouteMatrixTravelModeOptions& WithScooter(const RouteMatrixScooterOptions& value) { SetScooter(value); return *this;}
    inline RouteMatrixTravelModeOptions& WithScooter(RouteMatrixScooterOptions&& value) { SetScooter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Travel mode options when the provided travel mode is "Truck"</p>
     */
    inline const RouteMatrixTruckOptions& GetTruck() const{ return m_truck; }
    inline bool TruckHasBeenSet() const { return m_truckHasBeenSet; }
    inline void SetTruck(const RouteMatrixTruckOptions& value) { m_truckHasBeenSet = true; m_truck = value; }
    inline void SetTruck(RouteMatrixTruckOptions&& value) { m_truckHasBeenSet = true; m_truck = std::move(value); }
    inline RouteMatrixTravelModeOptions& WithTruck(const RouteMatrixTruckOptions& value) { SetTruck(value); return *this;}
    inline RouteMatrixTravelModeOptions& WithTruck(RouteMatrixTruckOptions&& value) { SetTruck(std::move(value)); return *this;}
    ///@}
  private:

    RouteMatrixCarOptions m_car;
    bool m_carHasBeenSet = false;

    RouteMatrixScooterOptions m_scooter;
    bool m_scooterHasBeenSet = false;

    RouteMatrixTruckOptions m_truck;
    bool m_truckHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
