/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/model/ZeroCapacityStrategy.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace GameLift {
namespace Model {

/**
 * <p>Use ManagedCapacityConfiguration with the "SCALE_TO_AND_FROM_ZERO"
 * ZeroCapacityStrategy to enable Amazon GameLift Servers to fully manage the
 * MinSize value, switching between 0 and 1 based on game session activity. This is
 * ideal for eliminating compute costs during periods of no game activity. It is
 * particularly beneficial during development when you're away from your desk,
 * iterating on builds for extended periods, in production environments serving
 * low-traffic locations, or for games with long, predictable downtime windows. By
 * automatically managing capacity between 0 and 1 instances, you avoid paying for
 * idle instances while maintaining the ability to serve game sessions when demand
 * arrives. Note that while scale-out is triggered immediately upon receiving a
 * game session request, actual game session availability depends on your server
 * process startup time, so this approach works best with multi-location Fleets
 * where cold-start latency is tolerable. With a "MANUAL" ZeroCapacityStrategy
 * Amazon GameLift Servers will not modify Fleet MinSize values automatically and
 * will not scale out from zero instances in response to game sessions.
 * </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/ManagedCapacityConfiguration">AWS
 * API Reference</a></p>
 */
class ManagedCapacityConfiguration {
 public:
  AWS_GAMELIFT_API ManagedCapacityConfiguration() = default;
  AWS_GAMELIFT_API ManagedCapacityConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_GAMELIFT_API ManagedCapacityConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The strategy Amazon GameLift Servers will use to automatically scale your
   * capacity to and from zero instances in response to game session activity. Game
   * session activity refers to any active running sessions or game session
   * requests.</p> <p>Possible ZeroCapacityStrategy types include:</p> <ul> <li> <p>
   * <b>MANUAL</b> -- (default value) Amazon GameLift Servers will not update
   * capacity to and from zero on your behalf.</p> </li> <li> <p>
   * <b>SCALE_TO_AND_FROM_ZERO</b> -- Amazon GameLift Servers will automatically
   * scale out MinSize and DesiredInstances from 0 to 1 in response to a game session
   * request, and will scale in MinSize and DesiredInstances to 0 after a period with
   * no game session activity. The duration of this scale in period can be configured
   * using ScaleInAfterInactivityMinutes. </p> </li> </ul>
   */
  inline ZeroCapacityStrategy GetZeroCapacityStrategy() const { return m_zeroCapacityStrategy; }
  inline bool ZeroCapacityStrategyHasBeenSet() const { return m_zeroCapacityStrategyHasBeenSet; }
  inline void SetZeroCapacityStrategy(ZeroCapacityStrategy value) {
    m_zeroCapacityStrategyHasBeenSet = true;
    m_zeroCapacityStrategy = value;
  }
  inline ManagedCapacityConfiguration& WithZeroCapacityStrategy(ZeroCapacityStrategy value) {
    SetZeroCapacityStrategy(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Length of time, in minutes, that Amazon GameLift Servers will wait before
   * scaling in your MinSize and DesiredInstances to 0 after a period with no game
   * session activity. Default: 30 minutes.</p>
   */
  inline int GetScaleInAfterInactivityMinutes() const { return m_scaleInAfterInactivityMinutes; }
  inline bool ScaleInAfterInactivityMinutesHasBeenSet() const { return m_scaleInAfterInactivityMinutesHasBeenSet; }
  inline void SetScaleInAfterInactivityMinutes(int value) {
    m_scaleInAfterInactivityMinutesHasBeenSet = true;
    m_scaleInAfterInactivityMinutes = value;
  }
  inline ManagedCapacityConfiguration& WithScaleInAfterInactivityMinutes(int value) {
    SetScaleInAfterInactivityMinutes(value);
    return *this;
  }
  ///@}
 private:
  ZeroCapacityStrategy m_zeroCapacityStrategy{ZeroCapacityStrategy::NOT_SET};

  int m_scaleInAfterInactivityMinutes{0};
  bool m_zeroCapacityStrategyHasBeenSet = false;
  bool m_scaleInAfterInactivityMinutesHasBeenSet = false;
};

}  // namespace Model
}  // namespace GameLift
}  // namespace Aws
