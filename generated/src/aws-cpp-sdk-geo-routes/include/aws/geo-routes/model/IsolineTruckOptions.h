/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/geo-routes/model/IsolineEngineType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/geo-routes/model/IsolineVehicleLicensePlate.h>
#include <aws/geo-routes/model/IsolineTrailerOptions.h>
#include <aws/geo-routes/model/IsolineTruckType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/geo-routes/model/WeightPerAxleGroup.h>
#include <aws/geo-routes/model/IsolineHazardousCargoType.h>
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
   * <p>Travel mode options when the provided travel mode is "Truck"</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/IsolineTruckOptions">AWS
   * API Reference</a></p>
   */
  class IsolineTruckOptions
  {
  public:
    AWS_GEOROUTES_API IsolineTruckOptions() = default;
    AWS_GEOROUTES_API IsolineTruckOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API IsolineTruckOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Total number of axles of the vehicle.</p>
     */
    inline int GetAxleCount() const { return m_axleCount; }
    inline bool AxleCountHasBeenSet() const { return m_axleCountHasBeenSet; }
    inline void SetAxleCount(int value) { m_axleCountHasBeenSet = true; m_axleCount = value; }
    inline IsolineTruckOptions& WithAxleCount(int value) { SetAxleCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Engine type of the vehicle.</p>
     */
    inline IsolineEngineType GetEngineType() const { return m_engineType; }
    inline bool EngineTypeHasBeenSet() const { return m_engineTypeHasBeenSet; }
    inline void SetEngineType(IsolineEngineType value) { m_engineTypeHasBeenSet = true; m_engineType = value; }
    inline IsolineTruckOptions& WithEngineType(IsolineEngineType value) { SetEngineType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Gross weight of the vehicle including trailers, and goods at capacity.</p>
     * <p> <b>Unit</b>: <code>Kilograms</code> </p>
     */
    inline long long GetGrossWeight() const { return m_grossWeight; }
    inline bool GrossWeightHasBeenSet() const { return m_grossWeightHasBeenSet; }
    inline void SetGrossWeight(long long value) { m_grossWeightHasBeenSet = true; m_grossWeight = value; }
    inline IsolineTruckOptions& WithGrossWeight(long long value) { SetGrossWeight(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of Hazardous cargo contained in the vehicle.</p>
     */
    inline const Aws::Vector<IsolineHazardousCargoType>& GetHazardousCargos() const { return m_hazardousCargos; }
    inline bool HazardousCargosHasBeenSet() const { return m_hazardousCargosHasBeenSet; }
    template<typename HazardousCargosT = Aws::Vector<IsolineHazardousCargoType>>
    void SetHazardousCargos(HazardousCargosT&& value) { m_hazardousCargosHasBeenSet = true; m_hazardousCargos = std::forward<HazardousCargosT>(value); }
    template<typename HazardousCargosT = Aws::Vector<IsolineHazardousCargoType>>
    IsolineTruckOptions& WithHazardousCargos(HazardousCargosT&& value) { SetHazardousCargos(std::forward<HazardousCargosT>(value)); return *this;}
    inline IsolineTruckOptions& AddHazardousCargos(IsolineHazardousCargoType value) { m_hazardousCargosHasBeenSet = true; m_hazardousCargos.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Height of the vehicle.</p> <p> <b>Unit</b>: <code>centimeters</code> </p>
     */
    inline long long GetHeight() const { return m_height; }
    inline bool HeightHasBeenSet() const { return m_heightHasBeenSet; }
    inline void SetHeight(long long value) { m_heightHasBeenSet = true; m_height = value; }
    inline IsolineTruckOptions& WithHeight(long long value) { SetHeight(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Height of the vehicle above its first axle.</p> <p> <b>Unit</b>:
     * <code>centimeters</code> </p>
     */
    inline long long GetHeightAboveFirstAxle() const { return m_heightAboveFirstAxle; }
    inline bool HeightAboveFirstAxleHasBeenSet() const { return m_heightAboveFirstAxleHasBeenSet; }
    inline void SetHeightAboveFirstAxle(long long value) { m_heightAboveFirstAxleHasBeenSet = true; m_heightAboveFirstAxle = value; }
    inline IsolineTruckOptions& WithHeightAboveFirstAxle(long long value) { SetHeightAboveFirstAxle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Kingpin to rear axle length of the vehicle.</p> <p> <b>Unit</b>:
     * <code>centimeters</code> </p>
     */
    inline long long GetKpraLength() const { return m_kpraLength; }
    inline bool KpraLengthHasBeenSet() const { return m_kpraLengthHasBeenSet; }
    inline void SetKpraLength(long long value) { m_kpraLengthHasBeenSet = true; m_kpraLength = value; }
    inline IsolineTruckOptions& WithKpraLength(long long value) { SetKpraLength(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Length of the vehicle.</p> <p> <b>Unit</b>: <code>centimeters</code> </p>
     */
    inline long long GetLength() const { return m_length; }
    inline bool LengthHasBeenSet() const { return m_lengthHasBeenSet; }
    inline void SetLength(long long value) { m_lengthHasBeenSet = true; m_length = value; }
    inline IsolineTruckOptions& WithLength(long long value) { SetLength(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The vehicle License Plate.</p>
     */
    inline const IsolineVehicleLicensePlate& GetLicensePlate() const { return m_licensePlate; }
    inline bool LicensePlateHasBeenSet() const { return m_licensePlateHasBeenSet; }
    template<typename LicensePlateT = IsolineVehicleLicensePlate>
    void SetLicensePlate(LicensePlateT&& value) { m_licensePlateHasBeenSet = true; m_licensePlate = std::forward<LicensePlateT>(value); }
    template<typename LicensePlateT = IsolineVehicleLicensePlate>
    IsolineTruckOptions& WithLicensePlate(LicensePlateT&& value) { SetLicensePlate(std::forward<LicensePlateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maximum speed specified.</p> <p> <b>Unit</b>: <code>KilometersPerHour</code>
     * </p>
     */
    inline double GetMaxSpeed() const { return m_maxSpeed; }
    inline bool MaxSpeedHasBeenSet() const { return m_maxSpeedHasBeenSet; }
    inline void SetMaxSpeed(double value) { m_maxSpeedHasBeenSet = true; m_maxSpeed = value; }
    inline IsolineTruckOptions& WithMaxSpeed(double value) { SetMaxSpeed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of occupants in the vehicle.</p> <p>Default Value: <code>1</code>
     * </p>
     */
    inline int GetOccupancy() const { return m_occupancy; }
    inline bool OccupancyHasBeenSet() const { return m_occupancyHasBeenSet; }
    inline void SetOccupancy(int value) { m_occupancyHasBeenSet = true; m_occupancy = value; }
    inline IsolineTruckOptions& WithOccupancy(int value) { SetOccupancy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Payload capacity of the vehicle and trailers attached.</p> <p> <b>Unit</b>:
     * <code>kilograms</code> </p>
     */
    inline long long GetPayloadCapacity() const { return m_payloadCapacity; }
    inline bool PayloadCapacityHasBeenSet() const { return m_payloadCapacityHasBeenSet; }
    inline void SetPayloadCapacity(long long value) { m_payloadCapacityHasBeenSet = true; m_payloadCapacity = value; }
    inline IsolineTruckOptions& WithPayloadCapacity(long long value) { SetPayloadCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Number of tires on the vehicle.</p>
     */
    inline int GetTireCount() const { return m_tireCount; }
    inline bool TireCountHasBeenSet() const { return m_tireCountHasBeenSet; }
    inline void SetTireCount(int value) { m_tireCountHasBeenSet = true; m_tireCount = value; }
    inline IsolineTruckOptions& WithTireCount(int value) { SetTireCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Trailer options corresponding to the vehicle.</p>
     */
    inline const IsolineTrailerOptions& GetTrailer() const { return m_trailer; }
    inline bool TrailerHasBeenSet() const { return m_trailerHasBeenSet; }
    template<typename TrailerT = IsolineTrailerOptions>
    void SetTrailer(TrailerT&& value) { m_trailerHasBeenSet = true; m_trailer = std::forward<TrailerT>(value); }
    template<typename TrailerT = IsolineTrailerOptions>
    IsolineTruckOptions& WithTrailer(TrailerT&& value) { SetTrailer(std::forward<TrailerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Type of the truck.</p>
     */
    inline IsolineTruckType GetTruckType() const { return m_truckType; }
    inline bool TruckTypeHasBeenSet() const { return m_truckTypeHasBeenSet; }
    inline void SetTruckType(IsolineTruckType value) { m_truckTypeHasBeenSet = true; m_truckType = value; }
    inline IsolineTruckOptions& WithTruckType(IsolineTruckType value) { SetTruckType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tunnel restriction code.</p> <p>Tunnel categories in this list indicate
     * the restrictions which apply to certain tunnels in Great Britain. They relate to
     * the types of dangerous goods that can be transported through them.</p> <ul> <li>
     * <p> <i>Tunnel Category B</i> </p> <ul> <li> <p> <i>Risk Level</i>: Limited
     * risk</p> </li> <li> <p> <i>Restrictions</i>: Few restrictions</p> </li> </ul>
     * </li> <li> <p> <i>Tunnel Category C</i> </p> <ul> <li> <p> <i>Risk Level</i>:
     * Medium risk</p> </li> <li> <p> <i>Restrictions</i>: Some restrictions</p> </li>
     * </ul> </li> <li> <p> <i>Tunnel Category D</i> </p> <ul> <li> <p> <i>Risk
     * Level</i>: High risk</p> </li> <li> <p> <i>Restrictions</i>: Many restrictions
     * occur</p> </li> </ul> </li> <li> <p> <i>Tunnel Category E</i> </p> <ul> <li> <p>
     * <i>Risk Level</i>: Very high risk</p> </li> <li> <p> <i>Restrictions</i>:
     * Restricted tunnel</p> </li> </ul> </li> </ul>
     */
    inline const Aws::String& GetTunnelRestrictionCode() const { return m_tunnelRestrictionCode; }
    inline bool TunnelRestrictionCodeHasBeenSet() const { return m_tunnelRestrictionCodeHasBeenSet; }
    template<typename TunnelRestrictionCodeT = Aws::String>
    void SetTunnelRestrictionCode(TunnelRestrictionCodeT&& value) { m_tunnelRestrictionCodeHasBeenSet = true; m_tunnelRestrictionCode = std::forward<TunnelRestrictionCodeT>(value); }
    template<typename TunnelRestrictionCodeT = Aws::String>
    IsolineTruckOptions& WithTunnelRestrictionCode(TunnelRestrictionCodeT&& value) { SetTunnelRestrictionCode(std::forward<TunnelRestrictionCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Heaviest weight per axle irrespective of the axle type or the axle group.
     * Meant for usage in countries where the differences in axle types or axle groups
     * are not distinguished.</p> <p> <b>Unit</b>: <code>Kilograms</code> </p>
     */
    inline long long GetWeightPerAxle() const { return m_weightPerAxle; }
    inline bool WeightPerAxleHasBeenSet() const { return m_weightPerAxleHasBeenSet; }
    inline void SetWeightPerAxle(long long value) { m_weightPerAxleHasBeenSet = true; m_weightPerAxle = value; }
    inline IsolineTruckOptions& WithWeightPerAxle(long long value) { SetWeightPerAxle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the total weight for the specified axle group. Meant for usage in
     * countries that have different regulations based on the axle group type.</p> <p>
     * <b>Unit</b>: <code>Kilograms</code> </p>
     */
    inline const WeightPerAxleGroup& GetWeightPerAxleGroup() const { return m_weightPerAxleGroup; }
    inline bool WeightPerAxleGroupHasBeenSet() const { return m_weightPerAxleGroupHasBeenSet; }
    template<typename WeightPerAxleGroupT = WeightPerAxleGroup>
    void SetWeightPerAxleGroup(WeightPerAxleGroupT&& value) { m_weightPerAxleGroupHasBeenSet = true; m_weightPerAxleGroup = std::forward<WeightPerAxleGroupT>(value); }
    template<typename WeightPerAxleGroupT = WeightPerAxleGroup>
    IsolineTruckOptions& WithWeightPerAxleGroup(WeightPerAxleGroupT&& value) { SetWeightPerAxleGroup(std::forward<WeightPerAxleGroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Width of the vehicle.</p> <p> <b>Unit</b>: <code>centimeters</code> </p>
     */
    inline long long GetWidth() const { return m_width; }
    inline bool WidthHasBeenSet() const { return m_widthHasBeenSet; }
    inline void SetWidth(long long value) { m_widthHasBeenSet = true; m_width = value; }
    inline IsolineTruckOptions& WithWidth(long long value) { SetWidth(value); return *this;}
    ///@}
  private:

    int m_axleCount{0};
    bool m_axleCountHasBeenSet = false;

    IsolineEngineType m_engineType{IsolineEngineType::NOT_SET};
    bool m_engineTypeHasBeenSet = false;

    long long m_grossWeight{0};
    bool m_grossWeightHasBeenSet = false;

    Aws::Vector<IsolineHazardousCargoType> m_hazardousCargos;
    bool m_hazardousCargosHasBeenSet = false;

    long long m_height{0};
    bool m_heightHasBeenSet = false;

    long long m_heightAboveFirstAxle{0};
    bool m_heightAboveFirstAxleHasBeenSet = false;

    long long m_kpraLength{0};
    bool m_kpraLengthHasBeenSet = false;

    long long m_length{0};
    bool m_lengthHasBeenSet = false;

    IsolineVehicleLicensePlate m_licensePlate;
    bool m_licensePlateHasBeenSet = false;

    double m_maxSpeed{0.0};
    bool m_maxSpeedHasBeenSet = false;

    int m_occupancy{0};
    bool m_occupancyHasBeenSet = false;

    long long m_payloadCapacity{0};
    bool m_payloadCapacityHasBeenSet = false;

    int m_tireCount{0};
    bool m_tireCountHasBeenSet = false;

    IsolineTrailerOptions m_trailer;
    bool m_trailerHasBeenSet = false;

    IsolineTruckType m_truckType{IsolineTruckType::NOT_SET};
    bool m_truckTypeHasBeenSet = false;

    Aws::String m_tunnelRestrictionCode;
    bool m_tunnelRestrictionCodeHasBeenSet = false;

    long long m_weightPerAxle{0};
    bool m_weightPerAxleHasBeenSet = false;

    WeightPerAxleGroup m_weightPerAxleGroup;
    bool m_weightPerAxleGroupHasBeenSet = false;

    long long m_width{0};
    bool m_widthHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
