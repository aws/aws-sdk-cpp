/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgentRequest.h>
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace BedrockAgent {
namespace Model {

/**
 */
class CreateRetrievalInstructionVersionRequest : public BedrockAgentRequest {
 public:
  AWS_BEDROCKAGENT_API CreateRetrievalInstructionVersionRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateRetrievalInstructionVersion"; }

  AWS_BEDROCKAGENT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The identifier of the retrieval instruction to version.</p>
   */
  inline const Aws::String& GetRetrievalInstructionId() const { return m_retrievalInstructionId; }
  inline bool RetrievalInstructionIdHasBeenSet() const { return m_retrievalInstructionIdHasBeenSet; }
  template <typename RetrievalInstructionIdT = Aws::String>
  void SetRetrievalInstructionId(RetrievalInstructionIdT&& value) {
    m_retrievalInstructionIdHasBeenSet = true;
    m_retrievalInstructionId = std::forward<RetrievalInstructionIdT>(value);
  }
  template <typename RetrievalInstructionIdT = Aws::String>
  CreateRetrievalInstructionVersionRequest& WithRetrievalInstructionId(RetrievalInstructionIdT&& value) {
    SetRetrievalInstructionId(std::forward<RetrievalInstructionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of this version. Independent of the retrieval instruction's own
   * description.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  CreateRetrievalInstructionVersionRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A caller-supplied token that makes a retried call return the version created
   * by the first call rather than a second version. The window is 8 hours.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateRetrievalInstructionVersionRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_retrievalInstructionId;

  Aws::String m_description;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_retrievalInstructionIdHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace BedrockAgent
}  // namespace Aws
