/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/BatchCreateDataTableValueFailureResult.h>
#include <aws/connect/model/BatchCreateDataTableValueSuccessResult.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Connect {
namespace Model {
class BatchCreateDataTableValueResult {
 public:
  AWS_CONNECT_API BatchCreateDataTableValueResult() = default;
  AWS_CONNECT_API BatchCreateDataTableValueResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CONNECT_API BatchCreateDataTableValueResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A list of successfully created values with their identifiers and lock
   * versions.</p>
   */
  inline const Aws::Vector<BatchCreateDataTableValueSuccessResult>& GetSuccessful() const { return m_successful; }
  template <typename SuccessfulT = Aws::Vector<BatchCreateDataTableValueSuccessResult>>
  void SetSuccessful(SuccessfulT&& value) {
    m_successfulHasBeenSet = true;
    m_successful = std::forward<SuccessfulT>(value);
  }
  template <typename SuccessfulT = Aws::Vector<BatchCreateDataTableValueSuccessResult>>
  BatchCreateDataTableValueResult& WithSuccessful(SuccessfulT&& value) {
    SetSuccessful(std::forward<SuccessfulT>(value));
    return *this;
  }
  template <typename SuccessfulT = BatchCreateDataTableValueSuccessResult>
  BatchCreateDataTableValueResult& AddSuccessful(SuccessfulT&& value) {
    m_successfulHasBeenSet = true;
    m_successful.emplace_back(std::forward<SuccessfulT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of values that failed to be created with error messages explaining the
   * failure reason.</p>
   */
  inline const Aws::Vector<BatchCreateDataTableValueFailureResult>& GetFailed() const { return m_failed; }
  template <typename FailedT = Aws::Vector<BatchCreateDataTableValueFailureResult>>
  void SetFailed(FailedT&& value) {
    m_failedHasBeenSet = true;
    m_failed = std::forward<FailedT>(value);
  }
  template <typename FailedT = Aws::Vector<BatchCreateDataTableValueFailureResult>>
  BatchCreateDataTableValueResult& WithFailed(FailedT&& value) {
    SetFailed(std::forward<FailedT>(value));
    return *this;
  }
  template <typename FailedT = BatchCreateDataTableValueFailureResult>
  BatchCreateDataTableValueResult& AddFailed(FailedT&& value) {
    m_failedHasBeenSet = true;
    m_failed.emplace_back(std::forward<FailedT>(value));
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
  BatchCreateDataTableValueResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<BatchCreateDataTableValueSuccessResult> m_successful;

  Aws::Vector<BatchCreateDataTableValueFailureResult> m_failed;

  Aws::String m_requestId;
  bool m_successfulHasBeenSet = false;
  bool m_failedHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
