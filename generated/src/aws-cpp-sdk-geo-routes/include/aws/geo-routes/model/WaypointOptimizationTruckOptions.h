/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/geo-routes/model/WaypointOptimizationTrailerOptions.h>
#include <aws/geo-routes/model/WaypointOptimizationTruckType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/geo-routes/model/WaypointOptimizationHazardousCargoType.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/WaypointOptimizationTruckOptions">AWS
   * API Reference</a></p>
   */
  class WaypointOptimizationTruckOptions
  {
  public:
    AWS_GEOROUTES_API WaypointOptimizationTruckOptions() = default;
    AWS_GEOROUTES_API WaypointOptimizationTruckOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API WaypointOptimizationTruckOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Gross weight of the vehicle including trailers, and goods at capacity.</p>
     * <p> <b>Unit</b>: <code>Kilograms</code> </p>
     */
    inline long long GetGrossWeight() const { return m_grossWeight; }
    inline bool GrossWeightHasBeenSet() const { return m_grossWeightHasBeenSet; }
    inline void SetGrossWeight(long long value) { m_grossWeightHasBeenSet = true; m_grossWeight = value; }
    inline WaypointOptimizationTruckOptions& WithGrossWeight(long long value) { SetGrossWeight(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of Hazardous cargo contained in the vehicle.</p>
     */
    inline const Aws::Vector<WaypointOptimizationHazardousCargoType>& GetHazardousCargos() const { return m_hazardousCargos; }
    inline bool HazardousCargosHasBeenSet() const { return m_hazardousCargosHasBeenSet; }
    template<typename HazardousCargosT = Aws::Vector<WaypointOptimizationHazardousCargoType>>
    void SetHazardousCargos(HazardousCargosT&& value) { m_hazardousCargosHasBeenSet = true; m_hazardousCargos = std::forward<HazardousCargosT>(value); }
    template<typename HazardousCargosT = Aws::Vector<WaypointOptimizationHazardousCargoType>>
    WaypointOptimizationTruckOptions& WithHazardousCargos(HazardousCargosT&& value) { SetHazardousCargos(std::forward<HazardousCargosT>(value)); return *this;}
    inline WaypointOptimizationTruckOptions& AddHazardousCargos(WaypointOptimizationHazardousCargoType value) { m_hazardousCargosHasBeenSet = true; m_hazardousCargos.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Height of the vehicle.</p> <p> <b>Unit</b>: <code>centimeters</code> </p>
     */
    inline long long GetHeight() const { return m_height; }
    inline bool HeightHasBeenSet() const { return m_heightHasBeenSet; }
    inline void SetHeight(long long value) { m_heightHasBeenSet = true; m_height = value; }
    inline WaypointOptimizationTruckOptions& WithHeight(long long value) { SetHeight(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Length of the vehicle.</p> <p> <b>Unit</b>: <code>centimeters</code> </p>
     */
    inline long long GetLength() const { return m_length; }
    inline bool LengthHasBeenSet() const { return m_lengthHasBeenSet; }
    inline void SetLength(long long value) { m_lengthHasBeenSet = true; m_length = value; }
    inline WaypointOptimizationTruckOptions& WithLength(long long value) { SetLength(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Trailer options corresponding to the vehicle.</p>
     */
    inline const WaypointOptimizationTrailerOptions& GetTrailer() const { return m_trailer; }
    inline bool TrailerHasBeenSet() const { return m_trailerHasBeenSet; }
    template<typename TrailerT = WaypointOptimizationTrailerOptions>
    void SetTrailer(TrailerT&& value) { m_trailerHasBeenSet = true; m_trailer = std::forward<TrailerT>(value); }
    template<typename TrailerT = WaypointOptimizationTrailerOptions>
    WaypointOptimizationTruckOptions& WithTrailer(TrailerT&& value) { SetTrailer(std::forward<TrailerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Type of the truck.</p>
     */
    inline WaypointOptimizationTruckType GetTruckType() const { return m_truckType; }
    inline bool TruckTypeHasBeenSet() const { return m_truckTypeHasBeenSet; }
    inline void SetTruckType(WaypointOptimizationTruckType value) { m_truckTypeHasBeenSet = true; m_truckType = value; }
    inline WaypointOptimizationTruckOptions& WithTruckType(WaypointOptimizationTruckType value) { SetTruckType(value); return *this;}
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
    WaypointOptimizationTruckOptions& WithTunnelRestrictionCode(TunnelRestrictionCodeT&& value) { SetTunnelRestrictionCode(std::forward<TunnelRestrictionCodeT>(value)); return *this;}
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
    inline WaypointOptimizationTruckOptions& WithWeightPerAxle(long long value) { SetWeightPerAxle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Width of the vehicle.</p> <p> <b>Unit</b>: <code>centimeters</code> </p>
     */
    inline long long GetWidth() const { return m_width; }
    inline bool WidthHasBeenSet() const { return m_widthHasBeenSet; }
    inline void SetWidth(long long value) { m_widthHasBeenSet = true; m_width = value; }
    inline WaypointOptimizationTruckOptions& WithWidth(long long value) { SetWidth(value); return *this;}
    ///@}
  private:

    long long m_grossWeight{0};
    bool m_grossWeightHasBeenSet = false;

    Aws::Vector<WaypointOptimizationHazardousCargoType> m_hazardousCargos;
    bool m_hazardousCargosHasBeenSet = false;

    long long m_height{0};
    bool m_heightHasBeenSet = false;

    long long m_length{0};
    bool m_lengthHasBeenSet = false;

    WaypointOptimizationTrailerOptions m_trailer;
    bool m_trailerHasBeenSet = false;

    WaypointOptimizationTruckType m_truckType{WaypointOptimizationTruckType::NOT_SET};
    bool m_truckTypeHasBeenSet = false;

    Aws::String m_tunnelRestrictionCode;
    bool m_tunnelRestrictionCodeHasBeenSet = false;

    long long m_weightPerAxle{0};
    bool m_weightPerAxleHasBeenSet = false;

    long long m_width{0};
    bool m_widthHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
