/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/geo-routes/model/RouteFerryLegDetails.h>
#include <aws/geo-routes/model/RouteLegGeometry.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/geo-routes/model/RoutePedestrianLegDetails.h>
#include <aws/geo-routes/model/RouteLegTravelMode.h>
#include <aws/geo-routes/model/RouteLegType.h>
#include <aws/geo-routes/model/RouteVehicleLegDetails.h>
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
   * <p>A leg is a section of a route from one waypoint to the next. A leg could be
   * of type Vehicle, Pedestrian or Ferry. Legs of different types could occur
   * together within a single route. For example, a car employing the use of a Ferry
   * will contain Vehicle legs corresponding to journey on land, and Ferry legs
   * corresponding to the journey via Ferry.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RouteLeg">AWS
   * API Reference</a></p>
   */
  class RouteLeg
  {
  public:
    AWS_GEOROUTES_API RouteLeg() = default;
    AWS_GEOROUTES_API RouteLeg(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API RouteLeg& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>FerryLegDetails is populated when the Leg type is Ferry, and provides
     * additional information that is specific</p>
     */
    inline const RouteFerryLegDetails& GetFerryLegDetails() const { return m_ferryLegDetails; }
    inline bool FerryLegDetailsHasBeenSet() const { return m_ferryLegDetailsHasBeenSet; }
    template<typename FerryLegDetailsT = RouteFerryLegDetails>
    void SetFerryLegDetails(FerryLegDetailsT&& value) { m_ferryLegDetailsHasBeenSet = true; m_ferryLegDetails = std::forward<FerryLegDetailsT>(value); }
    template<typename FerryLegDetailsT = RouteFerryLegDetails>
    RouteLeg& WithFerryLegDetails(FerryLegDetailsT&& value) { SetFerryLegDetails(std::forward<FerryLegDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Geometry of the area to be avoided.</p>
     */
    inline const RouteLegGeometry& GetGeometry() const { return m_geometry; }
    inline bool GeometryHasBeenSet() const { return m_geometryHasBeenSet; }
    template<typename GeometryT = RouteLegGeometry>
    void SetGeometry(GeometryT&& value) { m_geometryHasBeenSet = true; m_geometry = std::forward<GeometryT>(value); }
    template<typename GeometryT = RouteLegGeometry>
    RouteLeg& WithGeometry(GeometryT&& value) { SetGeometry(std::forward<GeometryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of languages for instructions within steps in the response.</p>
     */
    inline const Aws::String& GetLanguage() const { return m_language; }
    inline bool LanguageHasBeenSet() const { return m_languageHasBeenSet; }
    template<typename LanguageT = Aws::String>
    void SetLanguage(LanguageT&& value) { m_languageHasBeenSet = true; m_language = std::forward<LanguageT>(value); }
    template<typename LanguageT = Aws::String>
    RouteLeg& WithLanguage(LanguageT&& value) { SetLanguage(std::forward<LanguageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details related to the pedestrian leg.</p>
     */
    inline const RoutePedestrianLegDetails& GetPedestrianLegDetails() const { return m_pedestrianLegDetails; }
    inline bool PedestrianLegDetailsHasBeenSet() const { return m_pedestrianLegDetailsHasBeenSet; }
    template<typename PedestrianLegDetailsT = RoutePedestrianLegDetails>
    void SetPedestrianLegDetails(PedestrianLegDetailsT&& value) { m_pedestrianLegDetailsHasBeenSet = true; m_pedestrianLegDetails = std::forward<PedestrianLegDetailsT>(value); }
    template<typename PedestrianLegDetailsT = RoutePedestrianLegDetails>
    RouteLeg& WithPedestrianLegDetails(PedestrianLegDetailsT&& value) { SetPedestrianLegDetails(std::forward<PedestrianLegDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the mode of transport when calculating a route. Used in estimating
     * the speed of travel and road compatibility.</p> <p>Default Value:
     * <code>Car</code> </p>
     */
    inline RouteLegTravelMode GetTravelMode() const { return m_travelMode; }
    inline bool TravelModeHasBeenSet() const { return m_travelModeHasBeenSet; }
    inline void SetTravelMode(RouteLegTravelMode value) { m_travelModeHasBeenSet = true; m_travelMode = value; }
    inline RouteLeg& WithTravelMode(RouteLegTravelMode value) { SetTravelMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Type of the leg.</p>
     */
    inline RouteLegType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(RouteLegType value) { m_typeHasBeenSet = true; m_type = value; }
    inline RouteLeg& WithType(RouteLegType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details related to the vehicle leg.</p>
     */
    inline const RouteVehicleLegDetails& GetVehicleLegDetails() const { return m_vehicleLegDetails; }
    inline bool VehicleLegDetailsHasBeenSet() const { return m_vehicleLegDetailsHasBeenSet; }
    template<typename VehicleLegDetailsT = RouteVehicleLegDetails>
    void SetVehicleLegDetails(VehicleLegDetailsT&& value) { m_vehicleLegDetailsHasBeenSet = true; m_vehicleLegDetails = std::forward<VehicleLegDetailsT>(value); }
    template<typename VehicleLegDetailsT = RouteVehicleLegDetails>
    RouteLeg& WithVehicleLegDetails(VehicleLegDetailsT&& value) { SetVehicleLegDetails(std::forward<VehicleLegDetailsT>(value)); return *this;}
    ///@}
  private:

    RouteFerryLegDetails m_ferryLegDetails;
    bool m_ferryLegDetailsHasBeenSet = false;

    RouteLegGeometry m_geometry;
    bool m_geometryHasBeenSet = false;

    Aws::String m_language;
    bool m_languageHasBeenSet = false;

    RoutePedestrianLegDetails m_pedestrianLegDetails;
    bool m_pedestrianLegDetailsHasBeenSet = false;

    RouteLegTravelMode m_travelMode{RouteLegTravelMode::NOT_SET};
    bool m_travelModeHasBeenSet = false;

    RouteLegType m_type{RouteLegType::NOT_SET};
    bool m_typeHasBeenSet = false;

    RouteVehicleLegDetails m_vehicleLegDetails;
    bool m_vehicleLegDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
