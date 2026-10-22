/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/RetrievalInstructionLastTransitionStatus.h>
#include <aws/bedrock-agent/model/RetrievalInstructionStatus.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgent {
namespace Model {
class UpdateRetrievalInstructionResult {
 public:
  AWS_BEDROCKAGENT_API UpdateRetrievalInstructionResult() = default;
  AWS_BEDROCKAGENT_API UpdateRetrievalInstructionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BEDROCKAGENT_API UpdateRetrievalInstructionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The identifier of the retrieval instruction.</p>
   */
  inline const Aws::String& GetRetrievalInstructionId() const { return m_retrievalInstructionId; }
  template <typename RetrievalInstructionIdT = Aws::String>
  void SetRetrievalInstructionId(RetrievalInstructionIdT&& value) {
    m_retrievalInstructionIdHasBeenSet = true;
    m_retrievalInstructionId = std::forward<RetrievalInstructionIdT>(value);
  }
  template <typename RetrievalInstructionIdT = Aws::String>
  UpdateRetrievalInstructionResult& WithRetrievalInstructionId(RetrievalInstructionIdT&& value) {
    SetRetrievalInstructionId(std::forward<RetrievalInstructionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the retrieval instruction.</p>
   */
  inline const Aws::String& GetRetrievalInstructionArn() const { return m_retrievalInstructionArn; }
  template <typename RetrievalInstructionArnT = Aws::String>
  void SetRetrievalInstructionArn(RetrievalInstructionArnT&& value) {
    m_retrievalInstructionArnHasBeenSet = true;
    m_retrievalInstructionArn = std::forward<RetrievalInstructionArnT>(value);
  }
  template <typename RetrievalInstructionArnT = Aws::String>
  UpdateRetrievalInstructionResult& WithRetrievalInstructionArn(RetrievalInstructionArnT&& value) {
    SetRetrievalInstructionArn(std::forward<RetrievalInstructionArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the retrieval instruction.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  UpdateRetrievalInstructionResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether the instruction can be used. An update never lowers status. Unchanged
   * from the previous value on this response.</p>
   */
  inline RetrievalInstructionStatus GetStatus() const { return m_status; }
  inline void SetStatus(RetrievalInstructionStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline UpdateRetrievalInstructionResult& WithStatus(RetrievalInstructionStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Always UPDATING on this response. Poll GetRetrievalInstruction until this
   * member is neither CREATING nor UPDATING, then read the outcome from it.</p>
   */
  inline RetrievalInstructionLastTransitionStatus GetLastTransitionStatus() const { return m_lastTransitionStatus; }
  inline void SetLastTransitionStatus(RetrievalInstructionLastTransitionStatus value) {
    m_lastTransitionStatusHasBeenSet = true;
    m_lastTransitionStatus = value;
  }
  inline UpdateRetrievalInstructionResult& WithLastTransitionStatus(RetrievalInstructionLastTransitionStatus value) {
    SetLastTransitionStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When you created the retrieval instruction.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  UpdateRetrievalInstructionResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When the retrieval instruction was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  UpdateRetrievalInstructionResult& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
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
  UpdateRetrievalInstructionResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_retrievalInstructionId;

  Aws::String m_retrievalInstructionArn;

  Aws::String m_name;

  RetrievalInstructionStatus m_status{RetrievalInstructionStatus::NOT_SET};

  RetrievalInstructionLastTransitionStatus m_lastTransitionStatus{RetrievalInstructionLastTransitionStatus::NOT_SET};

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_retrievalInstructionIdHasBeenSet = false;
  bool m_retrievalInstructionArnHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_lastTransitionStatusHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgent
}  // namespace Aws
