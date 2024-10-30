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
    AWS_GEOROUTES_API RouteVehicleIncident();
    AWS_GEOROUTES_API RouteVehicleIncident(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API RouteVehicleIncident& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Brief readable description of the incident.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline RouteVehicleIncident& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline RouteVehicleIncident& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline RouteVehicleIncident& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>End timestamp of the incident.</p>
     */
    inline const Aws::String& GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(const Aws::String& value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline void SetEndTime(Aws::String&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }
    inline void SetEndTime(const char* value) { m_endTimeHasBeenSet = true; m_endTime.assign(value); }
    inline RouteVehicleIncident& WithEndTime(const Aws::String& value) { SetEndTime(value); return *this;}
    inline RouteVehicleIncident& WithEndTime(Aws::String&& value) { SetEndTime(std::move(value)); return *this;}
    inline RouteVehicleIncident& WithEndTime(const char* value) { SetEndTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Severity of the incident Critical - The part of the route the incident
     * affects is unusable. Major- Major impact on the leg duration, for example stop
     * and go Minor- Minor impact on the leg duration, for example traffic jam Low -
     * Low on duration, for example slightly increased traffic</p>
     */
    inline const RouteVehicleIncidentSeverity& GetSeverity() const{ return m_severity; }
    inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }
    inline void SetSeverity(const RouteVehicleIncidentSeverity& value) { m_severityHasBeenSet = true; m_severity = value; }
    inline void SetSeverity(RouteVehicleIncidentSeverity&& value) { m_severityHasBeenSet = true; m_severity = std::move(value); }
    inline RouteVehicleIncident& WithSeverity(const RouteVehicleIncidentSeverity& value) { SetSeverity(value); return *this;}
    inline RouteVehicleIncident& WithSeverity(RouteVehicleIncidentSeverity&& value) { SetSeverity(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Start time of the incident.</p>
     */
    inline const Aws::String& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::String& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::String&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline void SetStartTime(const char* value) { m_startTimeHasBeenSet = true; m_startTime.assign(value); }
    inline RouteVehicleIncident& WithStartTime(const Aws::String& value) { SetStartTime(value); return *this;}
    inline RouteVehicleIncident& WithStartTime(Aws::String&& value) { SetStartTime(std::move(value)); return *this;}
    inline RouteVehicleIncident& WithStartTime(const char* value) { SetStartTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Type of the incident.</p>
     */
    inline const RouteVehicleIncidentType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const RouteVehicleIncidentType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(RouteVehicleIncidentType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline RouteVehicleIncident& WithType(const RouteVehicleIncidentType& value) { SetType(value); return *this;}
    inline RouteVehicleIncident& WithType(RouteVehicleIncidentType&& value) { SetType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_endTime;
    bool m_endTimeHasBeenSet = false;

    RouteVehicleIncidentSeverity m_severity;
    bool m_severityHasBeenSet = false;

    Aws::String m_startTime;
    bool m_startTimeHasBeenSet = false;

    RouteVehicleIncidentType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
