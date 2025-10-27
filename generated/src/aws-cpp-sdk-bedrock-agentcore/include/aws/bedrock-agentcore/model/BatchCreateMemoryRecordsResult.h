/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/MemoryRecordOutput.h>
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
namespace BedrockAgentCore {
namespace Model {
class BatchCreateMemoryRecordsResult {
 public:
  AWS_BEDROCKAGENTCORE_API BatchCreateMemoryRecordsResult() = default;
  AWS_BEDROCKAGENTCORE_API BatchCreateMemoryRecordsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BEDROCKAGENTCORE_API BatchCreateMemoryRecordsResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A list of memory records that were successfully created during the batch
   * operation.</p>
   */
  inline const Aws::Vector<MemoryRecordOutput>& GetSuccessfulRecords() const { return m_successfulRecords; }
  template <typename SuccessfulRecordsT = Aws::Vector<MemoryRecordOutput>>
  void SetSuccessfulRecords(SuccessfulRecordsT&& value) {
    m_successfulRecordsHasBeenSet = true;
    m_successfulRecords = std::forward<SuccessfulRecordsT>(value);
  }
  template <typename SuccessfulRecordsT = Aws::Vector<MemoryRecordOutput>>
  BatchCreateMemoryRecordsResult& WithSuccessfulRecords(SuccessfulRecordsT&& value) {
    SetSuccessfulRecords(std::forward<SuccessfulRecordsT>(value));
    return *this;
  }
  template <typename SuccessfulRecordsT = MemoryRecordOutput>
  BatchCreateMemoryRecordsResult& AddSuccessfulRecords(SuccessfulRecordsT&& value) {
    m_successfulRecordsHasBeenSet = true;
    m_successfulRecords.emplace_back(std::forward<SuccessfulRecordsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of memory records that failed to be created, including error details
   * for each failure.</p>
   */
  inline const Aws::Vector<MemoryRecordOutput>& GetFailedRecords() const { return m_failedRecords; }
  template <typename FailedRecordsT = Aws::Vector<MemoryRecordOutput>>
  void SetFailedRecords(FailedRecordsT&& value) {
    m_failedRecordsHasBeenSet = true;
    m_failedRecords = std::forward<FailedRecordsT>(value);
  }
  template <typename FailedRecordsT = Aws::Vector<MemoryRecordOutput>>
  BatchCreateMemoryRecordsResult& WithFailedRecords(FailedRecordsT&& value) {
    SetFailedRecords(std::forward<FailedRecordsT>(value));
    return *this;
  }
  template <typename FailedRecordsT = MemoryRecordOutput>
  BatchCreateMemoryRecordsResult& AddFailedRecords(FailedRecordsT&& value) {
    m_failedRecordsHasBeenSet = true;
    m_failedRecords.emplace_back(std::forward<FailedRecordsT>(value));
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
  BatchCreateMemoryRecordsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<MemoryRecordOutput> m_successfulRecords;
  bool m_successfulRecordsHasBeenSet = false;

  Aws::Vector<MemoryRecordOutput> m_failedRecords;
  bool m_failedRecordsHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
