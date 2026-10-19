/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/RetrievalInstructionContent.h>
#include <aws/bedrock-agent/model/RetrievalInstructionFailureReason.h>
#include <aws/bedrock-agent/model/RetrievalInstructionLastTransitionStatus.h>
#include <aws/bedrock-agent/model/RetrievalInstructionStatus.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
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
namespace BedrockAgent {
namespace Model {
class GetRetrievalInstructionResult {
 public:
  AWS_BEDROCKAGENT_API GetRetrievalInstructionResult() = default;
  AWS_BEDROCKAGENT_API GetRetrievalInstructionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BEDROCKAGENT_API GetRetrievalInstructionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

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
  GetRetrievalInstructionResult& WithRetrievalInstructionId(RetrievalInstructionIdT&& value) {
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
  GetRetrievalInstructionResult& WithRetrievalInstructionArn(RetrievalInstructionArnT&& value) {
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
  GetRetrievalInstructionResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether you can use the instruction. You can resolve only an ACTIVE
   * instruction at retrieval time. Monotone: INACTIVE to ACTIVE once, never back.
   * Numbered versions are always ACTIVE.</p>
   */
  inline RetrievalInstructionStatus GetStatus() const { return m_status; }
  inline void SetStatus(RetrievalInstructionStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GetRetrievalInstructionResult& WithStatus(RetrievalInstructionStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The outcome or in-progress state of the most recent create or update.
   * CREATING or UPDATING means the operation is still running. Independent of
   * status. Always has a value from the create 202 onward. On a numbered version
   * this is always CREATE_SUCCESSFUL: a version is created once, from reviewed
   * content, and is immutable.</p>
   */
  inline RetrievalInstructionLastTransitionStatus GetLastTransitionStatus() const { return m_lastTransitionStatus; }
  inline void SetLastTransitionStatus(RetrievalInstructionLastTransitionStatus value) {
    m_lastTransitionStatusHasBeenSet = true;
    m_lastTransitionStatus = value;
  }
  inline GetRetrievalInstructionResult& WithLastTransitionStatus(RetrievalInstructionLastTransitionStatus value) {
    SetLastTransitionStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reviewed content this instruction serves — what AgenticRetrieveStream
   * resolves while status is ACTIVE. Absent until the first create review passes.
   * Always present on a numbered version.</p>
   */
  inline const RetrievalInstructionContent& GetInstruction() const { return m_instruction; }
  template <typename InstructionT = RetrievalInstructionContent>
  void SetInstruction(InstructionT&& value) {
    m_instructionHasBeenSet = true;
    m_instruction = std::forward<InstructionT>(value);
  }
  template <typename InstructionT = RetrievalInstructionContent>
  GetRetrievalInstructionResult& WithInstruction(InstructionT&& value) {
    SetInstruction(std::forward<InstructionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When the retrieval instruction was created. On a numbered version, when that
   * version was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  GetRetrievalInstructionResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When the retrieval instruction was last updated. Equal to createdAt on a
   * numbered version, which is immutable.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  GetRetrievalInstructionResult& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the retrieval instruction. On a numbered version, the
   * description of that version.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  GetRetrievalInstructionResult& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the customer managed KMS key protecting this content, when one was
   * supplied at create.</p>
   */
  inline const Aws::String& GetCustomerEncryptionKeyArn() const { return m_customerEncryptionKeyArn; }
  template <typename CustomerEncryptionKeyArnT = Aws::String>
  void SetCustomerEncryptionKeyArn(CustomerEncryptionKeyArnT&& value) {
    m_customerEncryptionKeyArnHasBeenSet = true;
    m_customerEncryptionKeyArn = std::forward<CustomerEncryptionKeyArnT>(value);
  }
  template <typename CustomerEncryptionKeyArnT = Aws::String>
  GetRetrievalInstructionResult& WithCustomerEncryptionKeyArn(CustomerEncryptionKeyArnT&& value) {
    SetCustomerEncryptionKeyArn(std::forward<CustomerEncryptionKeyArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Why the most recent create or update was rejected. One entry for each
   * rejected field, or a single entry when the review itself failed. Each entry has
   * a machine-readable code and a message, and names the field when it applies to
   * one. The service includes this field only when lastTransitionStatus is
   * CREATE_FAILED or UPDATE_FAILED. Never present on a numbered version.</p>
   */
  inline const Aws::Vector<RetrievalInstructionFailureReason>& GetLastTransitionStatusReasons() const {
    return m_lastTransitionStatusReasons;
  }
  template <typename LastTransitionStatusReasonsT = Aws::Vector<RetrievalInstructionFailureReason>>
  void SetLastTransitionStatusReasons(LastTransitionStatusReasonsT&& value) {
    m_lastTransitionStatusReasonsHasBeenSet = true;
    m_lastTransitionStatusReasons = std::forward<LastTransitionStatusReasonsT>(value);
  }
  template <typename LastTransitionStatusReasonsT = Aws::Vector<RetrievalInstructionFailureReason>>
  GetRetrievalInstructionResult& WithLastTransitionStatusReasons(LastTransitionStatusReasonsT&& value) {
    SetLastTransitionStatusReasons(std::forward<LastTransitionStatusReasonsT>(value));
    return *this;
  }
  template <typename LastTransitionStatusReasonsT = RetrievalInstructionFailureReason>
  GetRetrievalInstructionResult& AddLastTransitionStatusReasons(LastTransitionStatusReasonsT&& value) {
    m_lastTransitionStatusReasonsHasBeenSet = true;
    m_lastTransitionStatusReasons.emplace_back(std::forward<LastTransitionStatusReasonsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version this response describes: a version number, or DRAFT.</p>
   */
  inline const Aws::String& GetVersion() const { return m_version; }
  template <typename VersionT = Aws::String>
  void SetVersion(VersionT&& value) {
    m_versionHasBeenSet = true;
    m_version = std::forward<VersionT>(value);
  }
  template <typename VersionT = Aws::String>
  GetRetrievalInstructionResult& WithVersion(VersionT&& value) {
    SetVersion(std::forward<VersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The largest version number that currently exists for this retrieval
   * instruction, that is, the newest version you can retrieve. Present only on a
   * DRAFT read, and only when at least one version exists. Because version numbers
   * are never reused, deleting versions can leave gaps: this is the newest existing
   * version, not a count and not the highest number ever created.</p>
   */
  inline const Aws::String& GetLatestVersion() const { return m_latestVersion; }
  template <typename LatestVersionT = Aws::String>
  void SetLatestVersion(LatestVersionT&& value) {
    m_latestVersionHasBeenSet = true;
    m_latestVersion = std::forward<LatestVersionT>(value);
  }
  template <typename LatestVersionT = Aws::String>
  GetRetrievalInstructionResult& WithLatestVersion(LatestVersionT&& value) {
    SetLatestVersion(std::forward<LatestVersionT>(value));
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
  GetRetrievalInstructionResult& WithRequestId(RequestIdT&& value) {
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

  RetrievalInstructionContent m_instruction;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};

  Aws::String m_description;

  Aws::String m_customerEncryptionKeyArn;

  Aws::Vector<RetrievalInstructionFailureReason> m_lastTransitionStatusReasons;

  Aws::String m_version;

  Aws::String m_latestVersion;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_retrievalInstructionIdHasBeenSet = false;
  bool m_retrievalInstructionArnHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_lastTransitionStatusHasBeenSet = false;
  bool m_instructionHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_customerEncryptionKeyArnHasBeenSet = false;
  bool m_lastTransitionStatusReasonsHasBeenSet = false;
  bool m_versionHasBeenSet = false;
  bool m_latestVersionHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgent
}  // namespace Aws
