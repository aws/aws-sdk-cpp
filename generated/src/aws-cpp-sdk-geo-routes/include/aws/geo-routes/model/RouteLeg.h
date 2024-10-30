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
    AWS_GEOROUTES_API RouteLeg();
    AWS_GEOROUTES_API RouteLeg(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API RouteLeg& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>FerryLegDetails is populated when the Leg type is Ferry, and provides
     * additional information that is specific</p>
     */
    inline const RouteFerryLegDetails& GetFerryLegDetails() const{ return m_ferryLegDetails; }
    inline bool FerryLegDetailsHasBeenSet() const { return m_ferryLegDetailsHasBeenSet; }
    inline void SetFerryLegDetails(const RouteFerryLegDetails& value) { m_ferryLegDetailsHasBeenSet = true; m_ferryLegDetails = value; }
    inline void SetFerryLegDetails(RouteFerryLegDetails&& value) { m_ferryLegDetailsHasBeenSet = true; m_ferryLegDetails = std::move(value); }
    inline RouteLeg& WithFerryLegDetails(const RouteFerryLegDetails& value) { SetFerryLegDetails(value); return *this;}
    inline RouteLeg& WithFerryLegDetails(RouteFerryLegDetails&& value) { SetFerryLegDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Geometry of the area to be avoided.</p>
     */
    inline const RouteLegGeometry& GetGeometry() const{ return m_geometry; }
    inline bool GeometryHasBeenSet() const { return m_geometryHasBeenSet; }
    inline void SetGeometry(const RouteLegGeometry& value) { m_geometryHasBeenSet = true; m_geometry = value; }
    inline void SetGeometry(RouteLegGeometry&& value) { m_geometryHasBeenSet = true; m_geometry = std::move(value); }
    inline RouteLeg& WithGeometry(const RouteLegGeometry& value) { SetGeometry(value); return *this;}
    inline RouteLeg& WithGeometry(RouteLegGeometry&& value) { SetGeometry(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of languages for instructions within steps in the response.</p>
     */
    inline const Aws::String& GetLanguage() const{ return m_language; }
    inline bool LanguageHasBeenSet() const { return m_languageHasBeenSet; }
    inline void SetLanguage(const Aws::String& value) { m_languageHasBeenSet = true; m_language = value; }
    inline void SetLanguage(Aws::String&& value) { m_languageHasBeenSet = true; m_language = std::move(value); }
    inline void SetLanguage(const char* value) { m_languageHasBeenSet = true; m_language.assign(value); }
    inline RouteLeg& WithLanguage(const Aws::String& value) { SetLanguage(value); return *this;}
    inline RouteLeg& WithLanguage(Aws::String&& value) { SetLanguage(std::move(value)); return *this;}
    inline RouteLeg& WithLanguage(const char* value) { SetLanguage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details related to the pedestrian leg.</p>
     */
    inline const RoutePedestrianLegDetails& GetPedestrianLegDetails() const{ return m_pedestrianLegDetails; }
    inline bool PedestrianLegDetailsHasBeenSet() const { return m_pedestrianLegDetailsHasBeenSet; }
    inline void SetPedestrianLegDetails(const RoutePedestrianLegDetails& value) { m_pedestrianLegDetailsHasBeenSet = true; m_pedestrianLegDetails = value; }
    inline void SetPedestrianLegDetails(RoutePedestrianLegDetails&& value) { m_pedestrianLegDetailsHasBeenSet = true; m_pedestrianLegDetails = std::move(value); }
    inline RouteLeg& WithPedestrianLegDetails(const RoutePedestrianLegDetails& value) { SetPedestrianLegDetails(value); return *this;}
    inline RouteLeg& WithPedestrianLegDetails(RoutePedestrianLegDetails&& value) { SetPedestrianLegDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the mode of transport when calculating a route. Used in estimating
     * the speed of travel and road compatibility.</p> <p>Default Value:
     * <code>Car</code> </p>
     */
    inline const RouteLegTravelMode& GetTravelMode() const{ return m_travelMode; }
    inline bool TravelModeHasBeenSet() const { return m_travelModeHasBeenSet; }
    inline void SetTravelMode(const RouteLegTravelMode& value) { m_travelModeHasBeenSet = true; m_travelMode = value; }
    inline void SetTravelMode(RouteLegTravelMode&& value) { m_travelModeHasBeenSet = true; m_travelMode = std::move(value); }
    inline RouteLeg& WithTravelMode(const RouteLegTravelMode& value) { SetTravelMode(value); return *this;}
    inline RouteLeg& WithTravelMode(RouteLegTravelMode&& value) { SetTravelMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Type of the leg.</p>
     */
    inline const RouteLegType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const RouteLegType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(RouteLegType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline RouteLeg& WithType(const RouteLegType& value) { SetType(value); return *this;}
    inline RouteLeg& WithType(RouteLegType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details related to the vehicle leg.</p>
     */
    inline const RouteVehicleLegDetails& GetVehicleLegDetails() const{ return m_vehicleLegDetails; }
    inline bool VehicleLegDetailsHasBeenSet() const { return m_vehicleLegDetailsHasBeenSet; }
    inline void SetVehicleLegDetails(const RouteVehicleLegDetails& value) { m_vehicleLegDetailsHasBeenSet = true; m_vehicleLegDetails = value; }
    inline void SetVehicleLegDetails(RouteVehicleLegDetails&& value) { m_vehicleLegDetailsHasBeenSet = true; m_vehicleLegDetails = std::move(value); }
    inline RouteLeg& WithVehicleLegDetails(const RouteVehicleLegDetails& value) { SetVehicleLegDetails(value); return *this;}
    inline RouteLeg& WithVehicleLegDetails(RouteVehicleLegDetails&& value) { SetVehicleLegDetails(std::move(value)); return *this;}
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

    RouteLegTravelMode m_travelMode;
    bool m_travelModeHasBeenSet = false;

    RouteLegType m_type;
    bool m_typeHasBeenSet = false;

    RouteVehicleLegDetails m_vehicleLegDetails;
    bool m_vehicleLegDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
