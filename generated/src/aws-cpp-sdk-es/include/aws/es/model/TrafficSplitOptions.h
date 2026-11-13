/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/es/model/TrafficPercents.h>
#include <aws/es/model/TrafficSplitStatus.h>

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
 * <p>The traffic split and status for a cloned blue/green upgrade.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/TrafficSplitOptions">AWS
 * API Reference</a></p>
 */
class TrafficSplitOptions {
 public:
  AWS_ELASTICSEARCHSERVICE_API TrafficSplitOptions() = default;
  AWS_ELASTICSEARCHSERVICE_API TrafficSplitOptions(Aws::Utils::Json::JsonView jsonValue);
  AWS_ELASTICSEARCHSERVICE_API TrafficSplitOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ELASTICSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The traffic split currently in effect.</p>
   */
  inline const TrafficPercents& GetCurrent() const { return m_current; }
  inline bool CurrentHasBeenSet() const { return m_currentHasBeenSet; }
  template <typename CurrentT = TrafficPercents>
  void SetCurrent(CurrentT&& value) {
    m_currentHasBeenSet = true;
    m_current = std::forward<CurrentT>(value);
  }
  template <typename CurrentT = TrafficPercents>
  TrafficSplitOptions& WithCurrent(CurrentT&& value) {
    SetCurrent(std::forward<CurrentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The requested traffic split.</p>
   */
  inline const TrafficPercents& GetTarget() const { return m_target; }
  inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }
  template <typename TargetT = TrafficPercents>
  void SetTarget(TargetT&& value) {
    m_targetHasBeenSet = true;
    m_target = std::forward<TargetT>(value);
  }
  template <typename TargetT = TrafficPercents>
  TrafficSplitOptions& WithTarget(TargetT&& value) {
    SetTarget(std::forward<TargetT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the traffic shift.</p>
   */
  inline TrafficSplitStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(TrafficSplitStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline TrafficSplitOptions& WithStatus(TrafficSplitStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}
 private:
  TrafficPercents m_current;

  TrafficPercents m_target;

  TrafficSplitStatus m_status{TrafficSplitStatus::NOT_SET};
  bool m_currentHasBeenSet = false;
  bool m_targetHasBeenSet = false;
  bool m_statusHasBeenSet = false;
};

}  // namespace Model
}  // namespace ElasticsearchService
}  // namespace Aws
