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
namespace BedrockAgent {
namespace Model {

/**
 */
class DeleteVpcConfigurationRequest : public BedrockAgentRequest {
 public:
  AWS_BEDROCKAGENT_API DeleteVpcConfigurationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DeleteVpcConfiguration"; }

  AWS_BEDROCKAGENT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The unique identifier of the knowledge base that owns the VPC
   * configuration.</p>
   */
  inline const Aws::String& GetKnowledgeBaseId() const { return m_knowledgeBaseId; }
  inline bool KnowledgeBaseIdHasBeenSet() const { return m_knowledgeBaseIdHasBeenSet; }
  template <typename KnowledgeBaseIdT = Aws::String>
  void SetKnowledgeBaseId(KnowledgeBaseIdT&& value) {
    m_knowledgeBaseIdHasBeenSet = true;
    m_knowledgeBaseId = std::forward<KnowledgeBaseIdT>(value);
  }
  template <typename KnowledgeBaseIdT = Aws::String>
  DeleteVpcConfigurationRequest& WithKnowledgeBaseId(KnowledgeBaseIdT&& value) {
    SetKnowledgeBaseId(std::forward<KnowledgeBaseIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the VPC configuration to delete.</p>
   */
  inline const Aws::String& GetVpcConfigurationId() const { return m_vpcConfigurationId; }
  inline bool VpcConfigurationIdHasBeenSet() const { return m_vpcConfigurationIdHasBeenSet; }
  template <typename VpcConfigurationIdT = Aws::String>
  void SetVpcConfigurationId(VpcConfigurationIdT&& value) {
    m_vpcConfigurationIdHasBeenSet = true;
    m_vpcConfigurationId = std::forward<VpcConfigurationIdT>(value);
  }
  template <typename VpcConfigurationIdT = Aws::String>
  DeleteVpcConfigurationRequest& WithVpcConfigurationId(VpcConfigurationIdT&& value) {
    SetVpcConfigurationId(std::forward<VpcConfigurationIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_knowledgeBaseId;

  Aws::String m_vpcConfigurationId;
  bool m_knowledgeBaseIdHasBeenSet = false;
  bool m_vpcConfigurationIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgent
}  // namespace Aws
