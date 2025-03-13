/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/geo-routes/model/MatchingStrategy.h>
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
   * <p>Matching options.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RouteMatrixMatchingOptions">AWS
   * API Reference</a></p>
   */
  class RouteMatrixMatchingOptions
  {
  public:
    AWS_GEOROUTES_API RouteMatrixMatchingOptions() = default;
    AWS_GEOROUTES_API RouteMatrixMatchingOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API RouteMatrixMatchingOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Attempts to match the provided position to a road similar to the provided
     * name.</p>
     */
    inline const Aws::String& GetNameHint() const { return m_nameHint; }
    inline bool NameHintHasBeenSet() const { return m_nameHintHasBeenSet; }
    template<typename NameHintT = Aws::String>
    void SetNameHint(NameHintT&& value) { m_nameHintHasBeenSet = true; m_nameHint = std::forward<NameHintT>(value); }
    template<typename NameHintT = Aws::String>
    RouteMatrixMatchingOptions& WithNameHint(NameHintT&& value) { SetNameHint(std::forward<NameHintT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the distance to a highway/bridge/tunnel/sliproad is within threshold, the
     * waypoint will be snapped to the highway/bridge/tunnel/sliproad.</p> <p>
     * <b>Unit</b>: <code>meters</code> </p>
     */
    inline long long GetOnRoadThreshold() const { return m_onRoadThreshold; }
    inline bool OnRoadThresholdHasBeenSet() const { return m_onRoadThresholdHasBeenSet; }
    inline void SetOnRoadThreshold(long long value) { m_onRoadThresholdHasBeenSet = true; m_onRoadThreshold = value; }
    inline RouteMatrixMatchingOptions& WithOnRoadThreshold(long long value) { SetOnRoadThreshold(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Considers all roads within the provided radius to match the provided
     * destination to. The roads that are considered are determined by the provided
     * Strategy.</p> <p> <b>Unit</b>: <code>Meters</code> </p>
     */
    inline long long GetRadius() const { return m_radius; }
    inline bool RadiusHasBeenSet() const { return m_radiusHasBeenSet; }
    inline void SetRadius(long long value) { m_radiusHasBeenSet = true; m_radius = value; }
    inline RouteMatrixMatchingOptions& WithRadius(long long value) { SetRadius(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Strategy that defines matching of the position onto the road network.
     * MatchAny considers all roads possible, whereas MatchMostSignificantRoad matches
     * to the most significant road.</p>
     */
    inline MatchingStrategy GetStrategy() const { return m_strategy; }
    inline bool StrategyHasBeenSet() const { return m_strategyHasBeenSet; }
    inline void SetStrategy(MatchingStrategy value) { m_strategyHasBeenSet = true; m_strategy = value; }
    inline RouteMatrixMatchingOptions& WithStrategy(MatchingStrategy value) { SetStrategy(value); return *this;}
    ///@}
  private:

    Aws::String m_nameHint;
    bool m_nameHintHasBeenSet = false;

    long long m_onRoadThreshold{0};
    bool m_onRoadThresholdHasBeenSet = false;

    long long m_radius{0};
    bool m_radiusHasBeenSet = false;

    MatchingStrategy m_strategy{MatchingStrategy::NOT_SET};
    bool m_strategyHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
