/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kinesis/Kinesis_EXPORTS.h>
#include <aws/kinesis/model/AcknowledgeDeadLetterQueueRecordsErrorEntry.h>
#include <aws/kinesis/model/AcknowledgeDeadLetterQueueRecordsResultEntry.h>

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
class AcknowledgeDeadLetterQueueRecordsResult {
 public:
  AWS_KINESIS_API AcknowledgeDeadLetterQueueRecordsResult() = default;
  AWS_KINESIS_API AcknowledgeDeadLetterQueueRecordsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_KINESIS_API AcknowledgeDeadLetterQueueRecordsResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The records that were acknowledged.</p>
   */
  inline const Aws::Vector<AcknowledgeDeadLetterQueueRecordsResultEntry>& GetSuccessful() const { return m_successful; }
  template <typename SuccessfulT = Aws::Vector<AcknowledgeDeadLetterQueueRecordsResultEntry>>
  void SetSuccessful(SuccessfulT&& value) {
    m_successfulHasBeenSet = true;
    m_successful = std::forward<SuccessfulT>(value);
  }
  template <typename SuccessfulT = Aws::Vector<AcknowledgeDeadLetterQueueRecordsResultEntry>>
  AcknowledgeDeadLetterQueueRecordsResult& WithSuccessful(SuccessfulT&& value) {
    SetSuccessful(std::forward<SuccessfulT>(value));
    return *this;
  }
  template <typename SuccessfulT = AcknowledgeDeadLetterQueueRecordsResultEntry>
  AcknowledgeDeadLetterQueueRecordsResult& AddSuccessful(SuccessfulT&& value) {
    m_successfulHasBeenSet = true;
    m_successful.emplace_back(std::forward<SuccessfulT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The records that were not acknowledged, each with the reason the entry
   * failed.</p>
   */
  inline const Aws::Vector<AcknowledgeDeadLetterQueueRecordsErrorEntry>& GetFailed() const { return m_failed; }
  template <typename FailedT = Aws::Vector<AcknowledgeDeadLetterQueueRecordsErrorEntry>>
  void SetFailed(FailedT&& value) {
    m_failedHasBeenSet = true;
    m_failed = std::forward<FailedT>(value);
  }
  template <typename FailedT = Aws::Vector<AcknowledgeDeadLetterQueueRecordsErrorEntry>>
  AcknowledgeDeadLetterQueueRecordsResult& WithFailed(FailedT&& value) {
    SetFailed(std::forward<FailedT>(value));
    return *this;
  }
  template <typename FailedT = AcknowledgeDeadLetterQueueRecordsErrorEntry>
  AcknowledgeDeadLetterQueueRecordsResult& AddFailed(FailedT&& value) {
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
  AcknowledgeDeadLetterQueueRecordsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<AcknowledgeDeadLetterQueueRecordsResultEntry> m_successful;

  Aws::Vector<AcknowledgeDeadLetterQueueRecordsErrorEntry> m_failed;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_successfulHasBeenSet = false;
  bool m_failedHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kinesis
}  // namespace Aws
