/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgentRequest.h>
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace BedrockAgent {
namespace Model {

/**
 */
class DeleteRetrievalInstructionRequest : public BedrockAgentRequest {
 public:
  AWS_BEDROCKAGENT_API DeleteRetrievalInstructionRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DeleteRetrievalInstruction"; }

  AWS_BEDROCKAGENT_API Aws::String SerializePayload() const override;

  AWS_BEDROCKAGENT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The identifier of the retrieval instruction to delete.</p>
   */
  inline const Aws::String& GetRetrievalInstructionId() const { return m_retrievalInstructionId; }
  inline bool RetrievalInstructionIdHasBeenSet() const { return m_retrievalInstructionIdHasBeenSet; }
  template <typename RetrievalInstructionIdT = Aws::String>
  void SetRetrievalInstructionId(RetrievalInstructionIdT&& value) {
    m_retrievalInstructionIdHasBeenSet = true;
    m_retrievalInstructionId = std::forward<RetrievalInstructionIdT>(value);
  }
  template <typename RetrievalInstructionIdT = Aws::String>
  DeleteRetrievalInstructionRequest& WithRetrievalInstructionId(RetrievalInstructionIdT&& value) {
    SetRetrievalInstructionId(std::forward<RetrievalInstructionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version to delete. Omit this field to delete the retrieval instruction
   * itself, which you can do only when it has no versions; while any version exists
   * the service rejects the request with ConflictException. You cannot delete DRAFT
   * on its own; deleting the retrieval instruction removes it.</p>
   */
  inline const Aws::String& GetRetrievalInstructionVersion() const { return m_retrievalInstructionVersion; }
  inline bool RetrievalInstructionVersionHasBeenSet() const { return m_retrievalInstructionVersionHasBeenSet; }
  template <typename RetrievalInstructionVersionT = Aws::String>
  void SetRetrievalInstructionVersion(RetrievalInstructionVersionT&& value) {
    m_retrievalInstructionVersionHasBeenSet = true;
    m_retrievalInstructionVersion = std::forward<RetrievalInstructionVersionT>(value);
  }
  template <typename RetrievalInstructionVersionT = Aws::String>
  DeleteRetrievalInstructionRequest& WithRetrievalInstructionVersion(RetrievalInstructionVersionT&& value) {
    SetRetrievalInstructionVersion(std::forward<RetrievalInstructionVersionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_retrievalInstructionId;

  Aws::String m_retrievalInstructionVersion;
  bool m_retrievalInstructionIdHasBeenSet = false;
  bool m_retrievalInstructionVersionHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgent
}  // namespace Aws
