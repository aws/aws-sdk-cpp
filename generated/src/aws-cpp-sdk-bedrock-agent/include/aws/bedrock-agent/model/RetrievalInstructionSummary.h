/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/RetrievalInstructionLastTransitionStatus.h>
#include <aws/bedrock-agent/model/RetrievalInstructionStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgent {
namespace Model {

/**
 * <p>A summary of a retrieval instruction, without the content.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/RetrievalInstructionSummary">AWS
 * API Reference</a></p>
 */
class RetrievalInstructionSummary {
 public:
  AWS_BEDROCKAGENT_API RetrievalInstructionSummary() = default;
  AWS_BEDROCKAGENT_API RetrievalInstructionSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENT_API RetrievalInstructionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The identifier of the retrieval instruction.</p>
   */
  inline const Aws::String& GetRetrievalInstructionId() const { return m_retrievalInstructionId; }
  inline bool RetrievalInstructionIdHasBeenSet() const { return m_retrievalInstructionIdHasBeenSet; }
  template <typename RetrievalInstructionIdT = Aws::String>
  void SetRetrievalInstructionId(RetrievalInstructionIdT&& value) {
    m_retrievalInstructionIdHasBeenSet = true;
    m_retrievalInstructionId = std::forward<RetrievalInstructionIdT>(value);
  }
  template <typename RetrievalInstructionIdT = Aws::String>
  RetrievalInstructionSummary& WithRetrievalInstructionId(RetrievalInstructionIdT&& value) {
    SetRetrievalInstructionId(std::forward<RetrievalInstructionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the retrieval instruction.</p>
   */
  inline const Aws::String& GetRetrievalInstructionArn() const { return m_retrievalInstructionArn; }
  inline bool RetrievalInstructionArnHasBeenSet() const { return m_retrievalInstructionArnHasBeenSet; }
  template <typename RetrievalInstructionArnT = Aws::String>
  void SetRetrievalInstructionArn(RetrievalInstructionArnT&& value) {
    m_retrievalInstructionArnHasBeenSet = true;
    m_retrievalInstructionArn = std::forward<RetrievalInstructionArnT>(value);
  }
  template <typename RetrievalInstructionArnT = Aws::String>
  RetrievalInstructionSummary& WithRetrievalInstructionArn(RetrievalInstructionArnT&& value) {
    SetRetrievalInstructionArn(std::forward<RetrievalInstructionArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the retrieval instruction.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  RetrievalInstructionSummary& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether the instruction can be used. Only ACTIVE is resolvable at retrieval
   * time.</p>
   */
  inline RetrievalInstructionStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(RetrievalInstructionStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline RetrievalInstructionSummary& WithStatus(RetrievalInstructionStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The outcome or in-progress state of the most recent create or update of the
   * retrieval instruction.</p>
   */
  inline RetrievalInstructionLastTransitionStatus GetLastTransitionStatus() const { return m_lastTransitionStatus; }
  inline bool LastTransitionStatusHasBeenSet() const { return m_lastTransitionStatusHasBeenSet; }
  inline void SetLastTransitionStatus(RetrievalInstructionLastTransitionStatus value) {
    m_lastTransitionStatusHasBeenSet = true;
    m_lastTransitionStatus = value;
  }
  inline RetrievalInstructionSummary& WithLastTransitionStatus(RetrievalInstructionLastTransitionStatus value) {
    SetLastTransitionStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When you created the retrieval instruction.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  RetrievalInstructionSummary& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When the retrieval instruction was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  RetrievalInstructionSummary& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the retrieval instruction.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  RetrievalInstructionSummary& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_retrievalInstructionId;

  Aws::String m_retrievalInstructionArn;

  Aws::String m_name;

  RetrievalInstructionStatus m_status{RetrievalInstructionStatus::NOT_SET};

  RetrievalInstructionLastTransitionStatus m_lastTransitionStatus{RetrievalInstructionLastTransitionStatus::NOT_SET};

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};

  Aws::String m_description;
  bool m_retrievalInstructionIdHasBeenSet = false;
  bool m_retrievalInstructionArnHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_lastTransitionStatusHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgent
}  // namespace Aws
