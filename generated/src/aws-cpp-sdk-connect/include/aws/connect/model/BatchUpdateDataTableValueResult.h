/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/BatchUpdateDataTableValueFailureResult.h>
#include <aws/connect/model/BatchUpdateDataTableValueSuccessResult.h>
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
class BatchUpdateDataTableValueResult {
 public:
  AWS_CONNECT_API BatchUpdateDataTableValueResult() = default;
  AWS_CONNECT_API BatchUpdateDataTableValueResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CONNECT_API BatchUpdateDataTableValueResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A list of successfully updated values with their new lock versions and
   * identifiers.</p>
   */
  inline const Aws::Vector<BatchUpdateDataTableValueSuccessResult>& GetSuccessful() const { return m_successful; }
  template <typename SuccessfulT = Aws::Vector<BatchUpdateDataTableValueSuccessResult>>
  void SetSuccessful(SuccessfulT&& value) {
    m_successfulHasBeenSet = true;
    m_successful = std::forward<SuccessfulT>(value);
  }
  template <typename SuccessfulT = Aws::Vector<BatchUpdateDataTableValueSuccessResult>>
  BatchUpdateDataTableValueResult& WithSuccessful(SuccessfulT&& value) {
    SetSuccessful(std::forward<SuccessfulT>(value));
    return *this;
  }
  template <typename SuccessfulT = BatchUpdateDataTableValueSuccessResult>
  BatchUpdateDataTableValueResult& AddSuccessful(SuccessfulT&& value) {
    m_successfulHasBeenSet = true;
    m_successful.emplace_back(std::forward<SuccessfulT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of values that failed to be updated with error messages explaining the
   * failure reason.</p>
   */
  inline const Aws::Vector<BatchUpdateDataTableValueFailureResult>& GetFailed() const { return m_failed; }
  template <typename FailedT = Aws::Vector<BatchUpdateDataTableValueFailureResult>>
  void SetFailed(FailedT&& value) {
    m_failedHasBeenSet = true;
    m_failed = std::forward<FailedT>(value);
  }
  template <typename FailedT = Aws::Vector<BatchUpdateDataTableValueFailureResult>>
  BatchUpdateDataTableValueResult& WithFailed(FailedT&& value) {
    SetFailed(std::forward<FailedT>(value));
    return *this;
  }
  template <typename FailedT = BatchUpdateDataTableValueFailureResult>
  BatchUpdateDataTableValueResult& AddFailed(FailedT&& value) {
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
  BatchUpdateDataTableValueResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<BatchUpdateDataTableValueSuccessResult> m_successful;
  bool m_successfulHasBeenSet = false;

  Aws::Vector<BatchUpdateDataTableValueFailureResult> m_failed;
  bool m_failedHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
