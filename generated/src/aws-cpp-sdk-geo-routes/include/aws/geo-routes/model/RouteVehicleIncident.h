/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/geo-routes/model/RouteVehicleIncidentSeverity.h>
#include <aws/geo-routes/model/RouteVehicleIncidentType.h>
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
   * <p>Incidents corresponding to this leg of the route.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RouteVehicleIncident">AWS
   * API Reference</a></p>
   */
  class RouteVehicleIncident
  {
  public:
    AWS_GEOROUTES_API RouteVehicleIncident() = default;
    AWS_GEOROUTES_API RouteVehicleIncident(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API RouteVehicleIncident& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Brief readable description of the incident.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    RouteVehicleIncident& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>End timestamp of the incident.</p>
     */
    inline const Aws::String& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::String>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::String>
    RouteVehicleIncident& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Severity of the incident Critical - The part of the route the incident
     * affects is unusable. Major- Major impact on the leg duration, for example stop
     * and go Minor- Minor impact on the leg duration, for example traffic jam Low -
     * Low on duration, for example slightly increased traffic</p>
     */
    inline RouteVehicleIncidentSeverity GetSeverity() const { return m_severity; }
    inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }
    inline void SetSeverity(RouteVehicleIncidentSeverity value) { m_severityHasBeenSet = true; m_severity = value; }
    inline RouteVehicleIncident& WithSeverity(RouteVehicleIncidentSeverity value) { SetSeverity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Start time of the incident.</p>
     */
    inline const Aws::String& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::String>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::String>
    RouteVehicleIncident& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Type of the incident.</p>
     */
    inline RouteVehicleIncidentType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(RouteVehicleIncidentType value) { m_typeHasBeenSet = true; m_type = value; }
    inline RouteVehicleIncident& WithType(RouteVehicleIncidentType value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_endTime;
    bool m_endTimeHasBeenSet = false;

    RouteVehicleIncidentSeverity m_severity{RouteVehicleIncidentSeverity::NOT_SET};
    bool m_severityHasBeenSet = false;

    Aws::String m_startTime;
    bool m_startTimeHasBeenSet = false;

    RouteVehicleIncidentType m_type{RouteVehicleIncidentType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
