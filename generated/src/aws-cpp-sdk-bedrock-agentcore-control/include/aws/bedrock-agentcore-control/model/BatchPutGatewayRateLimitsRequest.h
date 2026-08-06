/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControlRequest.h>
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/BatchPutLimitEntry.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

/**
 */
class BatchPutGatewayRateLimitsRequest : public BedrockAgentCoreControlRequest {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API BatchPutGatewayRateLimitsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "BatchPutGatewayRateLimits"; }

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
  BatchPutGatewayRateLimitsRequest& WithGatewayIdentifier(GatewayIdentifierT&& value) {
    SetGatewayIdentifier(std::forward<GatewayIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier to ensure that the API request completes
   * no more than one time. If you don't specify this field, a value is randomly
   * generated for you. If this token matches a previous request, the service ignores
   * the request, but doesn't return an error. For more information, see <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
   * idempotency</a>.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  BatchPutGatewayRateLimitsRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Complete set of rate limits for this gateway. Replaces all existing limits
   * atomically.</p>
   */
  inline const Aws::Vector<BatchPutLimitEntry>& GetRateLimits() const { return m_rateLimits; }
  inline bool RateLimitsHasBeenSet() const { return m_rateLimitsHasBeenSet; }
  template <typename RateLimitsT = Aws::Vector<BatchPutLimitEntry>>
  void SetRateLimits(RateLimitsT&& value) {
    m_rateLimitsHasBeenSet = true;
    m_rateLimits = std::forward<RateLimitsT>(value);
  }
  template <typename RateLimitsT = Aws::Vector<BatchPutLimitEntry>>
  BatchPutGatewayRateLimitsRequest& WithRateLimits(RateLimitsT&& value) {
    SetRateLimits(std::forward<RateLimitsT>(value));
    return *this;
  }
  template <typename RateLimitsT = BatchPutLimitEntry>
  BatchPutGatewayRateLimitsRequest& AddRateLimits(RateLimitsT&& value) {
    m_rateLimitsHasBeenSet = true;
    m_rateLimits.emplace_back(std::forward<RateLimitsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_gatewayIdentifier;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  Aws::Vector<BatchPutLimitEntry> m_rateLimits;
  bool m_gatewayIdentifierHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
  bool m_rateLimitsHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
