/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/BedrockRequest.h>
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace Bedrock {
namespace Model {

/**
 */
class DeleteAutomatedReasoningPolicyRequest : public BedrockRequest {
 public:
  AWS_BEDROCK_API DeleteAutomatedReasoningPolicyRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DeleteAutomatedReasoningPolicy"; }

  AWS_BEDROCK_API Aws::String SerializePayload() const override;

  AWS_BEDROCK_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the Automated Reasoning policy to
   * delete.</p>
   */
  inline const Aws::String& GetPolicyArn() const { return m_policyArn; }
  inline bool PolicyArnHasBeenSet() const { return m_policyArnHasBeenSet; }
  template <typename PolicyArnT = Aws::String>
  void SetPolicyArn(PolicyArnT&& value) {
    m_policyArnHasBeenSet = true;
    m_policyArn = std::forward<PolicyArnT>(value);
  }
  template <typename PolicyArnT = Aws::String>
  DeleteAutomatedReasoningPolicyRequest& WithPolicyArn(PolicyArnT&& value) {
    SetPolicyArn(std::forward<PolicyArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to force delete the automated reasoning policy even if it
   * has active resources. When <code>false</code>, Amazon Bedrock validates if all
   * artifacts have been deleted (e.g. policy version, test case, test result) for a
   * policy before deletion. When <code>true</code>, Amazon Bedrock will delete the
   * policy and all its artifacts without validation. Default is <code>false</code>.
   * </p>
   */
  inline bool GetForce() const { return m_force; }
  inline bool ForceHasBeenSet() const { return m_forceHasBeenSet; }
  inline void SetForce(bool value) {
    m_forceHasBeenSet = true;
    m_force = value;
  }
  inline DeleteAutomatedReasoningPolicyRequest& WithForce(bool value) {
    SetForce(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_policyArn;

  bool m_force{false};
  bool m_policyArnHasBeenSet = false;
  bool m_forceHasBeenSet = false;
};

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
