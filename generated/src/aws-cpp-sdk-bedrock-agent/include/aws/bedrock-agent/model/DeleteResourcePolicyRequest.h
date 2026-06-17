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
class DeleteResourcePolicyRequest : public BedrockAgentRequest {
 public:
  AWS_BEDROCKAGENT_API DeleteResourcePolicyRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DeleteResourcePolicy"; }

  AWS_BEDROCKAGENT_API Aws::String SerializePayload() const override;

  AWS_BEDROCKAGENT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the knowledge base to remove the resource
   * policy from.</p>
   */
  inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
  inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
  template <typename ResourceArnT = Aws::String>
  void SetResourceArn(ResourceArnT&& value) {
    m_resourceArnHasBeenSet = true;
    m_resourceArn = std::forward<ResourceArnT>(value);
  }
  template <typename ResourceArnT = Aws::String>
  DeleteResourcePolicyRequest& WithResourceArn(ResourceArnT&& value) {
    SetResourceArn(std::forward<ResourceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The expected revision identifier of the resource policy. Use this to prevent
   * conflicts when multiple users update the same policy concurrently.</p>
   */
  inline const Aws::String& GetExpectedRevisionId() const { return m_expectedRevisionId; }
  inline bool ExpectedRevisionIdHasBeenSet() const { return m_expectedRevisionIdHasBeenSet; }
  template <typename ExpectedRevisionIdT = Aws::String>
  void SetExpectedRevisionId(ExpectedRevisionIdT&& value) {
    m_expectedRevisionIdHasBeenSet = true;
    m_expectedRevisionId = std::forward<ExpectedRevisionIdT>(value);
  }
  template <typename ExpectedRevisionIdT = Aws::String>
  DeleteResourcePolicyRequest& WithExpectedRevisionId(ExpectedRevisionIdT&& value) {
    SetExpectedRevisionId(std::forward<ExpectedRevisionIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_resourceArn;

  Aws::String m_expectedRevisionId;
  bool m_resourceArnHasBeenSet = false;
  bool m_expectedRevisionIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgent
}  // namespace Aws
