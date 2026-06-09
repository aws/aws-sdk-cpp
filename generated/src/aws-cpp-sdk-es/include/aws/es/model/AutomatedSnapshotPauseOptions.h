/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/es/model/PauseState.h>

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
 * <p>Specifies the automated snapshot pause options for the domain. These options
 * allow you to temporarily pause automated snapshots for a specified time
 * period.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/AutomatedSnapshotPauseOptions">AWS
 * API Reference</a></p>
 */
class AutomatedSnapshotPauseOptions {
 public:
  AWS_ELASTICSEARCHSERVICE_API AutomatedSnapshotPauseOptions() = default;
  AWS_ELASTICSEARCHSERVICE_API AutomatedSnapshotPauseOptions(Aws::Utils::Json::JsonView jsonValue);
  AWS_ELASTICSEARCHSERVICE_API AutomatedSnapshotPauseOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ELASTICSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Whether automated snapshot pause is enabled for the domain.</p>
   */
  inline bool GetEnabled() const { return m_enabled; }
  inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
  inline void SetEnabled(bool value) {
    m_enabledHasBeenSet = true;
    m_enabled = value;
  }
  inline AutomatedSnapshotPauseOptions& WithEnabled(bool value) {
    SetEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp at which the automated snapshot pause begins.</p>
   */
  inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
  inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
  template <typename StartTimeT = Aws::Utils::DateTime>
  void SetStartTime(StartTimeT&& value) {
    m_startTimeHasBeenSet = true;
    m_startTime = std::forward<StartTimeT>(value);
  }
  template <typename StartTimeT = Aws::Utils::DateTime>
  AutomatedSnapshotPauseOptions& WithStartTime(StartTimeT&& value) {
    SetStartTime(std::forward<StartTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp at which the automated snapshot pause ends.</p>
   */
  inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
  inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
  template <typename EndTimeT = Aws::Utils::DateTime>
  void SetEndTime(EndTimeT&& value) {
    m_endTimeHasBeenSet = true;
    m_endTime = std::forward<EndTimeT>(value);
  }
  template <typename EndTimeT = Aws::Utils::DateTime>
  AutomatedSnapshotPauseOptions& WithEndTime(EndTimeT&& value) {
    SetEndTime(std::forward<EndTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current state of the automated snapshot pause. Valid values are
   * <code>Active</code>, <code>Completed</code>, <code>Scheduled</code>, and
   * <code>Disabled</code>.</p>
   */
  inline PauseState GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(PauseState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline AutomatedSnapshotPauseOptions& WithState(PauseState value) {
    SetState(value);
    return *this;
  }
  ///@}
 private:
  bool m_enabled{false};

  Aws::Utils::DateTime m_startTime{};

  Aws::Utils::DateTime m_endTime{};

  PauseState m_state{PauseState::NOT_SET};
  bool m_enabledHasBeenSet = false;
  bool m_startTimeHasBeenSet = false;
  bool m_endTimeHasBeenSet = false;
  bool m_stateHasBeenSet = false;
};

}  // namespace Model
}  // namespace ElasticsearchService
}  // namespace Aws
