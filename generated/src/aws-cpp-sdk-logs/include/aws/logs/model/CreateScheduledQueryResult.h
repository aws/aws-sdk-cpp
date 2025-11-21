/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/model/ScheduledQueryState.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace CloudWatchLogs {
namespace Model {
class CreateScheduledQueryResult {
 public:
  AWS_CLOUDWATCHLOGS_API CreateScheduledQueryResult() = default;
  AWS_CLOUDWATCHLOGS_API CreateScheduledQueryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CLOUDWATCHLOGS_API CreateScheduledQueryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the created scheduled query.</p>
   */
  inline const Aws::String& GetScheduledQueryArn() const { return m_scheduledQueryArn; }
  template <typename ScheduledQueryArnT = Aws::String>
  void SetScheduledQueryArn(ScheduledQueryArnT&& value) {
    m_scheduledQueryArnHasBeenSet = true;
    m_scheduledQueryArn = std::forward<ScheduledQueryArnT>(value);
  }
  template <typename ScheduledQueryArnT = Aws::String>
  CreateScheduledQueryResult& WithScheduledQueryArn(ScheduledQueryArnT&& value) {
    SetScheduledQueryArn(std::forward<ScheduledQueryArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current state of the scheduled query (ENABLED or DISABLED).</p>
   */
  inline ScheduledQueryState GetState() const { return m_state; }
  inline void SetState(ScheduledQueryState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline CreateScheduledQueryResult& WithState(ScheduledQueryState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  CreateScheduledQueryResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_scheduledQueryArn;
  bool m_scheduledQueryArnHasBeenSet = false;

  ScheduledQueryState m_state{ScheduledQueryState::NOT_SET};
  bool m_stateHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchLogs
}  // namespace Aws
