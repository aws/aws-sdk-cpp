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
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Lambda {
namespace Model {
class StopDurableExecutionResult {
 public:
  AWS_LAMBDA_API StopDurableExecutionResult() = default;
  AWS_LAMBDA_API StopDurableExecutionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_LAMBDA_API StopDurableExecutionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The timestamp when the execution was stopped (ISO 8601 format).</p>
   */
  inline const Aws::Utils::DateTime& GetStopTimestamp() const { return m_stopTimestamp; }
  template <typename StopTimestampT = Aws::Utils::DateTime>
  void SetStopTimestamp(StopTimestampT&& value) {
    m_stopTimestampHasBeenSet = true;
    m_stopTimestamp = std::forward<StopTimestampT>(value);
  }
  template <typename StopTimestampT = Aws::Utils::DateTime>
  StopDurableExecutionResult& WithStopTimestamp(StopTimestampT&& value) {
    SetStopTimestamp(std::forward<StopTimestampT>(value));
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
  StopDurableExecutionResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Utils::DateTime m_stopTimestamp{};
  bool m_stopTimestampHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
