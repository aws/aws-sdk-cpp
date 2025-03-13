/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/geo-routes/model/WaypointOptimizationRestCycles.h>
#include <aws/geo-routes/model/WaypointOptimizationRestProfile.h>
#include <aws/geo-routes/model/WaypointOptimizationServiceTimeTreatment.h>
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
   * <p>Driver related options.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/WaypointOptimizationDriverOptions">AWS
   * API Reference</a></p>
   */
  class WaypointOptimizationDriverOptions
  {
  public:
    AWS_GEOROUTES_API WaypointOptimizationDriverOptions() = default;
    AWS_GEOROUTES_API WaypointOptimizationDriverOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API WaypointOptimizationDriverOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Driver work-rest schedules defined by a short and long cycle. A rest needs to
     * be taken after the short work duration. The short cycle can be repeated until
     * you hit the long work duration, at which point the long rest duration should be
     * taken before restarting.</p>
     */
    inline const WaypointOptimizationRestCycles& GetRestCycles() const { return m_restCycles; }
    inline bool RestCyclesHasBeenSet() const { return m_restCyclesHasBeenSet; }
    template<typename RestCyclesT = WaypointOptimizationRestCycles>
    void SetRestCycles(RestCyclesT&& value) { m_restCyclesHasBeenSet = true; m_restCycles = std::forward<RestCyclesT>(value); }
    template<typename RestCyclesT = WaypointOptimizationRestCycles>
    WaypointOptimizationDriverOptions& WithRestCycles(RestCyclesT&& value) { SetRestCycles(std::forward<RestCyclesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Pre defined rest profiles for a driver schedule. The only currently supported
     * profile is EU.</p>
     */
    inline const WaypointOptimizationRestProfile& GetRestProfile() const { return m_restProfile; }
    inline bool RestProfileHasBeenSet() const { return m_restProfileHasBeenSet; }
    template<typename RestProfileT = WaypointOptimizationRestProfile>
    void SetRestProfile(RestProfileT&& value) { m_restProfileHasBeenSet = true; m_restProfile = std::forward<RestProfileT>(value); }
    template<typename RestProfileT = WaypointOptimizationRestProfile>
    WaypointOptimizationDriverOptions& WithRestProfile(RestProfileT&& value) { SetRestProfile(std::forward<RestProfileT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the service time provided at a waypoint/destination should be considered
     * as rest or work. This contributes to the total time breakdown returned within
     * the response.</p>
     */
    inline WaypointOptimizationServiceTimeTreatment GetTreatServiceTimeAs() const { return m_treatServiceTimeAs; }
    inline bool TreatServiceTimeAsHasBeenSet() const { return m_treatServiceTimeAsHasBeenSet; }
    inline void SetTreatServiceTimeAs(WaypointOptimizationServiceTimeTreatment value) { m_treatServiceTimeAsHasBeenSet = true; m_treatServiceTimeAs = value; }
    inline WaypointOptimizationDriverOptions& WithTreatServiceTimeAs(WaypointOptimizationServiceTimeTreatment value) { SetTreatServiceTimeAs(value); return *this;}
    ///@}
  private:

    WaypointOptimizationRestCycles m_restCycles;
    bool m_restCyclesHasBeenSet = false;

    WaypointOptimizationRestProfile m_restProfile;
    bool m_restProfileHasBeenSet = false;

    WaypointOptimizationServiceTimeTreatment m_treatServiceTimeAs{WaypointOptimizationServiceTimeTreatment::NOT_SET};
    bool m_treatServiceTimeAsHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
