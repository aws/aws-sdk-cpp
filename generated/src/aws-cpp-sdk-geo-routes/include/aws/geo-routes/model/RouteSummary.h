/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/geo-routes/model/RouteTollSummary.h>
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
   * <p>Summarized details for the leg including travel steps only. The Distance for
   * the travel only portion of the journey is the same as the Distance within the
   * Overview summary.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RouteSummary">AWS
   * API Reference</a></p>
   */
  class RouteSummary
  {
  public:
    AWS_GEOROUTES_API RouteSummary() = default;
    AWS_GEOROUTES_API RouteSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API RouteSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Distance of the route.</p>
     */
    inline long long GetDistance() const { return m_distance; }
    inline bool DistanceHasBeenSet() const { return m_distanceHasBeenSet; }
    inline void SetDistance(long long value) { m_distanceHasBeenSet = true; m_distance = value; }
    inline RouteSummary& WithDistance(long long value) { SetDistance(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Duration of the route.</p> <p> <b>Unit</b>: <code>seconds</code> </p>
     */
    inline long long GetDuration() const { return m_duration; }
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }
    inline void SetDuration(long long value) { m_durationHasBeenSet = true; m_duration = value; }
    inline RouteSummary& WithDuration(long long value) { SetDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Toll summary for the complete route.</p>
     */
    inline const RouteTollSummary& GetTolls() const { return m_tolls; }
    inline bool TollsHasBeenSet() const { return m_tollsHasBeenSet; }
    template<typename TollsT = RouteTollSummary>
    void SetTolls(TollsT&& value) { m_tollsHasBeenSet = true; m_tolls = std::forward<TollsT>(value); }
    template<typename TollsT = RouteTollSummary>
    RouteSummary& WithTolls(TollsT&& value) { SetTolls(std::forward<TollsT>(value)); return *this;}
    ///@}
  private:

    long long m_distance{0};
    bool m_distanceHasBeenSet = false;

    long long m_duration{0};
    bool m_durationHasBeenSet = false;

    RouteTollSummary m_tolls;
    bool m_tollsHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
