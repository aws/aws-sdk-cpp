/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kinesis/Kinesis_EXPORTS.h>
#include <aws/kinesis/model/QueueRecord.h>

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
class ReceiveQueueRecordsResult {
 public:
  AWS_KINESIS_API ReceiveQueueRecordsResult() = default;
  AWS_KINESIS_API ReceiveQueueRecordsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_KINESIS_API ReceiveQueueRecordsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The records received from the queue. This list is empty when no records are
   * visible.</p>
   */
  inline const Aws::Vector<QueueRecord>& GetQueueRecords() const { return m_queueRecords; }
  template <typename QueueRecordsT = Aws::Vector<QueueRecord>>
  void SetQueueRecords(QueueRecordsT&& value) {
    m_queueRecordsHasBeenSet = true;
    m_queueRecords = std::forward<QueueRecordsT>(value);
  }
  template <typename QueueRecordsT = Aws::Vector<QueueRecord>>
  ReceiveQueueRecordsResult& WithQueueRecords(QueueRecordsT&& value) {
    SetQueueRecords(std::forward<QueueRecordsT>(value));
    return *this;
  }
  template <typename QueueRecordsT = QueueRecord>
  ReceiveQueueRecordsResult& AddQueueRecords(QueueRecordsT&& value) {
    m_queueRecordsHasBeenSet = true;
    m_queueRecords.emplace_back(std::forward<QueueRecordsT>(value));
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
  ReceiveQueueRecordsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<QueueRecord> m_queueRecords;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_queueRecordsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kinesis
}  // namespace Aws
