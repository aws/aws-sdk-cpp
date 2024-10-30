/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/geo-routes/model/RouteMatrixAvoidanceArea.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/geo-routes/model/RouteMatrixAvoidanceZoneCategory.h>
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
   * <p>Options related to the route matrix.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RouteMatrixAvoidanceOptions">AWS
   * API Reference</a></p>
   */
  class RouteMatrixAvoidanceOptions
  {
  public:
    AWS_GEOROUTES_API RouteMatrixAvoidanceOptions();
    AWS_GEOROUTES_API RouteMatrixAvoidanceOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API RouteMatrixAvoidanceOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Areas to be avoided.</p>
     */
    inline const Aws::Vector<RouteMatrixAvoidanceArea>& GetAreas() const{ return m_areas; }
    inline bool AreasHasBeenSet() const { return m_areasHasBeenSet; }
    inline void SetAreas(const Aws::Vector<RouteMatrixAvoidanceArea>& value) { m_areasHasBeenSet = true; m_areas = value; }
    inline void SetAreas(Aws::Vector<RouteMatrixAvoidanceArea>&& value) { m_areasHasBeenSet = true; m_areas = std::move(value); }
    inline RouteMatrixAvoidanceOptions& WithAreas(const Aws::Vector<RouteMatrixAvoidanceArea>& value) { SetAreas(value); return *this;}
    inline RouteMatrixAvoidanceOptions& WithAreas(Aws::Vector<RouteMatrixAvoidanceArea>&& value) { SetAreas(std::move(value)); return *this;}
    inline RouteMatrixAvoidanceOptions& AddAreas(const RouteMatrixAvoidanceArea& value) { m_areasHasBeenSet = true; m_areas.push_back(value); return *this; }
    inline RouteMatrixAvoidanceOptions& AddAreas(RouteMatrixAvoidanceArea&& value) { m_areasHasBeenSet = true; m_areas.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Avoid car-shuttle-trains while calculating the route.</p>
     */
    inline bool GetCarShuttleTrains() const{ return m_carShuttleTrains; }
    inline bool CarShuttleTrainsHasBeenSet() const { return m_carShuttleTrainsHasBeenSet; }
    inline void SetCarShuttleTrains(bool value) { m_carShuttleTrainsHasBeenSet = true; m_carShuttleTrains = value; }
    inline RouteMatrixAvoidanceOptions& WithCarShuttleTrains(bool value) { SetCarShuttleTrains(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Avoid controlled access highways while calculating the route.</p>
     */
    inline bool GetControlledAccessHighways() const{ return m_controlledAccessHighways; }
    inline bool ControlledAccessHighwaysHasBeenSet() const { return m_controlledAccessHighwaysHasBeenSet; }
    inline void SetControlledAccessHighways(bool value) { m_controlledAccessHighwaysHasBeenSet = true; m_controlledAccessHighways = value; }
    inline RouteMatrixAvoidanceOptions& WithControlledAccessHighways(bool value) { SetControlledAccessHighways(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Avoid dirt roads while calculating the route.</p>
     */
    inline bool GetDirtRoads() const{ return m_dirtRoads; }
    inline bool DirtRoadsHasBeenSet() const { return m_dirtRoadsHasBeenSet; }
    inline void SetDirtRoads(bool value) { m_dirtRoadsHasBeenSet = true; m_dirtRoads = value; }
    inline RouteMatrixAvoidanceOptions& WithDirtRoads(bool value) { SetDirtRoads(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Avoid ferries while calculating the route.</p>
     */
    inline bool GetFerries() const{ return m_ferries; }
    inline bool FerriesHasBeenSet() const { return m_ferriesHasBeenSet; }
    inline void SetFerries(bool value) { m_ferriesHasBeenSet = true; m_ferries = value; }
    inline RouteMatrixAvoidanceOptions& WithFerries(bool value) { SetFerries(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Avoids roads where the specified toll transponders are the only mode of
     * payment.</p>
     */
    inline bool GetTollRoads() const{ return m_tollRoads; }
    inline bool TollRoadsHasBeenSet() const { return m_tollRoadsHasBeenSet; }
    inline void SetTollRoads(bool value) { m_tollRoadsHasBeenSet = true; m_tollRoads = value; }
    inline RouteMatrixAvoidanceOptions& WithTollRoads(bool value) { SetTollRoads(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Avoids roads where the specified toll transponders are the only mode of
     * payment.</p>
     */
    inline bool GetTollTransponders() const{ return m_tollTransponders; }
    inline bool TollTranspondersHasBeenSet() const { return m_tollTranspondersHasBeenSet; }
    inline void SetTollTransponders(bool value) { m_tollTranspondersHasBeenSet = true; m_tollTransponders = value; }
    inline RouteMatrixAvoidanceOptions& WithTollTransponders(bool value) { SetTollTransponders(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Truck road type identifiers. <code>BK1</code> through <code>BK4</code> apply
     * only to Sweden. <code>A2,A4,B2,B4,C,D,ET2,ET4</code> apply only to Mexico.</p>
     *  <p>There are currently no other supported values as of 26th April
     * 2024.</p> 
     */
    inline const Aws::Vector<Aws::String>& GetTruckRoadTypes() const{ return m_truckRoadTypes; }
    inline bool TruckRoadTypesHasBeenSet() const { return m_truckRoadTypesHasBeenSet; }
    inline void SetTruckRoadTypes(const Aws::Vector<Aws::String>& value) { m_truckRoadTypesHasBeenSet = true; m_truckRoadTypes = value; }
    inline void SetTruckRoadTypes(Aws::Vector<Aws::String>&& value) { m_truckRoadTypesHasBeenSet = true; m_truckRoadTypes = std::move(value); }
    inline RouteMatrixAvoidanceOptions& WithTruckRoadTypes(const Aws::Vector<Aws::String>& value) { SetTruckRoadTypes(value); return *this;}
    inline RouteMatrixAvoidanceOptions& WithTruckRoadTypes(Aws::Vector<Aws::String>&& value) { SetTruckRoadTypes(std::move(value)); return *this;}
    inline RouteMatrixAvoidanceOptions& AddTruckRoadTypes(const Aws::String& value) { m_truckRoadTypesHasBeenSet = true; m_truckRoadTypes.push_back(value); return *this; }
    inline RouteMatrixAvoidanceOptions& AddTruckRoadTypes(Aws::String&& value) { m_truckRoadTypesHasBeenSet = true; m_truckRoadTypes.push_back(std::move(value)); return *this; }
    inline RouteMatrixAvoidanceOptions& AddTruckRoadTypes(const char* value) { m_truckRoadTypesHasBeenSet = true; m_truckRoadTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Avoid tunnels while calculating the route.</p>
     */
    inline bool GetTunnels() const{ return m_tunnels; }
    inline bool TunnelsHasBeenSet() const { return m_tunnelsHasBeenSet; }
    inline void SetTunnels(bool value) { m_tunnelsHasBeenSet = true; m_tunnels = value; }
    inline RouteMatrixAvoidanceOptions& WithTunnels(bool value) { SetTunnels(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Avoid U-turns for calculation on highways and motorways.</p>
     */
    inline bool GetUTurns() const{ return m_uTurns; }
    inline bool UTurnsHasBeenSet() const { return m_uTurnsHasBeenSet; }
    inline void SetUTurns(bool value) { m_uTurnsHasBeenSet = true; m_uTurns = value; }
    inline RouteMatrixAvoidanceOptions& WithUTurns(bool value) { SetUTurns(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Zone categories to be avoided.</p>
     */
    inline const Aws::Vector<RouteMatrixAvoidanceZoneCategory>& GetZoneCategories() const{ return m_zoneCategories; }
    inline bool ZoneCategoriesHasBeenSet() const { return m_zoneCategoriesHasBeenSet; }
    inline void SetZoneCategories(const Aws::Vector<RouteMatrixAvoidanceZoneCategory>& value) { m_zoneCategoriesHasBeenSet = true; m_zoneCategories = value; }
    inline void SetZoneCategories(Aws::Vector<RouteMatrixAvoidanceZoneCategory>&& value) { m_zoneCategoriesHasBeenSet = true; m_zoneCategories = std::move(value); }
    inline RouteMatrixAvoidanceOptions& WithZoneCategories(const Aws::Vector<RouteMatrixAvoidanceZoneCategory>& value) { SetZoneCategories(value); return *this;}
    inline RouteMatrixAvoidanceOptions& WithZoneCategories(Aws::Vector<RouteMatrixAvoidanceZoneCategory>&& value) { SetZoneCategories(std::move(value)); return *this;}
    inline RouteMatrixAvoidanceOptions& AddZoneCategories(const RouteMatrixAvoidanceZoneCategory& value) { m_zoneCategoriesHasBeenSet = true; m_zoneCategories.push_back(value); return *this; }
    inline RouteMatrixAvoidanceOptions& AddZoneCategories(RouteMatrixAvoidanceZoneCategory&& value) { m_zoneCategoriesHasBeenSet = true; m_zoneCategories.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<RouteMatrixAvoidanceArea> m_areas;
    bool m_areasHasBeenSet = false;

    bool m_carShuttleTrains;
    bool m_carShuttleTrainsHasBeenSet = false;

    bool m_controlledAccessHighways;
    bool m_controlledAccessHighwaysHasBeenSet = false;

    bool m_dirtRoads;
    bool m_dirtRoadsHasBeenSet = false;

    bool m_ferries;
    bool m_ferriesHasBeenSet = false;

    bool m_tollRoads;
    bool m_tollRoadsHasBeenSet = false;

    bool m_tollTransponders;
    bool m_tollTranspondersHasBeenSet = false;

    Aws::Vector<Aws::String> m_truckRoadTypes;
    bool m_truckRoadTypesHasBeenSet = false;

    bool m_tunnels;
    bool m_tunnelsHasBeenSet = false;

    bool m_uTurns;
    bool m_uTurnsHasBeenSet = false;

    Aws::Vector<RouteMatrixAvoidanceZoneCategory> m_zoneCategories;
    bool m_zoneCategoriesHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
