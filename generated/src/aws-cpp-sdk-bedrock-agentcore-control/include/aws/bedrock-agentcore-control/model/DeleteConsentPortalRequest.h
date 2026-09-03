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
class DeleteConsentPortalRequest : public BedrockAgentCoreControlRequest {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API DeleteConsentPortalRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DeleteConsentPortal"; }

  AWS_BEDROCKAGENTCORECONTROL_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The identifier of the consent portal. You can specify either the consent
   * portal ID or its Amazon Resource Name (ARN).</p>
   */
  inline const Aws::String& GetConsentPortalIdentifier() const { return m_consentPortalIdentifier; }
  inline bool ConsentPortalIdentifierHasBeenSet() const { return m_consentPortalIdentifierHasBeenSet; }
  template <typename ConsentPortalIdentifierT = Aws::String>
  void SetConsentPortalIdentifier(ConsentPortalIdentifierT&& value) {
    m_consentPortalIdentifierHasBeenSet = true;
    m_consentPortalIdentifier = std::forward<ConsentPortalIdentifierT>(value);
  }
  template <typename ConsentPortalIdentifierT = Aws::String>
  DeleteConsentPortalRequest& WithConsentPortalIdentifier(ConsentPortalIdentifierT&& value) {
    SetConsentPortalIdentifier(std::forward<ConsentPortalIdentifierT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_consentPortalIdentifier;
  bool m_consentPortalIdentifierHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
