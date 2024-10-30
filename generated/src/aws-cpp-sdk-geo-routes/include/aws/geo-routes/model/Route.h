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
    AWS_GEOROUTES_API Route();
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
    inline const Aws::Vector<RouteLeg>& GetLegs() const{ return m_legs; }
    inline bool LegsHasBeenSet() const { return m_legsHasBeenSet; }
    inline void SetLegs(const Aws::Vector<RouteLeg>& value) { m_legsHasBeenSet = true; m_legs = value; }
    inline void SetLegs(Aws::Vector<RouteLeg>&& value) { m_legsHasBeenSet = true; m_legs = std::move(value); }
    inline Route& WithLegs(const Aws::Vector<RouteLeg>& value) { SetLegs(value); return *this;}
    inline Route& WithLegs(Aws::Vector<RouteLeg>&& value) { SetLegs(std::move(value)); return *this;}
    inline Route& AddLegs(const RouteLeg& value) { m_legsHasBeenSet = true; m_legs.push_back(value); return *this; }
    inline Route& AddLegs(RouteLeg&& value) { m_legsHasBeenSet = true; m_legs.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Important labels including names and route numbers that differentiate the
     * current route from the alternatives presented.</p>
     */
    inline const Aws::Vector<RouteMajorRoadLabel>& GetMajorRoadLabels() const{ return m_majorRoadLabels; }
    inline bool MajorRoadLabelsHasBeenSet() const { return m_majorRoadLabelsHasBeenSet; }
    inline void SetMajorRoadLabels(const Aws::Vector<RouteMajorRoadLabel>& value) { m_majorRoadLabelsHasBeenSet = true; m_majorRoadLabels = value; }
    inline void SetMajorRoadLabels(Aws::Vector<RouteMajorRoadLabel>&& value) { m_majorRoadLabelsHasBeenSet = true; m_majorRoadLabels = std::move(value); }
    inline Route& WithMajorRoadLabels(const Aws::Vector<RouteMajorRoadLabel>& value) { SetMajorRoadLabels(value); return *this;}
    inline Route& WithMajorRoadLabels(Aws::Vector<RouteMajorRoadLabel>&& value) { SetMajorRoadLabels(std::move(value)); return *this;}
    inline Route& AddMajorRoadLabels(const RouteMajorRoadLabel& value) { m_majorRoadLabelsHasBeenSet = true; m_majorRoadLabels.push_back(value); return *this; }
    inline Route& AddMajorRoadLabels(RouteMajorRoadLabel&& value) { m_majorRoadLabelsHasBeenSet = true; m_majorRoadLabels.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Summarized details of the leg.</p>
     */
    inline const RouteSummary& GetSummary() const{ return m_summary; }
    inline bool SummaryHasBeenSet() const { return m_summaryHasBeenSet; }
    inline void SetSummary(const RouteSummary& value) { m_summaryHasBeenSet = true; m_summary = value; }
    inline void SetSummary(RouteSummary&& value) { m_summaryHasBeenSet = true; m_summary = std::move(value); }
    inline Route& WithSummary(const RouteSummary& value) { SetSummary(value); return *this;}
    inline Route& WithSummary(RouteSummary&& value) { SetSummary(std::move(value)); return *this;}
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
