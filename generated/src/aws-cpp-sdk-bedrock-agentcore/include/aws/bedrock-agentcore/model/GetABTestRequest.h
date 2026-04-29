/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCoreRequest.h>
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

/**
 */
class GetABTestRequest : public BedrockAgentCoreRequest {
 public:
  AWS_BEDROCKAGENTCORE_API GetABTestRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetABTest"; }

  AWS_BEDROCKAGENTCORE_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The unique identifier of the A/B test to retrieve.</p>
   */
  inline const Aws::String& GetAbTestId() const { return m_abTestId; }
  inline bool AbTestIdHasBeenSet() const { return m_abTestIdHasBeenSet; }
  template <typename AbTestIdT = Aws::String>
  void SetAbTestId(AbTestIdT&& value) {
    m_abTestIdHasBeenSet = true;
    m_abTestId = std::forward<AbTestIdT>(value);
  }
  template <typename AbTestIdT = Aws::String>
  GetABTestRequest& WithAbTestId(AbTestIdT&& value) {
    SetAbTestId(std::forward<AbTestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_abTestId;
  bool m_abTestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
