/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/es/model/ClonedBlueGreenScheduledAction.h>
#include <aws/es/model/TrafficPercents.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ElasticsearchService {
namespace Model {

/**
 * <p>The state of a cloned blue/green upgrade. Members that don't apply are
 * omitted.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/ClonedBlueGreenUpgradeDetails">AWS
 * API Reference</a></p>
 */
class ClonedBlueGreenUpgradeDetails {
 public:
  AWS_ELASTICSEARCHSERVICE_API ClonedBlueGreenUpgradeDetails() = default;
  AWS_ELASTICSEARCHSERVICE_API ClonedBlueGreenUpgradeDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_ELASTICSEARCHSERVICE_API ClonedBlueGreenUpgradeDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ELASTICSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The current split of search traffic between the primary and cloned
   * clusters.</p>
   */
  inline const TrafficPercents& GetTrafficSplit() const { return m_trafficSplit; }
  inline bool TrafficSplitHasBeenSet() const { return m_trafficSplitHasBeenSet; }
  template <typename TrafficSplitT = TrafficPercents>
  void SetTrafficSplit(TrafficSplitT&& value) {
    m_trafficSplitHasBeenSet = true;
    m_trafficSplit = std::forward<TrafficSplitT>(value);
  }
  template <typename TrafficSplitT = TrafficPercents>
  ClonedBlueGreenUpgradeDetails& WithTrafficSplit(TrafficSplitT&& value) {
    SetTrafficSplit(std::forward<TrafficSplitT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The action that the service takes automatically if you don't act before the
   * scheduled time.</p>
   */
  inline const ClonedBlueGreenScheduledAction& GetScheduledAction() const { return m_scheduledAction; }
  inline bool ScheduledActionHasBeenSet() const { return m_scheduledActionHasBeenSet; }
  template <typename ScheduledActionT = ClonedBlueGreenScheduledAction>
  void SetScheduledAction(ScheduledActionT&& value) {
    m_scheduledActionHasBeenSet = true;
    m_scheduledAction = std::forward<ScheduledActionT>(value);
  }
  template <typename ScheduledActionT = ClonedBlueGreenScheduledAction>
  ClonedBlueGreenUpgradeDetails& WithScheduledAction(ScheduledActionT&& value) {
    SetScheduledAction(std::forward<ScheduledActionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The retention period, in hours, for the cluster that you cut over from.</p>
   */
  inline int GetRetentionInHours() const { return m_retentionInHours; }
  inline bool RetentionInHoursHasBeenSet() const { return m_retentionInHoursHasBeenSet; }
  inline void SetRetentionInHours(int value) {
    m_retentionInHoursHasBeenSet = true;
    m_retentionInHours = value;
  }
  inline ClonedBlueGreenUpgradeDetails& WithRetentionInHours(int value) {
    SetRetentionInHours(value);
    return *this;
  }
  ///@}
 private:
  TrafficPercents m_trafficSplit;

  ClonedBlueGreenScheduledAction m_scheduledAction;

  int m_retentionInHours{0};
  bool m_trafficSplitHasBeenSet = false;
  bool m_scheduledActionHasBeenSet = false;
  bool m_retentionInHoursHasBeenSet = false;
};

}  // namespace Model
}  // namespace ElasticsearchService
}  // namespace Aws
