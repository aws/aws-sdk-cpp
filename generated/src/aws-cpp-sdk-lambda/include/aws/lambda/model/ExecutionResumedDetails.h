/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/lambda/model/EventResumeReason.h>

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
 * execution</a> that resumed. The event timestamp is when the execution
 * resumed.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/ExecutionResumedDetails">AWS
 * API Reference</a></p>
 */
class ExecutionResumedDetails {
 public:
  AWS_LAMBDA_API ExecutionResumedDetails() = default;
  AWS_LAMBDA_API ExecutionResumedDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDA_API ExecutionResumedDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The date and time when you requested the resume, in <a
   * href="https://www.w3.org/TR/NOTE-datetime">ISO-8601 format</a>
   * (YYYY-MM-DDThh:mm:ss.sTZD).</p>
   */
  inline const Aws::Utils::DateTime& GetResumeRequestTimestamp() const { return m_resumeRequestTimestamp; }
  inline bool ResumeRequestTimestampHasBeenSet() const { return m_resumeRequestTimestampHasBeenSet; }
  template <typename ResumeRequestTimestampT = Aws::Utils::DateTime>
  void SetResumeRequestTimestamp(ResumeRequestTimestampT&& value) {
    m_resumeRequestTimestampHasBeenSet = true;
    m_resumeRequestTimestamp = std::forward<ResumeRequestTimestampT>(value);
  }
  template <typename ResumeRequestTimestampT = Aws::Utils::DateTime>
  ExecutionResumedDetails& WithResumeRequestTimestamp(ResumeRequestTimestampT&& value) {
    SetResumeRequestTimestamp(std::forward<ResumeRequestTimestampT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reason that you provided when you resumed the execution.</p>
   */
  inline const EventResumeReason& GetReason() const { return m_reason; }
  inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
  template <typename ReasonT = EventResumeReason>
  void SetReason(ReasonT&& value) {
    m_reasonHasBeenSet = true;
    m_reason = std::forward<ReasonT>(value);
  }
  template <typename ReasonT = EventResumeReason>
  ExecutionResumedDetails& WithReason(ReasonT&& value) {
    SetReason(std::forward<ReasonT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Utils::DateTime m_resumeRequestTimestamp{};

  EventResumeReason m_reason;
  bool m_resumeRequestTimestampHasBeenSet = false;
  bool m_reasonHasBeenSet = false;
};

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
