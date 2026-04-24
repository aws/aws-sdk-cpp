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
namespace Bedrock {
namespace Model {

/**
 */
class PutResourcePolicyRequest : public BedrockRequest {
 public:
  AWS_BEDROCK_API PutResourcePolicyRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "PutResourcePolicy"; }

  AWS_BEDROCK_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ARN of the Bedrock resource to which this resource policy applies.</p>
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
   * <p>The JSON string representing the Bedrock resource policy.</p>
   */
  inline const Aws::String& GetResourcePolicy() const { return m_resourcePolicy; }
  inline bool ResourcePolicyHasBeenSet() const { return m_resourcePolicyHasBeenSet; }
  template <typename ResourcePolicyT = Aws::String>
  void SetResourcePolicy(ResourcePolicyT&& value) {
    m_resourcePolicyHasBeenSet = true;
    m_resourcePolicy = std::forward<ResourcePolicyT>(value);
  }
  template <typename ResourcePolicyT = Aws::String>
  PutResourcePolicyRequest& WithResourcePolicy(ResourcePolicyT&& value) {
    SetResourcePolicy(std::forward<ResourcePolicyT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_resourceArn;

  Aws::String m_resourcePolicy;
  bool m_resourceArnHasBeenSet = false;
  bool m_resourcePolicyHasBeenSet = false;
};

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
