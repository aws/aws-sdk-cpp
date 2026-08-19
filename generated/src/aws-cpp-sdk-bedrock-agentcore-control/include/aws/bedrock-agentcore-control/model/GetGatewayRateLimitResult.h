/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/GatewayRateLimitStatus.h>
#include <aws/bedrock-agentcore-control/model/LimitEntry.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCoreControl {
namespace Model {
/**
 * <p>Shared fields for <code>GatewayRateLimit</code> responses.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/GetGatewayRateLimitResponse">AWS
 * API Reference</a></p>
 */
class GetGatewayRateLimitResult {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API GetGatewayRateLimitResult() = default;
  AWS_BEDROCKAGENTCORECONTROL_API GetGatewayRateLimitResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BEDROCKAGENTCORECONTROL_API GetGatewayRateLimitResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The unique identifier of the rate limit.</p>
   */
  inline const Aws::String& GetRateLimitId() const { return m_rateLimitId; }
  template <typename RateLimitIdT = Aws::String>
  void SetRateLimitId(RateLimitIdT&& value) {
    m_rateLimitIdHasBeenSet = true;
    m_rateLimitId = std::forward<RateLimitIdT>(value);
  }
  template <typename RateLimitIdT = Aws::String>
  GetGatewayRateLimitResult& WithRateLimitId(RateLimitIdT&& value) {
    SetRateLimitId(std::forward<RateLimitIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the gateway.</p>
   */
  inline const Aws::String& GetGatewayIdentifier() const { return m_gatewayIdentifier; }
  template <typename GatewayIdentifierT = Aws::String>
  void SetGatewayIdentifier(GatewayIdentifierT&& value) {
    m_gatewayIdentifierHasBeenSet = true;
    m_gatewayIdentifier = std::forward<GatewayIdentifierT>(value);
  }
  template <typename GatewayIdentifierT = Aws::String>
  GetGatewayRateLimitResult& WithGatewayIdentifier(GatewayIdentifierT&& value) {
    SetGatewayIdentifier(std::forward<GatewayIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The human-readable description of the rate limit.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  GetGatewayRateLimitResult& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ordered list of dimension key names that define the scope of this rate
   * limit.</p>
   */
  inline const Aws::Vector<Aws::String>& GetDimensionKeys() const { return m_dimensionKeys; }
  template <typename DimensionKeysT = Aws::Vector<Aws::String>>
  void SetDimensionKeys(DimensionKeysT&& value) {
    m_dimensionKeysHasBeenSet = true;
    m_dimensionKeys = std::forward<DimensionKeysT>(value);
  }
  template <typename DimensionKeysT = Aws::Vector<Aws::String>>
  GetGatewayRateLimitResult& WithDimensionKeys(DimensionKeysT&& value) {
    SetDimensionKeys(std::forward<DimensionKeysT>(value));
    return *this;
  }
  template <typename DimensionKeysT = Aws::String>
  GetGatewayRateLimitResult& AddDimensionKeys(DimensionKeysT&& value) {
    m_dimensionKeysHasBeenSet = true;
    m_dimensionKeys.emplace_back(std::forward<DimensionKeysT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of rule entries that map dimension values to rate
   * configurations.</p>
   */
  inline const Aws::Vector<LimitEntry>& GetEntries() const { return m_entries; }
  template <typename EntriesT = Aws::Vector<LimitEntry>>
  void SetEntries(EntriesT&& value) {
    m_entriesHasBeenSet = true;
    m_entries = std::forward<EntriesT>(value);
  }
  template <typename EntriesT = Aws::Vector<LimitEntry>>
  GetGatewayRateLimitResult& WithEntries(EntriesT&& value) {
    SetEntries(std::forward<EntriesT>(value));
    return *this;
  }
  template <typename EntriesT = LimitEntry>
  GetGatewayRateLimitResult& AddEntries(EntriesT&& value) {
    m_entriesHasBeenSet = true;
    m_entries.emplace_back(std::forward<EntriesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the rate limit.</p>
   */
  inline GatewayRateLimitStatus GetStatus() const { return m_status; }
  inline void SetStatus(GatewayRateLimitStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GetGatewayRateLimitResult& WithStatus(GatewayRateLimitStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the rate limit was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  GetGatewayRateLimitResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the rate limit was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  GetGatewayRateLimitResult& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  GetGatewayRateLimitResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_rateLimitId;

  Aws::String m_gatewayIdentifier;

  Aws::String m_description;

  Aws::Vector<Aws::String> m_dimensionKeys;

  Aws::Vector<LimitEntry> m_entries;

  GatewayRateLimitStatus m_status{GatewayRateLimitStatus::NOT_SET};

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_rateLimitIdHasBeenSet = false;
  bool m_gatewayIdentifierHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_dimensionKeysHasBeenSet = false;
  bool m_entriesHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
