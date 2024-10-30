/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/geo-routes/model/RoadSnapTrailerOptions.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/geo-routes/model/RoadSnapHazardousCargoType.h>
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
   * <p>Travel mode options when the provided travel mode is "Truck".</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RoadSnapTruckOptions">AWS
   * API Reference</a></p>
   */
  class RoadSnapTruckOptions
  {
  public:
    AWS_GEOROUTES_API RoadSnapTruckOptions();
    AWS_GEOROUTES_API RoadSnapTruckOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API RoadSnapTruckOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Gross weight of the vehicle including trailers, and goods at capacity.</p>
     * <p> <b>Unit</b>: <code>Kilograms</code> </p>
     */
    inline long long GetGrossWeight() const{ return m_grossWeight; }
    inline bool GrossWeightHasBeenSet() const { return m_grossWeightHasBeenSet; }
    inline void SetGrossWeight(long long value) { m_grossWeightHasBeenSet = true; m_grossWeight = value; }
    inline RoadSnapTruckOptions& WithGrossWeight(long long value) { SetGrossWeight(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of Hazardous cargos contained in the vehicle.</p>
     */
    inline const Aws::Vector<RoadSnapHazardousCargoType>& GetHazardousCargos() const{ return m_hazardousCargos; }
    inline bool HazardousCargosHasBeenSet() const { return m_hazardousCargosHasBeenSet; }
    inline void SetHazardousCargos(const Aws::Vector<RoadSnapHazardousCargoType>& value) { m_hazardousCargosHasBeenSet = true; m_hazardousCargos = value; }
    inline void SetHazardousCargos(Aws::Vector<RoadSnapHazardousCargoType>&& value) { m_hazardousCargosHasBeenSet = true; m_hazardousCargos = std::move(value); }
    inline RoadSnapTruckOptions& WithHazardousCargos(const Aws::Vector<RoadSnapHazardousCargoType>& value) { SetHazardousCargos(value); return *this;}
    inline RoadSnapTruckOptions& WithHazardousCargos(Aws::Vector<RoadSnapHazardousCargoType>&& value) { SetHazardousCargos(std::move(value)); return *this;}
    inline RoadSnapTruckOptions& AddHazardousCargos(const RoadSnapHazardousCargoType& value) { m_hazardousCargosHasBeenSet = true; m_hazardousCargos.push_back(value); return *this; }
    inline RoadSnapTruckOptions& AddHazardousCargos(RoadSnapHazardousCargoType&& value) { m_hazardousCargosHasBeenSet = true; m_hazardousCargos.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Height of the vehicle.</p> <p> <b>Unit</b>: <code>centimeters</code> </p>
     */
    inline long long GetHeight() const{ return m_height; }
    inline bool HeightHasBeenSet() const { return m_heightHasBeenSet; }
    inline void SetHeight(long long value) { m_heightHasBeenSet = true; m_height = value; }
    inline RoadSnapTruckOptions& WithHeight(long long value) { SetHeight(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Length of the vehicle.</p> <p> <b>Unit</b>: <code>centimeters</code> </p>
     */
    inline long long GetLength() const{ return m_length; }
    inline bool LengthHasBeenSet() const { return m_lengthHasBeenSet; }
    inline void SetLength(long long value) { m_lengthHasBeenSet = true; m_length = value; }
    inline RoadSnapTruckOptions& WithLength(long long value) { SetLength(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Trailer options corresponding to the vehicle.</p>
     */
    inline const RoadSnapTrailerOptions& GetTrailer() const{ return m_trailer; }
    inline bool TrailerHasBeenSet() const { return m_trailerHasBeenSet; }
    inline void SetTrailer(const RoadSnapTrailerOptions& value) { m_trailerHasBeenSet = true; m_trailer = value; }
    inline void SetTrailer(RoadSnapTrailerOptions&& value) { m_trailerHasBeenSet = true; m_trailer = std::move(value); }
    inline RoadSnapTruckOptions& WithTrailer(const RoadSnapTrailerOptions& value) { SetTrailer(value); return *this;}
    inline RoadSnapTruckOptions& WithTrailer(RoadSnapTrailerOptions&& value) { SetTrailer(std::move(value)); return *this;}
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
    inline const Aws::String& GetTunnelRestrictionCode() const{ return m_tunnelRestrictionCode; }
    inline bool TunnelRestrictionCodeHasBeenSet() const { return m_tunnelRestrictionCodeHasBeenSet; }
    inline void SetTunnelRestrictionCode(const Aws::String& value) { m_tunnelRestrictionCodeHasBeenSet = true; m_tunnelRestrictionCode = value; }
    inline void SetTunnelRestrictionCode(Aws::String&& value) { m_tunnelRestrictionCodeHasBeenSet = true; m_tunnelRestrictionCode = std::move(value); }
    inline void SetTunnelRestrictionCode(const char* value) { m_tunnelRestrictionCodeHasBeenSet = true; m_tunnelRestrictionCode.assign(value); }
    inline RoadSnapTruckOptions& WithTunnelRestrictionCode(const Aws::String& value) { SetTunnelRestrictionCode(value); return *this;}
    inline RoadSnapTruckOptions& WithTunnelRestrictionCode(Aws::String&& value) { SetTunnelRestrictionCode(std::move(value)); return *this;}
    inline RoadSnapTruckOptions& WithTunnelRestrictionCode(const char* value) { SetTunnelRestrictionCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Width of the vehicle in centimenters.</p>
     */
    inline long long GetWidth() const{ return m_width; }
    inline bool WidthHasBeenSet() const { return m_widthHasBeenSet; }
    inline void SetWidth(long long value) { m_widthHasBeenSet = true; m_width = value; }
    inline RoadSnapTruckOptions& WithWidth(long long value) { SetWidth(value); return *this;}
    ///@}
  private:

    long long m_grossWeight;
    bool m_grossWeightHasBeenSet = false;

    Aws::Vector<RoadSnapHazardousCargoType> m_hazardousCargos;
    bool m_hazardousCargosHasBeenSet = false;

    long long m_height;
    bool m_heightHasBeenSet = false;

    long long m_length;
    bool m_lengthHasBeenSet = false;

    RoadSnapTrailerOptions m_trailer;
    bool m_trailerHasBeenSet = false;

    Aws::String m_tunnelRestrictionCode;
    bool m_tunnelRestrictionCodeHasBeenSet = false;

    long long m_width;
    bool m_widthHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
