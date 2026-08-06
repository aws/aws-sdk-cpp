/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/GatewayRateLimitStatus.h>
#include <aws/bedrock-agentcore-control/model/LimitEntry.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCoreControl {
namespace Model {

/**
 * <p>Shared fields for GatewayRateLimit responses</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/GatewayRateLimitDetail">AWS
 * API Reference</a></p>
 */
class GatewayRateLimitDetail {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API GatewayRateLimitDetail() = default;
  AWS_BEDROCKAGENTCORECONTROL_API GatewayRateLimitDetail(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API GatewayRateLimitDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const Aws::String& GetRateLimitId() const { return m_rateLimitId; }
  inline bool RateLimitIdHasBeenSet() const { return m_rateLimitIdHasBeenSet; }
  template <typename RateLimitIdT = Aws::String>
  void SetRateLimitId(RateLimitIdT&& value) {
    m_rateLimitIdHasBeenSet = true;
    m_rateLimitId = std::forward<RateLimitIdT>(value);
  }
  template <typename RateLimitIdT = Aws::String>
  GatewayRateLimitDetail& WithRateLimitId(RateLimitIdT&& value) {
    SetRateLimitId(std::forward<RateLimitIdT>(value));
    return *this;
  }
  ///@}

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
  GatewayRateLimitDetail& WithGatewayIdentifier(GatewayIdentifierT&& value) {
    SetGatewayIdentifier(std::forward<GatewayIdentifierT>(value));
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
  GatewayRateLimitDetail& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<Aws::String>& GetDimensionKeys() const { return m_dimensionKeys; }
  inline bool DimensionKeysHasBeenSet() const { return m_dimensionKeysHasBeenSet; }
  template <typename DimensionKeysT = Aws::Vector<Aws::String>>
  void SetDimensionKeys(DimensionKeysT&& value) {
    m_dimensionKeysHasBeenSet = true;
    m_dimensionKeys = std::forward<DimensionKeysT>(value);
  }
  template <typename DimensionKeysT = Aws::Vector<Aws::String>>
  GatewayRateLimitDetail& WithDimensionKeys(DimensionKeysT&& value) {
    SetDimensionKeys(std::forward<DimensionKeysT>(value));
    return *this;
  }
  template <typename DimensionKeysT = Aws::String>
  GatewayRateLimitDetail& AddDimensionKeys(DimensionKeysT&& value) {
    m_dimensionKeysHasBeenSet = true;
    m_dimensionKeys.emplace_back(std::forward<DimensionKeysT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<LimitEntry>& GetEntries() const { return m_entries; }
  inline bool EntriesHasBeenSet() const { return m_entriesHasBeenSet; }
  template <typename EntriesT = Aws::Vector<LimitEntry>>
  void SetEntries(EntriesT&& value) {
    m_entriesHasBeenSet = true;
    m_entries = std::forward<EntriesT>(value);
  }
  template <typename EntriesT = Aws::Vector<LimitEntry>>
  GatewayRateLimitDetail& WithEntries(EntriesT&& value) {
    SetEntries(std::forward<EntriesT>(value));
    return *this;
  }
  template <typename EntriesT = LimitEntry>
  GatewayRateLimitDetail& AddEntries(EntriesT&& value) {
    m_entriesHasBeenSet = true;
    m_entries.emplace_back(std::forward<EntriesT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline GatewayRateLimitStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(GatewayRateLimitStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GatewayRateLimitDetail& WithStatus(GatewayRateLimitStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the rate limit was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  GatewayRateLimitDetail& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the rate limit was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  GatewayRateLimitDetail& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_rateLimitId;

  Aws::String m_gatewayIdentifier;

  Aws::String m_description;

  Aws::Vector<Aws::String> m_dimensionKeys;

  Aws::Vector<LimitEntry> m_entries;

  GatewayRateLimitStatus m_status{GatewayRateLimitStatus::NOT_SET};

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};
  bool m_rateLimitIdHasBeenSet = false;
  bool m_gatewayIdentifierHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_dimensionKeysHasBeenSet = false;
  bool m_entriesHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
