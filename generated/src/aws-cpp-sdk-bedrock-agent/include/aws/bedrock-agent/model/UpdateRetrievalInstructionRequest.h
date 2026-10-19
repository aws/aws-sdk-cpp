/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgentRequest.h>
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/RetrievalInstructionContent.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace BedrockAgent {
namespace Model {

/**
 */
class UpdateRetrievalInstructionRequest : public BedrockAgentRequest {
 public:
  AWS_BEDROCKAGENT_API UpdateRetrievalInstructionRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateRetrievalInstruction"; }

  AWS_BEDROCKAGENT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The identifier of the retrieval instruction to update.</p>
   */
  inline const Aws::String& GetRetrievalInstructionId() const { return m_retrievalInstructionId; }
  inline bool RetrievalInstructionIdHasBeenSet() const { return m_retrievalInstructionIdHasBeenSet; }
  template <typename RetrievalInstructionIdT = Aws::String>
  void SetRetrievalInstructionId(RetrievalInstructionIdT&& value) {
    m_retrievalInstructionIdHasBeenSet = true;
    m_retrievalInstructionId = std::forward<RetrievalInstructionIdT>(value);
  }
  template <typename RetrievalInstructionIdT = Aws::String>
  UpdateRetrievalInstructionRequest& WithRetrievalInstructionId(RetrievalInstructionIdT&& value) {
    SetRetrievalInstructionId(std::forward<RetrievalInstructionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The replacement instruction content. This is a full replacement of all four
   * fields, not a patch. During UPDATING, Get continues to return the
   * previously-served content until the update review passes.</p>
   */
  inline const RetrievalInstructionContent& GetInstruction() const { return m_instruction; }
  inline bool InstructionHasBeenSet() const { return m_instructionHasBeenSet; }
  template <typename InstructionT = RetrievalInstructionContent>
  void SetInstruction(InstructionT&& value) {
    m_instructionHasBeenSet = true;
    m_instruction = std::forward<InstructionT>(value);
  }
  template <typename InstructionT = RetrievalInstructionContent>
  UpdateRetrievalInstructionRequest& WithInstruction(InstructionT&& value) {
    SetInstruction(std::forward<InstructionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A replacement description; applied together with the content when the review
   * passes. Omit to clear.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  UpdateRetrievalInstructionRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_retrievalInstructionId;

  RetrievalInstructionContent m_instruction;

  Aws::String m_description;
  bool m_retrievalInstructionIdHasBeenSet = false;
  bool m_instructionHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgent
}  // namespace Aws
