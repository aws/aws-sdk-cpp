/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/lambda/model/EventPauseReason.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Lambda {
namespace Model {

/**
 * <p>Details about a <a
 * href="https://docs.aws.amazon.com/lambda/latest/dg/durable-functions.html">durable
 * execution</a> that paused. The event timestamp is when the execution
 * paused.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/ExecutionPausedDetails">AWS
 * API Reference</a></p>
 */
class ExecutionPausedDetails {
 public:
  AWS_LAMBDA_API ExecutionPausedDetails() = default;
  AWS_LAMBDA_API ExecutionPausedDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDA_API ExecutionPausedDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The date and time when you requested the pause, in <a
   * href="https://www.w3.org/TR/NOTE-datetime">ISO-8601 format</a>
   * (YYYY-MM-DDThh:mm:ss.sTZD).</p>
   */
  inline const Aws::Utils::DateTime& GetPauseRequestTimestamp() const { return m_pauseRequestTimestamp; }
  inline bool PauseRequestTimestampHasBeenSet() const { return m_pauseRequestTimestampHasBeenSet; }
  template <typename PauseRequestTimestampT = Aws::Utils::DateTime>
  void SetPauseRequestTimestamp(PauseRequestTimestampT&& value) {
    m_pauseRequestTimestampHasBeenSet = true;
    m_pauseRequestTimestamp = std::forward<PauseRequestTimestampT>(value);
  }
  template <typename PauseRequestTimestampT = Aws::Utils::DateTime>
  ExecutionPausedDetails& WithPauseRequestTimestamp(PauseRequestTimestampT&& value) {
    SetPauseRequestTimestamp(std::forward<PauseRequestTimestampT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reason that you provided when you paused the execution.</p>
   */
  inline const EventPauseReason& GetReason() const { return m_reason; }
  inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
  template <typename ReasonT = EventPauseReason>
  void SetReason(ReasonT&& value) {
    m_reasonHasBeenSet = true;
    m_reason = std::forward<ReasonT>(value);
  }
  template <typename ReasonT = EventPauseReason>
  ExecutionPausedDetails& WithReason(ReasonT&& value) {
    SetReason(std::forward<ReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether the pause also paused the execution timeout.</p>
   */
  inline bool GetExecutionTimeoutPaused() const { return m_executionTimeoutPaused; }
  inline bool ExecutionTimeoutPausedHasBeenSet() const { return m_executionTimeoutPausedHasBeenSet; }
  inline void SetExecutionTimeoutPaused(bool value) {
    m_executionTimeoutPausedHasBeenSet = true;
    m_executionTimeoutPaused = value;
  }
  inline ExecutionPausedDetails& WithExecutionTimeoutPaused(bool value) {
    SetExecutionTimeoutPaused(value);
    return *this;
  }
  ///@}
 private:
  Aws::Utils::DateTime m_pauseRequestTimestamp{};

  EventPauseReason m_reason;

  bool m_executionTimeoutPaused{false};
  bool m_pauseRequestTimestampHasBeenSet = false;
  bool m_reasonHasBeenSet = false;
  bool m_executionTimeoutPausedHasBeenSet = false;
};

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
