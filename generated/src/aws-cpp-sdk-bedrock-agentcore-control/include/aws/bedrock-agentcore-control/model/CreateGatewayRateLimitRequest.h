/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControlRequest.h>
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/LimitEntry.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

/**
 */
class CreateGatewayRateLimitRequest : public BedrockAgentCoreControlRequest {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API CreateGatewayRateLimitRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateGatewayRateLimit"; }

  AWS_BEDROCKAGENTCORECONTROL_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The unique identifier of the gateway to create the rate limit for.</p>
   */
  inline const Aws::String& GetGatewayIdentifier() const { return m_gatewayIdentifier; }
  inline bool GatewayIdentifierHasBeenSet() const { return m_gatewayIdentifierHasBeenSet; }
  template <typename GatewayIdentifierT = Aws::String>
  void SetGatewayIdentifier(GatewayIdentifierT&& value) {
    m_gatewayIdentifierHasBeenSet = true;
    m_gatewayIdentifier = std::forward<GatewayIdentifierT>(value);
  }
  template <typename GatewayIdentifierT = Aws::String>
  CreateGatewayRateLimitRequest& WithGatewayIdentifier(GatewayIdentifierT&& value) {
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
  CreateGatewayRateLimitRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional customer-defined limit ID. If not provided, system generates
   * one.</p>
   */
  inline const Aws::String& GetRateLimitId() const { return m_rateLimitId; }
  inline bool RateLimitIdHasBeenSet() const { return m_rateLimitIdHasBeenSet; }
  template <typename RateLimitIdT = Aws::String>
  void SetRateLimitId(RateLimitIdT&& value) {
    m_rateLimitIdHasBeenSet = true;
    m_rateLimitId = std::forward<RateLimitIdT>(value);
  }
  template <typename RateLimitIdT = Aws::String>
  CreateGatewayRateLimitRequest& WithRateLimitId(RateLimitIdT&& value) {
    SetRateLimitId(std::forward<RateLimitIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional human-readable description for this limit.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  CreateGatewayRateLimitRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Ordered list of dimension names defining the scope of this limit. Unique per
   * gateway — no two limits can share the same dimensionKeys.</p>
   */
  inline const Aws::Vector<Aws::String>& GetDimensionKeys() const { return m_dimensionKeys; }
  inline bool DimensionKeysHasBeenSet() const { return m_dimensionKeysHasBeenSet; }
  template <typename DimensionKeysT = Aws::Vector<Aws::String>>
  void SetDimensionKeys(DimensionKeysT&& value) {
    m_dimensionKeysHasBeenSet = true;
    m_dimensionKeys = std::forward<DimensionKeysT>(value);
  }
  template <typename DimensionKeysT = Aws::Vector<Aws::String>>
  CreateGatewayRateLimitRequest& WithDimensionKeys(DimensionKeysT&& value) {
    SetDimensionKeys(std::forward<DimensionKeysT>(value));
    return *this;
  }
  template <typename DimensionKeysT = Aws::String>
  CreateGatewayRateLimitRequest& AddDimensionKeys(DimensionKeysT&& value) {
    m_dimensionKeysHasBeenSet = true;
    m_dimensionKeys.emplace_back(std::forward<DimensionKeysT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Rule entries mapping dimension values to rate configurations.</p>
   */
  inline const Aws::Vector<LimitEntry>& GetEntries() const { return m_entries; }
  inline bool EntriesHasBeenSet() const { return m_entriesHasBeenSet; }
  template <typename EntriesT = Aws::Vector<LimitEntry>>
  void SetEntries(EntriesT&& value) {
    m_entriesHasBeenSet = true;
    m_entries = std::forward<EntriesT>(value);
  }
  template <typename EntriesT = Aws::Vector<LimitEntry>>
  CreateGatewayRateLimitRequest& WithEntries(EntriesT&& value) {
    SetEntries(std::forward<EntriesT>(value));
    return *this;
  }
  template <typename EntriesT = LimitEntry>
  CreateGatewayRateLimitRequest& AddEntries(EntriesT&& value) {
    m_entriesHasBeenSet = true;
    m_entries.emplace_back(std::forward<EntriesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_gatewayIdentifier;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  Aws::String m_rateLimitId;

  Aws::String m_description;

  Aws::Vector<Aws::String> m_dimensionKeys;

  Aws::Vector<LimitEntry> m_entries;
  bool m_gatewayIdentifierHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
  bool m_rateLimitIdHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_dimensionKeysHasBeenSet = false;
  bool m_entriesHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
