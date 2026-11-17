/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kinesis/Kinesis_EXPORTS.h>
#include <aws/kinesis/model/UpdateDeadLetterQueueRecordsVisibilityErrorEntry.h>
#include <aws/kinesis/model/UpdateDeadLetterQueueRecordsVisibilityResultEntry.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Kinesis {
namespace Model {
class UpdateDeadLetterQueueRecordsVisibilityResult {
 public:
  AWS_KINESIS_API UpdateDeadLetterQueueRecordsVisibilityResult() = default;
  AWS_KINESIS_API UpdateDeadLetterQueueRecordsVisibilityResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_KINESIS_API UpdateDeadLetterQueueRecordsVisibilityResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The records whose visibility timeout was changed.</p>
   */
  inline const Aws::Vector<UpdateDeadLetterQueueRecordsVisibilityResultEntry>& GetSuccessful() const { return m_successful; }
  template <typename SuccessfulT = Aws::Vector<UpdateDeadLetterQueueRecordsVisibilityResultEntry>>
  void SetSuccessful(SuccessfulT&& value) {
    m_successfulHasBeenSet = true;
    m_successful = std::forward<SuccessfulT>(value);
  }
  template <typename SuccessfulT = Aws::Vector<UpdateDeadLetterQueueRecordsVisibilityResultEntry>>
  UpdateDeadLetterQueueRecordsVisibilityResult& WithSuccessful(SuccessfulT&& value) {
    SetSuccessful(std::forward<SuccessfulT>(value));
    return *this;
  }
  template <typename SuccessfulT = UpdateDeadLetterQueueRecordsVisibilityResultEntry>
  UpdateDeadLetterQueueRecordsVisibilityResult& AddSuccessful(SuccessfulT&& value) {
    m_successfulHasBeenSet = true;
    m_successful.emplace_back(std::forward<SuccessfulT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The records whose visibility timeout was not changed, each with the reason
   * the entry failed.</p>
   */
  inline const Aws::Vector<UpdateDeadLetterQueueRecordsVisibilityErrorEntry>& GetFailed() const { return m_failed; }
  template <typename FailedT = Aws::Vector<UpdateDeadLetterQueueRecordsVisibilityErrorEntry>>
  void SetFailed(FailedT&& value) {
    m_failedHasBeenSet = true;
    m_failed = std::forward<FailedT>(value);
  }
  template <typename FailedT = Aws::Vector<UpdateDeadLetterQueueRecordsVisibilityErrorEntry>>
  UpdateDeadLetterQueueRecordsVisibilityResult& WithFailed(FailedT&& value) {
    SetFailed(std::forward<FailedT>(value));
    return *this;
  }
  template <typename FailedT = UpdateDeadLetterQueueRecordsVisibilityErrorEntry>
  UpdateDeadLetterQueueRecordsVisibilityResult& AddFailed(FailedT&& value) {
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
  UpdateDeadLetterQueueRecordsVisibilityResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<UpdateDeadLetterQueueRecordsVisibilityResultEntry> m_successful;

  Aws::Vector<UpdateDeadLetterQueueRecordsVisibilityErrorEntry> m_failed;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_successfulHasBeenSet = false;
  bool m_failedHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kinesis
}  // namespace Aws
