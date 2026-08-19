/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControlRequest.h>
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/LimitEntry.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

/**
 */
class UpdateGatewayRateLimitRequest : public BedrockAgentCoreControlRequest {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API UpdateGatewayRateLimitRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateGatewayRateLimit"; }

  AWS_BEDROCKAGENTCORECONTROL_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The unique identifier of the gateway.</p>
   */
  inline const Aws::String& GetGatewayIdentifier() const { return m_gatewayIdentifier; }
  inline bool GatewayIdentifierHasBeenSet() const { return m_gatewayIdentifierHasBeenSet; }
  template <typename GatewayIdentifierT = Aws::String>
  void SetGatewayIdentifier(GatewayIdentifierT&& value) {
    m_gatewayIdentifierHasBeenSet = true;
    m_gatewayIdentifier = std::forward<GatewayIdentifierT>(value);
  }
  template <typename GatewayIdentifierT = Aws::String>
  UpdateGatewayRateLimitRequest& WithGatewayIdentifier(GatewayIdentifierT&& value) {
    SetGatewayIdentifier(std::forward<GatewayIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the rate limit to update.</p>
   */
  inline const Aws::String& GetRateLimitId() const { return m_rateLimitId; }
  inline bool RateLimitIdHasBeenSet() const { return m_rateLimitIdHasBeenSet; }
  template <typename RateLimitIdT = Aws::String>
  void SetRateLimitId(RateLimitIdT&& value) {
    m_rateLimitIdHasBeenSet = true;
    m_rateLimitId = std::forward<RateLimitIdT>(value);
  }
  template <typename RateLimitIdT = Aws::String>
  UpdateGatewayRateLimitRequest& WithRateLimitId(RateLimitIdT&& value) {
    SetRateLimitId(std::forward<RateLimitIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated human-readable description for this rate limit.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  UpdateGatewayRateLimitRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated rule entries. The dimension keys are immutable after creation and
   * cannot be changed.</p>
   */
  inline const Aws::Vector<LimitEntry>& GetEntries() const { return m_entries; }
  inline bool EntriesHasBeenSet() const { return m_entriesHasBeenSet; }
  template <typename EntriesT = Aws::Vector<LimitEntry>>
  void SetEntries(EntriesT&& value) {
    m_entriesHasBeenSet = true;
    m_entries = std::forward<EntriesT>(value);
  }
  template <typename EntriesT = Aws::Vector<LimitEntry>>
  UpdateGatewayRateLimitRequest& WithEntries(EntriesT&& value) {
    SetEntries(std::forward<EntriesT>(value));
    return *this;
  }
  template <typename EntriesT = LimitEntry>
  UpdateGatewayRateLimitRequest& AddEntries(EntriesT&& value) {
    m_entriesHasBeenSet = true;
    m_entries.emplace_back(std::forward<EntriesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_gatewayIdentifier;

  Aws::String m_rateLimitId;

  Aws::String m_description;

  Aws::Vector<LimitEntry> m_entries;
  bool m_gatewayIdentifierHasBeenSet = false;
  bool m_rateLimitIdHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_entriesHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
