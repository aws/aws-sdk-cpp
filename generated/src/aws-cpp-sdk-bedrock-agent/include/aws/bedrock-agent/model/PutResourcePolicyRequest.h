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
class PutResourcePolicyRequest : public BedrockAgentRequest {
 public:
  AWS_BEDROCKAGENT_API PutResourcePolicyRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "PutResourcePolicy"; }

  AWS_BEDROCKAGENT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the knowledge base to attach the resource
   * policy to.</p>
   */
  inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
  inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
  template <typename ResourceArnT = Aws::String>
  void SetResourceArn(ResourceArnT&& value) {
    m_resourceArnHasBeenSet = true;
    m_resourceArn = std::forward<ResourceArnT>(value);
  }
  template <typename ResourceArnT = Aws::String>
  PutResourcePolicyRequest& WithResourceArn(ResourceArnT&& value) {
    SetResourceArn(std::forward<ResourceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The JSON-formatted resource policy to associate with the knowledge base.</p>
   */
  inline const Aws::String& GetPolicy() const { return m_policy; }
  inline bool PolicyHasBeenSet() const { return m_policyHasBeenSet; }
  template <typename PolicyT = Aws::String>
  void SetPolicy(PolicyT&& value) {
    m_policyHasBeenSet = true;
    m_policy = std::forward<PolicyT>(value);
  }
  template <typename PolicyT = Aws::String>
  PutResourcePolicyRequest& WithPolicy(PolicyT&& value) {
    SetPolicy(std::forward<PolicyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The expected revision identifier of the resource policy. Use this to prevent
   * conflicts when multiple users update the same policy concurrently. Specify the
   * <code>revisionId</code> from the most recent <code>GetResourcePolicy</code> or
   * <code>PutResourcePolicy</code> response.</p>
   */
  inline const Aws::String& GetExpectedRevisionId() const { return m_expectedRevisionId; }
  inline bool ExpectedRevisionIdHasBeenSet() const { return m_expectedRevisionIdHasBeenSet; }
  template <typename ExpectedRevisionIdT = Aws::String>
  void SetExpectedRevisionId(ExpectedRevisionIdT&& value) {
    m_expectedRevisionIdHasBeenSet = true;
    m_expectedRevisionId = std::forward<ExpectedRevisionIdT>(value);
  }
  template <typename ExpectedRevisionIdT = Aws::String>
  PutResourcePolicyRequest& WithExpectedRevisionId(ExpectedRevisionIdT&& value) {
    SetExpectedRevisionId(std::forward<ExpectedRevisionIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_resourceArn;

  Aws::String m_policy;

  Aws::String m_expectedRevisionId;
  bool m_resourceArnHasBeenSet = false;
  bool m_policyHasBeenSet = false;
  bool m_expectedRevisionIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgent
}  // namespace Aws
