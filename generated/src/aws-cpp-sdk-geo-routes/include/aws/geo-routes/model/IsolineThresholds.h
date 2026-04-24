/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>

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
 * <p>Specifies the time or distance limits used to calculate reachable areas. You
 * can provide up to five thresholds for a single type to generate multiple
 * isolines in a single request. For example, you might request areas reachable
 * within 5, 10, and 15 minutes, or within 1, 2, and 5 kilometers.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/IsolineThresholds">AWS
 * API Reference</a></p>
 */
class IsolineThresholds {
 public:
  AWS_GEOROUTES_API IsolineThresholds() = default;
  AWS_GEOROUTES_API IsolineThresholds(Aws::Utils::Json::JsonView jsonValue);
  AWS_GEOROUTES_API IsolineThresholds& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>List of travel distances in meters. For example, [1000, 2000, 5000] would
   * calculate areas reachable within 1, 2, and 5 kilometers.</p>
   */
  inline const Aws::Vector<long long>& GetDistance() const { return m_distance; }
  inline bool DistanceHasBeenSet() const { return m_distanceHasBeenSet; }
  template <typename DistanceT = Aws::Vector<long long>>
  void SetDistance(DistanceT&& value) {
    m_distanceHasBeenSet = true;
    m_distance = std::forward<DistanceT>(value);
  }
  template <typename DistanceT = Aws::Vector<long long>>
  IsolineThresholds& WithDistance(DistanceT&& value) {
    SetDistance(std::forward<DistanceT>(value));
    return *this;
  }
  inline IsolineThresholds& AddDistance(long long value) {
    m_distanceHasBeenSet = true;
    m_distance.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>List of travel times in seconds. For example, [300, 600, 900] would calculate
   * areas reachable within 5, 10, and 15 minutes.</p>
   */
  inline const Aws::Vector<long long>& GetTime() const { return m_time; }
  inline bool TimeHasBeenSet() const { return m_timeHasBeenSet; }
  template <typename TimeT = Aws::Vector<long long>>
  void SetTime(TimeT&& value) {
    m_timeHasBeenSet = true;
    m_time = std::forward<TimeT>(value);
  }
  template <typename TimeT = Aws::Vector<long long>>
  IsolineThresholds& WithTime(TimeT&& value) {
    SetTime(std::forward<TimeT>(value));
    return *this;
  }
  inline IsolineThresholds& AddTime(long long value) {
    m_timeHasBeenSet = true;
    m_time.push_back(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<long long> m_distance;

  Aws::Vector<long long> m_time;
  bool m_distanceHasBeenSet = false;
  bool m_timeHasBeenSet = false;
};

}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
