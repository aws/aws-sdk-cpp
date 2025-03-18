/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/geo-routes/model/RouteSummary.h>
#include <aws/geo-routes/model/RouteLeg.h>
#include <aws/geo-routes/model/RouteMajorRoadLabel.h>
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
   * <p>The route.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/Route">AWS
   * API Reference</a></p>
   */
  class Route
  {
  public:
    AWS_GEOROUTES_API Route() = default;
    AWS_GEOROUTES_API Route(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Route& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A leg is a section of a route from one waypoint to the next. A leg could be
     * of type Vehicle, Pedestrian or Ferry. Legs of different types could occur
     * together within a single route. For example, a car employing the use of a Ferry
     * will contain Vehicle legs corresponding to journey on land, and Ferry legs
     * corresponding to the journey via Ferry.</p>
     */
    inline const Aws::Vector<RouteLeg>& GetLegs() const { return m_legs; }
    inline bool LegsHasBeenSet() const { return m_legsHasBeenSet; }
    template<typename LegsT = Aws::Vector<RouteLeg>>
    void SetLegs(LegsT&& value) { m_legsHasBeenSet = true; m_legs = std::forward<LegsT>(value); }
    template<typename LegsT = Aws::Vector<RouteLeg>>
    Route& WithLegs(LegsT&& value) { SetLegs(std::forward<LegsT>(value)); return *this;}
    template<typename LegsT = RouteLeg>
    Route& AddLegs(LegsT&& value) { m_legsHasBeenSet = true; m_legs.emplace_back(std::forward<LegsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Important labels including names and route numbers that differentiate the
     * current route from the alternatives presented.</p>
     */
    inline const Aws::Vector<RouteMajorRoadLabel>& GetMajorRoadLabels() const { return m_majorRoadLabels; }
    inline bool MajorRoadLabelsHasBeenSet() const { return m_majorRoadLabelsHasBeenSet; }
    template<typename MajorRoadLabelsT = Aws::Vector<RouteMajorRoadLabel>>
    void SetMajorRoadLabels(MajorRoadLabelsT&& value) { m_majorRoadLabelsHasBeenSet = true; m_majorRoadLabels = std::forward<MajorRoadLabelsT>(value); }
    template<typename MajorRoadLabelsT = Aws::Vector<RouteMajorRoadLabel>>
    Route& WithMajorRoadLabels(MajorRoadLabelsT&& value) { SetMajorRoadLabels(std::forward<MajorRoadLabelsT>(value)); return *this;}
    template<typename MajorRoadLabelsT = RouteMajorRoadLabel>
    Route& AddMajorRoadLabels(MajorRoadLabelsT&& value) { m_majorRoadLabelsHasBeenSet = true; m_majorRoadLabels.emplace_back(std::forward<MajorRoadLabelsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Summarized details of the leg.</p>
     */
    inline const RouteSummary& GetSummary() const { return m_summary; }
    inline bool SummaryHasBeenSet() const { return m_summaryHasBeenSet; }
    template<typename SummaryT = RouteSummary>
    void SetSummary(SummaryT&& value) { m_summaryHasBeenSet = true; m_summary = std::forward<SummaryT>(value); }
    template<typename SummaryT = RouteSummary>
    Route& WithSummary(SummaryT&& value) { SetSummary(std::forward<SummaryT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<RouteLeg> m_legs;
    bool m_legsHasBeenSet = false;

    Aws::Vector<RouteMajorRoadLabel> m_majorRoadLabels;
    bool m_majorRoadLabelsHasBeenSet = false;

    RouteSummary m_summary;
    bool m_summaryHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
