/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControlRequest.h>
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

/**
 */
class SynchronizeGatewayTargetsRequest : public BedrockAgentCoreControlRequest {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API SynchronizeGatewayTargetsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "SynchronizeGatewayTargets"; }

  AWS_BEDROCKAGENTCORECONTROL_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The gateway Identifier.</p>
   */
  inline const Aws::String& GetGatewayIdentifier() const { return m_gatewayIdentifier; }
  inline bool GatewayIdentifierHasBeenSet() const { return m_gatewayIdentifierHasBeenSet; }
  template <typename GatewayIdentifierT = Aws::String>
  void SetGatewayIdentifier(GatewayIdentifierT&& value) {
    m_gatewayIdentifierHasBeenSet = true;
    m_gatewayIdentifier = std::forward<GatewayIdentifierT>(value);
  }
  template <typename GatewayIdentifierT = Aws::String>
  SynchronizeGatewayTargetsRequest& WithGatewayIdentifier(GatewayIdentifierT&& value) {
    SetGatewayIdentifier(std::forward<GatewayIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The target ID list.</p>
   */
  inline const Aws::Vector<Aws::String>& GetTargetIdList() const { return m_targetIdList; }
  inline bool TargetIdListHasBeenSet() const { return m_targetIdListHasBeenSet; }
  template <typename TargetIdListT = Aws::Vector<Aws::String>>
  void SetTargetIdList(TargetIdListT&& value) {
    m_targetIdListHasBeenSet = true;
    m_targetIdList = std::forward<TargetIdListT>(value);
  }
  template <typename TargetIdListT = Aws::Vector<Aws::String>>
  SynchronizeGatewayTargetsRequest& WithTargetIdList(TargetIdListT&& value) {
    SetTargetIdList(std::forward<TargetIdListT>(value));
    return *this;
  }
  template <typename TargetIdListT = Aws::String>
  SynchronizeGatewayTargetsRequest& AddTargetIdList(TargetIdListT&& value) {
    m_targetIdListHasBeenSet = true;
    m_targetIdList.emplace_back(std::forward<TargetIdListT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_gatewayIdentifier;
  bool m_gatewayIdentifierHasBeenSet = false;

  Aws::Vector<Aws::String> m_targetIdList;
  bool m_targetIdListHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
