/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControlRequest.h>
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

/**
 */
class GetCapacityProviderRequest : public BedrockAgentCoreControlRequest {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API GetCapacityProviderRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetCapacityProvider"; }

  AWS_BEDROCKAGENTCORECONTROL_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The unique identifier of the capacity provider.</p>
   */
  inline const Aws::String& GetCapacityProviderId() const { return m_capacityProviderId; }
  inline bool CapacityProviderIdHasBeenSet() const { return m_capacityProviderIdHasBeenSet; }
  template <typename CapacityProviderIdT = Aws::String>
  void SetCapacityProviderId(CapacityProviderIdT&& value) {
    m_capacityProviderIdHasBeenSet = true;
    m_capacityProviderId = std::forward<CapacityProviderIdT>(value);
  }
  template <typename CapacityProviderIdT = Aws::String>
  GetCapacityProviderRequest& WithCapacityProviderId(CapacityProviderIdT&& value) {
    SetCapacityProviderId(std::forward<CapacityProviderIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_capacityProviderId;
  bool m_capacityProviderIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
