/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/geo-routes/model/MatchingStrategy.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace GeoRoutes {
namespace Model {

/**
 * <p>Controls how origin and destination points are matched to the road network
 * when they don't fall exactly on a road. Matching options help ensure realistic
 * routing by connecting points to appropriate roads.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/IsolineMatchingOptions">AWS
 * API Reference</a></p>
 */
class IsolineMatchingOptions {
 public:
  AWS_GEOROUTES_API IsolineMatchingOptions() = default;
  AWS_GEOROUTES_API IsolineMatchingOptions(Aws::Utils::Json::JsonView jsonValue);
  AWS_GEOROUTES_API IsolineMatchingOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The expected street name near the point. Helps disambiguate matching when
   * multiple roads are within range.</p>
   */
  inline const Aws::String& GetNameHint() const { return m_nameHint; }
  inline bool NameHintHasBeenSet() const { return m_nameHintHasBeenSet; }
  template <typename NameHintT = Aws::String>
  void SetNameHint(NameHintT&& value) {
    m_nameHintHasBeenSet = true;
    m_nameHint = std::forward<NameHintT>(value);
  }
  template <typename NameHintT = Aws::String>
  IsolineMatchingOptions& WithNameHint(NameHintT&& value) {
    SetNameHint(std::forward<NameHintT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum distance in meters that a point can be from a road while still
   * being considered "on" that road. Points further than this distance require
   * explicit matching.</p> <p> <b>Unit</b>: <code>meters</code> </p>
   */
  inline long long GetOnRoadThreshold() const { return m_onRoadThreshold; }
  inline bool OnRoadThresholdHasBeenSet() const { return m_onRoadThresholdHasBeenSet; }
  inline void SetOnRoadThreshold(long long value) {
    m_onRoadThresholdHasBeenSet = true;
    m_onRoadThreshold = value;
  }
  inline IsolineMatchingOptions& WithOnRoadThreshold(long long value) {
    SetOnRoadThreshold(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum distance in meters to search for roads to match to. Points with
   * no roads within this radius will fail to match. The roads that are considered
   * within this radius are determined by the specified <code>Strategy</code> </p>
   * <p> <b>Unit</b>: <code>meters</code> </p>
   */
  inline long long GetRadius() const { return m_radius; }
  inline bool RadiusHasBeenSet() const { return m_radiusHasBeenSet; }
  inline void SetRadius(long long value) {
    m_radiusHasBeenSet = true;
    m_radius = value;
  }
  inline IsolineMatchingOptions& WithRadius(long long value) {
    SetRadius(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Determines how points are matched to the road network. <code>MatchAny</code>
   * finds the nearest viable road segment, while
   * <code>MatchMostSignificantRoad</code> prioritizes major roads.</p>
   */
  inline MatchingStrategy GetStrategy() const { return m_strategy; }
  inline bool StrategyHasBeenSet() const { return m_strategyHasBeenSet; }
  inline void SetStrategy(MatchingStrategy value) {
    m_strategyHasBeenSet = true;
    m_strategy = value;
  }
  inline IsolineMatchingOptions& WithStrategy(MatchingStrategy value) {
    SetStrategy(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_nameHint;

  long long m_onRoadThreshold{0};

  long long m_radius{0};

  MatchingStrategy m_strategy{MatchingStrategy::NOT_SET};
  bool m_nameHintHasBeenSet = false;
  bool m_onRoadThresholdHasBeenSet = false;
  bool m_radiusHasBeenSet = false;
  bool m_strategyHasBeenSet = false;
};

}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
