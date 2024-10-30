/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/geo-routes/model/RouteMatrixVehicleLicensePlate.h>
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
   * <p>Travel mode options when the provided travel mode is "Scooter"</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RouteMatrixScooterOptions">AWS
   * API Reference</a></p>
   */
  class RouteMatrixScooterOptions
  {
  public:
    AWS_GEOROUTES_API RouteMatrixScooterOptions();
    AWS_GEOROUTES_API RouteMatrixScooterOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API RouteMatrixScooterOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The vehicle License Plate.</p>
     */
    inline const RouteMatrixVehicleLicensePlate& GetLicensePlate() const{ return m_licensePlate; }
    inline bool LicensePlateHasBeenSet() const { return m_licensePlateHasBeenSet; }
    inline void SetLicensePlate(const RouteMatrixVehicleLicensePlate& value) { m_licensePlateHasBeenSet = true; m_licensePlate = value; }
    inline void SetLicensePlate(RouteMatrixVehicleLicensePlate&& value) { m_licensePlateHasBeenSet = true; m_licensePlate = std::move(value); }
    inline RouteMatrixScooterOptions& WithLicensePlate(const RouteMatrixVehicleLicensePlate& value) { SetLicensePlate(value); return *this;}
    inline RouteMatrixScooterOptions& WithLicensePlate(RouteMatrixVehicleLicensePlate&& value) { SetLicensePlate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maximum speed.</p> <p> <b>Unit</b>: <code>KilometersPerHour</code> </p>
     */
    inline double GetMaxSpeed() const{ return m_maxSpeed; }
    inline bool MaxSpeedHasBeenSet() const { return m_maxSpeedHasBeenSet; }
    inline void SetMaxSpeed(double value) { m_maxSpeedHasBeenSet = true; m_maxSpeed = value; }
    inline RouteMatrixScooterOptions& WithMaxSpeed(double value) { SetMaxSpeed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of occupants in the vehicle.</p> <p>Default Value: <code>1</code>
     * </p>
     */
    inline int GetOccupancy() const{ return m_occupancy; }
    inline bool OccupancyHasBeenSet() const { return m_occupancyHasBeenSet; }
    inline void SetOccupancy(int value) { m_occupancyHasBeenSet = true; m_occupancy = value; }
    inline RouteMatrixScooterOptions& WithOccupancy(int value) { SetOccupancy(value); return *this;}
    ///@}
  private:

    RouteMatrixVehicleLicensePlate m_licensePlate;
    bool m_licensePlateHasBeenSet = false;

    double m_maxSpeed;
    bool m_maxSpeedHasBeenSet = false;

    int m_occupancy;
    bool m_occupancyHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
