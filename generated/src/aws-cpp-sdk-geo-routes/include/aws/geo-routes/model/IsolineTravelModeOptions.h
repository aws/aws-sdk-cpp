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
    AWS_GEOROUTES_API IsolineTravelModeOptions() = default;
    AWS_GEOROUTES_API IsolineTravelModeOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API IsolineTravelModeOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Travel mode options when the provided travel mode is "Car"</p>
     */
    inline const IsolineCarOptions& GetCar() const { return m_car; }
    inline bool CarHasBeenSet() const { return m_carHasBeenSet; }
    template<typename CarT = IsolineCarOptions>
    void SetCar(CarT&& value) { m_carHasBeenSet = true; m_car = std::forward<CarT>(value); }
    template<typename CarT = IsolineCarOptions>
    IsolineTravelModeOptions& WithCar(CarT&& value) { SetCar(std::forward<CarT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Travel mode options when the provided travel mode is <code>Scooter</code>
     * </p>  <p>When travel mode is set to <code>Scooter</code>, then the
     * avoidance option <code>ControlledAccessHighways</code> defaults to
     * <code>true</code>.</p> 
     */
    inline const IsolineScooterOptions& GetScooter() const { return m_scooter; }
    inline bool ScooterHasBeenSet() const { return m_scooterHasBeenSet; }
    template<typename ScooterT = IsolineScooterOptions>
    void SetScooter(ScooterT&& value) { m_scooterHasBeenSet = true; m_scooter = std::forward<ScooterT>(value); }
    template<typename ScooterT = IsolineScooterOptions>
    IsolineTravelModeOptions& WithScooter(ScooterT&& value) { SetScooter(std::forward<ScooterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Travel mode options when the provided travel mode is "Truck"</p>
     */
    inline const IsolineTruckOptions& GetTruck() const { return m_truck; }
    inline bool TruckHasBeenSet() const { return m_truckHasBeenSet; }
    template<typename TruckT = IsolineTruckOptions>
    void SetTruck(TruckT&& value) { m_truckHasBeenSet = true; m_truck = std::forward<TruckT>(value); }
    template<typename TruckT = IsolineTruckOptions>
    IsolineTravelModeOptions& WithTruck(TruckT&& value) { SetTruck(std::forward<TruckT>(value)); return *this;}
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
