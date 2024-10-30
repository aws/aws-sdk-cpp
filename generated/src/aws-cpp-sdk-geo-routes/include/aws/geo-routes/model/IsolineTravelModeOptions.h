/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/geo-routes/model/IsolineCarOptions.h>
#include <aws/geo-routes/model/IsolineScooterOptions.h>
#include <aws/geo-routes/model/IsolineTruckOptions.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/IsolineTravelModeOptions">AWS
   * API Reference</a></p>
   */
  class IsolineTravelModeOptions
  {
  public:
    AWS_GEOROUTES_API IsolineTravelModeOptions();
    AWS_GEOROUTES_API IsolineTravelModeOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API IsolineTravelModeOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Travel mode options when the provided travel mode is "Car"</p>
     */
    inline const IsolineCarOptions& GetCar() const{ return m_car; }
    inline bool CarHasBeenSet() const { return m_carHasBeenSet; }
    inline void SetCar(const IsolineCarOptions& value) { m_carHasBeenSet = true; m_car = value; }
    inline void SetCar(IsolineCarOptions&& value) { m_carHasBeenSet = true; m_car = std::move(value); }
    inline IsolineTravelModeOptions& WithCar(const IsolineCarOptions& value) { SetCar(value); return *this;}
    inline IsolineTravelModeOptions& WithCar(IsolineCarOptions&& value) { SetCar(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Travel mode options when the provided travel mode is "Scooter"</p>
     */
    inline const IsolineScooterOptions& GetScooter() const{ return m_scooter; }
    inline bool ScooterHasBeenSet() const { return m_scooterHasBeenSet; }
    inline void SetScooter(const IsolineScooterOptions& value) { m_scooterHasBeenSet = true; m_scooter = value; }
    inline void SetScooter(IsolineScooterOptions&& value) { m_scooterHasBeenSet = true; m_scooter = std::move(value); }
    inline IsolineTravelModeOptions& WithScooter(const IsolineScooterOptions& value) { SetScooter(value); return *this;}
    inline IsolineTravelModeOptions& WithScooter(IsolineScooterOptions&& value) { SetScooter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Travel mode options when the provided travel mode is "Truck"</p>
     */
    inline const IsolineTruckOptions& GetTruck() const{ return m_truck; }
    inline bool TruckHasBeenSet() const { return m_truckHasBeenSet; }
    inline void SetTruck(const IsolineTruckOptions& value) { m_truckHasBeenSet = true; m_truck = value; }
    inline void SetTruck(IsolineTruckOptions&& value) { m_truckHasBeenSet = true; m_truck = std::move(value); }
    inline IsolineTravelModeOptions& WithTruck(const IsolineTruckOptions& value) { SetTruck(value); return *this;}
    inline IsolineTravelModeOptions& WithTruck(IsolineTruckOptions&& value) { SetTruck(std::move(value)); return *this;}
    ///@}
  private:

    IsolineCarOptions m_car;
    bool m_carHasBeenSet = false;

    IsolineScooterOptions m_scooter;
    bool m_scooterHasBeenSet = false;

    IsolineTruckOptions m_truck;
    bool m_truckHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
