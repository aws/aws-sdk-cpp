/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/geo-routes/model/IsolineEngineType.h>
#include <aws/geo-routes/model/IsolineVehicleLicensePlate.h>
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
   * <p>Options for vehicles.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/IsolineCarOptions">AWS
   * API Reference</a></p>
   */
  class IsolineCarOptions
  {
  public:
    AWS_GEOROUTES_API IsolineCarOptions();
    AWS_GEOROUTES_API IsolineCarOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API IsolineCarOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Engine type of the vehicle.</p>
     */
    inline const IsolineEngineType& GetEngineType() const{ return m_engineType; }
    inline bool EngineTypeHasBeenSet() const { return m_engineTypeHasBeenSet; }
    inline void SetEngineType(const IsolineEngineType& value) { m_engineTypeHasBeenSet = true; m_engineType = value; }
    inline void SetEngineType(IsolineEngineType&& value) { m_engineTypeHasBeenSet = true; m_engineType = std::move(value); }
    inline IsolineCarOptions& WithEngineType(const IsolineEngineType& value) { SetEngineType(value); return *this;}
    inline IsolineCarOptions& WithEngineType(IsolineEngineType&& value) { SetEngineType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The vehicle License Plate.</p>
     */
    inline const IsolineVehicleLicensePlate& GetLicensePlate() const{ return m_licensePlate; }
    inline bool LicensePlateHasBeenSet() const { return m_licensePlateHasBeenSet; }
    inline void SetLicensePlate(const IsolineVehicleLicensePlate& value) { m_licensePlateHasBeenSet = true; m_licensePlate = value; }
    inline void SetLicensePlate(IsolineVehicleLicensePlate&& value) { m_licensePlateHasBeenSet = true; m_licensePlate = std::move(value); }
    inline IsolineCarOptions& WithLicensePlate(const IsolineVehicleLicensePlate& value) { SetLicensePlate(value); return *this;}
    inline IsolineCarOptions& WithLicensePlate(IsolineVehicleLicensePlate&& value) { SetLicensePlate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maximum speed.</p> <p> <b>Unit</b>: <code>KilometersPerHour</code> </p>
     */
    inline double GetMaxSpeed() const{ return m_maxSpeed; }
    inline bool MaxSpeedHasBeenSet() const { return m_maxSpeedHasBeenSet; }
    inline void SetMaxSpeed(double value) { m_maxSpeedHasBeenSet = true; m_maxSpeed = value; }
    inline IsolineCarOptions& WithMaxSpeed(double value) { SetMaxSpeed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of occupants in the vehicle.</p> <p>Default Value: <code>1</code>
     * </p>
     */
    inline int GetOccupancy() const{ return m_occupancy; }
    inline bool OccupancyHasBeenSet() const { return m_occupancyHasBeenSet; }
    inline void SetOccupancy(int value) { m_occupancyHasBeenSet = true; m_occupancy = value; }
    inline IsolineCarOptions& WithOccupancy(int value) { SetOccupancy(value); return *this;}
    ///@}
  private:

    IsolineEngineType m_engineType;
    bool m_engineTypeHasBeenSet = false;

    IsolineVehicleLicensePlate m_licensePlate;
    bool m_licensePlateHasBeenSet = false;

    double m_maxSpeed;
    bool m_maxSpeedHasBeenSet = false;

    int m_occupancy;
    bool m_occupancyHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
