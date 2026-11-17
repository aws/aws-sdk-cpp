/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>
#include <aws/devops-agent/model/ChatArchiveStatus.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace DevOpsAgent {
namespace Model {
class UpdateChatResult {
 public:
  AWS_DEVOPSAGENT_API UpdateChatResult() = default;
  AWS_DEVOPSAGENT_API UpdateChatResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_DEVOPSAGENT_API UpdateChatResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The unique identifier of the updated chat execution.</p>
   */
  inline const Aws::String& GetExecutionId() const { return m_executionId; }
  template <typename ExecutionIdT = Aws::String>
  void SetExecutionId(ExecutionIdT&& value) {
    m_executionIdHasBeenSet = true;
    m_executionId = std::forward<ExecutionIdT>(value);
  }
  template <typename ExecutionIdT = Aws::String>
  UpdateChatResult& WithExecutionId(ExecutionIdT&& value) {
    SetExecutionId(std::forward<ExecutionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The summary of the chat execution after the update.</p>
   */
  inline const Aws::String& GetSummary() const { return m_summary; }
  template <typename SummaryT = Aws::String>
  void SetSummary(SummaryT&& value) {
    m_summaryHasBeenSet = true;
    m_summary = std::forward<SummaryT>(value);
  }
  template <typename SummaryT = Aws::String>
  UpdateChatResult& WithSummary(SummaryT&& value) {
    SetSummary(std::forward<SummaryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time at which the chat execution was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  UpdateChatResult& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The archive status of the chat execution after the update.</p>
   */
  inline ChatArchiveStatus GetArchiveStatus() const { return m_archiveStatus; }
  inline void SetArchiveStatus(ChatArchiveStatus value) {
    m_archiveStatusHasBeenSet = true;
    m_archiveStatus = value;
  }
  inline UpdateChatResult& WithArchiveStatus(ChatArchiveStatus value) {
    SetArchiveStatus(value);
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
  UpdateChatResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_executionId;

  Aws::String m_summary;

  Aws::Utils::DateTime m_updatedAt{};

  ChatArchiveStatus m_archiveStatus{ChatArchiveStatus::NOT_SET};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_executionIdHasBeenSet = false;
  bool m_summaryHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_archiveStatusHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
