/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda/Lambda_EXPORTS.h>

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
 * execution</a> that is pausing or paused.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/PauseDetails">AWS
 * API Reference</a></p>
 */
class PauseDetails {
 public:
  AWS_LAMBDA_API PauseDetails() = default;
  AWS_LAMBDA_API PauseDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDA_API PauseDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  PauseDetails& WithPauseRequestTimestamp(PauseRequestTimestampT&& value) {
    SetPauseRequestTimestamp(std::forward<PauseRequestTimestampT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reason that you provided when you paused the execution. This field is
   * only present if you set <code>IncludeExecutionData</code> to <code>true</code>
   * in the request.</p>
   */
  inline const Aws::String& GetReason() const { return m_reason; }
  inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
  template <typename ReasonT = Aws::String>
  void SetReason(ReasonT&& value) {
    m_reasonHasBeenSet = true;
    m_reason = std::forward<ReasonT>(value);
  }
  template <typename ReasonT = Aws::String>
  PauseDetails& WithReason(ReasonT&& value) {
    SetReason(std::forward<ReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether the pause also pauses the execution timeout.</p>
   */
  inline bool GetExecutionTimeoutPaused() const { return m_executionTimeoutPaused; }
  inline bool ExecutionTimeoutPausedHasBeenSet() const { return m_executionTimeoutPausedHasBeenSet; }
  inline void SetExecutionTimeoutPaused(bool value) {
    m_executionTimeoutPausedHasBeenSet = true;
    m_executionTimeoutPaused = value;
  }
  inline PauseDetails& WithExecutionTimeoutPaused(bool value) {
    SetExecutionTimeoutPaused(value);
    return *this;
  }
  ///@}
 private:
  Aws::Utils::DateTime m_pauseRequestTimestamp{};

  Aws::String m_reason;

  bool m_executionTimeoutPaused{false};
  bool m_pauseRequestTimestampHasBeenSet = false;
  bool m_reasonHasBeenSet = false;
  bool m_executionTimeoutPausedHasBeenSet = false;
};

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
